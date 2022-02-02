const white_space = /[ \t\r\n]/
const upper = /[A-Z$_\p{Lu}]/
const lower = /[a-z\p{Ll}]/
const letter = /[a-zA-Z$_\p{Ll}\p{Lu}\p{Lo}\p{Lt}\p{Lm}\p{Nl}]/
const digit = /[0-9]/
const op = /[!#%&*+-\/:<=>?@\\^|~\p{Sm}\p{So}]+/
const hex_digit = /[0-9A-Fa-f]/
const non_zero_digit = /[1-9]/

const idrest = seq(repeat(choice(letter, digit)), optional(seq('_', op)))

module.exports = grammar({
  name: 'scala',

  precedences: $ => [
    // Literals
    [
      'quoteid',
      'plainid',
      'procstring'
    ],
    [
      'simpleref',
      'ids'
    ]
  ],

  conflicts: $ => [
    //  '@'  '"""'  (string_literal_repeat2  '"'  •  '"'  char)
    //  '@'  '"""'  (string_literal_repeat3  '"')  •  '"'  …
    [$.string_literal],
    // 1:  '@'  '$'  '{'  '.'  'varid_token3'  (decimal_numeral_repeat1  'varid_token3')  •  '_'  …
    // 2:  '@'  '$'  '{'  (floating_point_literal  '.'  'varid_token3'  'varid_token3')  •  '_'  …   (precedence: 0, associativity: Right)
    [$.floating_point_literal],
    // 1:  '@'  '$'  '{'  decimal_numeral  (exponent_part  'E'  'varid_token3'  •  decimal_numeral_repeat1  'varid_token3')
    // 2:  '@'  '$'  '{'  decimal_numeral  (exponent_part  'E'  'varid_token3')  •  '_'  …
    [$.exponent_part],
  ],

  extras: $ => [
    white_space
  ],

  rules: {
    source_file: $ => repeat($._literal),

    // Literals and Paths

    _literal: $ => choice($._simple_literal, $.symbol_literal, $.null_literal),

    symbol_literal: $ => seq("'", $.plainid), // until 2.13

    null_literal: $ => 'null',

    _simple_literal: $ => choice(
      seq(optional('-'), $.integer_literal),
      seq(optional('-'), $.floating_point_literal),
      $.boolean_literal,
      $.character_literal,
      $.string_literal
    ),


    // Unicode escapes
    unicode_escape: $ => token.immediate(seq('\\', /[u]+/, hex_digit, hex_digit, hex_digit, hex_digit)),

    // Lexical Syntax
    paren: _ => choice('(', ')', '[', ']', '{', '}', "'(", "'[", "'{"), // TODO remove?
    delim: _ => choice('`', "'", '"', '.', ';', ','), // TODO remove?

    printable_char: _ => token.immediate(/[\u0020-\u007E]/), 
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

    integer_literal: $ => seq(choice($.decimal_numeral, $.hex_numeral), choice('L', 'l')),
    decimal_numeral: $ => choice(
      '0', 
      seq(
        non_zero_digit, 
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

    char: _ => "foobar", // TODO no such rule in the grammar figure out whaut should it mean

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
    semi: $ => prec.left(choice(';', seq($.nl, repeat($.nl)))),

    // Context-free Syntax

    qual_id: $ => seq($.id, repeat(seq('.', $.id))),
    ids: $ => prec('ids', seq($.id, repeat(seq(',', $.id)))),


    simple_ref: $ => prec.right('simpleref', choice(
      $.id,
      seq(optional(seq($.id, '.')), 'this'),
      seq(optional(seq($.id, '.')), 'super', optional($.class_qualifier), '.', $.id)
    )),

    class_qualifier: $ => seq('[', $.id, ']'),
  }
});

