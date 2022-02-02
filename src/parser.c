#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 78
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SQUOTE = 1,
  sym_null_literal = 2,
  anon_sym_DASH = 3,
  sym_unicode_escape = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_BQUOTE = 11,
  anon_sym_DQUOTE = 12,
  anon_sym_DOT = 13,
  anon_sym_SEMI = 14,
  anon_sym_COMMA = 15,
  sym_printable_char = 16,
  sym_char_escape_seq = 17,
  aux_sym_varid_token1 = 18,
  aux_sym_varid_token2 = 19,
  aux_sym_varid_token3 = 20,
  anon_sym__ = 21,
  aux_sym_varid_token4 = 22,
  aux_sym_alphaid_token1 = 23,
  aux_sym_alphaid_token2 = 24,
  anon_sym_L = 25,
  anon_sym_l = 26,
  anon_sym_0 = 27,
  aux_sym_decimal_numeral_token1 = 28,
  anon_sym_x = 29,
  anon_sym_X = 30,
  aux_sym_hex_numeral_token1 = 31,
  anon_sym_E = 32,
  anon_sym_e = 33,
  anon_sym_PLUS = 34,
  anon_sym_F = 35,
  anon_sym_f = 36,
  anon_sym_D = 37,
  anon_sym_d = 38,
  anon_sym_true = 39,
  anon_sym_false = 40,
  sym_char = 41,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 42,
  anon_sym_SLASH_STAR = 43,
  anon_sym_STAR_SLASH = 44,
  anon_sym_SLASH_SLASH = 45,
  sym_source_file = 46,
  sym__literal = 47,
  sym_symbol_literal = 48,
  sym__simple_literal = 49,
  sym_alphaid = 50,
  sym_plainid = 51,
  sym_integer_literal = 52,
  sym_decimal_numeral = 53,
  sym_hex_numeral = 54,
  sym_floating_point_literal = 55,
  sym_exponent_part = 56,
  sym_float_type = 57,
  sym_boolean_literal = 58,
  sym_character_literal = 59,
  sym_string_literal = 60,
  sym_string_element = 61,
  aux_sym_source_file_repeat1 = 62,
  aux_sym_decimal_numeral_repeat1 = 63,
  aux_sym_hex_numeral_repeat1 = 64,
  aux_sym_string_literal_repeat1 = 65,
  aux_sym_string_literal_repeat2 = 66,
  aux_sym_string_literal_repeat3 = 67,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SQUOTE] = "'",
  [sym_null_literal] = "null_literal",
  [anon_sym_DASH] = "-",
  [sym_unicode_escape] = "unicode_escape",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DOT] = ".",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [sym_printable_char] = "printable_char",
  [sym_char_escape_seq] = "char_escape_seq",
  [aux_sym_varid_token1] = "varid_token1",
  [aux_sym_varid_token2] = "varid_token2",
  [aux_sym_varid_token3] = "varid_token3",
  [anon_sym__] = "_",
  [aux_sym_varid_token4] = "varid_token4",
  [aux_sym_alphaid_token1] = "alphaid_token1",
  [aux_sym_alphaid_token2] = "alphaid_token2",
  [anon_sym_L] = "L",
  [anon_sym_l] = "l",
  [anon_sym_0] = "0",
  [aux_sym_decimal_numeral_token1] = "decimal_numeral_token1",
  [anon_sym_x] = "x",
  [anon_sym_X] = "X",
  [aux_sym_hex_numeral_token1] = "hex_numeral_token1",
  [anon_sym_E] = "E",
  [anon_sym_e] = "e",
  [anon_sym_PLUS] = "+",
  [anon_sym_F] = "F",
  [anon_sym_f] = "f",
  [anon_sym_D] = "D",
  [anon_sym_d] = "d",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_char] = "char",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
  [anon_sym_SLASH_SLASH] = "//",
  [sym_source_file] = "source_file",
  [sym__literal] = "_literal",
  [sym_symbol_literal] = "symbol_literal",
  [sym__simple_literal] = "_simple_literal",
  [sym_alphaid] = "alphaid",
  [sym_plainid] = "plainid",
  [sym_integer_literal] = "integer_literal",
  [sym_decimal_numeral] = "decimal_numeral",
  [sym_hex_numeral] = "hex_numeral",
  [sym_floating_point_literal] = "floating_point_literal",
  [sym_exponent_part] = "exponent_part",
  [sym_float_type] = "float_type",
  [sym_boolean_literal] = "boolean_literal",
  [sym_character_literal] = "character_literal",
  [sym_string_literal] = "string_literal",
  [sym_string_element] = "string_element",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_decimal_numeral_repeat1] = "decimal_numeral_repeat1",
  [aux_sym_hex_numeral_repeat1] = "hex_numeral_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_string_literal_repeat2] = "string_literal_repeat2",
  [aux_sym_string_literal_repeat3] = "string_literal_repeat3",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_null_literal] = sym_null_literal,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_unicode_escape] = sym_unicode_escape,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_printable_char] = sym_printable_char,
  [sym_char_escape_seq] = sym_char_escape_seq,
  [aux_sym_varid_token1] = aux_sym_varid_token1,
  [aux_sym_varid_token2] = aux_sym_varid_token2,
  [aux_sym_varid_token3] = aux_sym_varid_token3,
  [anon_sym__] = anon_sym__,
  [aux_sym_varid_token4] = aux_sym_varid_token4,
  [aux_sym_alphaid_token1] = aux_sym_alphaid_token1,
  [aux_sym_alphaid_token2] = aux_sym_alphaid_token2,
  [anon_sym_L] = anon_sym_L,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_0] = anon_sym_0,
  [aux_sym_decimal_numeral_token1] = aux_sym_decimal_numeral_token1,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_X] = anon_sym_X,
  [aux_sym_hex_numeral_token1] = aux_sym_hex_numeral_token1,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_F] = anon_sym_F,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_char] = sym_char,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [sym_source_file] = sym_source_file,
  [sym__literal] = sym__literal,
  [sym_symbol_literal] = sym_symbol_literal,
  [sym__simple_literal] = sym__simple_literal,
  [sym_alphaid] = sym_alphaid,
  [sym_plainid] = sym_plainid,
  [sym_integer_literal] = sym_integer_literal,
  [sym_decimal_numeral] = sym_decimal_numeral,
  [sym_hex_numeral] = sym_hex_numeral,
  [sym_floating_point_literal] = sym_floating_point_literal,
  [sym_exponent_part] = sym_exponent_part,
  [sym_float_type] = sym_float_type,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_character_literal] = sym_character_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_string_element] = sym_string_element,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_decimal_numeral_repeat1] = aux_sym_decimal_numeral_repeat1,
  [aux_sym_hex_numeral_repeat1] = aux_sym_hex_numeral_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_string_literal_repeat2] = aux_sym_string_literal_repeat2,
  [aux_sym_string_literal_repeat3] = aux_sym_string_literal_repeat3,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_null_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_unicode_escape] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_printable_char] = {
    .visible = true,
    .named = true,
  },
  [sym_char_escape_seq] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_varid_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_varid_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_varid_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_varid_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alphaid_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alphaid_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_L] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_decimal_numeral_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_X] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_hex_numeral_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_F] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_symbol_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_alphaid] = {
    .visible = true,
    .named = true,
  },
  [sym_plainid] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_numeral] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_numeral] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_point_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_exponent_part] = {
    .visible = true,
    .named = true,
  },
  [sym_float_type] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_character_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_element] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimal_numeral_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_numeral_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat3] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_printable_char_character_set_1(int32_t c) {
  return (c < ':'
    ? (c < '%'
      ? (c < '#'
        ? c == '!'
        : c <= '#')
      : (c <= '&' || (c >= '*' && c <= '/')))
    : (c <= ':' || (c < '|'
      ? (c < '^'
        ? (c >= '<' && c <= '@')
        : c <= '^')
      : (c <= '|' || c == '~'))));
}

