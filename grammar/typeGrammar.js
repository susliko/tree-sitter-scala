const literalGrammar = require('./literalGrammar')
const { block } = require('./utils')

const type_bounds = $ => seq(optional($.lower_bound), optional($.upper_bound))

module.exports = grammar(literalGrammar, {
  name: 'scala',

  extras: ($, literal) => [
    ...literal,
  ],

  inline: ($, literal) => [
    ...literal,
    $.fun_type_args,
    $.fun_arg_type,
    $.fun_type,
    // TODO probably need to inline $.id
  ],

  precedences: (_, literal) => [
    ...literal,
    // Types: https://www.scala-lang.org/files/archive/spec/2.13/03-types.html
    [
      'tuple',
      'funtype',
      'match_type',
      'type',
      'types',
      'simpleref',
      'singleton', // custom
      'simpletype', // custom
    ],
  ],

  conflicts: ($, literal) => [
    ...literal,
    [$._types, $._fun_arg_types],
  ],

  rules: {
    source_file: $ => seq($.type, '\n'),

    type: $ => prec('type', choice(
      $.fun_type,
      seq($.hk_type_param_clause, '=>>', $.type),
      seq($.fun_param_clause, '=>>', $.type),
      $._match_type,
      $._infix_type
    )),
    fun_type: $ => prec('funtype', choice(
      seq($.fun_type_args, choice('=>', '?=>'), $.type),
      seq($.hk_type_param_clause, '=>', $.type)
    )),
    hk_type_param_clause: _ => '!hk_type_param_clause!',
    fun_type_args: $ => prec('funtype', choice(
      $._infix_type,
      seq('(', optional($._fun_arg_types), ')'),
      $.fun_param_clause
    )),
    fun_param_clause: $ => seq('(', $.typed_fun_param, repeat(seq(',', $.typed_fun_param)), ')'),
    typed_fun_param: $ => seq($.id, ':', $.type),
    _match_type: $ => prec('match_type', seq($._infix_type, 'match', block($.type_case_clauses, $))),
    type_case_clauses: $ => seq($.type_case_clause, repeat($.type_case_clause)),
    type_case_clause: $ => seq('case', choice($._infix_type, '_'), '=>', $.type, optional($.semi)),
    _infix_type: $ => prec.left(seq($._refined_type, repeat(seq($.id, optional($.nl), $._refined_type)))), // TODO review prec.right
    _refined_type: $ => prec.left(seq($._annot_type, repeat(seq(optional($.nl), $.refinement)))),// TODO review prec.right
    _annot_type: $ => prec.left(seq($._simple_type, repeat($.annotation))), // TODO review prec.right
    annotation: _ => '!annotation!',

    _simple_type: $ => prec.right('simpletype', choice(
      $._simple_literal,
      // seq('?', type_bounds($)), // TODO what is this?
      $._simple_type1,
      seq($._simple_type1, $.type_args),
      seq($._simple_type1, '#', $.id),
      seq('(', $._types, ')'),
    )), // TODO review prec.right
    _simple_type1: $ => prec('simpletype', choice(
      $.id,
      seq($._singleton, repeat1(seq('.', $.id))),
      // seq($.singleton, '.', $.type),//TODO uncomment and fix all this
      // seq('(', $.types, ')'),//TODO uncomment and fix all this
      // $.refinement,//TODO uncomment and fix all this
      // seq('$', '{',//TODO uncomment and fix all this
        // seq(repeat(seq($.block_stat, $.semi)), optional($.block_result)), // block rule
        // '}'),
      // seq('$', '{', $.pattern, '}'), // only inside quoted pattern//TODO uncomment and fix all this
    )),
    pattern: _ => '!pattern!',
    block_stat: _ => '!block_stat!',
    block_result: _ => '!block_result!',
    _singleton: $ => prec('singleton', choice(
      $._simple_literal,
      $.id,
      // seq(optional(seq($.id, '.')), 'super', optional($.class_qualifier), '.', $.id), // TODO
      // seq($.singleton, '.', $.id),
      // seq($.singleton, repeat(seq(',', $.singleton)))
    )),
    fun_arg_type: $ => prec('funtype', seq(optional('=>'), $.type)),
    _fun_arg_types: $ => seq($.fun_arg_type, repeat(seq(',', $.fun_arg_type))),
    param_type: $ => seq(optional('=>'), $.param_value_type),
    param_value_type: $ => seq($.type, optional('*')),
    type_args: $ => seq('[', $._types, ']'),
    refinement: $ => seq('{', optional($.refine_dcl), repeat(seq($.semi, optional($.refine_dcl))), '}'),
    refine_dcl: _ => '!refine_dcl!',

    lower_bound: $ => seq('>:', $.type),
    upper_bound: $ => seq('<:', $.type),
    contex_bound: $ => seq(':', $.type),
    _types: $ => prec('types', seq($.type, repeat(seq(',', $.type)))),
  }
})
