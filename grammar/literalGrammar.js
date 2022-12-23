const white_space_variants = " \t\r\n"
const white_space = new RegExp(`[${white_space_variants}]`)
const digit_variants = "0-9"
const digit = new RegExp(`[${digit_variants}]`)
const hex_digit = `[0-9A-Fa-f]`
const char_escape_seq = `\\\\[btnfr"'\\\\]`
const unicode_escape = `\\\\[u]+${hex_digit}${hex_digit}${hex_digit}${hex_digit}`;
const op = /[!#%&*+-\/:<=>?@\\^|~]+/

const id = /[a-zA-Z_]\w*/
const non_zero_digit = /[1-9]/

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
    // $.id,
    $.string_element,
    $.decimal_numeral,
    $.exponent_part,
    $.nl,
    $.semi,
  ],

  precedences: _ => [
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

    symbol_literal: _ => seq("'",
      token(repeat1(token.immediate(choice(
        /[^'`"\\\n\r]/,
        new RegExp(unicode_escape),
        new RegExp(char_escape_seq),
      ))))
    ),

    null_literal: _ => 'null',

    _simple_literal: $ => choice(
      seq(optional('-'), $.integer_literal),
      seq(optional('-'), $.floating_point_literal),
      $.boolean_literal,
      $.character_literal,
      $.string_literal,
    ),


    // Unicode escapes
    unicode_escape: _ => token.immediate(new RegExp(unicode_escape)),

    // Lexical Syntax

    char_escape_seq: _ => token.immediate(new RegExp(char_escape_seq)),

    // TODO add backticks variant
    // !#%&*+-\/:<=>?@\\^|~
    alphaid: _ => /[a-zA-Z_]\w*/,
    op: _ => /[!#%&*+-\/:<=>?@\\^|~]+/,
    id: $ => choice($.alphaid, $.op),

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
      digits(new RegExp(hex_digit)),
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

    character_literal: $ => seq("'", $._char_element, "'"),

    char: _ => "foobar", // TODO no such rule in the grammar figure out whaut should it mean

    string_literal: $ => choice(
      seq('"', repeat($.string_element), '"'),
      seq('"""',
        repeat(seq(optional('"'), optional('"'), /[^"]/)), /* TODO needs to be char without '"' */
        repeat('"'),
        '"""'
      )
    ),

    string_element: $ => choice("'", '`', $._char_element),

    _char_element: $ => (choice(
      token.immediate(/[^'`"\\\n\r]/),
      $.unicode_escape,
      $.char_escape_seq,
    )),

    unicode_escape: $ => token.immediate(new RegExp(unicode_escape)),

    char_escape_seq: $ => token.immediate(new RegExp(char_escape_seq)),

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