static inline bool aux_sym_varid_token1_character_set_1(int32_t c) {
  return (c < 8160
    ? (c < 4349
      ? (c < 661
        ? (c < 445
          ? (c < 223
            ? (c < 181
              ? (c >= 'g' && c <= 'z')
              : c <= 181)
            : (c <= 246 || (c >= 248 && c <= 442)))
          : (c <= 447 || (c < 460
            ? (c < 457
              ? c == 454
              : c <= 457)
            : (c <= 496 || (c >= 499 && c <= 659)))))
        : (c <= 687 || (c < 940
          ? (c < 891
            ? (c < 887
              ? (c >= 881 && c <= 883)
              : c <= 887)
            : (c <= 893 || c == 912))
          : (c <= 1013 || (c < 1376
            ? (c < 1163
              ? (c >= 1016 && c <= 1153)
              : c <= 1327)
            : (c <= 1416 || (c >= 4304 && c <= 4346)))))))
      : (c <= 4351 || (c < 8064
        ? (c < 7545
          ? (c < 7424
            ? (c < 7296
              ? (c >= 5112 && c <= 5117)
              : c <= 7304)
            : (c <= 7467 || (c >= 7531 && c <= 7543)))
          : (c <= 7578 || (c < 8016
            ? (c < 7968
              ? (c >= 7681 && c <= 7957)
              : c <= 8005)
            : (c <= 8023 || (c >= 8032 && c <= 8061)))))
        : (c <= 8071 || (c < 8126
          ? (c < 8112
            ? (c < 8096
              ? (c >= 8080 && c <= 8087)
              : c <= 8103)
            : (c <= 8116 || (c >= 8118 && c <= 8119)))
          : (c <= 8126 || (c < 8144
            ? (c < 8134
              ? (c >= 8130 && c <= 8132)
              : c <= 8135)
            : (c <= 8147 || (c >= 8150 && c <= 8151)))))))))
    : (c <= 8167 || (c < 42865
      ? (c < 11312
        ? (c < 8505
          ? (c < 8458
            ? (c < 8182
              ? (c >= 8178 && c <= 8180)
              : c <= 8183)
            : (c <= 8467 || (c >= 8495 && c <= 8500)))
          : (c <= 8505 || (c < 8526
            ? (c < 8518
              ? (c >= 8508 && c <= 8509)
              : c <= 8521)
            : (c <= 8526 || c == 8580))))
        : (c <= 11387 || (c < 11559
          ? (c < 11507
            ? (c < 11500
              ? (c >= 11393 && c <= 11492)
              : c <= 11502)
            : (c <= 11507 || (c >= 11520 && c <= 11557)))
          : (c <= 11559 || (c < 42625
            ? (c < 42561
              ? c == 11565
              : c <= 42605)
            : (c <= 42651 || (c >= 42787 && c <= 42863)))))))
      : (c <= 42887 || (c < 43888
        ? (c < 42965
          ? (c < 42961
            ? (c < 42897
              ? (c >= 42892 && c <= 42894)
              : c <= 42954)
            : (c <= 42961 || c == 42963))
          : (c <= 42969 || (c < 43824
            ? (c < 43002
              ? c == 42998
              : c <= 43002)
            : (c <= 43866 || (c >= 43872 && c <= 43880)))))
        : (c <= 43967 || (c < 66776
          ? (c < 65345
            ? (c < 64275
              ? (c >= 64256 && c <= 64262)
              : c <= 64279)
            : (c <= 65370 || (c >= 66600 && c <= 66639)))
          : (c <= 66811 || (c < 66995
            ? (c < 66979
              ? (c >= 66967 && c <= 66977)
              : c <= 66993)
            : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))));
}

static inline bool aux_sym_varid_token1_character_set_2(int32_t c) {
  return (c < 8178
    ? (c < 5112
      ? (c < 881
        ? (c < 454
          ? (c < 248
            ? (c < 223
              ? c == 181
              : c <= 246)
            : (c <= 442 || (c >= 445 && c <= 447)))
          : (c <= 454 || (c < 499
            ? (c < 460
              ? c == 457
              : c <= 496)
            : (c <= 659 || (c >= 661 && c <= 687)))))
        : (c <= 883 || (c < 1016
          ? (c < 912
            ? (c < 891
              ? c == 887
              : c <= 893)
            : (c <= 912 || (c >= 940 && c <= 1013)))
          : (c <= 1153 || (c < 4304
            ? (c < 1376
              ? (c >= 1163 && c <= 1327)
              : c <= 1416)
            : (c <= 4346 || (c >= 4349 && c <= 4351)))))))
      : (c <= 5117 || (c < 8080
        ? (c < 7681
          ? (c < 7531
            ? (c < 7424
              ? (c >= 7296 && c <= 7304)
              : c <= 7467)
            : (c <= 7543 || (c >= 7545 && c <= 7578)))
          : (c <= 7957 || (c < 8032
            ? (c < 8016
              ? (c >= 7968 && c <= 8005)
              : c <= 8023)
            : (c <= 8061 || (c >= 8064 && c <= 8071)))))
        : (c <= 8087 || (c < 8130
          ? (c < 8118
            ? (c < 8112
              ? (c >= 8096 && c <= 8103)
              : c <= 8116)
            : (c <= 8119 || c == 8126))
          : (c <= 8132 || (c < 8150
            ? (c < 8144
              ? (c >= 8134 && c <= 8135)
              : c <= 8147)
            : (c <= 8151 || (c >= 8160 && c <= 8167)))))))))
    : (c <= 8180 || (c < 42892
      ? (c < 11393
        ? (c < 8508
          ? (c < 8495
            ? (c < 8458
              ? (c >= 8182 && c <= 8183)
              : c <= 8467)
            : (c <= 8500 || c == 8505))
          : (c <= 8509 || (c < 8580
            ? (c < 8526
              ? (c >= 8518 && c <= 8521)
              : c <= 8526)
            : (c <= 8580 || (c >= 11312 && c <= 11387)))))
        : (c <= 11492 || (c < 11565
          ? (c < 11520
            ? (c < 11507
              ? (c >= 11500 && c <= 11502)
              : c <= 11507)
            : (c <= 11557 || c == 11559))
          : (c <= 11565 || (c < 42787
            ? (c < 42625
              ? (c >= 42561 && c <= 42605)
              : c <= 42651)
            : (c <= 42863 || (c >= 42865 && c <= 42887)))))))
      : (c <= 42894 || (c < 64256
        ? (c < 42998
          ? (c < 42963
            ? (c < 42961
              ? (c >= 42897 && c <= 42954)
              : c <= 42961)
            : (c <= 42963 || (c >= 42965 && c <= 42969)))
          : (c <= 42998 || (c < 43872
            ? (c < 43824
              ? c == 43002
              : c <= 43866)
            : (c <= 43880 || (c >= 43888 && c <= 43967)))))
        : (c <= 64262 || (c < 66967
          ? (c < 66600
            ? (c < 65345
              ? (c >= 64275 && c <= 64279)
              : c <= 65370)
            : (c <= 66639 || (c >= 66776 && c <= 66811)))
          : (c <= 66977 || (c < 66995
            ? (c >= 66979 && c <= 66993)
            : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))));
}

static inline bool aux_sym_varid_token1_character_set_3(int32_t c) {
  return (c < 8160
    ? (c < 4349
      ? (c < 661
        ? (c < 445
          ? (c < 223
            ? (c < 181
              ? (c >= 'a' && c <= 'z')
              : c <= 181)
            : (c <= 246 || (c >= 248 && c <= 442)))
          : (c <= 447 || (c < 460
            ? (c < 457
              ? c == 454
              : c <= 457)
            : (c <= 496 || (c >= 499 && c <= 659)))))
        : (c <= 687 || (c < 940
          ? (c < 891
            ? (c < 887
              ? (c >= 881 && c <= 883)
              : c <= 887)
            : (c <= 893 || c == 912))
          : (c <= 1013 || (c < 1376
            ? (c < 1163
              ? (c >= 1016 && c <= 1153)
              : c <= 1327)
            : (c <= 1416 || (c >= 4304 && c <= 4346)))))))
      : (c <= 4351 || (c < 8064
        ? (c < 7545
          ? (c < 7424
            ? (c < 7296
              ? (c >= 5112 && c <= 5117)
              : c <= 7304)
            : (c <= 7467 || (c >= 7531 && c <= 7543)))
          : (c <= 7578 || (c < 8016
            ? (c < 7968
              ? (c >= 7681 && c <= 7957)
              : c <= 8005)
            : (c <= 8023 || (c >= 8032 && c <= 8061)))))
        : (c <= 8071 || (c < 8126
          ? (c < 8112
            ? (c < 8096
              ? (c >= 8080 && c <= 8087)
              : c <= 8103)
            : (c <= 8116 || (c >= 8118 && c <= 8119)))
          : (c <= 8126 || (c < 8144
            ? (c < 8134
              ? (c >= 8130 && c <= 8132)
              : c <= 8135)
            : (c <= 8147 || (c >= 8150 && c <= 8151)))))))))
    : (c <= 8167 || (c < 42865
      ? (c < 11312
        ? (c < 8505
          ? (c < 8458
            ? (c < 8182
              ? (c >= 8178 && c <= 8180)
              : c <= 8183)
            : (c <= 8467 || (c >= 8495 && c <= 8500)))
          : (c <= 8505 || (c < 8526
            ? (c < 8518
              ? (c >= 8508 && c <= 8509)
              : c <= 8521)
            : (c <= 8526 || c == 8580))))
        : (c <= 11387 || (c < 11559
          ? (c < 11507
            ? (c < 11500
              ? (c >= 11393 && c <= 11492)
              : c <= 11502)
            : (c <= 11507 || (c >= 11520 && c <= 11557)))
          : (c <= 11559 || (c < 42625
            ? (c < 42561
              ? c == 11565
              : c <= 42605)
            : (c <= 42651 || (c >= 42787 && c <= 42863)))))))
      : (c <= 42887 || (c < 43888
        ? (c < 42965
          ? (c < 42961
            ? (c < 42897
              ? (c >= 42892 && c <= 42894)
              : c <= 42954)
            : (c <= 42961 || c == 42963))
          : (c <= 42969 || (c < 43824
            ? (c < 43002
              ? c == 42998
              : c <= 43002)
            : (c <= 43866 || (c >= 43872 && c <= 43880)))))
        : (c <= 43967 || (c < 66776
          ? (c < 65345
            ? (c < 64275
              ? (c >= 64256 && c <= 64262)
              : c <= 64279)
            : (c <= 65370 || (c >= 66600 && c <= 66639)))
          : (c <= 66811 || (c < 66995
            ? (c < 66979
              ? (c >= 66967 && c <= 66977)
              : c <= 66993)
            : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))));
}

static inline bool aux_sym_varid_token2_character_set_1(int32_t c) {
  return (c < 7734
    ? (c < 913
      ? (c < 420
        ? (c < 325
          ? (c < 286
            ? (c < 266
              ? (c < 256
                ? (c < 192
                  ? (c < 'G'
                    ? c == '$'
                    : c <= 'Z')
                  : (c <= 214 || (c >= 216 && c <= 222)))
                : (c <= 256 || (c < 262
                  ? (c < 260
                    ? c == 258
                    : c <= 260)
                  : (c <= 262 || c == 264))))
              : (c <= 266 || (c < 276
                ? (c < 272
                  ? (c < 270
                    ? c == 268
                    : c <= 270)
                  : (c <= 272 || c == 274))
                : (c <= 276 || (c < 282
                  ? (c < 280
                    ? c == 278
                    : c <= 280)
                  : (c <= 282 || c == 284))))))
            : (c <= 286 || (c < 306
              ? (c < 296
                ? (c < 292
                  ? (c < 290
                    ? c == 288
                    : c <= 290)
                  : (c <= 292 || c == 294))
                : (c <= 296 || (c < 302
                  ? (c < 300
                    ? c == 298
                    : c <= 300)
                  : (c <= 302 || c == 304))))
              : (c <= 306 || (c < 317
                ? (c < 313
                  ? (c < 310
                    ? c == 308
                    : c <= 310)
                  : (c <= 313 || c == 315))
                : (c <= 317 || (c < 321
                  ? c == 319
                  : (c <= 321 || c == 323))))))))
          : (c <= 325 || (c < 364
            ? (c < 346
              ? (c < 336
                ? (c < 332
                  ? (c < 330
                    ? c == 327
                    : c <= 330)
                  : (c <= 332 || c == 334))
                : (c <= 336 || (c < 342
                  ? (c < 340
                    ? c == 338
                    : c <= 340)
                  : (c <= 342 || c == 344))))
              : (c <= 346 || (c < 356
                ? (c < 352
                  ? (c < 350
                    ? c == 348
                    : c <= 350)
                  : (c <= 352 || c == 354))
                : (c <= 356 || (c < 360
                  ? c == 358
                  : (c <= 360 || c == 362))))))
            : (c <= 364 || (c < 388
              ? (c < 374
                ? (c < 370
                  ? (c < 368
                    ? c == 366
                    : c <= 368)
                  : (c <= 370 || c == 372))
                : (c <= 374 || (c < 381
                  ? (c < 379
                    ? (c >= 376 && c <= 377)
                    : c <= 379)
                  : (c <= 381 || (c >= 385 && c <= 386)))))
              : (c <= 388 || (c < 406
                ? (c < 398
                  ? (c < 393
                    ? (c >= 390 && c <= 391)
                    : c <= 395)
                  : (c <= 401 || (c >= 403 && c <= 404)))
                : (c <= 408 || (c < 415
                  ? (c >= 412 && c <= 413)
                  : (c <= 416 || c == 418))))))))))
        : (c <= 420 || (c < 520
          ? (c < 478
            ? (c < 455
              ? (c < 433
                ? (c < 428
                  ? (c < 425
                    ? (c >= 422 && c <= 423)
                    : c <= 425)
                  : (c <= 428 || (c >= 430 && c <= 431)))
                : (c <= 435 || (c < 444
                  ? (c < 439
                    ? c == 437
                    : c <= 440)
                  : (c <= 444 || c == 452))))
              : (c <= 455 || (c < 467
                ? (c < 463
                  ? (c < 461
                    ? c == 458
                    : c <= 461)
                  : (c <= 463 || c == 465))
                : (c <= 467 || (c < 473
                  ? (c < 471
                    ? c == 469
                    : c <= 471)
                  : (c <= 473 || c == 475))))))
            : (c <= 478 || (c < 500
              ? (c < 488
                ? (c < 484
                  ? (c < 482
                    ? c == 480
                    : c <= 482)
                  : (c <= 484 || c == 486))
                : (c <= 488 || (c < 494
                  ? (c < 492
                    ? c == 490
                    : c <= 492)
                  : (c <= 494 || c == 497))))
              : (c <= 500 || (c < 512
                ? (c < 508
                  ? (c < 506
                    ? (c >= 502 && c <= 504)
                    : c <= 506)
                  : (c <= 508 || c == 510))
                : (c <= 512 || (c < 516
                  ? c == 514
                  : (c <= 516 || c == 518))))))))
          : (c <= 520 || (c < 558
            ? (c < 540
              ? (c < 530
                ? (c < 526
                  ? (c < 524
                    ? c == 522
                    : c <= 524)
                  : (c <= 526 || c == 528))
                : (c <= 530 || (c < 536
                  ? (c < 534
                    ? c == 532
                    : c <= 534)
                  : (c <= 536 || c == 538))))
              : (c <= 540 || (c < 550
                ? (c < 546
                  ? (c < 544
                    ? c == 542
                    : c <= 544)
                  : (c <= 546 || c == 548))
                : (c <= 550 || (c < 554
                  ? c == 552
                  : (c <= 554 || c == 556))))))
            : (c <= 558 || (c < 590
              ? (c < 577
                ? (c < 570
                  ? (c < 562
                    ? c == 560
                    : c <= 562)
                  : (c <= 571 || (c >= 573 && c <= 574)))
                : (c <= 577 || (c < 586
                  ? (c < 584
                    ? (c >= 579 && c <= 582)
                    : c <= 584)
                  : (c <= 586 || c == 588))))
              : (c <= 590 || (c < 902
                ? (c < 886
                  ? (c < 882
                    ? c == 880
                    : c <= 882)
                  : (c <= 886 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 911)))))))))))))
      : (c <= 929 || (c < 1244
        ? (c < 1166
          ? (c < 1120
            ? (c < 996
              ? (c < 986
                ? (c < 978
                  ? (c < 975
                    ? (c >= 931 && c <= 939)
                    : c <= 975)
                  : (c <= 980 || c == 984))
                : (c <= 986 || (c < 992
                  ? (c < 990
                    ? c == 988
                    : c <= 990)
                  : (c <= 992 || c == 994))))
              : (c <= 996 || (c < 1006
                ? (c < 1002
                  ? (c < 1000
                    ? c == 998
                    : c <= 1000)
                  : (c <= 1002 || c == 1004))
                : (c <= 1006 || (c < 1017
                  ? (c < 1015
                    ? c == 1012
                    : c <= 1015)
                  : (c <= 1018 || (c >= 1021 && c <= 1071)))))))
            : (c <= 1120 || (c < 1140
              ? (c < 1130
                ? (c < 1126
                  ? (c < 1124
                    ? c == 1122
                    : c <= 1124)
                  : (c <= 1126 || c == 1128))
                : (c <= 1130 || (c < 1136
                  ? (c < 1134
                    ? c == 1132
                    : c <= 1134)
                  : (c <= 1136 || c == 1138))))
              : (c <= 1140 || (c < 1150
                ? (c < 1146
                  ? (c < 1144
                    ? c == 1142
                    : c <= 1144)
                  : (c <= 1146 || c == 1148))
                : (c <= 1150 || (c < 1162
                  ? c == 1152
                  : (c <= 1162 || c == 1164))))))))
          : (c <= 1166 || (c < 1204
            ? (c < 1186
              ? (c < 1176
                ? (c < 1172
                  ? (c < 1170
                    ? c == 1168
                    : c <= 1170)
                  : (c <= 1172 || c == 1174))
                : (c <= 1176 || (c < 1182
                  ? (c < 1180
                    ? c == 1178
                    : c <= 1180)
                  : (c <= 1182 || c == 1184))))
              : (c <= 1186 || (c < 1196
                ? (c < 1192
                  ? (c < 1190
                    ? c == 1188
                    : c <= 1190)
                  : (c <= 1192 || c == 1194))
                : (c <= 1196 || (c < 1200
                  ? c == 1198
                  : (c <= 1200 || c == 1202))))))
            : (c <= 1204 || (c < 1225
              ? (c < 1214
                ? (c < 1210
                  ? (c < 1208
                    ? c == 1206
                    : c <= 1208)
                  : (c <= 1210 || c == 1212))
                : (c <= 1214 || (c < 1221
                  ? (c < 1219
                    ? (c >= 1216 && c <= 1217)
                    : c <= 1219)
                  : (c <= 1221 || c == 1223))))
              : (c <= 1225 || (c < 1236
                ? (c < 1232
                  ? (c < 1229
                    ? c == 1227
                    : c <= 1229)
                  : (c <= 1232 || c == 1234))
                : (c <= 1236 || (c < 1240
                  ? c == 1238
                  : (c <= 1240 || c == 1242))))))))))
        : (c <= 1244 || (c < 1320
          ? (c < 1282
            ? (c < 1264
              ? (c < 1254
                ? (c < 1250
                  ? (c < 1248
                    ? c == 1246
                    : c <= 1248)
                  : (c <= 1250 || c == 1252))
                : (c <= 1254 || (c < 1260
                  ? (c < 1258
                    ? c == 1256
                    : c <= 1258)
                  : (c <= 1260 || c == 1262))))
              : (c <= 1264 || (c < 1274
                ? (c < 1270
                  ? (c < 1268
                    ? c == 1266
                    : c <= 1268)
                  : (c <= 1270 || c == 1272))
                : (c <= 1274 || (c < 1278
                  ? c == 1276
                  : (c <= 1278 || c == 1280))))))
            : (c <= 1282 || (c < 1302
              ? (c < 1292
                ? (c < 1288
                  ? (c < 1286
                    ? c == 1284
                    : c <= 1286)
                  : (c <= 1288 || c == 1290))
                : (c <= 1292 || (c < 1298
                  ? (c < 1296
                    ? c == 1294
                    : c <= 1296)
                  : (c <= 1298 || c == 1300))))
              : (c <= 1302 || (c < 1312
                ? (c < 1308
                  ? (c < 1306
                    ? c == 1304
                    : c <= 1306)
                  : (c <= 1308 || c == 1310))
                : (c <= 1312 || (c < 1316
                  ? c == 1314
                  : (c <= 1316 || c == 1318))))))))
          : (c <= 1320 || (c < 7696
            ? (c < 7357
              ? (c < 4256
                ? (c < 1326
                  ? (c < 1324
                    ? c == 1322
                    : c <= 1324)
                  : (c <= 1326 || (c >= 1329 && c <= 1366)))
                : (c <= 4293 || (c < 5024
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 5109 || (c >= 7312 && c <= 7354)))))
              : (c <= 7359 || (c < 7688
                ? (c < 7684
                  ? (c < 7682
                    ? c == 7680
                    : c <= 7682)
                  : (c <= 7684 || c == 7686))
                : (c <= 7688 || (c < 7692
                  ? c == 7690
                  : (c <= 7692 || c == 7694))))))
            : (c <= 7696 || (c < 7716
              ? (c < 7706
                ? (c < 7702
                  ? (c < 7700
                    ? c == 7698
                    : c <= 7700)
                  : (c <= 7702 || c == 7704))
                : (c <= 7706 || (c < 7712
                  ? (c < 7710
                    ? c == 7708
                    : c <= 7710)
                  : (c <= 7712 || c == 7714))))
              : (c <= 7716 || (c < 7726
                ? (c < 7722
                  ? (c < 7720
                    ? c == 7718
                    : c <= 7720)
                  : (c <= 7722 || c == 7724))
                : (c <= 7726 || (c < 7730
                  ? c == 7728
                  : (c <= 7730 || c == 7732))))))))))))))
    : (c <= 7734 || (c < 11428
      ? (c < 7896
        ? (c < 7812
          ? (c < 7774
            ? (c < 7754
              ? (c < 7744
                ? (c < 7740
                  ? (c < 7738
                    ? c == 7736
                    : c <= 7738)
                  : (c <= 7740 || c == 7742))
                : (c <= 7744 || (c < 7750
                  ? (c < 7748
                    ? c == 7746
                    : c <= 7748)
                  : (c <= 7750 || c == 7752))))
              : (c <= 7754 || (c < 7764
                ? (c < 7760
                  ? (c < 7758
                    ? c == 7756
                    : c <= 7758)
                  : (c <= 7760 || c == 7762))
                : (c <= 7764 || (c < 7770
                  ? (c < 7768
                    ? c == 7766
                    : c <= 7768)
                  : (c <= 7770 || c == 7772))))))
            : (c <= 7774 || (c < 7794
              ? (c < 7784
                ? (c < 7780
                  ? (c < 7778
                    ? c == 7776
                    : c <= 7778)
                  : (c <= 7780 || c == 7782))
                : (c <= 7784 || (c < 7790
                  ? (c < 7788
                    ? c == 7786
                    : c <= 7788)
                  : (c <= 7790 || c == 7792))))
              : (c <= 7794 || (c < 7804
                ? (c < 7800
                  ? (c < 7798
                    ? c == 7796
                    : c <= 7798)
                  : (c <= 7800 || c == 7802))
                : (c <= 7804 || (c < 7808
                  ? c == 7806
                  : (c <= 7808 || c == 7810))))))))
          : (c <= 7812 || (c < 7858
            ? (c < 7840
              ? (c < 7822
                ? (c < 7818
                  ? (c < 7816
                    ? c == 7814
                    : c <= 7816)
                  : (c <= 7818 || c == 7820))
                : (c <= 7822 || (c < 7828
                  ? (c < 7826
                    ? c == 7824
                    : c <= 7826)
                  : (c <= 7828 || c == 7838))))
              : (c <= 7840 || (c < 7850
                ? (c < 7846
                  ? (c < 7844
                    ? c == 7842
                    : c <= 7844)
                  : (c <= 7846 || c == 7848))
                : (c <= 7850 || (c < 7854
                  ? c == 7852
                  : (c <= 7854 || c == 7856))))))
            : (c <= 7858 || (c < 7878
              ? (c < 7868
                ? (c < 7864
                  ? (c < 7862
                    ? c == 7860
                    : c <= 7862)
                  : (c <= 7864 || c == 7866))
                : (c <= 7868 || (c < 7874
                  ? (c < 7872
                    ? c == 7870
                    : c <= 7872)
                  : (c <= 7874 || c == 7876))))
              : (c <= 7878 || (c < 7888
                ? (c < 7884
                  ? (c < 7882
                    ? c == 7880
                    : c <= 7882)
                  : (c <= 7884 || c == 7886))
                : (c <= 7888 || (c < 7892
                  ? c == 7890
                  : (c <= 7892 || c == 7894))))))))))
        : (c <= 7896 || (c < 8464
          ? (c < 7934
            ? (c < 7916
              ? (c < 7906
                ? (c < 7902
                  ? (c < 7900
                    ? c == 7898
                    : c <= 7900)
                  : (c <= 7902 || c == 7904))
                : (c <= 7906 || (c < 7912
                  ? (c < 7910
                    ? c == 7908
                    : c <= 7910)
                  : (c <= 7912 || c == 7914))))
              : (c <= 7916 || (c < 7926
                ? (c < 7922
                  ? (c < 7920
                    ? c == 7918
                    : c <= 7920)
                  : (c <= 7922 || c == 7924))
                : (c <= 7926 || (c < 7930
                  ? c == 7928
                  : (c <= 7930 || c == 7932))))))
            : (c <= 7934 || (c < 8040
              ? (c < 8008
                ? (c < 7976
                  ? (c < 7960
                    ? (c >= 7944 && c <= 7951)
                    : c <= 7965)
                  : (c <= 7983 || (c >= 7992 && c <= 7999)))
                : (c <= 8013 || (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || c == 8031))))
              : (c <= 8047 || (c < 8184
                ? (c < 8152
                  ? (c < 8136
                    ? (c >= 8120 && c <= 8123)
                    : c <= 8139)
                  : (c <= 8155 || (c >= 8168 && c <= 8172)))
                : (c <= 8187 || (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8459 && c <= 8461)))))))))
          : (c <= 8466 || (c < 11381
            ? (c < 8579
              ? (c < 8488
                ? (c < 8484
                  ? (c < 8473
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8510
                  ? (c < 8496
                    ? (c >= 8490 && c <= 8493)
                    : c <= 8499)
                  : (c <= 8511 || c == 8517))))
              : (c <= 8579 || (c < 11369
                ? (c < 11362
                  ? (c < 11360
                    ? (c >= 11264 && c <= 11311)
                    : c <= 11360)
                  : (c <= 11364 || c == 11367))
                : (c <= 11369 || (c < 11373
                  ? c == 11371
                  : (c <= 11376 || c == 11378))))))
            : (c <= 11381 || (c < 11410
              ? (c < 11400
                ? (c < 11396
                  ? (c < 11394
                    ? (c >= 11390 && c <= 11392)
                    : c <= 11394)
                  : (c <= 11396 || c == 11398))
                : (c <= 11400 || (c < 11406
                  ? (c < 11404
                    ? c == 11402
                    : c <= 11404)
                  : (c <= 11406 || c == 11408))))
              : (c <= 11410 || (c < 11420
                ? (c < 11416
                  ? (c < 11414
                    ? c == 11412
                    : c <= 11414)
                  : (c <= 11416 || c == 11418))
                : (c <= 11420 || (c < 11424
                  ? c == 11422
                  : (c <= 11424 || c == 11426))))))))))))
      : (c <= 11428 || (c < 42796
        ? (c < 42568
          ? (c < 11468
            ? (c < 11448
              ? (c < 11438
                ? (c < 11434
                  ? (c < 11432
                    ? c == 11430
                    : c <= 11432)
                  : (c <= 11434 || c == 11436))
                : (c <= 11438 || (c < 11444
                  ? (c < 11442
                    ? c == 11440
                    : c <= 11442)
                  : (c <= 11444 || c == 11446))))
              : (c <= 11448 || (c < 11458
                ? (c < 11454
                  ? (c < 11452
                    ? c == 11450
                    : c <= 11452)
                  : (c <= 11454 || c == 11456))
                : (c <= 11458 || (c < 11464
                  ? (c < 11462
                    ? c == 11460
                    : c <= 11462)
                  : (c <= 11464 || c == 11466))))))
            : (c <= 11468 || (c < 11488
              ? (c < 11478
                ? (c < 11474
                  ? (c < 11472
                    ? c == 11470
                    : c <= 11472)
                  : (c <= 11474 || c == 11476))
                : (c <= 11478 || (c < 11484
                  ? (c < 11482
                    ? c == 11480
                    : c <= 11482)
                  : (c <= 11484 || c == 11486))))
              : (c <= 11488 || (c < 42560
                ? (c < 11501
                  ? (c < 11499
                    ? c == 11490
                    : c <= 11499)
                  : (c <= 11501 || c == 11506))
                : (c <= 42560 || (c < 42564
                  ? c == 42562
                  : (c <= 42564 || c == 42566))))))))
          : (c <= 42568 || (c < 42624
            ? (c < 42588
              ? (c < 42578
                ? (c < 42574
                  ? (c < 42572
                    ? c == 42570
                    : c <= 42572)
                  : (c <= 42574 || c == 42576))
                : (c <= 42578 || (c < 42584
                  ? (c < 42582
                    ? c == 42580
                    : c <= 42582)
                  : (c <= 42584 || c == 42586))))
              : (c <= 42588 || (c < 42598
                ? (c < 42594
                  ? (c < 42592
                    ? c == 42590
                    : c <= 42592)
                  : (c <= 42594 || c == 42596))
                : (c <= 42598 || (c < 42602
                  ? c == 42600
                  : (c <= 42602 || c == 42604))))))
            : (c <= 42624 || (c < 42644
              ? (c < 42634
                ? (c < 42630
                  ? (c < 42628
                    ? c == 42626
                    : c <= 42628)
                  : (c <= 42630 || c == 42632))
                : (c <= 42634 || (c < 42640
                  ? (c < 42638
                    ? c == 42636
                    : c <= 42638)
                  : (c <= 42640 || c == 42642))))
              : (c <= 42644 || (c < 42788
                ? (c < 42650
                  ? (c < 42648
                    ? c == 42646
                    : c <= 42648)
                  : (c <= 42650 || c == 42786))
                : (c <= 42788 || (c < 42792
                  ? c == 42790
                  : (c <= 42792 || c == 42794))))))))))
        : (c <= 42796 || (c < 42884
          ? (c < 42836
            ? (c < 42818
              ? (c < 42808
                ? (c < 42804
                  ? (c < 42802
                    ? c == 42798
                    : c <= 42802)
                  : (c <= 42804 || c == 42806))
                : (c <= 42808 || (c < 42814
                  ? (c < 42812
                    ? c == 42810
                    : c <= 42812)
                  : (c <= 42814 || c == 42816))))
              : (c <= 42818 || (c < 42828
                ? (c < 42824
                  ? (c < 42822
                    ? c == 42820
                    : c <= 42822)
                  : (c <= 42824 || c == 42826))
                : (c <= 42828 || (c < 42832
                  ? c == 42830
                  : (c <= 42832 || c == 42834))))))
            : (c <= 42836 || (c < 42856
              ? (c < 42846
                ? (c < 42842
                  ? (c < 42840
                    ? c == 42838
                    : c <= 42840)
                  : (c <= 42842 || c == 42844))
                : (c <= 42846 || (c < 42852
                  ? (c < 42850
                    ? c == 42848
                    : c <= 42850)
                  : (c <= 42852 || c == 42854))))
              : (c <= 42856 || (c < 42875
                ? (c < 42862
                  ? (c < 42860
                    ? c == 42858
                    : c <= 42860)
                  : (c <= 42862 || c == 42873))
                : (c <= 42875 || (c < 42880
                  ? (c >= 42877 && c <= 42878)
                  : (c <= 42880 || c == 42882))))))))
          : (c <= 42884 || (c < 42936
            ? (c < 42910
              ? (c < 42898
                ? (c < 42893
                  ? (c < 42891
                    ? c == 42886
                    : c <= 42891)
                  : (c <= 42893 || c == 42896))
                : (c <= 42898 || (c < 42906
                  ? (c < 42904
                    ? c == 42902
                    : c <= 42904)
                  : (c <= 42906 || c == 42908))))
              : (c <= 42910 || (c < 42920
                ? (c < 42916
                  ? (c < 42914
                    ? c == 42912
                    : c <= 42914)
                  : (c <= 42916 || c == 42918))
                : (c <= 42920 || (c < 42928
                  ? (c >= 42922 && c <= 42926)
                  : (c <= 42932 || c == 42934))))))
            : (c <= 42936 || (c < 42968
              ? (c < 42946
                ? (c < 42942
                  ? (c < 42940
                    ? c == 42938
                    : c <= 42940)
                  : (c <= 42942 || c == 42944))
                : (c <= 42946 || (c < 42960
                  ? (c < 42953
                    ? (c >= 42948 && c <= 42951)
                    : c <= 42953)
                  : (c <= 42960 || c == 42966))))
              : (c <= 42968 || (c < 66928
                ? (c < 66560
                  ? (c < 65313
                    ? c == 42997
                    : c <= 65338)
                  : (c <= 66599 || (c >= 66736 && c <= 66771)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))))))))))))));
}

static inline bool aux_sym_varid_token2_character_set_2(int32_t c) {
  return (c < 5998
    ? (c < 2974
      ? (c < 2474
        ? (c < 1869
          ? (c < 1519
            ? (c < 748
              ? (c < 443
                ? (c < 186
                  ? c == 170
                  : c <= 186)
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))
              : (c <= 748 || (c < 890
                ? (c < 884
                  ? c == 750
                  : c <= 884)
                : (c <= 890 || (c < 1488
                  ? c == 1369
                  : c <= 1514)))))
            : (c <= 1522 || (c < 1774
              ? (c < 1649
                ? (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1808
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : c <= 1791)
                : (c <= 1808 || (c >= 1810 && c <= 1839)))))))
          : (c <= 1957 || (c < 2160
            ? (c < 2074
              ? (c < 2036
                ? (c < 1994
                  ? c == 1969
                  : c <= 2026)
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c >= 2144 && c <= 2154)))))
            : (c <= 2183 || (c < 2392
              ? (c < 2308
                ? (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)
                : (c <= 2361 || (c < 2384
                  ? c == 2365
                  : c <= 2384)))
              : (c <= 2401 || (c < 2447
                ? (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)
                : (c <= 2448 || (c >= 2451 && c <= 2472)))))))))
        : (c <= 2480 || (c < 2738
          ? (c < 2602
            ? (c < 2527
              ? (c < 2493
                ? (c < 2486
                  ? c == 2482
                  : c <= 2489)
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))
              : (c <= 2529 || (c < 2565
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : c <= 2556)
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))))
            : (c <= 2608 || (c < 2674
              ? (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))
              : (c <= 2676 || (c < 2707
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)
                : (c <= 2728 || (c >= 2730 && c <= 2736)))))))
          : (c <= 2739 || (c < 2869
            ? (c < 2821
              ? (c < 2768
                ? (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)
                : (c <= 2768 || (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : c <= 2809)))
              : (c <= 2828 || (c < 2858
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)
                : (c <= 2864 || (c >= 2866 && c <= 2867)))))
            : (c <= 2873 || (c < 2949
              ? (c < 2911
                ? (c < 2908
                  ? c == 2877
                  : c <= 2909)
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || c == 2972))))))))))
      : (c <= 2975 || (c < 3762
        ? (c < 3332
          ? (c < 3168
            ? (c < 3086
              ? (c < 2990
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)
                : (c <= 3001 || (c < 3077
                  ? c == 3024
                  : c <= 3084)))
              : (c <= 3088 || (c < 3133
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)
                : (c <= 3133 || (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : c <= 3165)))))
            : (c <= 3169 || (c < 3253
              ? (c < 3214
                ? (c < 3205
                  ? c == 3200
                  : c <= 3212)
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))
              : (c <= 3257 || (c < 3296
                ? (c < 3293
                  ? c == 3261
                  : c <= 3294)
                : (c <= 3297 || (c >= 3313 && c <= 3314)))))))
          : (c <= 3340 || (c < 3517
            ? (c < 3423
              ? (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))
              : (c <= 3425 || (c < 3482
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : c <= 3478)
                : (c <= 3505 || (c >= 3507 && c <= 3515)))))
            : (c <= 3517 || (c < 3716
              ? (c < 3634
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : c <= 3632)
                : (c <= 3635 || (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : c <= 3714)))
              : (c <= 3716 || (c < 3749
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)
                : (c <= 3749 || (c >= 3751 && c <= 3760)))))))))
        : (c <= 3763 || (c < 4698
          ? (c < 4176
            ? (c < 3904
              ? (c < 3782
                ? (c < 3776
                  ? c == 3773
                  : c <= 3780)
                : (c <= 3782 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))
              : (c <= 3911 || (c < 4096
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)
                : (c <= 4138 || c == 4159))))
            : (c <= 4181 || (c < 4238
              ? (c < 4197
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : c <= 4193)
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4688
                ? (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)
                : (c <= 4694 || c == 4696))))))
          : (c <= 4701 || (c < 4888
            ? (c < 4800
              ? (c < 4752
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : c <= 4749)
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c >= 4882 && c <= 4885)))))
            : (c <= 4954 || (c < 5870
              ? (c < 5743
                ? (c < 5121
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5740)
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : c <= 5937)
                : (c <= 5969 || (c >= 5984 && c <= 5996)))))))))))))
    : (c <= 6000 || (c < 43396
      ? (c < 11696
        ? (c < 7245
          ? (c < 6528
            ? (c < 6279
              ? (c < 6108
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : c <= 6103)
                : (c <= 6108 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : c <= 6276)))
              : (c <= 6312 || (c < 6400
                ? (c < 6320
                  ? c == 6314
                  : c <= 6389)
                : (c <= 6430 || (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)))))
            : (c <= 6571 || (c < 6981
              ? (c < 6688
                ? (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)
                : (c <= 6740 || (c < 6917
                  ? c == 6823
                  : c <= 6963)))
              : (c <= 6988 || (c < 7098
                ? (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)
                : (c <= 7141 || (c >= 7168 && c <= 7203)))))))
          : (c <= 7247 || (c < 8305
            ? (c < 7468
              ? (c < 7406
                ? (c < 7401
                  ? (c >= 7258 && c <= 7293)
                  : c <= 7404)
                : (c <= 7411 || (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : c <= 7418)))
              : (c <= 7615 || (c < 8140
                ? (c < 8124
                  ? (c >= 8072 && c <= 8111)
                  : c <= 8124)
                : (c <= 8140 || c == 8188))))
            : (c <= 8305 || (c < 11568
              ? (c < 8501
                ? (c < 8336
                  ? c == 8319
                  : c <= 8348)
                : (c <= 8504 || (c < 11388
                  ? (c >= 8544 && c <= 8584)
                  : c <= 11389)))
              : (c <= 11623 || (c < 11680
                ? (c < 11648
                  ? c == 11631
                  : c <= 11670)
                : (c <= 11686 || (c >= 11688 && c <= 11694)))))))))
        : (c <= 11702 || (c < 42192
          ? (c < 12445
            ? (c < 11823
              ? (c < 11720
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)
                : (c <= 11726 || (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : c <= 11742)))
              : (c <= 11823 || (c < 12337
                ? (c < 12321
                  ? (c >= 12293 && c <= 12295)
                  : c <= 12329)
                : (c <= 12341 || (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : c <= 12438)))))
            : (c <= 12447 || (c < 12784
              ? (c < 12549
                ? (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)
                : (c <= 12591 || (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : c <= 12735)))
              : (c <= 12799 || (c < 19968
                ? (c < 19903
                  ? c == 13312
                  : c <= 19903)
                : (c <= 19968 || (c >= 40959 && c <= 42124)))))))
          : (c <= 42237 || (c < 43011
            ? (c < 42656
              ? (c < 42538
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42527)
                : (c <= 42539 || (c < 42623
                  ? c == 42606
                  : c <= 42653)))
              : (c <= 42735 || (c < 42895
                ? (c < 42864
                  ? (c >= 42775 && c <= 42783)
                  : c <= 42888)
                : (c <= 42895 || (c >= 42994 && c <= 43009)))))
            : (c <= 43013 || (c < 43259
              ? (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))
              : (c <= 43259 || (c < 43312
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : c <= 43301)
                : (c <= 43334 || (c >= 43360 && c <= 43388)))))))))))
      : (c <= 43442 || (c < 65142
        ? (c < 43816
          ? (c < 43701
            ? (c < 43584
              ? (c < 43494
                ? (c < 43488
                  ? c == 43471
                  : c <= 43492)
                : (c <= 43503 || (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : c <= 43560)))
              : (c <= 43586 || (c < 43642
                ? (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)
                : (c <= 43642 || (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : c <= 43697)))))
            : (c <= 43702 || (c < 43762
              ? (c < 43714
                ? (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)
                : (c <= 43714 || (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)))
              : (c <= 43764 || (c < 43793
                ? (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)
                : (c <= 43798 || (c >= 43808 && c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43968
                  ? (c >= 43868 && c <= 43881)
                  : c <= 44002)
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64285
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : c <= 64217)
                : (c <= 64285 || (c >= 64287 && c <= 64296)))))
            : (c <= 64310 || (c < 64467
              ? (c < 64320
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : c <= 64318)
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c >= 65136 && c <= 65140)))))))))
        : (c <= 65276 || (c < 66513
          ? (c < 65616
            ? (c < 65536
              ? (c < 65482
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : c <= 65479)
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65596
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : c <= 65594)
                : (c <= 65597 || (c >= 65599 && c <= 65613)))))
            : (c <= 65629 || (c < 66349
              ? (c < 66176
                ? (c < 65856
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65908)
                : (c <= 66204 || (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : c <= 66335)))
              : (c <= 66378 || (c < 66464
                ? (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)
                : (c <= 66499 || (c >= 66504 && c <= 66511)))))))
          : (c <= 66517 || (c < 67592
            ? (c < 67424
              ? (c < 66864
                ? (c < 66816
                  ? (c >= 66640 && c <= 66717)
                  : c <= 66855)
                : (c <= 66915 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)))
              : (c <= 67431 || (c < 67506
                ? (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)
                : (c <= 67514 || (c >= 67584 && c <= 67589)))))
            : (c <= 67592 || (c < 67712
              ? (c < 67644
                ? (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : c <= 67640)
                : (c <= 67644 || (c < 67680
                  ? (c >= 67647 && c <= 67669)
                  : c <= 67702)))
              : (c <= 67742 || (c < 67840
                ? (c < 67828
                  ? (c >= 67808 && c <= 67826)
                  : c <= 67829)
                : (c <= 67861 || (c >= 67872 && c <= 67883)))))))))))))));
}

