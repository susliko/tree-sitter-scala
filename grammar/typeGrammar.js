const literalGrammar = require('./literalGrammar')

const block = (rule, $) => {
  return choice(
    seq('{', rule, '}'),
    seq($.indent, rule, $.outdent),
  )
}

const digits = (digitRule) => {
  seq(
    token.immediate(digitRule),
    token.immediate(optional(seq(
      repeat(choice(digitRule, '_')),
      digitRule
    ))),
  )
}

const type_bounds = $ => seq(optional($.lower_bound), optional($.upper_bound))

module.exports = grammar(literalGrammar, {
  name: 'scala',

  precedences: (_, literal) => [
    ...literal,
    // Types: https://www.scala-lang.org/files/archive/spec/2.13/03-types.html
    [
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
    [$.simple_type1],
    [$.singleton],
  ],

  rules: {
    source_file: $ => $.type,

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
    hk_type_param_clause: _ => '!hk_type_param_clause!',
    fun_type_args: $ => prec('funtype', choice(
      $.infix_type,
      seq('(', optional($.fun_arg_types), ')'),
      $.fun_param_clause
    )),
    fun_param_clause: $ => seq('(', $.typed_fun_param, repeat(seq(',', $.typed_fun_param)), ')'),
    typed_fun_param: $ => seq($.id, ':', $.type),
    match_type: $ => prec('match_type', seq($.infix_type, 'match', block($.type_case_clauses, $))),
    type_case_clauses: _ => '!type_case_clauses!',
    infix_type: $ => prec.right(seq($.refined_type, repeat(seq($.id, optional($.nl), $.refined_type)))), // TODO review prec.right
    refined_type: $ => prec.right(seq($.annot_type, repeat(seq(optional($.nl), $.refinement)))),// TODO review prec.right
    annot_type: $ => prec.right(seq($.simple_type, repeat($.annotation))), // TODO review prec.right
    annotation: _ => '!annotation!',

    simple_type: $ => prec.right('simpletype', choice(
      $._simple_literal,
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
    pattern: _ => '!pattern!',
    block_stat: _ => '!block_stat!',
    block_result: _ => '!block_result!',
    singleton: $ => prec('singleton', choice(
      $.simple_ref,
      $._simple_literal,
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
    refine_dcl: _ => '!refine_dcl!',

    lower_bound: $ => seq('>:', $.type),
    upper_bound: $ => seq('<:', $.type),
    contex_bound: $ => seq(':', $.type),
    types: $ => prec('types', seq($.type, repeat(seq(',', $.type)))),
  }
})
