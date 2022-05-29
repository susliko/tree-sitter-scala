const white_space = /[ \t\r\n]/
const upper = /[A-Z$_\p{Lu}]/
const lower = /[a-z\p{Ll}]/
const letter = /[a-zA-Z$_\p{Ll}\p{Lu}\p{Lo}\p{Lt}\p{Lm}\p{Nl}]/
const digit = /[0-9]/
const op = /[!#%&*+-\/:<=>?@\\^|~\p{Sm}\p{So}]+/
const hex_digit = /[0-9A-Fa-f]/
// const non_zero_digit = /[1-9]/
const non_zero_digit = choice('1', '2', '3', '4', '5', '6', '7', '8', '9')

const idrest = seq(repeat(choice(letter, digit)), optional(seq('_', op)))

const digits = (digitRule) => seq(
  token.immediate(digitRule),
  token.immediate(optional(seq(
    repeat(choice(digitRule, '_')),
    digitRule
  ))),
)

module.exports = grammar({
  name: 'scala',

  inline: $ => [
    $.plainid,
    $.string_element,
    $.char_element,
    $.decimal_numeral,
    $.exponent_part,
    $.nl,
    $.semi,
  ],

  precedences: _ => [
    // Literals
    [
      'ref',
      'ids'
    ]
  ],

  conflicts: $ => [
    //  '@'  '"""'  (string_literal_repeat2  '"'  •  '"'  char)
    //  '@'  '"""'  (string_literal_repeat3  '"')  •  '"'  …
    [$.string_literal],
    [$.character_literal, $.symbol_literal],
    [$.floating_point_literal, $.integer_literal],
  ],

  extras: $ => [
    white_space,
    $.comment
  ],

  rules: {
    source_file: $ => repeat(choice($.id, $._literal)),

    // Literals and Paths

    _literal: $ => choice($._simple_literal, $.symbol_literal, $.null_literal),

    symbol_literal: $ => seq("'", repeat1($.char_element)), // until 2.13

    null_literal: _ => 'null',

    _simple_literal: $ => choice(
      seq(optional('-'), $.integer_literal),
      seq(optional('-'), $.floating_point_literal),
      $.boolean_literal,
      $.character_literal,
      $.string_literal,
    ),


    // Unicode escapes
    unicode_escape: _ => token.immediate(seq('\\', /[u]+/, hex_digit, hex_digit, hex_digit, hex_digit)),

    // Lexical Syntax
    paren: _ => choice('(', ')', '[', ']', '{', '}', "'(", "'[", "'{"), // TODO remove?
    delim: _ => choice('`', "'", '"', '.', ';', ','), // TODO remove?

    char_escape_seq: _ => token.immediate(/\\[btnfr"'\\]/),

    plainid: _ => choice(
      seq(choice(upper, lower), token.immediate(idrest)),
      op,
    ),
    varid: _ => seq(lower, idrest),

    id: $ => choice(
      $.plainid,
      seq(
        '`',
        repeat($.char_element),
        '`'
      )
    ),

    integer_literal: $ => seq(choice($.decimal_numeral, $.hex_numeral), optional(choice('L', 'l'))),
    decimal_numeral: _ => choice(
      '0',
      seq(
        non_zero_digit,
        token.immediate(optional(seq(
            repeat(choice(digit, '_')),
            digit
        )))
      )
    ),
    hex_numeral: _ => seq(
      '0',
      choice('x', 'X'),
      digits(hex_digit),
    ),

    floating_point_literal: $ => choice(
      seq(
        $.decimal_numeral,
        token.immediate('.'),
        digits(digit),
        optional($.exponent_part),
        optional($._float_type)
      ),
      seq(
        '.',
        digits(digit),
        optional($.exponent_part),
        optional($._float_type)
      ),
      seq($.decimal_numeral, $.exponent_part, optional($._float_type)),
      seq($.decimal_numeral, $._float_type)
    ),

    exponent_part: _ => prec.right(seq(
      token.immediate(choice('E', 'e')),
      token.immediate(optional(choice('+', '-'))),
      digits(digit)
    )),
    _float_type: _ => token.immediate(choice('F', 'f', 'D', 'd')),

    boolean_literal: _ => choice('true', 'false'),

    character_literal: $ => seq("'", $.char_element, "'"),

    char: _ => "foobar", // TODO no such rule in the grammar figure out whaut should it mean

    string_literal: $ => choice(
      seq('"', repeat($.string_element), '"'),
      seq('"""',
        repeat(seq(optional('"'), optional('"'), /[^"]/ )), /* TODO needs to be char without '"' */
        repeat('"'),
        '"""'
      )
    ),

    string_element: $ => choice("'", '`', $.char_element),

    char_element: $ => choice(
      token.immediate(/[^'`"\\\n\r]/),
      $.unicode_escape,
      $.char_escape_seq
    ),

    // This one is inlined since it matches empty string
    // string_format: $ => repeat(
    //   seq(
    //     $.printable_char, // TODO substitute from printable_char (‘"’ | ‘}’ | ‘ ’ | ‘\t’ | ‘\n’)
    //   )
    // ),

    comment: _ => choice(
      seq('/*', /* TODO any sequence of characters; nested comments are allowed ,*/ '*/'),
      seq('//', /.*/),
    ),


    nl: _ => choice('\n', '\r\n'),
    semi: $ => prec.left(choice(';', repeat1($.nl))),

    // Context-free Syntax

    qual_id: $ => seq($.id, repeat(seq('.', $.id))),
    ids: $ => prec('ids', seq($.id, repeat(seq(',', $.id)))),


    ref: $ => prec.right('ref', choice(
      $.id,
      seq(optional(seq($.id, '.')), 'this'),
      seq(optional(seq($.id, '.')), 'super', optional($.class_qualifier), '.', $.id)
    )),

    class_qualifier: $ => seq('[', $.id, ']'),

    // TODO indents as external scanner
    indent: _ => 'aaaab',
    outdent: _ => 'aaaac',
  }
});