static inline bool aux_sym_varid_token4_character_set_1(int32_t c) {
  return (c < 10183
    ? (c < 3894
      ? (c < 2038
        ? (c < 1014
          ? (c < 174
            ? (c < 169
              ? c == 166
              : (c <= 169 || c == 172))
            : (c <= 174 || (c < 215
              ? (c >= 176 && c <= 177)
              : c <= 247)))
          : (c <= 1154 || (c < 1758
            ? (c < 1542
              ? (c >= 1421 && c <= 1422)
              : (c <= 1544 || (c >= 1550 && c <= 1551)))
            : (c <= 1758 || (c < 1789
              ? c == 1769
              : c <= 1790)))))
        : (c <= 2038 || (c < 3449
          ? (c < 3066
            ? (c < 2928
              ? c == 2554
              : (c <= 2928 || (c >= 3059 && c <= 3064)))
            : (c <= 3066 || (c < 3407
              ? c == 3199
              : c <= 3407)))
          : (c <= 3449 || (c < 3861
            ? (c < 3859
              ? (c >= 3841 && c <= 3843)
              : c <= 3859)
            : (c <= 3863 || (c < 3892
              ? (c >= 3866 && c <= 3871)
              : c <= 3892)))))))
      : (c <= 3894 || (c < 8274
        ? (c < 5008
          ? (c < 4046
            ? (c < 4030
              ? c == 3896
              : (c <= 4037 || (c >= 4039 && c <= 4044)))
            : (c <= 4047 || (c < 4254
              ? (c >= 4053 && c <= 4056)
              : c <= 4255)))
          : (c <= 5017 || (c < 7009
            ? (c < 6464
              ? c == 5741
              : (c <= 6464 || (c >= 6622 && c <= 6655)))
            : (c <= 7018 || (c < 8260
              ? (c >= 7028 && c <= 7036)
              : c <= 8260)))))
        : (c <= 8274 || (c < 8972
          ? (c < 8506
            ? (c < 8330
              ? (c >= 8314 && c <= 8316)
              : (c <= 8332 || (c >= 8448 && c <= 8494)))
            : (c <= 8527 || (c < 8592
              ? (c >= 8586 && c <= 8587)
              : c <= 8967)))
          : (c <= 9000 || (c < 9372
            ? (c < 9280
              ? (c >= 9003 && c <= 9254)
              : c <= 9290)
            : (c <= 9449 || (c < 10132
              ? (c >= 9472 && c <= 10087)
              : c <= 10180)))))))))
    : (c <= 10213 || (c < 19904
      ? (c < 12306
        ? (c < 11493
          ? (c < 10750
            ? (c < 10649
              ? (c >= 10224 && c <= 10626)
              : (c <= 10711 || (c >= 10716 && c <= 10747)))
            : (c <= 11123 || (c < 11159
              ? (c >= 11126 && c <= 11157)
              : c <= 11263)))
          : (c <= 11498 || (c < 12032
            ? (c < 11904
              ? (c >= 11856 && c <= 11857)
              : (c <= 11929 || (c >= 11931 && c <= 12019)))
            : (c <= 12245 || (c < 12292
              ? (c >= 12272 && c <= 12283)
              : c <= 12292)))))
        : (c <= 12307 || (c < 12800
          ? (c < 12688
            ? (c < 12342
              ? c == 12320
              : (c <= 12343 || (c >= 12350 && c <= 12351)))
            : (c <= 12689 || (c < 12736
              ? (c >= 12694 && c <= 12703)
              : c <= 12771)))
          : (c <= 12830 || (c < 12896
            ? (c < 12880
              ? (c >= 12842 && c <= 12871)
              : c <= 12880)
            : (c <= 12927 || (c < 12992
              ? (c >= 12938 && c <= 12976)
              : c <= 13311)))))))
      : (c <= 19967 || (c < 65372
        ? (c < 64832
          ? (c < 43065
            ? (c < 43048
              ? (c >= 42128 && c <= 42182)
              : (c <= 43051 || (c >= 43062 && c <= 43063)))
            : (c <= 43065 || (c < 64297
              ? (c >= 43639 && c <= 43641)
              : c <= 64297)))
          : (c <= 64847 || (c < 65124
            ? (c < 65021
              ? c == 64975
              : (c <= 65023 || c == 65122))
            : (c <= 65126 || (c < 65308
              ? c == 65291
              : c <= 65310)))))
        : (c <= 65372 || (c < 65913
          ? (c < 65512
            ? (c < 65506
              ? c == 65374
              : (c <= 65506 || c == 65508))
            : (c <= 65518 || (c < 65847
              ? (c >= 65532 && c <= 65533)
              : c <= 65855)))
          : (c <= 65929 || (c < 65952
            ? (c < 65936
              ? (c >= 65932 && c <= 65934)
              : c <= 65948)
            : (c <= 65952 || (c < 67703
              ? (c >= 66000 && c <= 66044)
              : c <= 67704)))))))))));
}

