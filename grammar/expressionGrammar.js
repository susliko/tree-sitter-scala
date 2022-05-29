const typeGrammar = require('./typeGrammar')
const { block } = require('./utils')

module.exports = grammar(typeGrammar, {
  name: 'scala',

  inline: ($, type) => [
    ...type,
    $.ascription,
  ],

  precedences: (_, type) => [
    ...type,
    // Expressions: https://www.scala-lang.org/files/archive/spec/2.13/06-expressions.html
    [
      'simpleliteral', // custom
      'literal',
      'ref',
      'singleton', // custom
      'simpletype', // custom
      'ids', // custom
      'funcapply',
      'methodval',
      'typeapply',
      'tuple',
      'new',
      'block',
      'prefix',
      'postfix',
      'infix',
      'typedexpr',
      'annotexpr',
      'assign',
      'if',
      'while',
      'for',
      'return',
      'throw',
      'try',
      'anonfunc',
      'binding', //custom
      'patvar', //custom
      'placeholder',
      'blockresult', //custom
      'blockstat', //custom
      'argpatterns', //custom
      'simplepattern', //custom
      'simpleexpr', //custom
    ],
    [
      'annotexpr',
      'type',
    ]
  ],

  conflicts: ($, type) => [
    ...type,
    [$.prefix_operator, $._simple_literal],
    [$.fun_params, $._simple_expr],
  ],

  rules: {
    source_file: $ => seq($._expr, $.nl),

    _expr: $ => choice(
      prec('anonfunc', seq($.fun_params, choice('=>', '?=>'), $._expr)),
      prec('anonfunc', seq($.hk_type_param_clause, '=>', $._expr)),
      $.while_expr,
      seq($._postfix_expr, optional($.ascription)), // TODO write as separate rule
      $.if_expr, // long generation
      // $.try_expr, // long generation
      $.throw_expr,
      $.return_expr,
      // $.for_expr, // long generation
      // $.assign_expr,
      $.inline_expr
      // $.match_expr,
    ),
    fun_params: $ => choice($.bindings, $.id, '_'),

    if_expr: $ => prec.right('if',
      seq(
        optional('inline'),
        'if',
        choice(
          seq('(', $._expr, ')', repeat($.nl)),
          seq($._expr, 'then')
        ),
        $._expr,
        optional(seq(optional($.semi), 'else', $._expr))
      )
    ),

    while_expr: $ => prec('while', 
      seq(
        'while',
        choice(
          seq('(', $._expr, ')', repeat($.nl)),
          seq($._expr, 'do')
        ),
        $._expr
      )
    ),

    try_expr: $ => prec.right('try', 
      seq(
        'try',
        $._expr,
        optional(seq('catch', optional(seq('case', $.pattern, optional($.guard), '=>')), $._expr)),
        optional(seq('finally', $._expr)),
      ),
    ),
    // expr_case_clause: $ => seq(, $._expr),

    throw_expr: $ => prec('throw', seq('throw', $._expr)),
    return_expr: $ => prec.right('return', seq('return', optional($._expr))),
    assign_expr: $ => prec('assign', 
      seq(
        choice(
          seq(optional(seq($._simple_expr, '.')), $.id),
          seq($.prefix_operator, $._simple_expr),
          seq($._simple_expr, $.arguments),
        ),
        '=',
        $._expr
      ),
    ),
    inline_expr: $ => seq('inline', $._infix_expr, $.match_clause),

    ascription: $ => prec('annotexpr', choice(
      seq(':', $._infix_type),
      seq(':', $.annotation, repeat($.annotation))
    )),

    _postfix_expr: $ => prec('postfix', seq($._infix_expr, optional($.id))),
    _infix_expr: $ => prec.right('infix', choice(
      $._prefix_expr,
      seq($._infix_expr, $.id, optional($.nl), $._infix_expr),
      seq($._infix_expr, $.id, ':', $.indented_expr),
    )),
    match_expr: $ => seq($._simple_expr, $.match_clause), // Custom. Is _simple_expr good?
    match_clause: $ => seq('match', block($.case_clauses, $)),
    _prefix_expr: $ => prec('prefix', seq(optional($.prefix_operator), $._simple_expr)),
    prefix_operator: _ => prec('prefix', choice('-', '+', '~', '!')),

    _simple_expr: $ => prec.right('simpleexpr', choice(
      $.ref, 
      $._literal, 
      prec('placeholder', '_'),
      $._block_expr, 
      // seq('$', '{',
      //   $.block,
      //   '}'), // TODO comment in grammar: unless inside quoted pattern // TODO what is it?
      // seq('$', '{', $.pattern, '}'), // TODO comment in grammar: only inside quoted pattern // TODO what is it?
      // $.symbol_literal, // TODO comment in grammar: only inside splices // TODO what is it?
      $.instance_expr, 
      // seq($.simple_expr, '.', $.match_clause),
      $.call_expr,
      prec('typeapply', seq($._simple_expr, $.type_args)),
      // seq($.simple_expr, ':', $.indented_expr), // TODO under language.experimental.fewer_braces
      // seq($.simple_expr, $.fun_params, choice('=>', '?>'), $.indented_expr), // TODO under language.experimental.fewer_braces
      prec('methodval', seq($._simple_expr, '_')),
    )),

    instance_expr: $ => prec('new', seq('new', choice(
      seq($.constr_app, repeat(seq('with', $.constr_app)), optional($.template_body)), 
      seq($.template_body), 
    ))), // custom alias

    call_expr: $ => seq($._simple_expr, $.arguments), // custom alias

    indented_expr: $ => seq(
      $.indent,
      choice(
        $.case_clauses,
        $.block,
      ),
      $.outdent
    ),
    // quoted: $ => choice(
    //   seq("'", '{', $.block, '}'),
    //   seq("'", '[', $.type, ']')
    // ), // Random stuff. TODO remove?
    _exprs_in_parens: $ => prec.right(seq($.argument, repeat(seq(',', $.argument)))),
    argument: $ => choice(
      prec('typedexpr', seq($._postfix_expr, ':', $.type)), // normal Expr allows only RefinedType here
      $._expr
    ),
    _arguments_in_parens: $ => choice(
      seq('(', optional('using'), $._exprs_in_parens, ')'),
      seq('(', optional(seq($._exprs_in_parens, ',')), $._postfix_expr, '*', ')')
    ),
    arguments: $ => choice($._arguments_in_parens, $._block_expr),

    _block_expr: $ => prec('block', block(choice(
      $.case_clauses,
      $.block,
    ), $)),

    block: $ => seq(repeat1(seq($._block_stat, $.semi)), optional($._block_result)), // originally it's repeat, not repeat1. But with repeat matches empty string

    _block_stat: $ => prec('blockstat', choice(
      $.import,
      seq(repeat(seq($.annotation, optional($.nl))), repeat($.local_modifier), $.def),
      $.extension,
      $._expr, 
      $.end_marker
    )),
    _block_result: $ => prec.right('blockresult', choice(
      prec('anonfunc', seq(
        $.fun_params,
        choice('=>', '?=>'),
        $.block,
      )),
      prec('anonfunc', seq(
        $.hk_type_param_clause,
        '=>',
        $.block,
      )),
      $._expr
    )),
    for_expr: $ => prec('for', seq(
      'for', 
      choice(
        seq('(', $.enumerators0, ')', repeat($.nl), optional(choice('do', 'yield'))),
        seq('{', $.enumerators0, '}', repeat($.nl), optional(choice('do', 'yield'))),
        seq($.enumerators0, choice('do', 'yield'))
      ),
      $._expr
    )),
    enumerators0: $ => seq(repeat($.nl), $.enumerators, optional($.semi)),

    enumerators: $ => prec.right(seq($.generator, repeat(choice(seq($.semi, $.enumerator), $.guard)))), // TODO review prec.right
    enumerator: $ => prec.right(choice(
      $.generator,
      seq($.guard, repeat($.guard)),
      seq($._pattern1, '=', $._expr)
    )), // TODO review prec.right
    generator: $ => seq(optional('case'), $._pattern1, '<-', $._expr),
    guard: $ => seq('if', $._postfix_expr),


    case_clauses: $ => seq($.case_clause, repeat($.case_clause)),
    case_clause: $ => prec.right(seq(
      'case',
      $.pattern,
      optional($.guard),
      '=>',
      $.block,
    )), // TODO review prec.right
    pattern: $ => seq($._pattern1, repeat(seq('|', $._pattern1))),
    _pattern1: $ => seq($._pattern2, optional(seq(':', $._refined_type))),
    _pattern2: $ => seq(optional(seq($.id, '@')), $._infix_pattern),
    _infix_pattern: $ => seq($._simple_pattern, repeat(seq($.id, optional($.nl), $._simple_pattern))),

    _simple_pattern: $ => prec('simplepattern', choice(
      $.pat_var,
      $._literal,
      prec('tuple', seq('(', optional($.patterns), ')')), 
      prec('funcapply', seq($._simple_pattern1, optional($.type_args), optional($.argument_patterns))), 
      seq('given', $._refined_type)
    )),
    _simple_pattern1: $ => prec('simplepattern', choice($.ref, seq($._simple_pattern1, '.', $.id))),

    pat_var: $ => prec('patvar', choice($.varid, '_')),
    patterns: $ => prec.right(seq($.pattern, repeat(seq(',', $.pattern)))), // TODO review prec.right

    argument_patterns: $ => prec('argpatterns', choice(
      seq('(', optional($.patterns), ')'),
      seq('(', optional(seq($.patterns, ',')), $.pat_var, ':', '_', '*', ')')
    )),

    // Bindings and imports section, but used in expressions
    annotation: $ => prec.right(seq('@', $._simple_type1, repeat($._arguments_in_parens))), // TODO review prec.right
    bindings: _ => '!bindings!',
    constr_app: $ => prec.right(seq($._simple_type1, repeat($.annotation), repeat($._arguments_in_parens))), // TODO review prec.right
    template_body: _ => '!template_body!',
    def: _ => '!def!',
    import: _ => '!import!',
    extension: _ => '!extension!',
    local_modifier: _ => '!local_modifier!',
    end_marker: _ => '!end_marker!',
  }
})
