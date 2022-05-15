const white_space = /[ \t\r\n]/
const upper = /[A-Z$_\p{Lu}]/
const lower = /[a-z\p{Ll}]/
const letter = /[a-zA-Z$_\p{Ll}\p{Lu}\p{Lo}\p{Lt}\p{Lm}\p{Nl}]/
const digit = /[0-9]/
const op = /[!#%&*+-\/:<=>?@\\^|~\p{Sm}\p{So}]+/
const hex_digit = /[0-9A-Fa-f]/

const block = (rule, $) => {
  return choice(
    seq('{', rule, '}'),
    seq($.indent, rule, $.outdent),
  )
}

const block_body = (rule, $) => {
  return choice(
    seq(optional($.nl), '{', rule, '}'),
    seq(':', $.indent, rule, $.outdent),
  )
}

// Rules that match empty string
const idrest = seq(repeat(choice(letter, digit)), optional(seq('_', op)))

const inherit_clauses = $ => seq(
  optional(seq('extends', $.constr_apps)),
  optional(seq('derives', $.qual_id, repeat(seq(',', $.qual_id)))),
)

const template = $ => seq(
  inherit_clauses($),
  optional($.template_body)
)

const constr_mods = $ => seq(repeat($.annotation), optional($.access_modifier))

const class_constr = $ => seq(
  optional($.cls_type_param_clause),
  optional(constr_mods($)),
  cls_param_clauses($)
)
const type_bounds = $ => seq(optional($.lower_bound), optional($.upper_bound))

const type_param_bounds = $ => seq(type_bounds($), repeat($.contex_bound))

const def_param_clauses = $ => seq(
  repeat($.def_param_clause),
  optional(seq(optional($.nl), '(', optional('implicit'), $.def_params, ')'))
)


const cls_param_clauses = $ => seq(
  repeat($.cls_param_clause),
  optional(seq(optional($.nl), '(', optional('implicit'), $.cls_params, ')'))
)


module.exports = grammar({
  name: 'scala',

  precedences: $ => [
    // Literals
    [
      'quoteid',
      'plainid',
      'procstring'
    ],
    // Types: https://www.scala-lang.org/files/archive/spec/2.13/03-types.html
    [
      'funtype',
      'match_type',
      'type',
      'types',
    ],
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
      'enumcase',
      'localmodifier',
      'enumdef',
      'clsparamclause',
      'classdef'
    ]
  ],

  conflicts: $ => [
    //  'given'  (given_sig  id  •  given_sig_repeat1  ':')
    //  'given'  (simple_type1  id)  •  '
    [$.given_sig, $.simple_type1],
    //  'given'  (constr_app  simple_type1)  •  '
    //  'given'  (simple_type  simple_type1)  •  '
    [$.constr_app, $.simple_type],
    //  '@'  '"""'  (string_literal_repeat2  '"'  •  '"'  char)
    //  '@'  '"""'  (string_literal_repeat3  '"')  •  '"'  …
    [$.string_literal],
    // 1:  '@'  '$'  '{'  (prefix_expr  simple_expr)  •  '`'  …
    // 2:  '@'  '$'  '{'  (simple_expr  simple_expr  •  fun_params  '=>'  indented_expr)
    // 3:  '@'  '$'  '{'  (simple_expr  simple_expr  •  fun_params  '?>'  indented_expr)
    [$.prefix_expr, $.simple_expr],
    // 1:  'val'  alphaid  '"""'  (processed_string_literal_repeat2  '"'  •  '"'  char)
    // 2:  'val'  alphaid  '"""'  (string_literal_repeat3  '"')  •  '"'  …
    [$.processed_string_literal],
    // 1:  '@'  '$'  '{'  'given'  (given_def  annot_type)  •  '
    // 2:  '@'  '$'  '{'  'given'  (refined_type  annot_type  •  refined_type_repeat1)  (precedence: 0, associativity: Right)
    [$.given_def, $.refined_type],
    // 1:  'given'  constr_app  'with'  '{'  (dcl  refine_dcl)  •  '}'  …
    // 2:  'given'  constr_app  'with'  (refinement  '{'  refine_dcl  •  '}')
    [$.dcl, $.refinement],
    // 1:  'def'  (def_sig  id  '('  def_params  ')')  •  ':'  …
    // 2:  'def'  id  (def_param_clause  '('  def_params  ')')  •  ':'  …
    [$.def_param_clause, $.def_sig],
    // 1:  'class'  id  '{'  (def  'type'  type_dcl)  •  '}'  …
    // 2:  'class'  id  '{'  (refine_dcl  'type'  type_dcl)  •  '}'  …
    [$.refine_dcl, $.def],
    // 1:  'enum'  id  '{'  'case'  (ids  id)  •  '}'  …
    // 2:  'enum'  id  '{'  (enum_case  'case'  id)  •  '}'  …
    [$.ids, $.enum_case],
    // 1:  '@'  '$'  '{'  '.'  'varid_token3'  (decimal_numeral_repeat1  'varid_token3')  •  '_'  …
    // 2:  '@'  '$'  '{'  (floating_point_literal  '.'  'varid_token3'  'varid_token3')  •  '_'  …   (precedence: 0, associativity: Right)
    [$.floating_point_literal],
    // 1:  '@'  '$'  '{'  decimal_numeral  (exponent_part  'E'  'varid_token3'  •  decimal_numeral_repeat1  'varid_token3')
    // 2:  '@'  '$'  '{'  decimal_numeral  (exponent_part  'E'  'varid_token3')  •  '_'  …
    [$.exponent_part],
    // 1:  '@'  simple_type1  '('  postfix_expr  ':'  (type  infix_type)  •  ')'  …
    // 2:  '@'  simple_type1  '('  postfix_expr  (ascription  ':'  infix_type)  •  ')'  …
    [$.ascription, $.type],
    // 1:  'def'  'this'  def_param_clause  (def_param_clause  '('  def_params  ')')  •  '='  …
    // 2:  'def'  (def_def  'this'  def_param_clause  '('  def_params  ')'  •  '='  constr_expr)
    [$.def_def, $.def_param_clause],
    // // 1:  '@'  '$'  '{'  '{'  'case'  pattern  'if'  (simple_expr  simple_expr  '_')  •  '=>'  …
    // // 2:  '@'  '$'  '{'  '{'  'case'  pattern  'if'  simple_expr  (fun_params  '_')  •  '=>'  …
    [$.fun_params, $.simple_expr],
    // 1:  '@'  (simple_type1  singleton  '.'  id)  •  '('  …  (precedence: 'simpletype')
    // 2:  '@'  singleton  '.'  (simple_type1  id)  •  '('  …  (precedence: 'simpletype')
    [$.simple_type1],
    // 1:  '@'  singleton  ','  (singleton  singleton  •  '.'  id)         (precedence: 'singleton')
    // 2:  '@'  singleton  ','  (singleton  singleton)  •  '.'  …          (precedence: 0, associativity: Right)
    // 3:  '@'  singleton  (singleton_repeat1  ','  singleton)  •  '.'  …
    [$.singleton],
  ],

  rules: {
    compilation_unit: $ => seq(repeat(seq('package', $.qual_id, $.semi)), $.top_stats),

    // Unicode escapes
    unicode_escape: $ => token.immediate(seq('\\', /[u]+/, hex_digit, hex_digit, hex_digit, hex_digit)),

    // Lexical Syntax
    paren: _ => choice('(', ')', '[', ']', '{', '}', "'(", "'[", "'{"), // TODO remove?
    delim: _ => choice('`', "'", '"', '.', ';', ','), // TODO remove?

    printable_char: _ => token.immediate(/[\u0020-\u007E]/),
    char: _ => "foobar", // TODO no such rule in the grammar figure out whaut should it mean
    char_escape_seq: _ => token.immediate(/\\[btnfr"'\\]/),

    varid: $ => seq(lower, idrest),
    alphaid: $ => seq(choice(upper, lower), token.immediate(idrest)),
    plainid: $ => prec('plainid', choice($.alphaid, op)),
    id: $ => choice(
      $.plainid,
      seq(
        '`',
        repeat(choice(
          // $.char_no_back_quote_or_newline, // TODO. No such rule in the grammar
          $.unicode_escape,
          $.char_escape_seq)),
        '`')
    ),
    quote_id: $ => prec('quoteid', seq("'", $.alphaid)),

    integer_literal: $ => seq(choice($.decimal_numeral, $.hex_numeral), choice('L', 'l')),
    decimal_numeral: $ => choice(
      '0',
      seq(
        $.non_zero_digit,
        optional(seq(
            repeat(choice(digit, '_')),
            digit
        ))
      )
    ),
    hex_numeral: $ => seq(
      '0',
      choice('x', 'X'),
      hex_digit,
      optional(seq(
        repeat(choice(hex_digit, '_')),
        hex_digit
      ))
    ),
    non_zero_digit: _ => /[1-9]/,

    floating_point_literal: $ => prec.right(choice(
      seq(
        optional($.decimal_numeral),
        '.',
        digit,
        optional(seq(repeat(choice(digit, '_')), digit)),
        optional($.exponent_part),
        optional($.float_type)
      ),
      seq($.decimal_numeral, $.exponent_part, optional($.float_type)),
      seq($.decimal_numeral, $.float_type)
    )), // TODO review prec.right

    exponent_part: $ => prec.right(seq(
      choice('E', 'e'),
      optional(choice('+', '-')),
      digit,
      optional(seq(
        repeat(choice(digit, '_')),
        digit
      ))
    )),
    float_type: _ => choice('F', 'f', 'D', 'd'),

    boolean_literal: _ => choice('true', 'false'),

    character_literal: $ => seq("'",  choice($.printable_char, $.char_escape_seq), "'"),

    string_literal: $ => choice(
      seq('"', repeat($.string_element), '"'),
      seq('"""',
        repeat(seq(optional('"'), optional('"'), $.char/* TODO needs to be char without '"' */)),
        repeat('"'), // multi_line_chars rule
        '"""'
      )
    ),

    string_element: $ => choice(
      $.printable_char, // TODO needs to be printable_char without '"' and without '\\'
      $.unicode_escape,
      $.char_escape_seq
    ),

    // This one is inline since it can match an empty string
    // multi_line_chars: $ => seq(
    //   repeat(seq(optional('"'), optional('"'), $.char /* TODO needs to be char without '"' */)),
    //   repeat('"')
    // ),

    processed_string_literal: $ => prec('procstring', choice(
      seq(
        $.alphaid,
        '"',
        repeat(choice(
          seq(optional('\\'), $.processed_string_part),
          '\\\\',
          '\\"'
        )),
        '"'
      ),
      seq(
        $.alphaid,
        '"""',
        repeat(choice(
          seq(
            optional('"'),
            optional('"'),
            $.char, // TODO substitute (‘"’ | ‘$’)
          ),
          $.escape
        )),
        repeat('"'),
        '"""'
      )
    )),

    processed_string_part: $ => choice(
      $.printable_char, // TODO substitute (‘"’ | ‘$’ | ‘\’)
      $.escape
    ),
    escape: $ => choice(
      '$$',
      seq('$', letter, repeat(choice(letter, digit))),
      seq(
        '{',
        seq(repeat(seq($.block_stat, $.semi)), optional($.block_result)), // block rule
        optional(seq(
          ';',
          white_space,
          repeat(
            seq(
              $.printable_char, // TODO substitute from printable_char (‘"’ | ‘}’ | ‘ ’ | ‘\t’ | ‘\n’)
            )
          ), // string_format rule
          white_space,
        )),
        '}',
      )
    ),

    // This one is inlined since it matches empty string
    // string_format: $ => repeat(
    //   seq(
    //     $.printable_char, // TODO substitute from printable_char (‘"’ | ‘}’ | ‘ ’ | ‘\t’ | ‘\n’)
    //   )
    // ),

    symbol_literal: $ => seq("'", $.plainid), // until 2.13

    comment: _ => choice(
      seq('/*', /* TODO any sequence of characters; nested comments are allowed ,*/ '*/'),
      seq('//', /.*/),
    ),


    nl: _ => choice('\n', '\r\n'),
    semi: $ => prec.left(choice(';', seq($.nl, repeat($.nl)))),

    // Context-free Syntax

    // Literals and Paths
    simple_literal: $ => prec('simpleliteral', choice(
      seq(optional('-'), $.integer_literal),
      seq(optional('-'), $.floating_point_literal),
      $.boolean_literal,
      $.character_literal,
      $.string_literal
    )),

    literal: $ => prec('literal', choice($.simple_literal, $.processed_string_literal, $.symbol_literal, 'null')),

    qual_id: $ => seq($.id, repeat(seq('.', $.id))),
    ids: $ => prec('ids', seq($.id, repeat(seq(',', $.id)))),


    simple_ref: $ => prec.right('simpleref', choice(
      $.id,
      seq(optional(seq($.id, '.')), 'this'),
      seq(optional(seq($.id, '.')), 'super', optional($.class_qualifier), '.', $.id)
    )),

    class_qualifier: $ => seq('[', $.id, ']'),


    // Types
    type: $ => prec('type', choice(
      $.fun_type,
      seq($.hk_type_param_clause, '=>>', $.type),
      seq($.fun_param_clause, '=>>', $.type),
      $.match_type,
      $.infix_type
    )),
    fun_type: $ => prec('funtype', choice(
      seq($.fun_type_args, choice('=>', '?=>'), $.type),
      seq($.hk_type_param_clause, '=>', $.type)
    )),
    fun_type_args: $ => prec('funtype', choice(
      $.infix_type,
      seq('(', optional($.fun_arg_types), ')'),
      $.fun_param_clause
    )),
    fun_param_clause: $ => seq('(', $.typed_fun_param, repeat(seq(',', $.typed_fun_param)), ')'),
    typed_fun_param: $ => seq($.id, ':', $.type),
    match_type: $ => prec('match_type', seq($.infix_type, 'match', block($.type_case_clauses, $))),
    infix_type: $ => prec.right(seq($.refined_type, repeat(seq($.id, optional($.nl), $.refined_type)))), // TODO review prec.right
    refined_type: $ => prec.right(seq($.annot_type, repeat(seq(optional($.nl), $.refinement)))),// TODO review prec.right
    annot_type: $ => prec.right(seq($.simple_type, repeat($.annotation))), // TODO review prec.right

    simple_type: $ => prec.right('simpletype', choice(
      $.simple_literal,
      seq('?', type_bounds($)),
      $.simple_type1
    )), // TODO review prec.right
    simple_type1: $ => prec('simpletype', choice(
      $.id,
      seq($.singleton, '.', $.id),
      seq($.singleton, '.', $.type),
      seq('(', $.types, ')'),
      $.refinement,
      seq('$', '{',
        seq(repeat(seq($.block_stat, $.semi)), optional($.block_result)), // block rule
        '}'),
      seq('$', '{', $.pattern, '}'), // only inside quoted pattern
      seq($.simple_type1, $.type_args),
      seq($.simple_type1, '#', $.id)
    )),
    singleton: $ => prec('singleton', choice(
      $.simple_ref,
      $.simple_literal,
      seq($.singleton, '.', $.id),
      seq($.singleton, repeat(seq(',', $.singleton)))
    )),
    singletons: $ => seq($.singleton, repeat(seq(',', $.singleton))), // TODO remove?
    fun_arg_type: $ => prec('funtype', choice($.type, seq('=>', $.type))),
    fun_arg_types: $ => seq($.fun_arg_type, repeat(seq(',', $.fun_arg_type))),
    param_type: $ => seq(optional('=>'), $.param_value_type),
    param_value_type: $ => seq($.type, optional('*')),
    type_args: $ => seq('[', $.types, ']'),
    refinement: $ => seq('{', optional($.refine_dcl), repeat(seq($.semi, optional($.refine_dcl))), '}'),

    lower_bound: $ => seq('>:', $.type),
    upper_bound: $ => seq('<:', $.type),
    contex_bound: $ => seq(':', $.type),
    types: $ => prec('types', seq($.type, repeat(seq(',', $.type)))),

    // Expressions

    expr: $ => choice(
      prec('anonfunc', seq($.fun_params, choice('=>', '?=>'), $.expr)),
      prec('anonfunc', seq($.hk_type_param_clause, '=>', $.expr)),
      $.expr1
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
      $.expr1
    )),
    fun_params: $ => choice($.bindings, $.id, '_'),

    expr1: $ => choice(
      $.if,
      $.while,
      $.try,
      $.throw,
      $.return,
      $.for_expr,
      $.assign,
      // seq($.postfix_expr, optional($.ascription)), // TODO write as separate rule
      $.inline
    ),

    if: $ => prec.right('if',
      seq(
        choice(
            seq(optional('inline'), 'if', '(', $.expr, ')', repeat($.nl)),
            seq(optional('inline'), 'if',  $.expr, 'then')
        ),
        seq(
          $.expr,
          optional(seq(optional($.semi), 'else', $.expr))
        )
      )
    ),

    while: $ => prec('while', choice(
      seq('while', '(', $.expr, ')', repeat($.nl), $.expr),
      seq('while', $.expr, 'do', $.expr)
    )),

    try: $ => prec.right('try', choice(
        seq('try', $.expr, $.catches, optional(seq('finally', $.expr))),
        seq('try', $.expr, optional(seq('finally', $.expr))),
      )
    ),

    throw: $ => prec('throw', seq('throw', $.expr)),
    return: $ => prec.right('return', seq('return', optional($.expr))),
    assign: $ => prec('assign', choice(
        seq(optional(seq($.simple_expr, '.')), $.id, '=', $.expr),
        seq($.prefix_operator, $.simple_expr, '=', $.expr),
        seq($.simple_expr, $.argument_exprs, '=', $.expr),
      )
    ),
    inline: $ => seq('inline', $.infix_expr, $.match_clause),

    ascription: $ => prec('annotexpr', choice(
      seq(':', $.infix_type),
      seq(':', $.annotation, repeat($.annotation))
    )),
    catches: $ => seq('catch', choice($.expr, $.expr_case_clause)),

    postfix_expr: $ => prec('postfix', seq($.infix_expr, optional($.id))),
    infix_expr: $ => prec.right('infix', choice(
      $.prefix_expr,
      seq($.infix_expr, $.id, optional($.nl), $.infix_expr),
      seq($.infix_expr, $.id, ':', $.indented_expr),
      seq($.infix_expr, $.match_clause),
    )),
    match_clause: $ => seq('match', block($.case_clauses, $)),
    prefix_expr: $ => prec('prefix', seq(optional($.prefix_operator), $.simple_expr)),
    prefix_operator: _ => prec('prefix', choice('-', '+', '~', '!')),

    simple_expr: $ => prec.right('simpleexpr', choice(
      $.simple_ref, // ok
      $.literal, // ok
      prec('placeholder', '_'),
      $.block_expr, // ok
      seq('$', '{',
        seq(repeat(seq($.block_stat, $.semi)), optional($.block_result)), // block rule
        '}'), // TODO comment in grammar: unless inside quoted pattern
      seq('$', '{', $.pattern, '}'), // TODO comment in grammar: only inside quoted pattern
      $.quoted,
      $.quote_id, // TODO comment in grammar: only inside splices
      prec('new', seq('new', $.constr_app, repeat(seq('with', $.constr_app)), optional($.template_body))), // ok
      prec('new', seq('new', $.template_body)), // ok
      seq($.simple_expr, '.', $.match_clause),
      prec('typeapply', seq($.simple_expr, $.type_args)), // ok
      seq($.simple_expr, $.argument_exprs),
      seq($.simple_expr, ':', $.indented_expr), // TODO under language.experimental.fewer_braces
      seq($.simple_expr, $.fun_params, choice('=>', '?>'), $.indented_expr), // TODO under language.experimental.fewer_braces
      prec('methodval', seq($.simple_expr, '_')), // ok
    )),

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
      prec('typedexpr', seq($.postfix_expr, ':', $.type)), // normal Expr allows only RefinedType here
      $.expr
    ),
    par_argument_exprs: $ => choice(
      seq('(', optional('using'), $.exprs_in_parens, ')'),
      seq('(', optional(seq($.exprs_in_parens, ',')), $.postfix_expr, '*', ')')
    ),
    argument_exprs: $ => choice($.par_argument_exprs, $.block_expr),

    block_expr: $ => prec('block', block(choice(
        $.case_clauses,
        seq(repeat(seq($.block_stat, $.semi)), optional($.block_result)), // block rule
      ), $)),

    // This rule is inlined since it matches empty string TODO seems that first block_stat is mandatory
    // block: $ => seq(repeat(seq($.block_stat, $.semi)), optional($.block_result)), // block rule
    block_stat: $ => prec('blockstat', choice(
      $.import,
      seq(repeat(seq($.annotation, optional($.nl))), repeat($.local_modifier), $.def),
      $.extension,
      $.expr1,
      $.end_marker
    )),
    for_expr: $ => prec('for', choice(
      seq('for', '(', $.enumerators0, ')', repeat($.nl), optional(choice('do', 'yield')), $.expr),
      seq('for', '{', $.enumerators0, '}', repeat($.nl), optional(choice('do', 'yield')), $.expr),
      seq('for',      $.enumerators0,                             choice('do', 'yield'),  $.expr)
    )),
    enumerators0: $ => seq(repeat($.nl), $.enumerators, optional($.semi)),

    enumerators: $ => prec.right(seq($.generator, repeat(choice(seq($.semi, $.enumerator), $.guard)))), // TODO review prec.right
    enumerator: $ => prec.right(choice(
      $.generator,
      seq($.guard, repeat($.guard)),
      seq($.pattern1, '=', $.expr)
    )), // TODO review prec.right
    generator: $ => seq(optional('case'), $.pattern1, '<-', $.expr),
    guard: $ => seq('if', $.postfix_expr),


    case_clauses: $ => seq($.case_clause, repeat($.case_clause)),
    case_clause: $ => prec.right(seq(
      'case',
      $.pattern,
      optional($.guard),
      '=>',
      seq(repeat(seq($.block_stat, $.semi)), optional($.block_result)), // block rule
    )), // TODO review prec.right
    expr_case_clause: $ => seq('case', $.pattern, optional($.guard), '=>', $.expr),
    type_case_clauses: $ => seq($.type_case_clause, repeat($.type_case_clause)),
    type_case_clause: $ => seq('case', choice($.infix_type, '_'), '=>', $.type, optional($.semi)),
    pattern: $ => seq($.pattern1, repeat(seq('|', $.pattern1))),
    pattern1: $ => seq($.pattern2, optional(seq(':', $.refined_type))),
    pattern2: $ => seq(optional(seq($.id, '@')), $.infix_pattern),
    infix_pattern: $ => seq($.simple_pattern, repeat(seq($.id, optional($.nl), $.simple_pattern))),

    simple_pattern: $ => prec('simplepattern', choice(
      $.pat_var,
      $.literal,
      prec('tuple', seq('(', optional($.patterns), ')')), // ok
      $.quoted,
      prec('funcapply', seq($.simple_pattern1, optional($.type_args), optional($.argument_patterns))), // ok
      seq('given', $.refined_type)
    )),
    simple_pattern1: $ => prec('simplepattern', choice($.simple_ref, seq($.simple_pattern1, '.', $.id))),

    pat_var: $ => prec('patvar', choice($.varid, '_')),
    patterns: $ => prec.right(seq($.pattern, repeat(seq(',', $.pattern)))), // TODO review prec.right

    argument_patterns: $ => prec('argpatterns', choice(
      seq('(', optional($.patterns), ')'),
      seq('(', optional(seq($.patterns, ',')), $.pat_var, ':', '_', '*', ')')
    )),

    // Type and Value Parameters

    cls_type_param_clause: $ => seq('[', $.cls_type_param, repeat(seq(',', $.cls_type_param)), ']'),
    cls_type_param: $ => seq(
      repeat($.annotation),
      optional(choice('+', '-')),
      $.id,
      optional($.hk_type_param_clause),
      type_param_bounds($),
    ),

    def_type_param_clause: $ => seq('[', $.def_type_param, repeat(seq(',', $.def_type_param)), ']'),
    def_type_param: $ => seq(
      repeat($.annotation),
      $.id,
      optional($.hk_type_param_clause),
      type_param_bounds($)
    ),

    typ_type_param_clause: $ => seq('[', $.typ_type_param, repeat(seq(',', $.typ_type_param)), ']'),
    typ_type_param: $ => seq(
      repeat($.annotation),
      $.id,
      optional($.hk_type_param_clause),
      type_bounds($),
    ),

    hk_type_param_clause: $ => seq('[', $.hk_type_param, repeat(seq(',', $.hk_type_param)), ']'),

    hk_type_param: $ => seq(
      repeat($.annotation),
      optional(choice('+', '-')),
      choice(seq($.id, optional($.hk_type_param_clause)),'_') ,
      type_bounds($)
    ),

    cls_param_clause: $ => prec('clsparamclause', choice(
      seq(optional($.nl), '(', $.cls_params, ')'),
      seq(optional($.nl), '(', 'using', choice($.cls_params, $.fun_arg_types), ')')
    )),

    cls_params: $ => seq($.cls_param, repeat(seq(',', $.cls_param))),
    cls_param: $ => seq(
      repeat($.annotation),
      optional(choice(
        seq(repeat($.modifier), choice('val', 'var')),
        'inline'
      )),
      $.param
    ),

    param: $ => seq($.id, ':', $.param_type, optional(seq('=', $.expr))),


    def_param_clause: $ => choice(
      seq(optional($.nl), '(', $.def_params, ')'),
      $.using_param_clause
    ),
    using_param_clause: $ => seq(optional($.nl), '(', 'using', choice($.def_params, $.fun_arg_types), ')'),

    def_param_clause: $ => choice(
      seq(
        optional($.nl),
        optional('erased'),
        '(',
        optional($.def_params),
        ')'
      ),
      $.given_param_clause),
    given_param_clause: $ => seq(
      'given',
      optional('erased'),
      choice(seq('(', $.def_params, ')'), $.given_types)
    ),
    def_params: $ => seq($.def_param, repeat(seq(',', $.def_param))),

    def_param: $ => seq(repeat($.annotation), optional('inline'), $.param),

    given_types: $ => seq($.annot_type, repeat(seq(',', $.annot_type))),

    //Bindings, Imports, and Exports

    bindings: $ => seq('(', optional(seq($.binding, repeat(seq(',', $.binding)))), ')'),
    binding: $ => prec('binding', seq(choice($.id, '_'), optional(seq(':', $.type)))),

    modifier: $ => choice($.local_modifier, $.access_modifier, 'override', 'opaque'),

    local_modifier: _ => prec('localmodifier', choice(
      'abstract',
      'final',
      'sealed',
      'open',
      'implicit',
      'lazy',
      'inline',
    )),

    access_modifier: $ => seq(choice('private', 'protected'), optional($.access_qualifier)),
    access_qualifier: $ => seq('[', $.id, ']'),

    annotation: $ => prec.right(seq('@', $.simple_type1, repeat($.par_argument_exprs))), // TODO review prec.right

    import: $ => seq('import', $.import_expr, repeat(seq(',', $.import_expr))),
    export: $ => seq('export', $.import_expr, repeat(seq(',', $.import_expr))),
    import_expr: $ => choice(
      seq($.simple_ref, repeat(seq('.', $.id)), '.', $.import_spec),
      seq($.simple_ref, 'as', $.id)
    ),
    import_spec: $ => choice(
      $.named_selector,
      $.wildcard_selector,
      seq('{', $.import_selectors, '}')
    ),
    named_selector: $ => seq($.id, optional(seq('as', choice($.id, '_')))),
    wildcard_selector: $ => choice('*', seq('given', optional($.infix_type))),
    import_selectors: $ => choice(
      seq($.named_selector, optional(seq(',', $.import_selectors))),
      seq($.wildcard_selector, repeat(seq(',', $.wildcard_selector)))
    ),
    end_marker: $ => seq('end', $.end_marker_tag), // TODO when followed by EOL
    end_marker_tag: _ => choice(
      'id', 'if', 'while', 'for', 'match', 'try',
      'new', 'this', 'given', 'extension', 'val'),

    // Declarations and Definitions

    refine_dcl: $ => choice(
      seq('val', $.val_dcl),
      seq('def', $.def_dcl),
      seq('type', repeat($.nl), $.type_dcl)
    ),

    dcl: $ => choice($.refine_dcl, seq('var', $.var_dcl)),
    val_dcl: $ => seq($.ids, ':', $.type),
    var_dcl: $ => seq($.ids, ':', $.type),
    def_dcl: $ => seq($.def_sig, ':', $.type),
    def_sig: $ => seq($.id, optional($.def_type_param_clause), def_param_clauses($)),
    type_dcl: $ => seq(
      $.id,
      optional($.typ_type_param_clause),
      repeat($.fun_param_clause),
      type_bounds($),
      optional(seq('=', $.type))
    ),
    def: $ => choice(
      seq('val', $.pat_def),
      seq('var', $.pat_def),
      seq('def', $.def_def),
      seq('type', repeat($.nl), $.type_dcl),

      seq($.tmpl_def)
    ),
    pat_def: $ => choice(
      seq($.ids, optional(seq(':', $.type)), '=', $.expr),
      seq($.pattern2, optional(seq(':', $.type)), '=', $.expr,)
    ),
    def_def: $ => choice(
      seq($.def_sig, optional(seq(':', $.type)), '=', $.expr),
      seq('this', $.def_param_clause, def_param_clauses($), '=', $.constr_expr)
    ),
    tmpl_def: $ => choice(
      seq(choice(seq(optional('case'), 'class'), 'trait'), $.class_def),
      seq(optional('case'), 'object', $.object_def),
      seq('enum', $.enum_def),
      seq('given', $.given_def),
    ),

    class_def: $ => prec.right('classdef', seq(
      $.id,
      class_constr($),
      optional(template($)),
    )),
    object_def: $ => prec.right(seq(
      $.id,
      optional(template($)),
    )),
    enum_def: $ => prec('enumdef', seq(
      $.id,
      class_constr($),
      inherit_clauses($),
      $.enum_body)),
    given_def: $ => seq(
      optional($.given_sig),
      choice(seq($.annot_type, optional(seq('=', $.expr))), $.structural_instance)
    ),
    given_sig: $ => seq(optional($.id), optional($.def_type_param_clause), repeat($.using_param_clause), ':'),
    structural_instance: $ => seq(
      $.constr_app,
      repeat(seq('with', $.constr_app)),
      optional(seq('with', $.template_body))
    ),
    extension: $ => seq(
      'extension',
      optional($.def_type_param_clause),
      repeat($.using_param_clause),
      '(', $.def_param, ')',
      repeat($.using_param_clause),
      $.ext_methods
    ),
    ext_methods: $ => choice(
      $.ext_method,
      seq(optional($.nl), block(seq($.ext_method, repeat(seq($.semi, $.ext_method))), $))
    ),
    ext_method: $ => seq(repeat(seq($.annotation, optional($.nl))), repeat($.modifier), 'def', $.def_def),
    constr_apps: $ => seq(
      $.constr_app,
      choice(repeat(seq(',', $.constr_app)), repeat(seq('with', $.constr_app)))
    ),
    constr_app: $ => prec.right(seq($.simple_type1, repeat($.annotation), repeat($.par_argument_exprs))), // TODO review prec.right
    constr_expr: $ => choice(
      $.self_invocation,
      block(seq($.self_invocation, repeat(seq($.semi, $.block_stat))), $)
    ),
    self_invocation: $ => seq('this', $.argument_exprs, repeat($.argument_exprs)),

    template_body: $ => block_body(seq(
      optional($.self_type),
      $.template_stat,
      repeat(seq($.semi, $.template_stat))
    ), $),

    template_stat: $ => choice(
      $.import,
      $.export,
      seq(repeat(seq($.annotation, optional($.nl))), repeat($.modifier), $.def),
      seq(repeat(seq($.annotation, optional($.nl))), repeat($.modifier), $.dcl),
      $.extension,
      $.expr1,
      $.end_marker
    ),
    self_type: $ => choice(
      seq($.id, optional(seq(':', $.infix_type)), '=>'),
      seq('this', ':', $.infix_type, '=>')
    ),

    enum_body: $ => block_body(seq(
      optional($.self_type), $.enum_stat, repeat(seq($.semi, $.enum_stat)),
    ), $),
    enum_stat: $ => choice(
      $.template_stat,
      seq(repeat(seq($.annotation, optional($.nl))), repeat($.modifier), $.enum_case),
    ),
    enum_case: $ => prec.right('enumcase', seq(
      'case',
      choice(
        seq($.id, class_constr($), optional(seq('extends', $.constr_apps))),
        $.ids
      )
    )), // TODO review prec.right

    top_stats: $ => seq($.top_stat, repeat(seq($.semi, $.top_stat))),
    top_stat: $ => choice(
      $.import,
      $.export,
      seq(repeat(seq($.annotation, optional($.nl))), repeat($.modifier), $.def),
      $.extension,
      $.packaging,
      $.package_object,
      $.end_marker,
    ),

    packaging: $ => seq('package', $.qual_id, block_body($.top_stats, $)),
    package_object: $ => seq('package', 'object', $.object_def),


    // TODO indents as external scanner
    indent: _ => 'aaaab',
    outdent: _ => 'aaaac',
  }
});