static inline bool aux_sym_varid_token4_character_set_2(int32_t c) {
  return (c < 9280
    ? (c < 3449
      ? (c < 215
        ? (c < '|'
          ? (c < ':'
            ? (c < '#'
              ? c == '!'
              : (c <= '&' || (c >= '*' && c <= '/')))
            : (c <= ':' || (c < '\\'
              ? (c >= '<' && c <= '@')
              : (c <= '\\' || c == '^'))))
          : (c <= '|' || (c < 172
            ? (c < 166
              ? c == '~'
              : (c <= 166 || c == 169))
            : (c <= 172 || (c < 176
              ? c == 174
              : c <= 177)))))
        : (c <= 247 || (c < 2038
          ? (c < 1550
            ? (c < 1421
              ? (c >= 1014 && c <= 1154)
              : (c <= 1422 || (c >= 1542 && c <= 1544)))
            : (c <= 1551 || (c < 1769
              ? c == 1758
              : (c <= 1769 || (c >= 1789 && c <= 1790)))))
          : (c <= 2038 || (c < 3066
            ? (c < 2928
              ? c == 2554
              : (c <= 2928 || (c >= 3059 && c <= 3064)))
            : (c <= 3066 || (c < 3407
              ? c == 3199
              : c <= 3407)))))))
      : (c <= 3449 || (c < 6464
        ? (c < 4030
          ? (c < 3866
            ? (c < 3859
              ? (c >= 3841 && c <= 3843)
              : (c <= 3859 || (c >= 3861 && c <= 3863)))
            : (c <= 3871 || (c < 3894
              ? c == 3892
              : (c <= 3894 || c == 3896))))
          : (c <= 4037 || (c < 4254
            ? (c < 4046
              ? (c >= 4039 && c <= 4044)
              : (c <= 4047 || (c >= 4053 && c <= 4056)))
            : (c <= 4255 || (c < 5741
              ? (c >= 5008 && c <= 5017)
              : c <= 5741)))))
        : (c <= 6464 || (c < 8330
          ? (c < 8260
            ? (c < 7009
              ? (c >= 6622 && c <= 6655)
              : (c <= 7018 || (c >= 7028 && c <= 7036)))
            : (c <= 8260 || (c < 8314
              ? c == 8274
              : c <= 8316)))
          : (c <= 8332 || (c < 8592
            ? (c < 8506
              ? (c >= 8448 && c <= 8494)
              : (c <= 8527 || (c >= 8586 && c <= 8587)))
            : (c <= 8967 || (c < 9003
              ? (c >= 8972 && c <= 9000)
              : c <= 9254)))))))))
    : (c <= 9290 || (c < 12938
      ? (c < 12032
        ? (c < 10750
          ? (c < 10183
            ? (c < 9472
              ? (c >= 9372 && c <= 9449)
              : (c <= 10087 || (c >= 10132 && c <= 10180)))
            : (c <= 10213 || (c < 10649
              ? (c >= 10224 && c <= 10626)
              : (c <= 10711 || (c >= 10716 && c <= 10747)))))
          : (c <= 11123 || (c < 11856
            ? (c < 11159
              ? (c >= 11126 && c <= 11157)
              : (c <= 11263 || (c >= 11493 && c <= 11498)))
            : (c <= 11857 || (c < 11931
              ? (c >= 11904 && c <= 11929)
              : c <= 12019)))))
        : (c <= 12245 || (c < 12688
          ? (c < 12320
            ? (c < 12292
              ? (c >= 12272 && c <= 12283)
              : (c <= 12292 || (c >= 12306 && c <= 12307)))
            : (c <= 12320 || (c < 12350
              ? (c >= 12342 && c <= 12343)
              : c <= 12351)))
          : (c <= 12689 || (c < 12842
            ? (c < 12736
              ? (c >= 12694 && c <= 12703)
              : (c <= 12771 || (c >= 12800 && c <= 12830)))
            : (c <= 12871 || (c < 12896
              ? c == 12880
              : c <= 12927)))))))
      : (c <= 12976 || (c < 65308
        ? (c < 64297
          ? (c < 43048
            ? (c < 19904
              ? (c >= 12992 && c <= 13311)
              : (c <= 19967 || (c >= 42128 && c <= 42182)))
            : (c <= 43051 || (c < 43065
              ? (c >= 43062 && c <= 43063)
              : (c <= 43065 || (c >= 43639 && c <= 43641)))))
          : (c <= 64297 || (c < 65122
            ? (c < 64975
              ? (c >= 64832 && c <= 64847)
              : (c <= 64975 || (c >= 65021 && c <= 65023)))
            : (c <= 65122 || (c < 65291
              ? (c >= 65124 && c <= 65126)
              : c <= 65291)))))
        : (c <= 65310 || (c < 65847
          ? (c < 65508
            ? (c < 65374
              ? c == 65372
              : (c <= 65374 || c == 65506))
            : (c <= 65508 || (c < 65532
              ? (c >= 65512 && c <= 65518)
              : c <= 65533)))
          : (c <= 65855 || (c < 65952
            ? (c < 65932
              ? (c >= 65913 && c <= 65929)
              : (c <= 65934 || (c >= 65936 && c <= 65948)))
            : (c <= 65952 || (c < 67703
              ? (c >= 66000 && c <= 66044)
              : c <= 67704)))))))))));
}

static inline bool aux_sym_varid_token4_character_set_3(int32_t c) {
  return (c < 8512
    ? (c < 3859
      ? (c < 1154
        ? (c < 166
          ? (c < '<'
            ? (c < '*'
              ? (c < '%'
                ? (c >= '!' && c <= '#')
                : c <= '&')
              : (c <= '/' || c == ':'))
            : (c <= '@' || (c < '|'
              ? c == '^'
              : (c <= '|' || c == '~'))))
          : (c <= 166 || (c < 176
            ? (c < 172
              ? c == 169
              : (c <= 172 || c == 174))
            : (c <= 177 || (c < 247
              ? c == 215
              : (c <= 247 || c == 1014))))))
        : (c <= 1154 || (c < 2554
          ? (c < 1758
            ? (c < 1542
              ? (c >= 1421 && c <= 1422)
              : (c <= 1544 || (c >= 1550 && c <= 1551)))
            : (c <= 1758 || (c < 1789
              ? c == 1769
              : (c <= 1790 || c == 2038))))
          : (c <= 2554 || (c < 3199
            ? (c < 3059
              ? c == 2928
              : (c <= 3064 || c == 3066))
            : (c <= 3199 || (c < 3449
              ? c == 3407
              : (c <= 3449 || (c >= 3841 && c <= 3843)))))))))
      : (c <= 3859 || (c < 7028
        ? (c < 4046
          ? (c < 3894
            ? (c < 3866
              ? (c >= 3861 && c <= 3863)
              : (c <= 3871 || c == 3892))
            : (c <= 3894 || (c < 4030
              ? c == 3896
              : (c <= 4037 || (c >= 4039 && c <= 4044)))))
          : (c <= 4047 || (c < 5741
            ? (c < 4254
              ? (c >= 4053 && c <= 4056)
              : (c <= 4255 || (c >= 5008 && c <= 5017)))
            : (c <= 5741 || (c < 6622
              ? c == 6464
              : (c <= 6655 || (c >= 7009 && c <= 7018)))))))
        : (c <= 7036 || (c < 8468
          ? (c < 8330
            ? (c < 8274
              ? c == 8260
              : (c <= 8274 || (c >= 8314 && c <= 8316)))
            : (c <= 8332 || (c < 8451
              ? (c >= 8448 && c <= 8449)
              : (c <= 8454 || (c >= 8456 && c <= 8457)))))
          : (c <= 8468 || (c < 8487
            ? (c < 8478
              ? (c >= 8470 && c <= 8472)
              : (c <= 8483 || c == 8485))
            : (c <= 8487 || (c < 8494
              ? c == 8489
              : (c <= 8494 || (c >= 8506 && c <= 8507)))))))))))
    : (c <= 8516 || (c < 12842
      ? (c < 11159
        ? (c < 9472
          ? (c < 8972
            ? (c < 8586
              ? (c < 8527
                ? (c >= 8522 && c <= 8525)
                : c <= 8527)
              : (c <= 8587 || (c >= 8592 && c <= 8967)))
            : (c <= 9000 || (c < 9280
              ? (c >= 9003 && c <= 9254)
              : (c <= 9290 || (c >= 9372 && c <= 9449)))))
          : (c <= 10087 || (c < 10649
            ? (c < 10183
              ? (c >= 10132 && c <= 10180)
              : (c <= 10213 || (c >= 10224 && c <= 10626)))
            : (c <= 10711 || (c < 10750
              ? (c >= 10716 && c <= 10747)
              : (c <= 11123 || (c >= 11126 && c <= 11157)))))))
        : (c <= 11263 || (c < 12306
          ? (c < 11931
            ? (c < 11856
              ? (c >= 11493 && c <= 11498)
              : (c <= 11857 || (c >= 11904 && c <= 11929)))
            : (c <= 12019 || (c < 12272
              ? (c >= 12032 && c <= 12245)
              : (c <= 12283 || c == 12292))))
          : (c <= 12307 || (c < 12688
            ? (c < 12342
              ? c == 12320
              : (c <= 12343 || (c >= 12350 && c <= 12351)))
            : (c <= 12689 || (c < 12736
              ? (c >= 12694 && c <= 12703)
              : (c <= 12771 || (c >= 12800 && c <= 12830)))))))))
      : (c <= 12871 || (c < 65124
        ? (c < 43062
          ? (c < 12992
            ? (c < 12896
              ? c == 12880
              : (c <= 12927 || (c >= 12938 && c <= 12976)))
            : (c <= 13311 || (c < 42128
              ? (c >= 19904 && c <= 19967)
              : (c <= 42182 || (c >= 43048 && c <= 43051)))))
          : (c <= 43063 || (c < 64832
            ? (c < 43639
              ? c == 43065
              : (c <= 43641 || c == 64297))
            : (c <= 64847 || (c < 65021
              ? c == 64975
              : (c <= 65023 || c == 65122))))))
        : (c <= 65126 || (c < 65532
          ? (c < 65374
            ? (c < 65308
              ? c == 65291
              : (c <= 65310 || c == 65372))
            : (c <= 65374 || (c < 65508
              ? c == 65506
              : (c <= 65508 || (c >= 65512 && c <= 65518)))))
          : (c <= 65533 || (c < 65936
            ? (c < 65913
              ? (c >= 65847 && c <= 65855)
              : (c <= 65929 || (c >= 65932 && c <= 65934)))
            : (c <= 65948 || (c < 66000
              ? c == 65952
              : (c <= 66044 || (c >= 67703 && c <= 67704)))))))))))));
}

static inline bool aux_sym_varid_token4_character_set_4(int32_t c) {
  return (c < 8506
    ? (c < 3449
      ? (c < 247
        ? (c < '|'
          ? (c < ':'
            ? (c < '%'
              ? (c < '#'
                ? c == '!'
                : c <= '#')
              : (c <= '&' || (c >= '*' && c <= '/')))
            : (c <= ':' || (c < '\\'
              ? (c >= '<' && c <= '@')
              : (c <= '\\' || c == '^'))))
          : (c <= '|' || (c < 172
            ? (c < 166
              ? c == '~'
              : (c <= 166 || c == 169))
            : (c <= 172 || (c < 176
              ? c == 174
              : (c <= 177 || c == 215))))))
        : (c <= 247 || (c < 1789
          ? (c < 1542
            ? (c < 1154
              ? c == 1014
              : (c <= 1154 || (c >= 1421 && c <= 1422)))
            : (c <= 1544 || (c < 1758
              ? (c >= 1550 && c <= 1551)
              : (c <= 1758 || c == 1769))))
          : (c <= 1790 || (c < 3059
            ? (c < 2554
              ? c == 2038
              : (c <= 2554 || c == 2928))
            : (c <= 3064 || (c < 3199
              ? c == 3066
              : (c <= 3199 || c == 3407))))))))
      : (c <= 3449 || (c < 7009
        ? (c < 4039
          ? (c < 3892
            ? (c < 3861
              ? (c < 3859
                ? (c >= 3841 && c <= 3843)
                : c <= 3859)
              : (c <= 3863 || (c >= 3866 && c <= 3871)))
            : (c <= 3892 || (c < 3896
              ? c == 3894
              : (c <= 3896 || (c >= 4030 && c <= 4037)))))
          : (c <= 4044 || (c < 5008
            ? (c < 4053
              ? (c >= 4046 && c <= 4047)
              : (c <= 4056 || (c >= 4254 && c <= 4255)))
            : (c <= 5017 || (c < 6464
              ? c == 5741
              : (c <= 6464 || (c >= 6622 && c <= 6655)))))))
        : (c <= 7018 || (c < 8456
          ? (c < 8314
            ? (c < 8260
              ? (c >= 7028 && c <= 7036)
              : (c <= 8260 || c == 8274))
            : (c <= 8316 || (c < 8448
              ? (c >= 8330 && c <= 8332)
              : (c <= 8449 || (c >= 8451 && c <= 8454)))))
          : (c <= 8457 || (c < 8485
            ? (c < 8470
              ? c == 8468
              : (c <= 8472 || (c >= 8478 && c <= 8483)))
            : (c <= 8485 || (c < 8489
              ? c == 8487
              : (c <= 8489 || c == 8494))))))))))
    : (c <= 8507 || (c < 12800
      ? (c < 11126
        ? (c < 9372
          ? (c < 8592
            ? (c < 8527
              ? (c < 8522
                ? (c >= 8512 && c <= 8516)
                : c <= 8525)
              : (c <= 8527 || (c >= 8586 && c <= 8587)))
            : (c <= 8967 || (c < 9003
              ? (c >= 8972 && c <= 9000)
              : (c <= 9254 || (c >= 9280 && c <= 9290)))))
          : (c <= 9449 || (c < 10224
            ? (c < 10132
              ? (c >= 9472 && c <= 10087)
              : (c <= 10180 || (c >= 10183 && c <= 10213)))
            : (c <= 10626 || (c < 10716
              ? (c >= 10649 && c <= 10711)
              : (c <= 10747 || (c >= 10750 && c <= 11123)))))))
        : (c <= 11157 || (c < 12292
          ? (c < 11904
            ? (c < 11493
              ? (c >= 11159 && c <= 11263)
              : (c <= 11498 || (c >= 11856 && c <= 11857)))
            : (c <= 11929 || (c < 12032
              ? (c >= 11931 && c <= 12019)
              : (c <= 12245 || (c >= 12272 && c <= 12283)))))
          : (c <= 12292 || (c < 12350
            ? (c < 12320
              ? (c >= 12306 && c <= 12307)
              : (c <= 12320 || (c >= 12342 && c <= 12343)))
            : (c <= 12351 || (c < 12694
              ? (c >= 12688 && c <= 12689)
              : (c <= 12703 || (c >= 12736 && c <= 12771)))))))))
      : (c <= 12830 || (c < 65124
        ? (c < 43062
          ? (c < 12992
            ? (c < 12896
              ? (c < 12880
                ? (c >= 12842 && c <= 12871)
                : c <= 12880)
              : (c <= 12927 || (c >= 12938 && c <= 12976)))
            : (c <= 13311 || (c < 42128
              ? (c >= 19904 && c <= 19967)
              : (c <= 42182 || (c >= 43048 && c <= 43051)))))
          : (c <= 43063 || (c < 64832
            ? (c < 43639
              ? c == 43065
              : (c <= 43641 || c == 64297))
            : (c <= 64847 || (c < 65021
              ? c == 64975
              : (c <= 65023 || c == 65122))))))
        : (c <= 65126 || (c < 65532
          ? (c < 65374
            ? (c < 65308
              ? c == 65291
              : (c <= 65310 || c == 65372))
            : (c <= 65374 || (c < 65508
              ? c == 65506
              : (c <= 65508 || (c >= 65512 && c <= 65518)))))
          : (c <= 65533 || (c < 65936
            ? (c < 65913
              ? (c >= 65847 && c <= 65855)
              : (c <= 65929 || (c >= 65932 && c <= 65934)))
            : (c <= 65948 || (c < 66000
              ? c == 65952
              : (c <= 66044 || (c >= 67703 && c <= 67704)))))))))))));
}

