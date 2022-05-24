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
      'simpleref',
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
      // prec('anonfunc', seq($.fun_params, choice('=>', '?=>'), $.expr)),
      // prec('anonfunc', seq($.hk_type_param_clause, '=>', $.expr)),
      $._expr1
    ),
    block_result: $ => prec.right('blockresult', choice(
      prec('anonfunc', seq(
        $.fun_params,
        choice('=>', '?=>'),
        seq(repeat(seq($.block_stat, $.semi)), optional($.block_result)), // block rule
      )),
      prec('anonfunc', seq(
        $.hk_type_param_clause,
        '=>',
        seq(repeat(seq($.block_stat, $.semi)), optional($.block_result)), // block rule
      )),
      $._expr1
    )),
    fun_params: $ => choice($.bindings, $.id, '_'),
    bindings: _ => '!bindings!',

    _expr1: $ => choice(
      // $.if,
      // $.while,
      // $.try,
      // $.throw,
      // $.return,
      // $.for_expr,
      // $.assign,
      seq($._postfix_expr, optional($.ascription)), // TODO write as separate rule
      // $.inline
    ),

    if: $ => prec.right('if',
      seq(
        choice(
          seq(optional('inline'), 'if', '(', $._expr, ')', repeat($.nl)),
          seq(optional('inline'), 'if', $._expr, 'then')
        ),
        seq(
          $._expr,
          optional(seq(optional($.semi), 'else', $._expr))
        )
      )
    ),

    while: $ => prec('while', choice(
      seq('while', '(', $._expr, ')', repeat($.nl), $._expr),
      seq('while', $._expr, 'do', $._expr)
    )),

    // try: $ => prec.right('try', choice(
    //   seq('try', $.expr, $.catches, optional(seq('finally', $.expr))),
    //   seq('try', $.expr, optional(seq('finally', $.expr))),
    // )
    // ),

    // throw: $ => prec('throw', seq('throw', $.expr)),
    // return: $ => prec.right('return', seq('return', optional($.expr))),
    // assign: $ => prec('assign', choice(
    //   seq(optional(seq($._simple_expr, '.')), $.id, '=', $.expr),
    //   seq($.prefix_operator, $._simple_expr, '=', $.expr),
    //   seq($._simple_expr, $.argument_exprs, '=', $.expr),
    // )
    // ),
    inline: $ => seq('inline', $._infix_expr, $.match_clause),

    ascription: $ => prec('annotexpr', choice(
      seq(':', $._infix_type),
      seq(':', $.annotation, repeat($.annotation))
    )),
    catches: $ => seq('catch', choice($._expr, $.expr_case_clause)),

    _postfix_expr: $ => prec('postfix', seq($._infix_expr, optional($.id))),
    _infix_expr: $ => prec.right('infix', choice(
      $._prefix_expr,
      seq($._infix_expr, $.id, optional($.nl), $._infix_expr),
      seq($._infix_expr, $.id, ':', $.indented_expr),
      seq($._infix_expr, $.match_clause),
    )),
    match_clause: $ => seq('match', block($.case_clauses, $)),
    _prefix_expr: $ => prec('prefix', seq(optional($.prefix_operator), $._simple_expr)),
    prefix_operator: _ => prec('prefix', choice('-', '+', '~', '!')),

    _simple_expr: $ => prec.right('simpleexpr', choice(
      $.simple_ref, // ok
      $._literal, // ok
      prec('placeholder', '_'),
      $.block_expr, // ok
      // seq('$', '{',
      //   seq(repeat(seq($.block_stat, $.semi)), optional($.block_result)), // block rule
      //   '}'), // TODO comment in grammar: unless inside quoted pattern // TODO what is it?
      // seq('$', '{', $.pattern, '}'), // TODO comment in grammar: only inside quoted pattern // TODO what is it?
      // $.quoted, // TODO what is it?
      // $.symbol_literal, // TODO comment in grammar: only inside splices // TODO what is it?
      prec('new', seq('new', $.constr_app, repeat(seq('with', $.constr_app)), optional($.template_body))), // ok
      prec('new', seq('new', $.template_body)), // ok
      // seq($.simple_expr, '.', $.match_clause),
      prec('typeapply', seq($._simple_expr, $.type_args)), // ok
      // seq($.simple_expr, $.argument_exprs),
      // seq($.simple_expr, ':', $.indented_expr), // TODO under language.experimental.fewer_braces
      // seq($.simple_expr, $.fun_params, choice('=>', '?>'), $.indented_expr), // TODO under language.experimental.fewer_braces
      prec('methodval', seq($._simple_expr, '_')), // ok
    )),
    constr_app: _ => '!constr_app!',
    template_body: _ => '!template_body!',

    indented_expr: $ => seq(
      $.indent,
      choice(
        $.case_clauses,
        seq(repeat(seq($.block_stat, $.semi)), optional($.block_result)), // block rule
      ),
      $.outdent
    ),
    quoted: $ => choice(
      seq("'", '{',
        seq(repeat(seq($.block_stat, $.semi)), optional($.block_result)), // block rule
        '}'),
      seq("'", '[', $.type, ']')
    ),
    exprs_in_parens: $ => prec.right(seq($.expr_in_parens, repeat(seq(',', $.expr_in_parens)))),
    expr_in_parens: $ => choice(
      prec('typedexpr', seq($._postfix_expr, ':', $.type)), // normal Expr allows only RefinedType here
      $._expr
    ),
    par_argument_exprs: $ => choice(
      seq('(', optional('using'), $.exprs_in_parens, ')'),
      seq('(', optional(seq($.exprs_in_parens, ',')), $._postfix_expr, '*', ')')
    ),
    argument_exprs: $ => choice($.par_argument_exprs, $.block_expr),

    block_expr: $ => prec('block', block(choice(
      $.case_clauses,
      seq(repeat(seq($.block_stat, $.semi)), optional($.block_result)), // block rule
    ), $)),

    block_stat: $ => prec('blockstat', choice(
      $.import,
      seq(repeat(seq($.annotation, optional($.nl))), repeat($.local_modifier), $.def),
      $.extension,
      $._expr1,
      $.end_marker
    )),
    def: _ => '!def!',
    import: _ => '!import!',
    extension: _ => '!extension!',
    local_modifier: _ => '!local_modifier!',
    end_marker: _ => '!end_marker!',
    for_expr: $ => prec('for', choice(
      seq('for', '(', $.enumerators0, ')', repeat($.nl), optional(choice('do', 'yield')), $._expr),
      seq('for', '{', $.enumerators0, '}', repeat($.nl), optional(choice('do', 'yield')), $._expr),
      seq('for', $.enumerators0, choice('do', 'yield'), $._expr)
    )),
    enumerators0: $ => seq(repeat($.nl), $.enumerators, optional($.semi)),

    enumerators: $ => prec.right(seq($.generator, repeat(choice(seq($.semi, $.enumerator), $.guard)))), // TODO review prec.right
    enumerator: $ => prec.right(choice(
      $.generator,
      seq($.guard, repeat($.guard)),
      seq($.pattern1, '=', $._expr)
    )), // TODO review prec.right
    generator: $ => seq(optional('case'), $.pattern1, '<-', $._expr),
    guard: $ => seq('if', $._postfix_expr),


    case_clauses: $ => seq($.case_clause, repeat($.case_clause)),
    case_clause: $ => prec.right(seq(
      'case',
      $.pattern,
      optional($.guard),
      '=>',
      seq(repeat(seq($.block_stat, $.semi)), optional($.block_result)), // block rule
    )), // TODO review prec.right
    expr_case_clause: $ => seq('case', $.pattern, optional($.guard), '=>', $._expr),
    pattern: $ => seq($.pattern1, repeat(seq('|', $.pattern1))),
    pattern1: $ => seq($.pattern2, optional(seq(':', $._refined_type))),
    pattern2: $ => seq(optional(seq($.id, '@')), $.infix_pattern),
    infix_pattern: $ => seq($.simple_pattern, repeat(seq($.id, optional($.nl), $.simple_pattern))),

    simple_pattern: $ => prec('simplepattern', choice(
      $.pat_var,
      $._literal,
      prec('tuple', seq('(', optional($.patterns), ')')), // ok
      $.quoted,
      prec('funcapply', seq($.simple_pattern1, optional($.type_args), optional($.argument_patterns))), // ok
      seq('given', $._refined_type)
    )),
    simple_pattern1: $ => prec('simplepattern', choice($.simple_ref, seq($.simple_pattern1, '.', $.id))),

    pat_var: $ => prec('patvar', choice($.varid, '_')),
    patterns: $ => prec.right(seq($.pattern, repeat(seq(',', $.pattern)))), // TODO review prec.right

    argument_patterns: $ => prec('argpatterns', choice(
      seq('(', optional($.patterns), ')'),
      seq('(', optional(seq($.patterns, ',')), $.pat_var, ':', '_', '*', ')')
    )),

  }
})