static inline bool aux_sym_alphaid_token1_character_set_1(int32_t c) {
  return (c < 7736
    ? (c < 931
      ? (c < 425
        ? (c < 330
          ? (c < 290
            ? (c < 270
              ? (c < 260
                ? (c < 256
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 222)
                  : (c <= 256 || c == 258))
                : (c <= 260 || (c < 266
                  ? (c < 264
                    ? c == 262
                    : c <= 264)
                  : (c <= 266 || c == 268))))
              : (c <= 270 || (c < 280
                ? (c < 276
                  ? (c < 274
                    ? c == 272
                    : c <= 274)
                  : (c <= 276 || c == 278))
                : (c <= 280 || (c < 286
                  ? (c < 284
                    ? c == 282
                    : c <= 284)
                  : (c <= 286 || c == 288))))))
            : (c <= 290 || (c < 310
              ? (c < 300
                ? (c < 296
                  ? (c < 294
                    ? c == 292
                    : c <= 294)
                  : (c <= 296 || c == 298))
                : (c <= 300 || (c < 306
                  ? (c < 304
                    ? c == 302
                    : c <= 304)
                  : (c <= 306 || c == 308))))
              : (c <= 310 || (c < 321
                ? (c < 317
                  ? (c < 315
                    ? c == 313
                    : c <= 315)
                  : (c <= 317 || c == 319))
                : (c <= 321 || (c < 325
                  ? c == 323
                  : (c <= 325 || c == 327))))))))
          : (c <= 330 || (c < 368
            ? (c < 350
              ? (c < 340
                ? (c < 336
                  ? (c < 334
                    ? c == 332
                    : c <= 334)
                  : (c <= 336 || c == 338))
                : (c <= 340 || (c < 346
                  ? (c < 344
                    ? c == 342
                    : c <= 344)
                  : (c <= 346 || c == 348))))
              : (c <= 350 || (c < 360
                ? (c < 356
                  ? (c < 354
                    ? c == 352
                    : c <= 354)
                  : (c <= 356 || c == 358))
                : (c <= 360 || (c < 364
                  ? c == 362
                  : (c <= 364 || c == 366))))))
            : (c <= 368 || (c < 393
              ? (c < 379
                ? (c < 374
                  ? (c < 372
                    ? c == 370
                    : c <= 372)
                  : (c <= 374 || (c >= 376 && c <= 377)))
                : (c <= 379 || (c < 388
                  ? (c < 385
                    ? c == 381
                    : c <= 386)
                  : (c <= 388 || (c >= 390 && c <= 391)))))
              : (c <= 395 || (c < 415
                ? (c < 406
                  ? (c < 403
                    ? (c >= 398 && c <= 401)
                    : c <= 404)
                  : (c <= 408 || (c >= 412 && c <= 413)))
                : (c <= 416 || (c < 420
                  ? c == 418
                  : (c <= 420 || (c >= 422 && c <= 423)))))))))))
        : (c <= 425 || (c < 522
          ? (c < 480
            ? (c < 461
              ? (c < 439
                ? (c < 433
                  ? (c < 430
                    ? c == 428
                    : c <= 431)
                  : (c <= 435 || c == 437))
                : (c <= 440 || (c < 455
                  ? (c < 452
                    ? c == 444
                    : c <= 452)
                  : (c <= 455 || c == 458))))
              : (c <= 461 || (c < 471
                ? (c < 467
                  ? (c < 465
                    ? c == 463
                    : c <= 465)
                  : (c <= 467 || c == 469))
                : (c <= 471 || (c < 475
                  ? c == 473
                  : (c <= 475 || c == 478))))))
            : (c <= 480 || (c < 502
              ? (c < 490
                ? (c < 486
                  ? (c < 484
                    ? c == 482
                    : c <= 484)
                  : (c <= 486 || c == 488))
                : (c <= 490 || (c < 497
                  ? (c < 494
                    ? c == 492
                    : c <= 494)
                  : (c <= 497 || c == 500))))
              : (c <= 504 || (c < 514
                ? (c < 510
                  ? (c < 508
                    ? c == 506
                    : c <= 508)
                  : (c <= 510 || c == 512))
                : (c <= 514 || (c < 518
                  ? c == 516
                  : (c <= 518 || c == 520))))))))
          : (c <= 522 || (c < 560
            ? (c < 542
              ? (c < 532
                ? (c < 528
                  ? (c < 526
                    ? c == 524
                    : c <= 526)
                  : (c <= 528 || c == 530))
                : (c <= 532 || (c < 538
                  ? (c < 536
                    ? c == 534
                    : c <= 536)
                  : (c <= 538 || c == 540))))
              : (c <= 542 || (c < 552
                ? (c < 548
                  ? (c < 546
                    ? c == 544
                    : c <= 546)
                  : (c <= 548 || c == 550))
                : (c <= 552 || (c < 556
                  ? c == 554
                  : (c <= 556 || c == 558))))))
            : (c <= 560 || (c < 880
              ? (c < 579
                ? (c < 573
                  ? (c < 570
                    ? c == 562
                    : c <= 571)
                  : (c <= 574 || c == 577))
                : (c <= 582 || (c < 588
                  ? (c < 586
                    ? c == 584
                    : c <= 586)
                  : (c <= 588 || c == 590))))
              : (c <= 880 || (c < 904
                ? (c < 895
                  ? (c < 886
                    ? c == 882
                    : c <= 886)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : (c <= 911 || (c >= 913 && c <= 929)))))))))))))
      : (c <= 939 || (c < 1246
        ? (c < 1168
          ? (c < 1122
            ? (c < 998
              ? (c < 988
                ? (c < 984
                  ? (c < 978
                    ? c == 975
                    : c <= 980)
                  : (c <= 984 || c == 986))
                : (c <= 988 || (c < 994
                  ? (c < 992
                    ? c == 990
                    : c <= 992)
                  : (c <= 994 || c == 996))))
              : (c <= 998 || (c < 1012
                ? (c < 1004
                  ? (c < 1002
                    ? c == 1000
                    : c <= 1002)
                  : (c <= 1004 || c == 1006))
                : (c <= 1012 || (c < 1021
                  ? (c < 1017
                    ? c == 1015
                    : c <= 1018)
                  : (c <= 1071 || c == 1120))))))
            : (c <= 1122 || (c < 1142
              ? (c < 1132
                ? (c < 1128
                  ? (c < 1126
                    ? c == 1124
                    : c <= 1126)
                  : (c <= 1128 || c == 1130))
                : (c <= 1132 || (c < 1138
                  ? (c < 1136
                    ? c == 1134
                    : c <= 1136)
                  : (c <= 1138 || c == 1140))))
              : (c <= 1142 || (c < 1152
                ? (c < 1148
                  ? (c < 1146
                    ? c == 1144
                    : c <= 1146)
                  : (c <= 1148 || c == 1150))
                : (c <= 1152 || (c < 1164
                  ? c == 1162
                  : (c <= 1164 || c == 1166))))))))
          : (c <= 1168 || (c < 1206
            ? (c < 1188
              ? (c < 1178
                ? (c < 1174
                  ? (c < 1172
                    ? c == 1170
                    : c <= 1172)
                  : (c <= 1174 || c == 1176))
                : (c <= 1178 || (c < 1184
                  ? (c < 1182
                    ? c == 1180
                    : c <= 1182)
                  : (c <= 1184 || c == 1186))))
              : (c <= 1188 || (c < 1198
                ? (c < 1194
                  ? (c < 1192
                    ? c == 1190
                    : c <= 1192)
                  : (c <= 1194 || c == 1196))
                : (c <= 1198 || (c < 1202
                  ? c == 1200
                  : (c <= 1202 || c == 1204))))))
            : (c <= 1206 || (c < 1227
              ? (c < 1216
                ? (c < 1212
                  ? (c < 1210
                    ? c == 1208
                    : c <= 1210)
                  : (c <= 1212 || c == 1214))
                : (c <= 1217 || (c < 1223
                  ? (c < 1221
                    ? c == 1219
                    : c <= 1221)
                  : (c <= 1223 || c == 1225))))
              : (c <= 1227 || (c < 1238
                ? (c < 1234
                  ? (c < 1232
                    ? c == 1229
                    : c <= 1232)
                  : (c <= 1234 || c == 1236))
                : (c <= 1238 || (c < 1242
                  ? c == 1240
                  : (c <= 1242 || c == 1244))))))))))
        : (c <= 1246 || (c < 1322
          ? (c < 1284
            ? (c < 1266
              ? (c < 1256
                ? (c < 1252
                  ? (c < 1250
                    ? c == 1248
                    : c <= 1250)
                  : (c <= 1252 || c == 1254))
                : (c <= 1256 || (c < 1262
                  ? (c < 1260
                    ? c == 1258
                    : c <= 1260)
                  : (c <= 1262 || c == 1264))))
              : (c <= 1266 || (c < 1276
                ? (c < 1272
                  ? (c < 1270
                    ? c == 1268
                    : c <= 1270)
                  : (c <= 1272 || c == 1274))
                : (c <= 1276 || (c < 1280
                  ? c == 1278
                  : (c <= 1280 || c == 1282))))))
            : (c <= 1284 || (c < 1304
              ? (c < 1294
                ? (c < 1290
                  ? (c < 1288
                    ? c == 1286
                    : c <= 1288)
                  : (c <= 1290 || c == 1292))
                : (c <= 1294 || (c < 1300
                  ? (c < 1298
                    ? c == 1296
                    : c <= 1298)
                  : (c <= 1300 || c == 1302))))
              : (c <= 1304 || (c < 1314
                ? (c < 1310
                  ? (c < 1308
                    ? c == 1306
                    : c <= 1308)
                  : (c <= 1310 || c == 1312))
                : (c <= 1314 || (c < 1318
                  ? c == 1316
                  : (c <= 1318 || c == 1320))))))))
          : (c <= 1322 || (c < 7698
            ? (c < 7680
              ? (c < 4295
                ? (c < 1329
                  ? (c < 1326
                    ? c == 1324
                    : c <= 1326)
                  : (c <= 1366 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 7312
                  ? (c < 5024
                    ? c == 4301
                    : c <= 5109)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))))
              : (c <= 7680 || (c < 7690
                ? (c < 7686
                  ? (c < 7684
                    ? c == 7682
                    : c <= 7684)
                  : (c <= 7686 || c == 7688))
                : (c <= 7690 || (c < 7694
                  ? c == 7692
                  : (c <= 7694 || c == 7696))))))
            : (c <= 7698 || (c < 7718
              ? (c < 7708
                ? (c < 7704
                  ? (c < 7702
                    ? c == 7700
                    : c <= 7702)
                  : (c <= 7704 || c == 7706))
                : (c <= 7708 || (c < 7714
                  ? (c < 7712
                    ? c == 7710
                    : c <= 7712)
                  : (c <= 7714 || c == 7716))))
              : (c <= 7718 || (c < 7728
                ? (c < 7724
                  ? (c < 7722
                    ? c == 7720
                    : c <= 7722)
                  : (c <= 7724 || c == 7726))
                : (c <= 7728 || (c < 7732
                  ? c == 7730
                  : (c <= 7732 || c == 7734))))))))))))))
    : (c <= 7736 || (c < 11430
      ? (c < 7898
        ? (c < 7814
          ? (c < 7776
            ? (c < 7756
              ? (c < 7746
                ? (c < 7742
                  ? (c < 7740
                    ? c == 7738
                    : c <= 7740)
                  : (c <= 7742 || c == 7744))
                : (c <= 7746 || (c < 7752
                  ? (c < 7750
                    ? c == 7748
                    : c <= 7750)
                  : (c <= 7752 || c == 7754))))
              : (c <= 7756 || (c < 7766
                ? (c < 7762
                  ? (c < 7760
                    ? c == 7758
                    : c <= 7760)
                  : (c <= 7762 || c == 7764))
                : (c <= 7766 || (c < 7772
                  ? (c < 7770
                    ? c == 7768
                    : c <= 7770)
                  : (c <= 7772 || c == 7774))))))
            : (c <= 7776 || (c < 7796
              ? (c < 7786
                ? (c < 7782
                  ? (c < 7780
                    ? c == 7778
                    : c <= 7780)
                  : (c <= 7782 || c == 7784))
                : (c <= 7786 || (c < 7792
                  ? (c < 7790
                    ? c == 7788
                    : c <= 7790)
                  : (c <= 7792 || c == 7794))))
              : (c <= 7796 || (c < 7806
                ? (c < 7802
                  ? (c < 7800
                    ? c == 7798
                    : c <= 7800)
                  : (c <= 7802 || c == 7804))
                : (c <= 7806 || (c < 7810
                  ? c == 7808
                  : (c <= 7810 || c == 7812))))))))
          : (c <= 7814 || (c < 7860
            ? (c < 7842
              ? (c < 7824
                ? (c < 7820
                  ? (c < 7818
                    ? c == 7816
                    : c <= 7818)
                  : (c <= 7820 || c == 7822))
                : (c <= 7824 || (c < 7838
                  ? (c < 7828
                    ? c == 7826
                    : c <= 7828)
                  : (c <= 7838 || c == 7840))))
              : (c <= 7842 || (c < 7852
                ? (c < 7848
                  ? (c < 7846
                    ? c == 7844
                    : c <= 7846)
                  : (c <= 7848 || c == 7850))
                : (c <= 7852 || (c < 7856
                  ? c == 7854
                  : (c <= 7856 || c == 7858))))))
            : (c <= 7860 || (c < 7880
              ? (c < 7870
                ? (c < 7866
                  ? (c < 7864
                    ? c == 7862
                    : c <= 7864)
                  : (c <= 7866 || c == 7868))
                : (c <= 7870 || (c < 7876
                  ? (c < 7874
                    ? c == 7872
                    : c <= 7874)
                  : (c <= 7876 || c == 7878))))
              : (c <= 7880 || (c < 7890
                ? (c < 7886
                  ? (c < 7884
                    ? c == 7882
                    : c <= 7884)
                  : (c <= 7886 || c == 7888))
                : (c <= 7890 || (c < 7894
                  ? c == 7892
                  : (c <= 7894 || c == 7896))))))))))
        : (c <= 7898 || (c < 8469
          ? (c < 7944
            ? (c < 7918
              ? (c < 7908
                ? (c < 7904
                  ? (c < 7902
                    ? c == 7900
                    : c <= 7902)
                  : (c <= 7904 || c == 7906))
                : (c <= 7908 || (c < 7914
                  ? (c < 7912
                    ? c == 7910
                    : c <= 7912)
                  : (c <= 7914 || c == 7916))))
              : (c <= 7918 || (c < 7928
                ? (c < 7924
                  ? (c < 7922
                    ? c == 7920
                    : c <= 7922)
                  : (c <= 7924 || c == 7926))
                : (c <= 7928 || (c < 7932
                  ? c == 7930
                  : (c <= 7932 || c == 7934))))))
            : (c <= 7951 || (c < 8120
              ? (c < 8025
                ? (c < 7992
                  ? (c < 7976
                    ? (c >= 7960 && c <= 7965)
                    : c <= 7983)
                  : (c <= 7999 || (c >= 8008 && c <= 8013)))
                : (c <= 8025 || (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8031 || (c >= 8040 && c <= 8047)))))
              : (c <= 8123 || (c < 8450
                ? (c < 8168
                  ? (c < 8152
                    ? (c >= 8136 && c <= 8139)
                    : c <= 8155)
                  : (c <= 8172 || (c >= 8184 && c <= 8187)))
                : (c <= 8450 || (c < 8459
                  ? c == 8455
                  : (c <= 8461 || (c >= 8464 && c <= 8466)))))))))
          : (c <= 8469 || (c < 11390
            ? (c < 11264
              ? (c < 8490
                ? (c < 8486
                  ? (c < 8484
                    ? (c >= 8473 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))
                : (c <= 8493 || (c < 8517
                  ? (c < 8510
                    ? (c >= 8496 && c <= 8499)
                    : c <= 8511)
                  : (c <= 8517 || c == 8579))))
              : (c <= 11311 || (c < 11371
                ? (c < 11367
                  ? (c < 11362
                    ? c == 11360
                    : c <= 11364)
                  : (c <= 11367 || c == 11369))
                : (c <= 11371 || (c < 11378
                  ? (c >= 11373 && c <= 11376)
                  : (c <= 11378 || c == 11381))))))
            : (c <= 11392 || (c < 11412
              ? (c < 11402
                ? (c < 11398
                  ? (c < 11396
                    ? c == 11394
                    : c <= 11396)
                  : (c <= 11398 || c == 11400))
                : (c <= 11402 || (c < 11408
                  ? (c < 11406
                    ? c == 11404
                    : c <= 11406)
                  : (c <= 11408 || c == 11410))))
              : (c <= 11412 || (c < 11422
                ? (c < 11418
                  ? (c < 11416
                    ? c == 11414
                    : c <= 11416)
                  : (c <= 11418 || c == 11420))
                : (c <= 11422 || (c < 11426
                  ? c == 11424
                  : (c <= 11426 || c == 11428))))))))))))
      : (c <= 11430 || (c < 42796
        ? (c < 42568
          ? (c < 11468
            ? (c < 11450
              ? (c < 11440
                ? (c < 11436
                  ? (c < 11434
                    ? c == 11432
                    : c <= 11434)
                  : (c <= 11436 || c == 11438))
                : (c <= 11440 || (c < 11446
                  ? (c < 11444
                    ? c == 11442
                    : c <= 11444)
                  : (c <= 11446 || c == 11448))))
              : (c <= 11450 || (c < 11460
                ? (c < 11456
                  ? (c < 11454
                    ? c == 11452
                    : c <= 11454)
                  : (c <= 11456 || c == 11458))
                : (c <= 11460 || (c < 11464
                  ? c == 11462
                  : (c <= 11464 || c == 11466))))))
            : (c <= 11468 || (c < 11488
              ? (c < 11478
                ? (c < 11474
                  ? (c < 11472
                    ? c == 11470
                    : c <= 11472)
                  : (c <= 11474 || c == 11476))
                : (c <= 11478 || (c < 11484
                  ? (c < 11482
                    ? c == 11480
                    : c <= 11482)
                  : (c <= 11484 || c == 11486))))
              : (c <= 11488 || (c < 42560
                ? (c < 11501
                  ? (c < 11499
                    ? c == 11490
                    : c <= 11499)
                  : (c <= 11501 || c == 11506))
                : (c <= 42560 || (c < 42564
                  ? c == 42562
                  : (c <= 42564 || c == 42566))))))))
          : (c <= 42568 || (c < 42624
            ? (c < 42588
              ? (c < 42578
                ? (c < 42574
                  ? (c < 42572
                    ? c == 42570
                    : c <= 42572)
                  : (c <= 42574 || c == 42576))
                : (c <= 42578 || (c < 42584
                  ? (c < 42582
                    ? c == 42580
                    : c <= 42582)
                  : (c <= 42584 || c == 42586))))
              : (c <= 42588 || (c < 42598
                ? (c < 42594
                  ? (c < 42592
                    ? c == 42590
                    : c <= 42592)
                  : (c <= 42594 || c == 42596))
                : (c <= 42598 || (c < 42602
                  ? c == 42600
                  : (c <= 42602 || c == 42604))))))
            : (c <= 42624 || (c < 42644
              ? (c < 42634
                ? (c < 42630
                  ? (c < 42628
                    ? c == 42626
                    : c <= 42628)
                  : (c <= 42630 || c == 42632))
                : (c <= 42634 || (c < 42640
                  ? (c < 42638
                    ? c == 42636
                    : c <= 42638)
                  : (c <= 42640 || c == 42642))))
              : (c <= 42644 || (c < 42788
                ? (c < 42650
                  ? (c < 42648
                    ? c == 42646
                    : c <= 42648)
                  : (c <= 42650 || c == 42786))
                : (c <= 42788 || (c < 42792
                  ? c == 42790
                  : (c <= 42792 || c == 42794))))))))))
        : (c <= 42796 || (c < 42884
          ? (c < 42836
            ? (c < 42818
              ? (c < 42808
                ? (c < 42804
                  ? (c < 42802
                    ? c == 42798
                    : c <= 42802)
                  : (c <= 42804 || c == 42806))
                : (c <= 42808 || (c < 42814
                  ? (c < 42812
                    ? c == 42810
                    : c <= 42812)
                  : (c <= 42814 || c == 42816))))
              : (c <= 42818 || (c < 42828
                ? (c < 42824
                  ? (c < 42822
                    ? c == 42820
                    : c <= 42822)
                  : (c <= 42824 || c == 42826))
                : (c <= 42828 || (c < 42832
                  ? c == 42830
                  : (c <= 42832 || c == 42834))))))
            : (c <= 42836 || (c < 42856
              ? (c < 42846
                ? (c < 42842
                  ? (c < 42840
                    ? c == 42838
                    : c <= 42840)
                  : (c <= 42842 || c == 42844))
                : (c <= 42846 || (c < 42852
                  ? (c < 42850
                    ? c == 42848
                    : c <= 42850)
                  : (c <= 42852 || c == 42854))))
              : (c <= 42856 || (c < 42875
                ? (c < 42862
                  ? (c < 42860
                    ? c == 42858
                    : c <= 42860)
                  : (c <= 42862 || c == 42873))
                : (c <= 42875 || (c < 42880
                  ? (c >= 42877 && c <= 42878)
                  : (c <= 42880 || c == 42882))))))))
          : (c <= 42884 || (c < 42936
            ? (c < 42910
              ? (c < 42898
                ? (c < 42893
                  ? (c < 42891
                    ? c == 42886
                    : c <= 42891)
                  : (c <= 42893 || c == 42896))
                : (c <= 42898 || (c < 42906
                  ? (c < 42904
                    ? c == 42902
                    : c <= 42904)
                  : (c <= 42906 || c == 42908))))
              : (c <= 42910 || (c < 42920
                ? (c < 42916
                  ? (c < 42914
                    ? c == 42912
                    : c <= 42914)
                  : (c <= 42916 || c == 42918))
                : (c <= 42920 || (c < 42928
                  ? (c >= 42922 && c <= 42926)
                  : (c <= 42932 || c == 42934))))))
            : (c <= 42936 || (c < 42968
              ? (c < 42946
                ? (c < 42942
                  ? (c < 42940
                    ? c == 42938
                    : c <= 42940)
                  : (c <= 42942 || c == 42944))
                : (c <= 42946 || (c < 42960
                  ? (c < 42953
                    ? (c >= 42948 && c <= 42951)
                    : c <= 42953)
                  : (c <= 42960 || c == 42966))))
              : (c <= 42968 || (c < 66928
                ? (c < 66560
                  ? (c < 65313
                    ? c == 42997
                    : c <= 65338)
                  : (c <= 66599 || (c >= 66736 && c <= 66771)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))))))))))))));
}

static inline bool aux_sym_alphaid_token1_character_set_2(int32_t c) {
  return (c < 7732
    ? (c < 910
      ? (c < 418
        ? (c < 323
          ? (c < 284
            ? (c < 264
              ? (c < 216
                ? (c < '_'
                  ? (c < 'A'
                    ? c == '$'
                    : c <= 'Z')
                  : (c <= '_' || (c >= 192 && c <= 214)))
                : (c <= 222 || (c < 260
                  ? (c < 258
                    ? c == 256
                    : c <= 258)
                  : (c <= 260 || c == 262))))
              : (c <= 264 || (c < 274
                ? (c < 270
                  ? (c < 268
                    ? c == 266
                    : c <= 268)
                  : (c <= 270 || c == 272))
                : (c <= 274 || (c < 280
                  ? (c < 278
                    ? c == 276
                    : c <= 278)
                  : (c <= 280 || c == 282))))))
            : (c <= 284 || (c < 304
              ? (c < 294
                ? (c < 290
                  ? (c < 288
                    ? c == 286
                    : c <= 288)
                  : (c <= 290 || c == 292))
                : (c <= 294 || (c < 300
                  ? (c < 298
                    ? c == 296
                    : c <= 298)
                  : (c <= 300 || c == 302))))
              : (c <= 304 || (c < 315
                ? (c < 310
                  ? (c < 308
                    ? c == 306
                    : c <= 308)
                  : (c <= 310 || c == 313))
                : (c <= 315 || (c < 319
                  ? c == 317
                  : (c <= 319 || c == 321))))))))
          : (c <= 323 || (c < 362
            ? (c < 344
              ? (c < 334
                ? (c < 330
                  ? (c < 327
                    ? c == 325
                    : c <= 327)
                  : (c <= 330 || c == 332))
                : (c <= 334 || (c < 340
                  ? (c < 338
                    ? c == 336
                    : c <= 338)
                  : (c <= 340 || c == 342))))
              : (c <= 344 || (c < 354
                ? (c < 350
                  ? (c < 348
                    ? c == 346
                    : c <= 348)
                  : (c <= 350 || c == 352))
                : (c <= 354 || (c < 358
                  ? c == 356
                  : (c <= 358 || c == 360))))))
            : (c <= 362 || (c < 385
              ? (c < 372
                ? (c < 368
                  ? (c < 366
                    ? c == 364
                    : c <= 366)
                  : (c <= 368 || c == 370))
                : (c <= 372 || (c < 379
                  ? (c < 376
                    ? c == 374
                    : c <= 377)
                  : (c <= 379 || c == 381))))
              : (c <= 386 || (c < 403
                ? (c < 393
                  ? (c < 390
                    ? c == 388
                    : c <= 391)
                  : (c <= 395 || (c >= 398 && c <= 401)))
                : (c <= 404 || (c < 412
                  ? (c >= 406 && c <= 408)
                  : (c <= 413 || (c >= 415 && c <= 416)))))))))))
        : (c <= 418 || (c < 518
          ? (c < 475
            ? (c < 452
              ? (c < 430
                ? (c < 425
                  ? (c < 422
                    ? c == 420
                    : c <= 423)
                  : (c <= 425 || c == 428))
                : (c <= 431 || (c < 439
                  ? (c < 437
                    ? (c >= 433 && c <= 435)
                    : c <= 437)
                  : (c <= 440 || c == 444))))
              : (c <= 452 || (c < 465
                ? (c < 461
                  ? (c < 458
                    ? c == 455
                    : c <= 458)
                  : (c <= 461 || c == 463))
                : (c <= 465 || (c < 471
                  ? (c < 469
                    ? c == 467
                    : c <= 469)
                  : (c <= 471 || c == 473))))))
            : (c <= 475 || (c < 497
              ? (c < 486
                ? (c < 482
                  ? (c < 480
                    ? c == 478
                    : c <= 480)
                  : (c <= 482 || c == 484))
                : (c <= 486 || (c < 492
                  ? (c < 490
                    ? c == 488
                    : c <= 490)
                  : (c <= 492 || c == 494))))
              : (c <= 497 || (c < 510
                ? (c < 506
                  ? (c < 502
                    ? c == 500
                    : c <= 504)
                  : (c <= 506 || c == 508))
                : (c <= 510 || (c < 514
                  ? c == 512
                  : (c <= 514 || c == 516))))))))
          : (c <= 518 || (c < 556
            ? (c < 538
              ? (c < 528
                ? (c < 524
                  ? (c < 522
                    ? c == 520
                    : c <= 522)
                  : (c <= 524 || c == 526))
                : (c <= 528 || (c < 534
                  ? (c < 532
                    ? c == 530
                    : c <= 532)
                  : (c <= 534 || c == 536))))
              : (c <= 538 || (c < 548
                ? (c < 544
                  ? (c < 542
                    ? c == 540
                    : c <= 542)
                  : (c <= 544 || c == 546))
                : (c <= 548 || (c < 552
                  ? c == 550
                  : (c <= 552 || c == 554))))))
            : (c <= 556 || (c < 588
              ? (c < 573
                ? (c < 562
                  ? (c < 560
                    ? c == 558
                    : c <= 560)
                  : (c <= 562 || (c >= 570 && c <= 571)))
                : (c <= 574 || (c < 584
                  ? (c < 579
                    ? c == 577
                    : c <= 582)
                  : (c <= 584 || c == 586))))
              : (c <= 588 || (c < 895
                ? (c < 882
                  ? (c < 880
                    ? c == 590
                    : c <= 880)
                  : (c <= 882 || c == 886))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : (c <= 906 || c == 908))))))))))))
      : (c <= 911 || (c < 1242
        ? (c < 1164
          ? (c < 1021
            ? (c < 994
              ? (c < 984
                ? (c < 975
                  ? (c < 931
                    ? (c >= 913 && c <= 929)
                    : c <= 939)
                  : (c <= 975 || (c >= 978 && c <= 980)))
                : (c <= 984 || (c < 990
                  ? (c < 988
                    ? c == 986
                    : c <= 988)
                  : (c <= 990 || c == 992))))
              : (c <= 994 || (c < 1004
                ? (c < 1000
                  ? (c < 998
                    ? c == 996
                    : c <= 998)
                  : (c <= 1000 || c == 1002))
                : (c <= 1004 || (c < 1015
                  ? (c < 1012
                    ? c == 1006
                    : c <= 1012)
                  : (c <= 1015 || (c >= 1017 && c <= 1018)))))))
            : (c <= 1071 || (c < 1138
              ? (c < 1128
                ? (c < 1124
                  ? (c < 1122
                    ? c == 1120
                    : c <= 1122)
                  : (c <= 1124 || c == 1126))
                : (c <= 1128 || (c < 1134
                  ? (c < 1132
                    ? c == 1130
                    : c <= 1132)
                  : (c <= 1134 || c == 1136))))
              : (c <= 1138 || (c < 1148
                ? (c < 1144
                  ? (c < 1142
                    ? c == 1140
                    : c <= 1142)
                  : (c <= 1144 || c == 1146))
                : (c <= 1148 || (c < 1152
                  ? c == 1150
                  : (c <= 1152 || c == 1162))))))))
          : (c <= 1164 || (c < 1202
            ? (c < 1184
              ? (c < 1174
                ? (c < 1170
                  ? (c < 1168
                    ? c == 1166
                    : c <= 1168)
                  : (c <= 1170 || c == 1172))
                : (c <= 1174 || (c < 1180
                  ? (c < 1178
                    ? c == 1176
                    : c <= 1178)
                  : (c <= 1180 || c == 1182))))
              : (c <= 1184 || (c < 1194
                ? (c < 1190
                  ? (c < 1188
                    ? c == 1186
                    : c <= 1188)
                  : (c <= 1190 || c == 1192))
                : (c <= 1194 || (c < 1198
                  ? c == 1196
                  : (c <= 1198 || c == 1200))))))
            : (c <= 1202 || (c < 1223
              ? (c < 1212
                ? (c < 1208
                  ? (c < 1206
                    ? c == 1204
                    : c <= 1206)
                  : (c <= 1208 || c == 1210))
                : (c <= 1212 || (c < 1219
                  ? (c < 1216
                    ? c == 1214
                    : c <= 1217)
                  : (c <= 1219 || c == 1221))))
              : (c <= 1223 || (c < 1234
                ? (c < 1229
                  ? (c < 1227
                    ? c == 1225
                    : c <= 1227)
                  : (c <= 1229 || c == 1232))
                : (c <= 1234 || (c < 1238
                  ? c == 1236
                  : (c <= 1238 || c == 1240))))))))))
        : (c <= 1242 || (c < 1318
          ? (c < 1280
            ? (c < 1262
              ? (c < 1252
                ? (c < 1248
                  ? (c < 1246
                    ? c == 1244
                    : c <= 1246)
                  : (c <= 1248 || c == 1250))
                : (c <= 1252 || (c < 1258
                  ? (c < 1256
                    ? c == 1254
                    : c <= 1256)
                  : (c <= 1258 || c == 1260))))
              : (c <= 1262 || (c < 1272
                ? (c < 1268
                  ? (c < 1266
                    ? c == 1264
                    : c <= 1266)
                  : (c <= 1268 || c == 1270))
                : (c <= 1272 || (c < 1276
                  ? c == 1274
                  : (c <= 1276 || c == 1278))))))
            : (c <= 1280 || (c < 1300
              ? (c < 1290
                ? (c < 1286
                  ? (c < 1284
                    ? c == 1282
                    : c <= 1284)
                  : (c <= 1286 || c == 1288))
                : (c <= 1290 || (c < 1296
                  ? (c < 1294
                    ? c == 1292
                    : c <= 1294)
                  : (c <= 1296 || c == 1298))))
              : (c <= 1300 || (c < 1310
                ? (c < 1306
                  ? (c < 1304
                    ? c == 1302
                    : c <= 1304)
                  : (c <= 1306 || c == 1308))
                : (c <= 1310 || (c < 1314
                  ? c == 1312
                  : (c <= 1314 || c == 1316))))))))
          : (c <= 1318 || (c < 7694
            ? (c < 7312
              ? (c < 1329
                ? (c < 1324
                  ? (c < 1322
                    ? c == 1320
                    : c <= 1322)
                  : (c <= 1324 || c == 1326))
                : (c <= 1366 || (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c >= 5024 && c <= 5109)))))
              : (c <= 7354 || (c < 7686
                ? (c < 7682
                  ? (c < 7680
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7680)
                  : (c <= 7682 || c == 7684))
                : (c <= 7686 || (c < 7690
                  ? c == 7688
                  : (c <= 7690 || c == 7692))))))
            : (c <= 7694 || (c < 7714
              ? (c < 7704
                ? (c < 7700
                  ? (c < 7698
                    ? c == 7696
                    : c <= 7698)
                  : (c <= 7700 || c == 7702))
                : (c <= 7704 || (c < 7710
                  ? (c < 7708
                    ? c == 7706
                    : c <= 7708)
                  : (c <= 7710 || c == 7712))))
              : (c <= 7714 || (c < 7724
                ? (c < 7720
                  ? (c < 7718
                    ? c == 7716
                    : c <= 7718)
                  : (c <= 7720 || c == 7722))
                : (c <= 7724 || (c < 7728
                  ? c == 7726
                  : (c <= 7728 || c == 7730))))))))))))))
    : (c <= 7732 || (c < 11428
      ? (c < 7894
        ? (c < 7810
          ? (c < 7772
            ? (c < 7752
              ? (c < 7742
                ? (c < 7738
                  ? (c < 7736
                    ? c == 7734
                    : c <= 7736)
                  : (c <= 7738 || c == 7740))
                : (c <= 7742 || (c < 7748
                  ? (c < 7746
                    ? c == 7744
                    : c <= 7746)
                  : (c <= 7748 || c == 7750))))
              : (c <= 7752 || (c < 7762
                ? (c < 7758
                  ? (c < 7756
                    ? c == 7754
                    : c <= 7756)
                  : (c <= 7758 || c == 7760))
                : (c <= 7762 || (c < 7768
                  ? (c < 7766
                    ? c == 7764
                    : c <= 7766)
                  : (c <= 7768 || c == 7770))))))
            : (c <= 7772 || (c < 7792
              ? (c < 7782
                ? (c < 7778
                  ? (c < 7776
                    ? c == 7774
                    : c <= 7776)
                  : (c <= 7778 || c == 7780))
                : (c <= 7782 || (c < 7788
                  ? (c < 7786
                    ? c == 7784
                    : c <= 7786)
                  : (c <= 7788 || c == 7790))))
              : (c <= 7792 || (c < 7802
                ? (c < 7798
                  ? (c < 7796
                    ? c == 7794
                    : c <= 7796)
                  : (c <= 7798 || c == 7800))
                : (c <= 7802 || (c < 7806
                  ? c == 7804
                  : (c <= 7806 || c == 7808))))))))
          : (c <= 7810 || (c < 7856
            ? (c < 7838
              ? (c < 7820
                ? (c < 7816
                  ? (c < 7814
                    ? c == 7812
                    : c <= 7814)
                  : (c <= 7816 || c == 7818))
                : (c <= 7820 || (c < 7826
                  ? (c < 7824
                    ? c == 7822
                    : c <= 7824)
                  : (c <= 7826 || c == 7828))))
              : (c <= 7838 || (c < 7848
                ? (c < 7844
                  ? (c < 7842
                    ? c == 7840
                    : c <= 7842)
                  : (c <= 7844 || c == 7846))
                : (c <= 7848 || (c < 7852
                  ? c == 7850
                  : (c <= 7852 || c == 7854))))))
            : (c <= 7856 || (c < 7876
              ? (c < 7866
                ? (c < 7862
                  ? (c < 7860
                    ? c == 7858
                    : c <= 7860)
                  : (c <= 7862 || c == 7864))
                : (c <= 7866 || (c < 7872
                  ? (c < 7870
                    ? c == 7868
                    : c <= 7870)
                  : (c <= 7872 || c == 7874))))
              : (c <= 7876 || (c < 7886
                ? (c < 7882
                  ? (c < 7880
                    ? c == 7878
                    : c <= 7880)
                  : (c <= 7882 || c == 7884))
                : (c <= 7886 || (c < 7890
                  ? c == 7888
                  : (c <= 7890 || c == 7892))))))))))
        : (c <= 7894 || (c < 8464
          ? (c < 7934
            ? (c < 7914
              ? (c < 7904
                ? (c < 7900
                  ? (c < 7898
                    ? c == 7896
                    : c <= 7898)
                  : (c <= 7900 || c == 7902))
                : (c <= 7904 || (c < 7910
                  ? (c < 7908
                    ? c == 7906
                    : c <= 7908)
                  : (c <= 7910 || c == 7912))))
              : (c <= 7914 || (c < 7924
                ? (c < 7920
                  ? (c < 7918
                    ? c == 7916
                    : c <= 7918)
                  : (c <= 7920 || c == 7922))
                : (c <= 7924 || (c < 7930
                  ? (c < 7928
                    ? c == 7926
                    : c <= 7928)
                  : (c <= 7930 || c == 7932))))))
            : (c <= 7934 || (c < 8040
              ? (c < 8008
                ? (c < 7976
                  ? (c < 7960
                    ? (c >= 7944 && c <= 7951)
                    : c <= 7965)
                  : (c <= 7983 || (c >= 7992 && c <= 7999)))
                : (c <= 8013 || (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || c == 8031))))
              : (c <= 8047 || (c < 8184
                ? (c < 8152
                  ? (c < 8136
                    ? (c >= 8120 && c <= 8123)
                    : c <= 8139)
                  : (c <= 8155 || (c >= 8168 && c <= 8172)))
                : (c <= 8187 || (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8459 && c <= 8461)))))))))
          : (c <= 8466 || (c < 11381
            ? (c < 8579
              ? (c < 8488
                ? (c < 8484
                  ? (c < 8473
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8510
                  ? (c < 8496
                    ? (c >= 8490 && c <= 8493)
                    : c <= 8499)
                  : (c <= 8511 || c == 8517))))
              : (c <= 8579 || (c < 11369
                ? (c < 11362
                  ? (c < 11360
                    ? (c >= 11264 && c <= 11311)
                    : c <= 11360)
                  : (c <= 11364 || c == 11367))
                : (c <= 11369 || (c < 11373
                  ? c == 11371
                  : (c <= 11376 || c == 11378))))))
            : (c <= 11381 || (c < 11410
              ? (c < 11400
                ? (c < 11396
                  ? (c < 11394
                    ? (c >= 11390 && c <= 11392)
                    : c <= 11394)
                  : (c <= 11396 || c == 11398))
                : (c <= 11400 || (c < 11406
                  ? (c < 11404
                    ? c == 11402
                    : c <= 11404)
                  : (c <= 11406 || c == 11408))))
              : (c <= 11410 || (c < 11420
                ? (c < 11416
                  ? (c < 11414
                    ? c == 11412
                    : c <= 11414)
                  : (c <= 11416 || c == 11418))
                : (c <= 11420 || (c < 11424
                  ? c == 11422
                  : (c <= 11424 || c == 11426))))))))))))
      : (c <= 11428 || (c < 42796
        ? (c < 42568
          ? (c < 11468
            ? (c < 11448
              ? (c < 11438
                ? (c < 11434
                  ? (c < 11432
                    ? c == 11430
                    : c <= 11432)
                  : (c <= 11434 || c == 11436))
                : (c <= 11438 || (c < 11444
                  ? (c < 11442
                    ? c == 11440
                    : c <= 11442)
                  : (c <= 11444 || c == 11446))))
              : (c <= 11448 || (c < 11458
                ? (c < 11454
                  ? (c < 11452
                    ? c == 11450
                    : c <= 11452)
                  : (c <= 11454 || c == 11456))
                : (c <= 11458 || (c < 11464
                  ? (c < 11462
                    ? c == 11460
                    : c <= 11462)
                  : (c <= 11464 || c == 11466))))))
            : (c <= 11468 || (c < 11488
              ? (c < 11478
                ? (c < 11474
                  ? (c < 11472
                    ? c == 11470
                    : c <= 11472)
                  : (c <= 11474 || c == 11476))
                : (c <= 11478 || (c < 11484
                  ? (c < 11482
                    ? c == 11480
                    : c <= 11482)
                  : (c <= 11484 || c == 11486))))
              : (c <= 11488 || (c < 42560
                ? (c < 11501
                  ? (c < 11499
                    ? c == 11490
                    : c <= 11499)
                  : (c <= 11501 || c == 11506))
                : (c <= 42560 || (c < 42564
                  ? c == 42562
                  : (c <= 42564 || c == 42566))))))))
          : (c <= 42568 || (c < 42624
            ? (c < 42588
              ? (c < 42578
                ? (c < 42574
                  ? (c < 42572
                    ? c == 42570
                    : c <= 42572)
                  : (c <= 42574 || c == 42576))
                : (c <= 42578 || (c < 42584
                  ? (c < 42582
                    ? c == 42580
                    : c <= 42582)
                  : (c <= 42584 || c == 42586))))
              : (c <= 42588 || (c < 42598
                ? (c < 42594
                  ? (c < 42592
                    ? c == 42590
                    : c <= 42592)
                  : (c <= 42594 || c == 42596))
                : (c <= 42598 || (c < 42602
                  ? c == 42600
                  : (c <= 42602 || c == 42604))))))
            : (c <= 42624 || (c < 42644
              ? (c < 42634
                ? (c < 42630
                  ? (c < 42628
                    ? c == 42626
                    : c <= 42628)
                  : (c <= 42630 || c == 42632))
                : (c <= 42634 || (c < 42640
                  ? (c < 42638
                    ? c == 42636
                    : c <= 42638)
                  : (c <= 42640 || c == 42642))))
              : (c <= 42644 || (c < 42788
                ? (c < 42650
                  ? (c < 42648
                    ? c == 42646
                    : c <= 42648)
                  : (c <= 42650 || c == 42786))
                : (c <= 42788 || (c < 42792
                  ? c == 42790
                  : (c <= 42792 || c == 42794))))))))))
        : (c <= 42796 || (c < 42884
          ? (c < 42836
            ? (c < 42818
              ? (c < 42808
                ? (c < 42804
                  ? (c < 42802
                    ? c == 42798
                    : c <= 42802)
                  : (c <= 42804 || c == 42806))
                : (c <= 42808 || (c < 42814
                  ? (c < 42812
                    ? c == 42810
                    : c <= 42812)
                  : (c <= 42814 || c == 42816))))
              : (c <= 42818 || (c < 42828
                ? (c < 42824
                  ? (c < 42822
                    ? c == 42820
                    : c <= 42822)
                  : (c <= 42824 || c == 42826))
                : (c <= 42828 || (c < 42832
                  ? c == 42830
                  : (c <= 42832 || c == 42834))))))
            : (c <= 42836 || (c < 42856
              ? (c < 42846
                ? (c < 42842
                  ? (c < 42840
                    ? c == 42838
                    : c <= 42840)
                  : (c <= 42842 || c == 42844))
                : (c <= 42846 || (c < 42852
                  ? (c < 42850
                    ? c == 42848
                    : c <= 42850)
                  : (c <= 42852 || c == 42854))))
              : (c <= 42856 || (c < 42875
                ? (c < 42862
                  ? (c < 42860
                    ? c == 42858
                    : c <= 42860)
                  : (c <= 42862 || c == 42873))
                : (c <= 42875 || (c < 42880
                  ? (c >= 42877 && c <= 42878)
                  : (c <= 42880 || c == 42882))))))))
          : (c <= 42884 || (c < 42936
            ? (c < 42910
              ? (c < 42898
                ? (c < 42893
                  ? (c < 42891
                    ? c == 42886
                    : c <= 42891)
                  : (c <= 42893 || c == 42896))
                : (c <= 42898 || (c < 42906
                  ? (c < 42904
                    ? c == 42902
                    : c <= 42904)
                  : (c <= 42906 || c == 42908))))
              : (c <= 42910 || (c < 42920
                ? (c < 42916
                  ? (c < 42914
                    ? c == 42912
                    : c <= 42914)
                  : (c <= 42916 || c == 42918))
                : (c <= 42920 || (c < 42928
                  ? (c >= 42922 && c <= 42926)
                  : (c <= 42932 || c == 42934))))))
            : (c <= 42936 || (c < 42968
              ? (c < 42946
                ? (c < 42942
                  ? (c < 42940
                    ? c == 42938
                    : c <= 42940)
                  : (c <= 42942 || c == 42944))
                : (c <= 42946 || (c < 42960
                  ? (c < 42953
                    ? (c >= 42948 && c <= 42951)
                    : c <= 42953)
                  : (c <= 42960 || c == 42966))))
              : (c <= 42968 || (c < 66928
                ? (c < 66560
                  ? (c < 65313
                    ? c == 42997
                    : c <= 65338)
                  : (c <= 66599 || (c >= 66736 && c <= 66771)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))))))))))))));
}

static inline bool aux_sym_alphaid_token2_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < '0'
                  ? c == '$'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3389
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6103
            ? (c < 5870
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43261
      ? (c < 11499
        ? (c < 8118
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : c <= 8116)))))))
          : (c <= 8124 || (c < 8458
            ? (c < 8178
              ? (c < 8144
                ? (c < 8130
                  ? c == 8126
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))
                : (c <= 8147 || (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : c <= 8172)))
              : (c <= 8180 || (c < 8336
                ? (c < 8305
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || c == 8319))
                : (c <= 8348 || (c < 8455
                  ? c == 8450
                  : c <= 8455)))))
            : (c <= 8467 || (c < 8495
              ? (c < 8486
                ? (c < 8473
                  ? c == 8469
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8490
                  ? c == 8488
                  : c <= 8493)))
              : (c <= 8505 || (c < 8526
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : c <= 8521)
                : (c <= 8526 || (c < 11264
                  ? (c >= 8544 && c <= 8584)
                  : c <= 11492)))))))))
        : (c <= 11502 || (c < 12704
          ? (c < 11728
            ? (c < 11648
              ? (c < 11565
                ? (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : (c <= 11557 || c == 11559))
                : (c <= 11565 || (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : c <= 11631)))
              : (c <= 11670 || (c < 11704
                ? (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : c <= 11726)))))
            : (c <= 11734 || (c < 12353
              ? (c < 12321
                ? (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11823 || (c >= 12293 && c <= 12295)))
                : (c <= 12329 || (c < 12344
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))
              : (c <= 12438 || (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12735 || (c < 42786
            ? (c < 42240
              ? (c < 19968
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 13312 || c == 19903))
                : (c <= 19968 || (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42735)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66864
          ? (c < 66176
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65856
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65908)))))
            : (c <= 66204 || (c < 66504
              ? (c < 66384
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66736
                ? (c < 66560
                  ? (c >= 66513 && c <= 66517)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_alphaid_token2_character_set_2(int32_t c) {
  return (c < 9280
    ? (c < 3449
      ? (c < 1014
        ? (c < '~'
          ? (c < '<'
            ? (c < '#'
              ? c == '!'
              : (c <= '&' || (c >= '*' && c <= ':')))
            : (c <= '@' || (c < '^'
              ? c == '\\'
              : (c <= '^' || c == '|'))))
          : (c <= '~' || (c < 174
            ? (c < 169
              ? c == 166
              : (c <= 169 || c == 172))
            : (c <= 174 || (c < 215
              ? (c >= 176 && c <= 177)
              : c <= 247)))))
        : (c <= 1154 || (c < 2038
          ? (c < 1758
            ? (c < 1542
              ? (c >= 1421 && c <= 1422)
              : (c <= 1544 || (c >= 1550 && c <= 1551)))
            : (c <= 1758 || (c < 1789
              ? c == 1769
              : c <= 1790)))
          : (c <= 2038 || (c < 3066
            ? (c < 2928
              ? c == 2554
              : (c <= 2928 || (c >= 3059 && c <= 3064)))
            : (c <= 3066 || (c < 3407
              ? c == 3199
              : c <= 3407)))))))
      : (c <= 3449 || (c < 5741
        ? (c < 3896
          ? (c < 3866
            ? (c < 3859
              ? (c >= 3841 && c <= 3843)
              : (c <= 3859 || (c >= 3861 && c <= 3863)))
            : (c <= 3871 || (c < 3894
              ? c == 3892
              : c <= 3894)))
          : (c <= 3896 || (c < 4053
            ? (c < 4039
              ? (c >= 4030 && c <= 4037)
              : (c <= 4044 || (c >= 4046 && c <= 4047)))
            : (c <= 4056 || (c < 5008
              ? (c >= 4254 && c <= 4255)
              : c <= 5017)))))
        : (c <= 5741 || (c < 8314
          ? (c < 7028
            ? (c < 6622
              ? c == 6464
              : (c <= 6655 || (c >= 7009 && c <= 7018)))
            : (c <= 7036 || (c < 8274
              ? c == 8260
              : c <= 8274)))
          : (c <= 8316 || (c < 8592
            ? (c < 8448
              ? (c >= 8330 && c <= 8332)
              : (c <= 8527 || (c >= 8586 && c <= 8587)))
            : (c <= 8967 || (c < 9003
              ? (c >= 8972 && c <= 9000)
              : c <= 9254)))))))))
    : (c <= 9290 || (c < 12992
      ? (c < 12032
        ? (c < 10716
          ? (c < 10183
            ? (c < 9472
              ? (c >= 9372 && c <= 9449)
              : (c <= 10087 || (c >= 10132 && c <= 10180)))
            : (c <= 10213 || (c < 10649
              ? (c >= 10224 && c <= 10626)
              : c <= 10711)))
          : (c <= 10747 || (c < 11856
            ? (c < 11126
              ? (c >= 10750 && c <= 11123)
              : (c <= 11157 || (c >= 11159 && c <= 11498)))
            : (c <= 11857 || (c < 11931
              ? (c >= 11904 && c <= 11929)
              : c <= 12019)))))
        : (c <= 12245 || (c < 12688
          ? (c < 12320
            ? (c < 12292
              ? (c >= 12272 && c <= 12283)
              : (c <= 12292 || (c >= 12306 && c <= 12307)))
            : (c <= 12320 || (c < 12350
              ? (c >= 12342 && c <= 12343)
              : c <= 12351)))
          : (c <= 12689 || (c < 12880
            ? (c < 12800
              ? (c >= 12694 && c <= 12771)
              : (c <= 12830 || (c >= 12842 && c <= 12871)))
            : (c <= 12880 || (c < 12938
              ? (c >= 12896 && c <= 12927)
              : c <= 12976)))))))
      : (c <= 13311 || (c < 65308
        ? (c < 64297
          ? (c < 43062
            ? (c < 42128
              ? (c >= 19904 && c <= 19967)
              : (c <= 42182 || (c >= 43048 && c <= 43051)))
            : (c <= 43063 || (c < 43639
              ? c == 43065
              : c <= 43641)))
          : (c <= 64297 || (c < 65122
            ? (c < 64975
              ? (c >= 64832 && c <= 64847)
              : (c <= 64975 || (c >= 65021 && c <= 65023)))
            : (c <= 65122 || (c < 65291
              ? (c >= 65124 && c <= 65126)
              : c <= 65291)))))
        : (c <= 65310 || (c < 65847
          ? (c < 65508
            ? (c < 65374
              ? c == 65372
              : (c <= 65374 || c == 65506))
            : (c <= 65508 || (c < 65532
              ? (c >= 65512 && c <= 65518)
              : c <= 65533)))
          : (c <= 65855 || (c < 65952
            ? (c < 65932
              ? (c >= 65913 && c <= 65929)
              : (c <= 65934 || (c >= 65936 && c <= 65948)))
            : (c <= 65952 || (c < 67703
              ? (c >= 66000 && c <= 66044)
              : c <= 67704)))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(68);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == 'D') ADVANCE(79);
      if (lookahead == 'E') ADVANCE(73);
      if (lookahead == 'F') ADVANCE(76);
      if (lookahead == 'L') ADVANCE(66);
      if (lookahead == 'X') ADVANCE(71);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'x') ADVANCE(70);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '}') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'C')) ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (aux_sym_varid_token2_character_set_1(lookahead)) ADVANCE(58);
      if (aux_sym_varid_token1_character_set_1(lookahead)) ADVANCE(57);
      if (aux_sym_varid_token2_character_set_2(lookahead)) ADVANCE(58);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(27)
      if (sym_printable_char_character_set_1(lookahead)) ADVANCE(54);
      if (lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ';') ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      if (('$' <= lookahead && lookahead <= '_')) ADVANCE(51);
      if (aux_sym_alphaid_token1_character_set_1(lookahead)) ADVANCE(62);
      if (aux_sym_varid_token1_character_set_2(lookahead)) ADVANCE(57);
      if (aux_sym_varid_token4_character_set_1(lookahead)) ADVANCE(61);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(84);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '/') ADVANCE(87);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'D') ADVANCE(79);
      if (lookahead == 'E') ADVANCE(73);
      if (lookahead == 'F') ADVANCE(76);
      if (lookahead == 'L') ADVANCE(66);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(86);
      END_STATE();
    case 10:
      if (lookahead == 'L') ADVANCE(66);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(55);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 27:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (aux_sym_alphaid_token1_character_set_2(lookahead)) ADVANCE(62);
      if (aux_sym_varid_token1_character_set_3(lookahead)) ADVANCE(57);
      if (aux_sym_varid_token4_character_set_2(lookahead)) ADVANCE(61);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 31:
      if (eof) ADVANCE(34);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(68);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == 'D') ADVANCE(79);
      if (lookahead == 'E') ADVANCE(73);
      if (lookahead == 'F') ADVANCE(76);
      if (lookahead == 'L') ADVANCE(66);
      if (lookahead == 'X') ADVANCE(71);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'x') ADVANCE(70);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '}') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'C')) ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (aux_sym_varid_token2_character_set_1(lookahead)) ADVANCE(58);
      if (aux_sym_varid_token1_character_set_1(lookahead)) ADVANCE(57);
      if (aux_sym_varid_token2_character_set_2(lookahead)) ADVANCE(58);
      END_STATE();
    case 32:
      if (eof) ADVANCE(34);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '0') ADVANCE(68);
      if (lookahead == 'D') ADVANCE(79);
      if (lookahead == 'E') ADVANCE(73);
      if (lookahead == 'F') ADVANCE(76);
      if (lookahead == 'L') ADVANCE(66);
      if (lookahead == 'X') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '0') ADVANCE(68);
      if (lookahead == 'D') ADVANCE(79);
      if (lookahead == 'E') ADVANCE(73);
      if (lookahead == 'F') ADVANCE(76);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_unicode_escape);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_printable_char);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_printable_char);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(55);
      if (aux_sym_varid_token4_character_set_3(lookahead)) ADVANCE(61);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_printable_char);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_printable_char);
      if (aux_sym_varid_token4_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_char_escape_seq);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_char_escape_seq);
      if (aux_sym_varid_token4_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_varid_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_varid_token2);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_varid_token3);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_varid_token4);
      if (aux_sym_varid_token4_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_alphaid_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_alphaid_token2);
      if (lookahead == '_') ADVANCE(64);
      if (aux_sym_alphaid_token2_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_alphaid_token2);
      if (lookahead == '_') ADVANCE(64);
      if (aux_sym_alphaid_token2_character_set_1(lookahead)) ADVANCE(63);
      if (aux_sym_alphaid_token2_character_set_2(lookahead)) ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_alphaid_token2);
      if (aux_sym_varid_token4_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_L);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_decimal_numeral_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_hex_numeral_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 33},
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 33},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 32},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 32},
  [23] = {.lex_state = 32},
  [24] = {.lex_state = 32},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 32},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 32},
  [29] = {.lex_state = 32},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 32},
  [32] = {.lex_state = 32},
  [33] = {.lex_state = 32},
  [34] = {.lex_state = 32},
  [35] = {.lex_state = 32},
  [36] = {.lex_state = 32},
  [37] = {.lex_state = 32},
  [38] = {.lex_state = 32},
  [39] = {.lex_state = 32},
  [40] = {.lex_state = 32},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 32},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 32},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 63},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_unicode_escape] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_char_escape_seq] = ACTIONS(1),
    [aux_sym_varid_token1] = ACTIONS(1),
    [aux_sym_varid_token2] = ACTIONS(1),
    [aux_sym_varid_token3] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [aux_sym_alphaid_token1] = ACTIONS(1),
    [anon_sym_L] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [aux_sym_decimal_numeral_token1] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_X] = ACTIONS(1),
    [aux_sym_hex_numeral_token1] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_F] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(72),
    [sym__literal] = STATE(2),
    [sym_symbol_literal] = STATE(2),
    [sym__simple_literal] = STATE(2),
    [sym_integer_literal] = STATE(2),
    [sym_decimal_numeral] = STATE(30),
    [sym_hex_numeral] = STATE(69),
    [sym_floating_point_literal] = STATE(2),
    [sym_boolean_literal] = STATE(2),
    [sym_character_literal] = STATE(2),
    [sym_string_literal] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [sym_null_literal] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_0] = ACTIONS(15),
    [aux_sym_decimal_numeral_token1] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(15), 1,
      anon_sym_0,
    ACTIONS(17), 1,
      aux_sym_decimal_numeral_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_null_literal,
    STATE(30), 1,
      sym_decimal_numeral,
    STATE(69), 1,
      sym_hex_numeral,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 9,
      sym__literal,
      sym_symbol_literal,
      sym__simple_literal,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      aux_sym_source_file_repeat1,
  [49] = 10,
    ACTIONS(31), 1,
      aux_sym_varid_token3,
    ACTIONS(33), 1,
      anon_sym__,
    ACTIONS(39), 1,
      anon_sym_f,
    STATE(17), 1,
      sym_exponent_part,
    STATE(23), 1,
      sym_float_type,
    STATE(63), 1,
      aux_sym_decimal_numeral_repeat1,
    ACTIONS(29), 2,
      anon_sym_DQUOTE,
      aux_sym_decimal_numeral_token1,
    ACTIONS(35), 2,
      anon_sym_E,
      anon_sym_e,
    ACTIONS(37), 3,
      anon_sym_F,
      anon_sym_D,
      anon_sym_d,
    ACTIONS(27), 9,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [92] = 10,
    ACTIONS(39), 1,
      anon_sym_f,
    ACTIONS(45), 1,
      aux_sym_varid_token3,
    ACTIONS(47), 1,
      anon_sym__,
    STATE(18), 1,
      sym_exponent_part,
    STATE(39), 1,
      sym_float_type,
    STATE(66), 1,
      aux_sym_decimal_numeral_repeat1,
    ACTIONS(35), 2,
      anon_sym_E,
      anon_sym_e,
    ACTIONS(43), 2,
      anon_sym_DQUOTE,
      aux_sym_decimal_numeral_token1,
    ACTIONS(37), 3,
      anon_sym_F,
      anon_sym_D,
      anon_sym_d,
    ACTIONS(41), 9,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [135] = 13,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(54), 1,
      sym_null_literal,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_DOT,
    ACTIONS(66), 1,
      anon_sym_0,
    ACTIONS(69), 1,
      aux_sym_decimal_numeral_token1,
    ACTIONS(75), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(30), 1,
      sym_decimal_numeral,
    STATE(69), 1,
      sym_hex_numeral,
    ACTIONS(72), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 9,
      sym__literal,
      sym_symbol_literal,
      sym__simple_literal,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      aux_sym_source_file_repeat1,
  [184] = 9,
    ACTIONS(39), 1,
      anon_sym_f,
    ACTIONS(82), 1,
      aux_sym_varid_token3,
    ACTIONS(84), 1,
      anon_sym__,
    STATE(15), 1,
      sym_exponent_part,
    STATE(31), 1,
      sym_float_type,
    ACTIONS(35), 2,
      anon_sym_E,
      anon_sym_e,
    ACTIONS(80), 2,
      anon_sym_DQUOTE,
      aux_sym_decimal_numeral_token1,
    ACTIONS(37), 3,
      anon_sym_F,
      anon_sym_D,
      anon_sym_d,
    ACTIONS(78), 9,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [224] = 9,
    ACTIONS(39), 1,
      anon_sym_f,
    ACTIONS(82), 1,
      aux_sym_varid_token3,
    ACTIONS(84), 1,
      anon_sym__,
    STATE(16), 1,
      sym_exponent_part,
    STATE(29), 1,
      sym_float_type,
    ACTIONS(35), 2,
      anon_sym_E,
      anon_sym_e,
    ACTIONS(88), 2,
      anon_sym_DQUOTE,
      aux_sym_decimal_numeral_token1,
    ACTIONS(37), 3,
      anon_sym_F,
      anon_sym_D,
      anon_sym_d,
    ACTIONS(86), 9,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [264] = 9,
    ACTIONS(39), 1,
      anon_sym_f,
    ACTIONS(82), 1,
      aux_sym_varid_token3,
    ACTIONS(84), 1,
      anon_sym__,
    STATE(17), 1,
      sym_exponent_part,
    STATE(23), 1,
      sym_float_type,
    ACTIONS(29), 2,
      anon_sym_DQUOTE,
      aux_sym_decimal_numeral_token1,
    ACTIONS(35), 2,
      anon_sym_E,
      anon_sym_e,
    ACTIONS(37), 3,
      anon_sym_F,
      anon_sym_D,
      anon_sym_d,
    ACTIONS(27), 9,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [304] = 5,
    ACTIONS(94), 1,
      aux_sym_varid_token3,
    ACTIONS(96), 1,
      anon_sym__,
    STATE(58), 1,
      aux_sym_decimal_numeral_repeat1,
    ACTIONS(92), 3,
      anon_sym_DQUOTE,
      aux_sym_decimal_numeral_token1,
      anon_sym_f,
    ACTIONS(90), 12,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      anon_sym_F,
      anon_sym_D,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [333] = 5,
    ACTIONS(102), 1,
      aux_sym_varid_token3,
    ACTIONS(104), 1,
      anon_sym__,
    STATE(54), 1,
      aux_sym_decimal_numeral_repeat1,
    ACTIONS(100), 3,
      anon_sym_DQUOTE,
      aux_sym_decimal_numeral_token1,
      anon_sym_f,
    ACTIONS(98), 12,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      anon_sym_F,
      anon_sym_D,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [362] = 4,
    ACTIONS(82), 1,
      aux_sym_varid_token3,
    ACTIONS(84), 1,
      anon_sym__,
    ACTIONS(108), 3,
      anon_sym_DQUOTE,
      aux_sym_decimal_numeral_token1,
      anon_sym_f,
    ACTIONS(106), 12,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      anon_sym_F,
      anon_sym_D,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [388] = 4,
    ACTIONS(82), 1,
      aux_sym_varid_token3,
    ACTIONS(84), 1,
      anon_sym__,
    ACTIONS(112), 3,
      anon_sym_DQUOTE,
      aux_sym_decimal_numeral_token1,
      anon_sym_f,
    ACTIONS(110), 12,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      anon_sym_F,
      anon_sym_D,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [414] = 4,
    ACTIONS(82), 1,
      aux_sym_varid_token3,
    ACTIONS(84), 1,
      anon_sym__,
    ACTIONS(92), 3,
      anon_sym_DQUOTE,
      aux_sym_decimal_numeral_token1,
      anon_sym_f,
    ACTIONS(90), 12,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      anon_sym_F,
      anon_sym_D,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [440] = 5,
    ACTIONS(39), 1,
      anon_sym_f,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym_float_type,
    ACTIONS(37), 3,
      anon_sym_F,
      anon_sym_D,
      anon_sym_d,
    ACTIONS(41), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      aux_sym_decimal_numeral_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [467] = 5,
    ACTIONS(39), 1,
      anon_sym_f,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym_float_type,
    ACTIONS(37), 3,
      anon_sym_F,
      anon_sym_D,
      anon_sym_d,
    ACTIONS(114), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      aux_sym_decimal_numeral_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [494] = 5,
    ACTIONS(39), 1,
      anon_sym_f,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      sym_float_type,
    ACTIONS(37), 3,
      anon_sym_F,
      anon_sym_D,
      anon_sym_d,
    ACTIONS(78), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      aux_sym_decimal_numeral_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [521] = 5,
    ACTIONS(39), 1,
      anon_sym_f,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_float_type,
    ACTIONS(37), 3,
      anon_sym_F,
      anon_sym_D,
      anon_sym_d,
    ACTIONS(86), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      aux_sym_decimal_numeral_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [548] = 5,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f,
    STATE(23), 1,
      sym_float_type,
    ACTIONS(37), 3,
      anon_sym_F,
      anon_sym_D,
      anon_sym_d,
    ACTIONS(27), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      aux_sym_decimal_numeral_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [575] = 4,
    ACTIONS(120), 1,
      aux_sym_varid_token3,
    ACTIONS(122), 1,
      anon_sym__,
    STATE(55), 1,
      aux_sym_decimal_numeral_repeat1,
    ACTIONS(118), 9,
      anon_sym_DOT,
      anon_sym_L,
      anon_sym_l,
      anon_sym_E,
      anon_sym_e,
      anon_sym_F,
      anon_sym_f,
      anon_sym_D,
      anon_sym_d,
  [596] = 2,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      aux_sym_decimal_numeral_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [612] = 2,
    ACTIONS(84), 2,
      aux_sym_varid_token3,
      anon_sym__,
    ACTIONS(128), 9,
      anon_sym_DOT,
      anon_sym_L,
      anon_sym_l,
      anon_sym_E,
      anon_sym_e,
      anon_sym_F,
      anon_sym_f,
      anon_sym_D,
      anon_sym_d,
  [628] = 2,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(130), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      aux_sym_decimal_numeral_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [644] = 2,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      aux_sym_decimal_numeral_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [660] = 2,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      aux_sym_decimal_numeral_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [676] = 2,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      aux_sym_decimal_numeral_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [692] = 2,
    ACTIONS(144), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      aux_sym_decimal_numeral_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [708] = 2,
    ACTIONS(84), 2,
      aux_sym_varid_token3,
      anon_sym__,
    ACTIONS(146), 9,
      anon_sym_DOT,
      anon_sym_L,
      anon_sym_l,
      anon_sym_E,
      anon_sym_e,
      anon_sym_F,
      anon_sym_f,
      anon_sym_D,
      anon_sym_d,
  [724] = 2,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      aux_sym_decimal_numeral_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [740] = 2,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      aux_sym_decimal_numeral_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [756] = 6,
    ACTIONS(152), 1,
      anon_sym_DOT,
    STATE(14), 1,
      sym_exponent_part,
    STATE(36), 1,
      sym_float_type,
    ACTIONS(35), 2,
      anon_sym_E,
      anon_sym_e,
    ACTIONS(154), 2,
      anon_sym_L,
      anon_sym_l,
    ACTIONS(37), 4,
      anon_sym_F,
      anon_sym_f,
      anon_sym_D,
      anon_sym_d,
  [780] = 2,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      aux_sym_decimal_numeral_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [796] = 2,
    ACTIONS(156), 2,
      anon_sym_x,
      anon_sym_X,
    ACTIONS(118), 9,
      anon_sym_DOT,
      anon_sym_L,
      anon_sym_l,
      anon_sym_E,
      anon_sym_e,
      anon_sym_F,
      anon_sym_f,
      anon_sym_D,
      anon_sym_d,
  [812] = 2,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      aux_sym_decimal_numeral_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [828] = 2,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(162), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      aux_sym_decimal_numeral_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [844] = 2,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      aux_sym_decimal_numeral_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [860] = 2,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      aux_sym_decimal_numeral_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [876] = 2,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      aux_sym_decimal_numeral_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [892] = 2,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    ACTIONS(174), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      aux_sym_decimal_numeral_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [908] = 2,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      aux_sym_decimal_numeral_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [924] = 2,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_0,
      aux_sym_decimal_numeral_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [940] = 5,
    ACTIONS(186), 1,
      aux_sym_varid_token4,
    STATE(28), 1,
      sym_plainid,
    STATE(40), 1,
      sym_alphaid,
    ACTIONS(182), 2,
      sym_printable_char,
      sym_char_escape_seq,
    ACTIONS(184), 2,
      aux_sym_varid_token1,
      aux_sym_alphaid_token1,
  [958] = 6,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(15), 1,
      anon_sym_0,
    ACTIONS(17), 1,
      aux_sym_decimal_numeral_token1,
    STATE(30), 1,
      sym_decimal_numeral,
    STATE(69), 1,
      sym_hex_numeral,
    STATE(22), 2,
      sym_integer_literal,
      sym_floating_point_literal,
  [978] = 4,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_printable_char,
    ACTIONS(188), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
    STATE(43), 2,
      sym_string_element,
      aux_sym_string_literal_repeat1,
  [993] = 4,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      sym_printable_char,
    ACTIONS(196), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
    STATE(45), 2,
      sym_string_element,
      aux_sym_string_literal_repeat1,
  [1008] = 4,
    ACTIONS(200), 1,
      sym_printable_char,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
    STATE(43), 2,
      sym_string_element,
      aux_sym_string_literal_repeat1,
  [1023] = 4,
    ACTIONS(204), 1,
      anon_sym__,
    ACTIONS(208), 1,
      aux_sym_hex_numeral_token1,
    STATE(59), 1,
      aux_sym_hex_numeral_repeat1,
    ACTIONS(206), 2,
      anon_sym_L,
      anon_sym_l,
  [1037] = 5,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      sym_char,
    ACTIONS(214), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(50), 1,
      aux_sym_string_literal_repeat2,
    STATE(65), 1,
      aux_sym_string_literal_repeat3,
  [1053] = 5,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(216), 1,
      sym_char,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(47), 1,
      aux_sym_string_literal_repeat2,
    STATE(57), 1,
      aux_sym_string_literal_repeat3,
  [1069] = 2,
    ACTIONS(220), 2,
      anon_sym__,
      aux_sym_hex_numeral_token1,
    ACTIONS(222), 2,
      anon_sym_L,
      anon_sym_l,
  [1078] = 4,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym_char,
    ACTIONS(230), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(50), 1,
      aux_sym_string_literal_repeat2,
  [1091] = 2,
    ACTIONS(220), 2,
      anon_sym__,
      aux_sym_hex_numeral_token1,
    ACTIONS(232), 2,
      anon_sym_L,
      anon_sym_l,
  [1100] = 2,
    ACTIONS(234), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
    ACTIONS(236), 2,
      anon_sym_DQUOTE,
      sym_printable_char,
  [1109] = 2,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 2,
      sym_char,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1117] = 3,
    ACTIONS(240), 1,
      aux_sym_varid_token3,
    ACTIONS(242), 1,
      anon_sym__,
    STATE(67), 1,
      aux_sym_decimal_numeral_repeat1,
  [1127] = 3,
    ACTIONS(242), 1,
      anon_sym__,
    ACTIONS(244), 1,
      aux_sym_varid_token3,
    STATE(67), 1,
      aux_sym_decimal_numeral_repeat1,
  [1137] = 3,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      sym_char,
    ACTIONS(251), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1147] = 3,
    ACTIONS(214), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym_string_literal_repeat3,
  [1157] = 3,
    ACTIONS(242), 1,
      anon_sym__,
    ACTIONS(255), 1,
      aux_sym_varid_token3,
    STATE(67), 1,
      aux_sym_decimal_numeral_repeat1,
  [1167] = 3,
    ACTIONS(257), 1,
      anon_sym__,
    ACTIONS(259), 1,
      aux_sym_hex_numeral_token1,
    STATE(64), 1,
      aux_sym_hex_numeral_repeat1,
  [1177] = 2,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 2,
      sym_char,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1185] = 2,
    ACTIONS(267), 1,
      aux_sym_varid_token3,
    ACTIONS(265), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [1193] = 3,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(272), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(62), 1,
      aux_sym_string_literal_repeat3,
  [1203] = 3,
    ACTIONS(242), 1,
      anon_sym__,
    ACTIONS(274), 1,
      aux_sym_varid_token3,
    STATE(67), 1,
      aux_sym_decimal_numeral_repeat1,
  [1213] = 2,
    STATE(64), 1,
      aux_sym_hex_numeral_repeat1,
    ACTIONS(276), 2,
      anon_sym__,
      aux_sym_hex_numeral_token1,
  [1221] = 3,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(62), 1,
      aux_sym_string_literal_repeat3,
  [1231] = 3,
    ACTIONS(242), 1,
      anon_sym__,
    ACTIONS(281), 1,
      aux_sym_varid_token3,
    STATE(67), 1,
      aux_sym_decimal_numeral_repeat1,
  [1241] = 2,
    STATE(67), 1,
      aux_sym_decimal_numeral_repeat1,
    ACTIONS(283), 2,
      aux_sym_varid_token3,
      anon_sym__,
  [1249] = 2,
    ACTIONS(249), 1,
      sym_char,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
  [1256] = 1,
    ACTIONS(154), 2,
      anon_sym_L,
      anon_sym_l,
  [1261] = 1,
    ACTIONS(288), 1,
      sym_char,
  [1265] = 1,
    ACTIONS(290), 1,
      anon_sym_SQUOTE,
  [1269] = 1,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
  [1273] = 1,
    ACTIONS(294), 1,
      aux_sym_varid_token3,
  [1277] = 1,
    ACTIONS(296), 1,
      aux_sym_hex_numeral_token1,
  [1281] = 1,
    ACTIONS(298), 1,
      aux_sym_varid_token3,
  [1285] = 1,
    ACTIONS(300), 1,
      aux_sym_varid_token3,
  [1289] = 1,
    ACTIONS(302), 1,
      aux_sym_alphaid_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 184,
  [SMALL_STATE(7)] = 224,
  [SMALL_STATE(8)] = 264,
  [SMALL_STATE(9)] = 304,
  [SMALL_STATE(10)] = 333,
  [SMALL_STATE(11)] = 362,
  [SMALL_STATE(12)] = 388,
  [SMALL_STATE(13)] = 414,
  [SMALL_STATE(14)] = 440,
  [SMALL_STATE(15)] = 467,
  [SMALL_STATE(16)] = 494,
  [SMALL_STATE(17)] = 521,
  [SMALL_STATE(18)] = 548,
  [SMALL_STATE(19)] = 575,
  [SMALL_STATE(20)] = 596,
  [SMALL_STATE(21)] = 612,
  [SMALL_STATE(22)] = 628,
  [SMALL_STATE(23)] = 644,
  [SMALL_STATE(24)] = 660,
  [SMALL_STATE(25)] = 676,
  [SMALL_STATE(26)] = 692,
  [SMALL_STATE(27)] = 708,
  [SMALL_STATE(28)] = 724,
  [SMALL_STATE(29)] = 740,
  [SMALL_STATE(30)] = 756,
  [SMALL_STATE(31)] = 780,
  [SMALL_STATE(32)] = 796,
  [SMALL_STATE(33)] = 812,
  [SMALL_STATE(34)] = 828,
  [SMALL_STATE(35)] = 844,
  [SMALL_STATE(36)] = 860,
  [SMALL_STATE(37)] = 876,
  [SMALL_STATE(38)] = 892,
  [SMALL_STATE(39)] = 908,
  [SMALL_STATE(40)] = 924,
  [SMALL_STATE(41)] = 940,
  [SMALL_STATE(42)] = 958,
  [SMALL_STATE(43)] = 978,
  [SMALL_STATE(44)] = 993,
  [SMALL_STATE(45)] = 1008,
  [SMALL_STATE(46)] = 1023,
  [SMALL_STATE(47)] = 1037,
  [SMALL_STATE(48)] = 1053,
  [SMALL_STATE(49)] = 1069,
  [SMALL_STATE(50)] = 1078,
  [SMALL_STATE(51)] = 1091,
  [SMALL_STATE(52)] = 1100,
  [SMALL_STATE(53)] = 1109,
  [SMALL_STATE(54)] = 1117,
  [SMALL_STATE(55)] = 1127,
  [SMALL_STATE(56)] = 1137,
  [SMALL_STATE(57)] = 1147,
  [SMALL_STATE(58)] = 1157,
  [SMALL_STATE(59)] = 1167,
  [SMALL_STATE(60)] = 1177,
  [SMALL_STATE(61)] = 1185,
  [SMALL_STATE(62)] = 1193,
  [SMALL_STATE(63)] = 1203,
  [SMALL_STATE(64)] = 1213,
  [SMALL_STATE(65)] = 1221,
  [SMALL_STATE(66)] = 1231,
  [SMALL_STATE(67)] = 1241,
  [SMALL_STATE(68)] = 1249,
  [SMALL_STATE(69)] = 1256,
  [SMALL_STATE(70)] = 1261,
  [SMALL_STATE(71)] = 1265,
  [SMALL_STATE(72)] = 1269,
  [SMALL_STATE(73)] = 1273,
  [SMALL_STATE(74)] = 1277,
  [SMALL_STATE(75)] = 1281,
  [SMALL_STATE(76)] = 1285,
  [SMALL_STATE(77)] = 1289,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 5),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 5),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decimal_numeral_repeat1, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decimal_numeral_repeat1, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 4),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent_part, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent_part, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent_part, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent_part, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent_part, 5),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent_part, 5),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent_part, 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent_part, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 6),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 6),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_numeral, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_numeral, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_literal, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_literal, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 4),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 7),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 7),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_numeral, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_literal, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_literal, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_type, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_type, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_literal, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_literal, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alphaid, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alphaid, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plainid, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plainid, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(52),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(52),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_numeral, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hex_numeral_repeat1, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_numeral, 5),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(68),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(50),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_numeral, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_element, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_element, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat3, 1), SHIFT(70),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat3, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat2, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat3, 2), SHIFT_REPEAT(62),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat3, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_numeral_repeat1, 2), SHIFT_REPEAT(64),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decimal_numeral_repeat1, 2), SHIFT_REPEAT(67),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [292] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_scala(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
