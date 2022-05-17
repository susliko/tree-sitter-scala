#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
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
  sym_char_escape_seq = 16,
  aux_sym_plainid_token1 = 17,
  aux_sym_plainid_token2 = 18,
  aux_sym_plainid_token3 = 19,
  aux_sym_plainid_token4 = 20,
  aux_sym_varid_token1 = 21,
  aux_sym_varid_token2 = 22,
  anon_sym__ = 23,
  anon_sym_L = 24,
  anon_sym_l = 25,
  anon_sym_0 = 26,
  anon_sym_1 = 27,
  anon_sym_2 = 28,
  anon_sym_3 = 29,
  anon_sym_4 = 30,
  anon_sym_5 = 31,
  anon_sym_6 = 32,
  anon_sym_7 = 33,
  anon_sym_8 = 34,
  anon_sym_9 = 35,
  aux_sym_decimal_numeral_token1 = 36,
  anon_sym_x = 37,
  anon_sym_X = 38,
  aux_sym_hex_numeral_token1 = 39,
  aux_sym_hex_numeral_token2 = 40,
  anon_sym_DOT2 = 41,
  aux_sym_floating_point_literal_token1 = 42,
  aux_sym_exponent_part_token1 = 43,
  aux_sym_exponent_part_token2 = 44,
  sym__float_type = 45,
  anon_sym_true = 46,
  anon_sym_false = 47,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 48,
  aux_sym_string_literal_token1 = 49,
  aux_sym_char_element_token1 = 50,
  anon_sym_SLASH_STAR = 51,
  anon_sym_STAR_SLASH = 52,
  anon_sym_SLASH_SLASH = 53,
  aux_sym_comment_token1 = 54,
  sym_source_file = 55,
  sym__literal = 56,
  sym_symbol_literal = 57,
  sym__simple_literal = 58,
  sym_id = 59,
  sym_integer_literal = 60,
  sym_hex_numeral = 61,
  sym_floating_point_literal = 62,
  sym_boolean_literal = 63,
  sym_character_literal = 64,
  sym_string_literal = 65,
  sym_comment = 66,
  aux_sym_source_file_repeat1 = 67,
  aux_sym_symbol_literal_repeat1 = 68,
  aux_sym_string_literal_repeat1 = 69,
  aux_sym_string_literal_repeat2 = 70,
  aux_sym_string_literal_repeat3 = 71,
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
  [sym_char_escape_seq] = "char_escape_seq",
  [aux_sym_plainid_token1] = "plainid_token1",
  [aux_sym_plainid_token2] = "plainid_token2",
  [aux_sym_plainid_token3] = "plainid_token3",
  [aux_sym_plainid_token4] = "plainid_token4",
  [aux_sym_varid_token1] = "varid_token1",
  [aux_sym_varid_token2] = "varid_token2",
  [anon_sym__] = "_",
  [anon_sym_L] = "L",
  [anon_sym_l] = "l",
  [anon_sym_0] = "0",
  [anon_sym_1] = "1",
  [anon_sym_2] = "2",
  [anon_sym_3] = "3",
  [anon_sym_4] = "4",
  [anon_sym_5] = "5",
  [anon_sym_6] = "6",
  [anon_sym_7] = "7",
  [anon_sym_8] = "8",
  [anon_sym_9] = "9",
  [aux_sym_decimal_numeral_token1] = "decimal_numeral_token1",
  [anon_sym_x] = "x",
  [anon_sym_X] = "X",
  [aux_sym_hex_numeral_token1] = "hex_numeral_token1",
  [aux_sym_hex_numeral_token2] = "hex_numeral_token2",
  [anon_sym_DOT2] = ".",
  [aux_sym_floating_point_literal_token1] = "floating_point_literal_token1",
  [aux_sym_exponent_part_token1] = "exponent_part_token1",
  [aux_sym_exponent_part_token2] = "exponent_part_token2",
  [sym__float_type] = "_float_type",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [aux_sym_char_element_token1] = "char_element_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_source_file] = "source_file",
  [sym__literal] = "_literal",
  [sym_symbol_literal] = "symbol_literal",
  [sym__simple_literal] = "_simple_literal",
  [sym_id] = "id",
  [sym_integer_literal] = "integer_literal",
  [sym_hex_numeral] = "hex_numeral",
  [sym_floating_point_literal] = "floating_point_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_character_literal] = "character_literal",
  [sym_string_literal] = "string_literal",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_symbol_literal_repeat1] = "symbol_literal_repeat1",
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
  [sym_char_escape_seq] = sym_char_escape_seq,
  [aux_sym_plainid_token1] = aux_sym_plainid_token1,
  [aux_sym_plainid_token2] = aux_sym_plainid_token2,
  [aux_sym_plainid_token3] = aux_sym_plainid_token3,
  [aux_sym_plainid_token4] = aux_sym_plainid_token4,
  [aux_sym_varid_token1] = aux_sym_varid_token1,
  [aux_sym_varid_token2] = aux_sym_varid_token2,
  [anon_sym__] = anon_sym__,
  [anon_sym_L] = anon_sym_L,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_8] = anon_sym_8,
  [anon_sym_9] = anon_sym_9,
  [aux_sym_decimal_numeral_token1] = aux_sym_decimal_numeral_token1,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_X] = anon_sym_X,
  [aux_sym_hex_numeral_token1] = aux_sym_hex_numeral_token1,
  [aux_sym_hex_numeral_token2] = aux_sym_hex_numeral_token2,
  [anon_sym_DOT2] = anon_sym_DOT,
  [aux_sym_floating_point_literal_token1] = aux_sym_floating_point_literal_token1,
  [aux_sym_exponent_part_token1] = aux_sym_exponent_part_token1,
  [aux_sym_exponent_part_token2] = aux_sym_exponent_part_token2,
  [sym__float_type] = sym__float_type,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [aux_sym_char_element_token1] = aux_sym_char_element_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_source_file] = sym_source_file,
  [sym__literal] = sym__literal,
  [sym_symbol_literal] = sym_symbol_literal,
  [sym__simple_literal] = sym__simple_literal,
  [sym_id] = sym_id,
  [sym_integer_literal] = sym_integer_literal,
  [sym_hex_numeral] = sym_hex_numeral,
  [sym_floating_point_literal] = sym_floating_point_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_character_literal] = sym_character_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_symbol_literal_repeat1] = aux_sym_symbol_literal_repeat1,
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
  [sym_char_escape_seq] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_plainid_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_plainid_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_plainid_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_plainid_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_varid_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_varid_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
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
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_9] = {
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
  [aux_sym_hex_numeral_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_floating_point_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exponent_part_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exponent_part_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__float_type] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_element_token1] = {
    .visible = false,
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
  [aux_sym_comment_token1] = {
    .visible = false,
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
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbol_literal_repeat1] = {
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

static inline bool aux_sym_plainid_token1_character_set_1(int32_t c) {
  return (c < 7734
    ? (c < 913
      ? (c < 420
        ? (c < 325
          ? (c < 286
            ? (c < 266
              ? (c < 256
                ? (c < 192
                  ? (c < 'A'
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

static inline bool aux_sym_plainid_token1_character_set_2(int32_t c) {
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

static inline bool aux_sym_plainid_token2_character_set_1(int32_t c) {
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

static inline bool aux_sym_plainid_token3_character_set_1(int32_t c) {
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

static inline bool aux_sym_plainid_token3_character_set_2(int32_t c) {
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

static inline bool aux_sym_plainid_token4_character_set_1(int32_t c) {
  return (c < 9372
    ? (c < 3841
      ? (c < 1421
        ? (c < 166
          ? (c < '\\'
            ? (c < '*'
              ? (c >= '!' && c <= '&')
              : (c <= ':' || (c >= '<' && c <= '@')))
            : (c <= '\\' || (c < '|'
              ? c == '^'
              : (c <= '|' || c == '~'))))
          : (c <= 166 || (c < 176
            ? (c < 172
              ? c == 169
              : (c <= 172 || c == 174))
            : (c <= 177 || (c < 1014
              ? (c >= 215 && c <= 247)
              : c <= 1154)))))
        : (c <= 1422 || (c < 2554
          ? (c < 1769
            ? (c < 1550
              ? (c >= 1542 && c <= 1544)
              : (c <= 1551 || c == 1758))
            : (c <= 1769 || (c < 2038
              ? (c >= 1789 && c <= 1790)
              : c <= 2038)))
          : (c <= 2554 || (c < 3199
            ? (c < 3059
              ? c == 2928
              : (c <= 3064 || c == 3066))
            : (c <= 3199 || (c < 3449
              ? c == 3407
              : c <= 3449)))))))
      : (c <= 3843 || (c < 6622
        ? (c < 4039
          ? (c < 3892
            ? (c < 3861
              ? c == 3859
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
              : c <= 6464)))))
        : (c <= 6655 || (c < 8448
          ? (c < 8274
            ? (c < 7028
              ? (c >= 7009 && c <= 7018)
              : (c <= 7036 || c == 8260))
            : (c <= 8274 || (c < 8330
              ? (c >= 8314 && c <= 8316)
              : c <= 8332)))
          : (c <= 8494 || (c < 8972
            ? (c < 8586
              ? (c >= 8506 && c <= 8527)
              : (c <= 8587 || (c >= 8592 && c <= 8967)))
            : (c <= 9000 || (c < 9280
              ? (c >= 9003 && c <= 9254)
              : c <= 9290)))))))))
    : (c <= 9449 || (c < 12992
      ? (c < 12272
        ? (c < 11126
          ? (c < 10224
            ? (c < 10132
              ? (c >= 9472 && c <= 10087)
              : (c <= 10180 || (c >= 10183 && c <= 10213)))
            : (c <= 10626 || (c < 10716
              ? (c >= 10649 && c <= 10711)
              : (c <= 10747 || (c >= 10750 && c <= 11123)))))
          : (c <= 11157 || (c < 11904
            ? (c < 11493
              ? (c >= 11159 && c <= 11263)
              : (c <= 11498 || (c >= 11856 && c <= 11857)))
            : (c <= 11929 || (c < 12032
              ? (c >= 11931 && c <= 12019)
              : c <= 12245)))))
        : (c <= 12283 || (c < 12694
          ? (c < 12342
            ? (c < 12306
              ? c == 12292
              : (c <= 12307 || c == 12320))
            : (c <= 12343 || (c < 12688
              ? (c >= 12350 && c <= 12351)
              : c <= 12689)))
          : (c <= 12703 || (c < 12880
            ? (c < 12800
              ? (c >= 12736 && c <= 12771)
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

static inline bool aux_sym_plainid_token4_character_set_2(int32_t c) {
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

static inline bool aux_sym_plainid_token4_character_set_3(int32_t c) {
  return (c < 8506
    ? (c < 3449
      ? (c < 247
        ? (c < '|'
          ? (c < ':'
            ? (c < '%'
              ? (c < '#'
                ? c == '!'
                : c <= '#')
              : (c <= '&' || (c >= '+' && c <= '.')))
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

static inline bool aux_sym_plainid_token4_character_set_4(int32_t c) {
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

static inline bool aux_sym_varid_token1_character_set_1(int32_t c) {
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

static inline bool aux_sym_char_element_token1_character_set_1(int32_t c) {
  return (c < 9372
    ? (c < 3859
      ? (c < 1542
        ? (c < 169
          ? (c < '^'
            ? (c < '*'
              ? (c >= '!' && c <= '&')
              : (c <= ':' || (c >= '<' && c <= '@')))
            : (c <= '^' || (c < '~'
              ? c == '|'
              : (c <= '~' || c == 166))))
          : (c <= 169 || (c < 215
            ? (c < 174
              ? c == 172
              : (c <= 174 || (c >= 176 && c <= 177)))
            : (c <= 247 || (c < 1421
              ? (c >= 1014 && c <= 1154)
              : c <= 1422)))))
        : (c <= 1544 || (c < 2928
          ? (c < 1789
            ? (c < 1758
              ? (c >= 1550 && c <= 1551)
              : (c <= 1758 || c == 1769))
            : (c <= 1790 || (c < 2554
              ? c == 2038
              : c <= 2554)))
          : (c <= 2928 || (c < 3407
            ? (c < 3066
              ? (c >= 3059 && c <= 3064)
              : (c <= 3066 || c == 3199))
            : (c <= 3407 || (c < 3841
              ? c == 3449
              : c <= 3843)))))))
      : (c <= 3859 || (c < 6622
        ? (c < 4039
          ? (c < 3894
            ? (c < 3866
              ? (c >= 3861 && c <= 3863)
              : (c <= 3871 || c == 3892))
            : (c <= 3894 || (c < 4030
              ? c == 3896
              : c <= 4037)))
          : (c <= 4044 || (c < 5008
            ? (c < 4053
              ? (c >= 4046 && c <= 4047)
              : (c <= 4056 || (c >= 4254 && c <= 4255)))
            : (c <= 5017 || (c < 6464
              ? c == 5741
              : c <= 6464)))))
        : (c <= 6655 || (c < 8448
          ? (c < 8274
            ? (c < 7028
              ? (c >= 7009 && c <= 7018)
              : (c <= 7036 || c == 8260))
            : (c <= 8274 || (c < 8330
              ? (c >= 8314 && c <= 8316)
              : c <= 8332)))
          : (c <= 8494 || (c < 8972
            ? (c < 8586
              ? (c >= 8506 && c <= 8527)
              : (c <= 8587 || (c >= 8592 && c <= 8967)))
            : (c <= 9000 || (c < 9280
              ? (c >= 9003 && c <= 9254)
              : c <= 9290)))))))))
    : (c <= 9449 || (c < 12992
      ? (c < 12272
        ? (c < 11126
          ? (c < 10224
            ? (c < 10132
              ? (c >= 9472 && c <= 10087)
              : (c <= 10180 || (c >= 10183 && c <= 10213)))
            : (c <= 10626 || (c < 10716
              ? (c >= 10649 && c <= 10711)
              : (c <= 10747 || (c >= 10750 && c <= 11123)))))
          : (c <= 11157 || (c < 11904
            ? (c < 11493
              ? (c >= 11159 && c <= 11263)
              : (c <= 11498 || (c >= 11856 && c <= 11857)))
            : (c <= 11929 || (c < 12032
              ? (c >= 11931 && c <= 12019)
              : c <= 12245)))))
        : (c <= 12283 || (c < 12694
          ? (c < 12342
            ? (c < 12306
              ? c == 12292
              : (c <= 12307 || c == 12320))
            : (c <= 12343 || (c < 12688
              ? (c >= 12350 && c <= 12351)
              : c <= 12689)))
          : (c <= 12703 || (c < 12880
            ? (c < 12800
              ? (c >= 12736 && c <= 12771)
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
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == '2') ADVANCE(73);
      if (lookahead == '3') ADVANCE(74);
      if (lookahead == '4') ADVANCE(75);
      if (lookahead == '5') ADVANCE(76);
      if (lookahead == '6') ADVANCE(77);
      if (lookahead == '7') ADVANCE(78);
      if (lookahead == '8') ADVANCE(79);
      if (lookahead == '9') ADVANCE(80);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == 'L') ADVANCE(69);
      if (lookahead == 'X') ADVANCE(83);
      if (lookahead == '[') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(44);
      if (lookahead == '_') ADVANCE(68);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'x') ADVANCE(82);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (aux_sym_plainid_token1_character_set_1(lookahead)) ADVANCE(56);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(57);
      if (aux_sym_varid_token1_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(96);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '/') ADVANCE(111);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == '2') ADVANCE(73);
      if (lookahead == '3') ADVANCE(74);
      if (lookahead == '4') ADVANCE(75);
      if (lookahead == '5') ADVANCE(76);
      if (lookahead == '6') ADVANCE(77);
      if (lookahead == '7') ADVANCE(78);
      if (lookahead == '8') ADVANCE(79);
      if (lookahead == '9') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(110);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == '2') ADVANCE(73);
      if (lookahead == '3') ADVANCE(74);
      if (lookahead == '4') ADVANCE(75);
      if (lookahead == '5') ADVANCE(76);
      if (lookahead == '6') ADVANCE(77);
      if (lookahead == '7') ADVANCE(78);
      if (lookahead == '8') ADVANCE(79);
      if (lookahead == '9') ADVANCE(80);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == 'L') ADVANCE(69);
      if (lookahead == 'X') ADVANCE(83);
      if (lookahead == '[') ADVANCE(43);
      if (lookahead == ']') ADVANCE(44);
      if (lookahead == '_') ADVANCE(68);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'x') ADVANCE(82);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (aux_sym_plainid_token1_character_set_1(lookahead)) ADVANCE(56);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(57);
      if (aux_sym_varid_token1_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 27:
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == '2') ADVANCE(73);
      if (lookahead == '3') ADVANCE(74);
      if (lookahead == '4') ADVANCE(75);
      if (lookahead == '5') ADVANCE(76);
      if (lookahead == '6') ADVANCE(77);
      if (lookahead == '7') ADVANCE(78);
      if (lookahead == '8') ADVANCE(79);
      if (lookahead == '9') ADVANCE(80);
      if (lookahead == 'L') ADVANCE(69);
      if (lookahead == 'X') ADVANCE(83);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'x') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(56);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(57);
      if (aux_sym_plainid_token4_character_set_1(lookahead)) ADVANCE(66);
      END_STATE();
    case 28:
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == '2') ADVANCE(73);
      if (lookahead == '3') ADVANCE(74);
      if (lookahead == '4') ADVANCE(75);
      if (lookahead == '5') ADVANCE(76);
      if (lookahead == '6') ADVANCE(77);
      if (lookahead == '7') ADVANCE(78);
      if (lookahead == '8') ADVANCE(79);
      if (lookahead == '9') ADVANCE(80);
      if (lookahead == 'L') ADVANCE(69);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(56);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(57);
      if (aux_sym_plainid_token4_character_set_1(lookahead)) ADVANCE(66);
      END_STATE();
    case 29:
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == '2') ADVANCE(73);
      if (lookahead == '3') ADVANCE(74);
      if (lookahead == '4') ADVANCE(75);
      if (lookahead == '5') ADVANCE(76);
      if (lookahead == '6') ADVANCE(77);
      if (lookahead == '7') ADVANCE(78);
      if (lookahead == '8') ADVANCE(79);
      if (lookahead == '9') ADVANCE(80);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(56);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(57);
      if (aux_sym_plainid_token4_character_set_1(lookahead)) ADVANCE(66);
      END_STATE();
    case 30:
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == '2') ADVANCE(73);
      if (lookahead == '3') ADVANCE(74);
      if (lookahead == '4') ADVANCE(75);
      if (lookahead == '5') ADVANCE(76);
      if (lookahead == '6') ADVANCE(77);
      if (lookahead == '7') ADVANCE(78);
      if (lookahead == '8') ADVANCE(79);
      if (lookahead == '9') ADVANCE(80);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(92);
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(56);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(57);
      if (aux_sym_plainid_token4_character_set_1(lookahead)) ADVANCE(66);
      END_STATE();
    case 31:
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == '2') ADVANCE(73);
      if (lookahead == '3') ADVANCE(74);
      if (lookahead == '4') ADVANCE(75);
      if (lookahead == '5') ADVANCE(76);
      if (lookahead == '6') ADVANCE(77);
      if (lookahead == '7') ADVANCE(78);
      if (lookahead == '8') ADVANCE(79);
      if (lookahead == '9') ADVANCE(80);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(92);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(56);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(57);
      if (aux_sym_plainid_token4_character_set_1(lookahead)) ADVANCE(66);
      END_STATE();
    case 32:
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == '2') ADVANCE(73);
      if (lookahead == '3') ADVANCE(74);
      if (lookahead == '4') ADVANCE(75);
      if (lookahead == '5') ADVANCE(76);
      if (lookahead == '6') ADVANCE(77);
      if (lookahead == '7') ADVANCE(78);
      if (lookahead == '8') ADVANCE(79);
      if (lookahead == '9') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(29)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(100);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(100);
      if (aux_sym_char_element_token1_character_set_1(lookahead)) ADVANCE(106);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 33:
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == '2') ADVANCE(73);
      if (lookahead == '3') ADVANCE(74);
      if (lookahead == '4') ADVANCE(75);
      if (lookahead == '5') ADVANCE(76);
      if (lookahead == '6') ADVANCE(77);
      if (lookahead == '7') ADVANCE(78);
      if (lookahead == '8') ADVANCE(79);
      if (lookahead == '9') ADVANCE(80);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(92);
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead == 'L') ADVANCE(69);
      if (lookahead == 'X') ADVANCE(83);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'x') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(56);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(57);
      if (aux_sym_plainid_token4_character_set_1(lookahead)) ADVANCE(66);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == '2') ADVANCE(73);
      if (lookahead == '3') ADVANCE(74);
      if (lookahead == '4') ADVANCE(75);
      if (lookahead == '5') ADVANCE(76);
      if (lookahead == '6') ADVANCE(77);
      if (lookahead == '7') ADVANCE(78);
      if (lookahead == '8') ADVANCE(79);
      if (lookahead == '9') ADVANCE(80);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(92);
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead == 'L') ADVANCE(69);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(56);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(57);
      if (aux_sym_plainid_token4_character_set_1(lookahead)) ADVANCE(66);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (aux_sym_plainid_token4_character_set_2(lookahead)) ADVANCE(66);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_unicode_escape);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(2);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (aux_sym_plainid_token4_character_set_2(lookahead)) ADVANCE(66);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_char_escape_seq);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_char_escape_seq);
      if (aux_sym_plainid_token4_character_set_2(lookahead)) ADVANCE(66);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_plainid_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_plainid_token2);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_plainid_token2);
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_plainid_token2);
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_plainid_token2);
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_plainid_token3);
      if (lookahead == '_') ADVANCE(62);
      if (aux_sym_plainid_token3_character_set_1(lookahead)) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_plainid_token3);
      if (lookahead == '_') ADVANCE(62);
      if (aux_sym_plainid_token3_character_set_1(lookahead)) ADVANCE(61);
      if (aux_sym_plainid_token3_character_set_2(lookahead)) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_plainid_token3);
      if (aux_sym_plainid_token4_character_set_2(lookahead)) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_plainid_token4);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '/') ADVANCE(112);
      if (aux_sym_plainid_token4_character_set_3(lookahead)) ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_plainid_token4);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(54);
      if (aux_sym_plainid_token4_character_set_4(lookahead)) ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_plainid_token4);
      if (aux_sym_plainid_token4_character_set_2(lookahead)) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_varid_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_L);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_decimal_numeral_token1);
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_hex_numeral_token1);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_hex_numeral_token2);
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DOT2);
      if (aux_sym_plainid_token4_character_set_2(lookahead)) ADVANCE(66);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_floating_point_literal_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_exponent_part_token1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_exponent_part_token2);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_exponent_part_token2);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__float_type);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__float_type);
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '/') ADVANCE(111);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(97);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_char_element_token1);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_char_element_token1);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '/') ADVANCE(111);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_char_element_token1);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '/') ADVANCE(112);
      if (aux_sym_plainid_token4_character_set_3(lookahead)) ADVANCE(66);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_char_element_token1);
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_char_element_token1);
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_char_element_token1);
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_char_element_token1);
      if (aux_sym_plainid_token4_character_set_2(lookahead)) ADVANCE(66);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (aux_sym_plainid_token4_character_set_2(lookahead)) ADVANCE(66);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (aux_sym_plainid_token4_character_set_2(lookahead)) ADVANCE(66);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 29},
  [3] = {.lex_state = 29},
  [4] = {.lex_state = 33},
  [5] = {.lex_state = 34},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 30},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 31},
  [16] = {.lex_state = 31},
  [17] = {.lex_state = 31},
  [18] = {.lex_state = 31},
  [19] = {.lex_state = 31},
  [20] = {.lex_state = 29},
  [21] = {.lex_state = 29},
  [22] = {.lex_state = 29},
  [23] = {.lex_state = 29},
  [24] = {.lex_state = 29},
  [25] = {.lex_state = 29},
  [26] = {.lex_state = 29},
  [27] = {.lex_state = 29},
  [28] = {.lex_state = 29},
  [29] = {.lex_state = 29},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 29},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 29},
  [35] = {.lex_state = 29},
  [36] = {.lex_state = 29},
  [37] = {.lex_state = 29},
  [38] = {.lex_state = 29},
  [39] = {.lex_state = 29},
  [40] = {.lex_state = 29},
  [41] = {.lex_state = 29},
  [42] = {.lex_state = 29},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 85},
  [67] = {.lex_state = 61},
  [68] = {.lex_state = 81},
  [69] = {.lex_state = 81},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 91},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 81},
  [77] = {.lex_state = 81},
  [78] = {.lex_state = 81},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 91},
  [81] = {.lex_state = 91},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 81},
  [84] = {.lex_state = 81},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 91},
  [88] = {.lex_state = 91},
  [89] = {.lex_state = 81},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 81},
  [93] = {.lex_state = 115},
  [94] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
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
    [aux_sym_plainid_token1] = ACTIONS(1),
    [aux_sym_plainid_token2] = ACTIONS(1),
    [aux_sym_varid_token1] = ACTIONS(1),
    [aux_sym_varid_token2] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_L] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_X] = ACTIONS(1),
    [anon_sym_DOT2] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(86),
    [sym__literal] = STATE(25),
    [sym_symbol_literal] = STATE(38),
    [sym__simple_literal] = STATE(38),
    [sym_id] = STATE(25),
    [sym_integer_literal] = STATE(26),
    [sym_hex_numeral] = STATE(14),
    [sym_floating_point_literal] = STATE(26),
    [sym_boolean_literal] = STATE(26),
    [sym_character_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_null_literal] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(19),
    [aux_sym_plainid_token1] = ACTIONS(21),
    [aux_sym_plainid_token2] = ACTIONS(23),
    [aux_sym_plainid_token4] = ACTIONS(25),
    [anon_sym_0] = ACTIONS(27),
    [anon_sym_1] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_3] = ACTIONS(29),
    [anon_sym_4] = ACTIONS(29),
    [anon_sym_5] = ACTIONS(29),
    [anon_sym_6] = ACTIONS(29),
    [anon_sym_7] = ACTIONS(29),
    [anon_sym_8] = ACTIONS(29),
    [anon_sym_9] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(33),
    [anon_sym_SLASH_STAR] = ACTIONS(35),
    [anon_sym_SLASH_SLASH] = ACTIONS(37),
  },
  [2] = {
    [sym__literal] = STATE(25),
    [sym_symbol_literal] = STATE(38),
    [sym__simple_literal] = STATE(38),
    [sym_id] = STATE(25),
    [sym_integer_literal] = STATE(26),
    [sym_hex_numeral] = STATE(14),
    [sym_floating_point_literal] = STATE(26),
    [sym_boolean_literal] = STATE(26),
    [sym_character_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [sym_comment] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_null_literal] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(19),
    [aux_sym_plainid_token1] = ACTIONS(21),
    [aux_sym_plainid_token2] = ACTIONS(23),
    [aux_sym_plainid_token4] = ACTIONS(25),
    [anon_sym_0] = ACTIONS(27),
    [anon_sym_1] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_3] = ACTIONS(29),
    [anon_sym_4] = ACTIONS(29),
    [anon_sym_5] = ACTIONS(29),
    [anon_sym_6] = ACTIONS(29),
    [anon_sym_7] = ACTIONS(29),
    [anon_sym_8] = ACTIONS(29),
    [anon_sym_9] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(33),
    [anon_sym_SLASH_STAR] = ACTIONS(35),
    [anon_sym_SLASH_SLASH] = ACTIONS(37),
  },
  [3] = {
    [sym__literal] = STATE(25),
    [sym_symbol_literal] = STATE(38),
    [sym__simple_literal] = STATE(38),
    [sym_id] = STATE(25),
    [sym_integer_literal] = STATE(26),
    [sym_hex_numeral] = STATE(14),
    [sym_floating_point_literal] = STATE(26),
    [sym_boolean_literal] = STATE(26),
    [sym_character_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [sym_comment] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_null_literal] = ACTIONS(46),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_BQUOTE] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_DOT] = ACTIONS(58),
    [aux_sym_plainid_token1] = ACTIONS(61),
    [aux_sym_plainid_token2] = ACTIONS(64),
    [aux_sym_plainid_token4] = ACTIONS(67),
    [anon_sym_0] = ACTIONS(70),
    [anon_sym_1] = ACTIONS(73),
    [anon_sym_2] = ACTIONS(73),
    [anon_sym_3] = ACTIONS(73),
    [anon_sym_4] = ACTIONS(73),
    [anon_sym_5] = ACTIONS(73),
    [anon_sym_6] = ACTIONS(73),
    [anon_sym_7] = ACTIONS(73),
    [anon_sym_8] = ACTIONS(73),
    [anon_sym_9] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(76),
    [anon_sym_false] = ACTIONS(76),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(79),
    [anon_sym_SLASH_STAR] = ACTIONS(35),
    [anon_sym_SLASH_SLASH] = ACTIONS(37),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(90), 1,
      anon_sym_DOT2,
    ACTIONS(92), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(94), 1,
      sym__float_type,
    STATE(4), 1,
      sym_comment,
    ACTIONS(86), 2,
      anon_sym_L,
      anon_sym_l,
    ACTIONS(88), 2,
      anon_sym_x,
      anon_sym_X,
    ACTIONS(84), 6,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(82), 17,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [54] = 9,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(102), 1,
      anon_sym_DOT2,
    ACTIONS(104), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(106), 1,
      sym__float_type,
    STATE(5), 1,
      sym_comment,
    ACTIONS(100), 2,
      anon_sym_L,
      anon_sym_l,
    ACTIONS(98), 6,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(96), 17,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [104] = 8,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      sym_unicode_escape,
    STATE(6), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_symbol_literal_repeat1,
    ACTIONS(114), 2,
      sym_char_escape_seq,
      aux_sym_char_element_token1,
    ACTIONS(110), 22,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [151] = 7,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 1,
      sym_unicode_escape,
    ACTIONS(123), 2,
      sym_char_escape_seq,
      aux_sym_char_element_token1,
    STATE(7), 2,
      sym_comment,
      aux_sym_symbol_literal_repeat1,
    ACTIONS(118), 22,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [196] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(8), 1,
      sym_comment,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      sym_unicode_escape,
    ACTIONS(128), 24,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      sym_char_escape_seq,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_char_element_token1,
  [236] = 6,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      sym_comment,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      sym_unicode_escape,
    ACTIONS(128), 23,
      sym_null_literal,
      anon_sym_DASH,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      sym_char_escape_seq,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_char_element_token1,
  [278] = 7,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(139), 1,
      sym__float_type,
    STATE(10), 1,
      sym_comment,
    ACTIONS(135), 6,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(133), 17,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [321] = 7,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(145), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(147), 1,
      sym__float_type,
    STATE(11), 1,
      sym_comment,
    ACTIONS(143), 6,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(141), 17,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [364] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(12), 1,
      sym_comment,
    ACTIONS(151), 6,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(149), 19,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      anon_sym_L,
      anon_sym_l,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [403] = 7,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(157), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(159), 1,
      sym__float_type,
    STATE(13), 1,
      sym_comment,
    ACTIONS(155), 6,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(153), 17,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [446] = 6,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(14), 1,
      sym_comment,
    ACTIONS(86), 2,
      anon_sym_L,
      anon_sym_l,
    ACTIONS(84), 6,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(82), 17,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [487] = 6,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(165), 1,
      sym__float_type,
    STATE(15), 1,
      sym_comment,
    ACTIONS(163), 6,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(161), 17,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [527] = 6,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(171), 1,
      sym__float_type,
    STATE(16), 1,
      sym_comment,
    ACTIONS(169), 6,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(167), 17,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [567] = 6,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(177), 1,
      sym__float_type,
    STATE(17), 1,
      sym_comment,
    ACTIONS(175), 6,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(173), 17,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [607] = 6,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(183), 1,
      sym__float_type,
    STATE(18), 1,
      sym_comment,
    ACTIONS(181), 6,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(179), 17,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [647] = 6,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(139), 1,
      sym__float_type,
    STATE(19), 1,
      sym_comment,
    ACTIONS(135), 6,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(133), 17,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [687] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(20), 1,
      sym_comment,
    ACTIONS(187), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(185), 18,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [724] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(21), 1,
      sym_comment,
    ACTIONS(191), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(189), 18,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [761] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(22), 1,
      sym_comment,
    ACTIONS(195), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(193), 18,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [798] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(23), 1,
      sym_comment,
    ACTIONS(155), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(153), 18,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [835] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(24), 1,
      sym_comment,
    ACTIONS(143), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(141), 18,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [872] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(25), 1,
      sym_comment,
    ACTIONS(199), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(197), 18,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [909] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(26), 1,
      sym_comment,
    ACTIONS(203), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(201), 18,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [946] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(27), 1,
      sym_comment,
    ACTIONS(207), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(205), 18,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [983] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(28), 1,
      sym_comment,
    ACTIONS(211), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(209), 18,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1020] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(29), 1,
      sym_comment,
    ACTIONS(215), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(213), 18,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1057] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(30), 1,
      sym_comment,
    ACTIONS(219), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(217), 18,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1094] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(31), 1,
      sym_comment,
    ACTIONS(223), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(221), 18,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1131] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(32), 1,
      sym_comment,
    ACTIONS(227), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(225), 18,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1168] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(33), 1,
      sym_comment,
    ACTIONS(231), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(229), 18,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1205] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(34), 1,
      sym_comment,
    ACTIONS(135), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(133), 18,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1242] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(35), 1,
      sym_comment,
    ACTIONS(181), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(179), 18,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1279] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(36), 1,
      sym_comment,
    ACTIONS(98), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(96), 18,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1316] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(37), 1,
      sym_comment,
    ACTIONS(163), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(161), 18,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1353] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(38), 1,
      sym_comment,
    ACTIONS(235), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(233), 18,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1390] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(39), 1,
      sym_comment,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(167), 18,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1427] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(40), 1,
      sym_comment,
    ACTIONS(239), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(237), 18,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1464] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(41), 1,
      sym_comment,
    ACTIONS(175), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(173), 18,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1501] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(42), 1,
      sym_comment,
    ACTIONS(243), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(241), 18,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym_null_literal,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1538] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_0,
    ACTIONS(245), 1,
      anon_sym_DOT,
    STATE(14), 1,
      sym_hex_numeral,
    STATE(43), 1,
      sym_comment,
    STATE(28), 2,
      sym_integer_literal,
      sym_floating_point_literal,
    ACTIONS(29), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [1572] = 6,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
    STATE(44), 2,
      sym_comment,
      aux_sym_string_literal_repeat1,
    ACTIONS(247), 3,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      aux_sym_char_element_token1,
  [1595] = 7,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(257), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
    ACTIONS(255), 3,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      aux_sym_char_element_token1,
  [1620] = 7,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      aux_sym_string_literal_repeat1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(257), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
    ACTIONS(255), 3,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      aux_sym_char_element_token1,
  [1645] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(47), 1,
      sym_comment,
    ACTIONS(265), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
    ACTIONS(263), 4,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      aux_sym_char_element_token1,
  [1665] = 8,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(261), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    STATE(48), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym_string_literal_repeat2,
    STATE(59), 1,
      aux_sym_string_literal_repeat3,
  [1690] = 7,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(273), 1,
      anon_sym_BQUOTE,
    ACTIONS(275), 1,
      aux_sym_char_element_token1,
    STATE(49), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_symbol_literal_repeat1,
    ACTIONS(271), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [1713] = 7,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(275), 1,
      aux_sym_char_element_token1,
    ACTIONS(277), 1,
      anon_sym_BQUOTE,
    STATE(50), 1,
      sym_comment,
    STATE(51), 1,
      aux_sym_symbol_literal_repeat1,
    ACTIONS(271), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [1736] = 6,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(118), 1,
      anon_sym_BQUOTE,
    ACTIONS(282), 1,
      aux_sym_char_element_token1,
    ACTIONS(279), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
    STATE(51), 2,
      sym_comment,
      aux_sym_symbol_literal_repeat1,
  [1757] = 8,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(259), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    STATE(48), 1,
      aux_sym_string_literal_repeat2,
    STATE(52), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_string_literal_repeat3,
  [1782] = 6,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(290), 1,
      aux_sym_string_literal_token1,
    STATE(53), 2,
      sym_comment,
      aux_sym_string_literal_repeat2,
  [1802] = 6,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(295), 1,
      aux_sym_char_element_token1,
    STATE(6), 1,
      aux_sym_symbol_literal_repeat1,
    STATE(54), 1,
      sym_comment,
    ACTIONS(293), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [1822] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(55), 1,
      sym_comment,
    ACTIONS(126), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
    ACTIONS(128), 2,
      anon_sym_BQUOTE,
      aux_sym_char_element_token1,
  [1840] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(56), 1,
      sym_comment,
    ACTIONS(288), 3,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_string_literal_token1,
  [1855] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(57), 1,
      sym_comment,
    ACTIONS(297), 3,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_string_literal_token1,
  [1870] = 6,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(302), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(304), 1,
      aux_sym_string_literal_token1,
    STATE(58), 1,
      sym_comment,
  [1889] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(59), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym_string_literal_repeat3,
  [1908] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    ACTIONS(313), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(60), 2,
      sym_comment,
      aux_sym_string_literal_repeat3,
  [1925] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(61), 1,
      sym_comment,
    ACTIONS(315), 3,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_string_literal_token1,
  [1940] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(60), 1,
      aux_sym_string_literal_repeat3,
    STATE(62), 1,
      sym_comment,
  [1959] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(319), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(63), 1,
      sym_comment,
  [1975] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(304), 1,
      aux_sym_string_literal_token1,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      sym_comment,
  [1991] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(323), 1,
      aux_sym_floating_point_literal_token1,
    STATE(65), 1,
      sym_comment,
  [2004] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(325), 1,
      aux_sym_hex_numeral_token2,
    STATE(66), 1,
      sym_comment,
  [2017] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(327), 1,
      aux_sym_plainid_token3,
    STATE(67), 1,
      sym_comment,
  [2030] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(329), 1,
      aux_sym_decimal_numeral_token1,
    STATE(68), 1,
      sym_comment,
  [2043] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(331), 1,
      aux_sym_decimal_numeral_token1,
    STATE(69), 1,
      sym_comment,
  [2056] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(333), 1,
      aux_sym_floating_point_literal_token1,
    STATE(70), 1,
      sym_comment,
  [2069] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(335), 1,
      aux_sym_floating_point_literal_token1,
    STATE(71), 1,
      sym_comment,
  [2082] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(337), 1,
      aux_sym_floating_point_literal_token1,
    STATE(72), 1,
      sym_comment,
  [2095] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(339), 1,
      aux_sym_exponent_part_token2,
    STATE(73), 1,
      sym_comment,
  [2108] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(341), 1,
      aux_sym_floating_point_literal_token1,
    STATE(74), 1,
      sym_comment,
  [2121] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(343), 1,
      aux_sym_string_literal_token1,
    STATE(75), 1,
      sym_comment,
  [2134] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(345), 1,
      aux_sym_decimal_numeral_token1,
    STATE(76), 1,
      sym_comment,
  [2147] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(347), 1,
      aux_sym_decimal_numeral_token1,
    STATE(77), 1,
      sym_comment,
  [2160] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(349), 1,
      aux_sym_decimal_numeral_token1,
    STATE(78), 1,
      sym_comment,
  [2173] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(351), 1,
      aux_sym_floating_point_literal_token1,
    STATE(79), 1,
      sym_comment,
  [2186] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(353), 1,
      aux_sym_exponent_part_token2,
    STATE(80), 1,
      sym_comment,
  [2199] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(355), 1,
      aux_sym_exponent_part_token2,
    STATE(81), 1,
      sym_comment,
  [2212] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(357), 1,
      anon_sym_STAR_SLASH,
    STATE(82), 1,
      sym_comment,
  [2225] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(359), 1,
      aux_sym_decimal_numeral_token1,
    STATE(83), 1,
      sym_comment,
  [2238] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(361), 1,
      aux_sym_decimal_numeral_token1,
    STATE(84), 1,
      sym_comment,
  [2251] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(363), 1,
      aux_sym_floating_point_literal_token1,
    STATE(85), 1,
      sym_comment,
  [2264] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    STATE(86), 1,
      sym_comment,
  [2277] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(367), 1,
      aux_sym_exponent_part_token2,
    STATE(87), 1,
      sym_comment,
  [2290] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(369), 1,
      aux_sym_exponent_part_token2,
    STATE(88), 1,
      sym_comment,
  [2303] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(371), 1,
      aux_sym_decimal_numeral_token1,
    STATE(89), 1,
      sym_comment,
  [2316] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(373), 1,
      aux_sym_floating_point_literal_token1,
    STATE(90), 1,
      sym_comment,
  [2329] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(375), 1,
      aux_sym_hex_numeral_token1,
    STATE(91), 1,
      sym_comment,
  [2342] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(377), 1,
      aux_sym_decimal_numeral_token1,
    STATE(92), 1,
      sym_comment,
  [2355] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(379), 1,
      aux_sym_comment_token1,
    STATE(93), 1,
      sym_comment,
  [2368] = 1,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 151,
  [SMALL_STATE(8)] = 196,
  [SMALL_STATE(9)] = 236,
  [SMALL_STATE(10)] = 278,
  [SMALL_STATE(11)] = 321,
  [SMALL_STATE(12)] = 364,
  [SMALL_STATE(13)] = 403,
  [SMALL_STATE(14)] = 446,
  [SMALL_STATE(15)] = 487,
  [SMALL_STATE(16)] = 527,
  [SMALL_STATE(17)] = 567,
  [SMALL_STATE(18)] = 607,
  [SMALL_STATE(19)] = 647,
  [SMALL_STATE(20)] = 687,
  [SMALL_STATE(21)] = 724,
  [SMALL_STATE(22)] = 761,
  [SMALL_STATE(23)] = 798,
  [SMALL_STATE(24)] = 835,
  [SMALL_STATE(25)] = 872,
  [SMALL_STATE(26)] = 909,
  [SMALL_STATE(27)] = 946,
  [SMALL_STATE(28)] = 983,
  [SMALL_STATE(29)] = 1020,
  [SMALL_STATE(30)] = 1057,
  [SMALL_STATE(31)] = 1094,
  [SMALL_STATE(32)] = 1131,
  [SMALL_STATE(33)] = 1168,
  [SMALL_STATE(34)] = 1205,
  [SMALL_STATE(35)] = 1242,
  [SMALL_STATE(36)] = 1279,
  [SMALL_STATE(37)] = 1316,
  [SMALL_STATE(38)] = 1353,
  [SMALL_STATE(39)] = 1390,
  [SMALL_STATE(40)] = 1427,
  [SMALL_STATE(41)] = 1464,
  [SMALL_STATE(42)] = 1501,
  [SMALL_STATE(43)] = 1538,
  [SMALL_STATE(44)] = 1572,
  [SMALL_STATE(45)] = 1595,
  [SMALL_STATE(46)] = 1620,
  [SMALL_STATE(47)] = 1645,
  [SMALL_STATE(48)] = 1665,
  [SMALL_STATE(49)] = 1690,
  [SMALL_STATE(50)] = 1713,
  [SMALL_STATE(51)] = 1736,
  [SMALL_STATE(52)] = 1757,
  [SMALL_STATE(53)] = 1782,
  [SMALL_STATE(54)] = 1802,
  [SMALL_STATE(55)] = 1822,
  [SMALL_STATE(56)] = 1840,
  [SMALL_STATE(57)] = 1855,
  [SMALL_STATE(58)] = 1870,
  [SMALL_STATE(59)] = 1889,
  [SMALL_STATE(60)] = 1908,
  [SMALL_STATE(61)] = 1925,
  [SMALL_STATE(62)] = 1940,
  [SMALL_STATE(63)] = 1959,
  [SMALL_STATE(64)] = 1975,
  [SMALL_STATE(65)] = 1991,
  [SMALL_STATE(66)] = 2004,
  [SMALL_STATE(67)] = 2017,
  [SMALL_STATE(68)] = 2030,
  [SMALL_STATE(69)] = 2043,
  [SMALL_STATE(70)] = 2056,
  [SMALL_STATE(71)] = 2069,
  [SMALL_STATE(72)] = 2082,
  [SMALL_STATE(73)] = 2095,
  [SMALL_STATE(74)] = 2108,
  [SMALL_STATE(75)] = 2121,
  [SMALL_STATE(76)] = 2134,
  [SMALL_STATE(77)] = 2147,
  [SMALL_STATE(78)] = 2160,
  [SMALL_STATE(79)] = 2173,
  [SMALL_STATE(80)] = 2186,
  [SMALL_STATE(81)] = 2199,
  [SMALL_STATE(82)] = 2212,
  [SMALL_STATE(83)] = 2225,
  [SMALL_STATE(84)] = 2238,
  [SMALL_STATE(85)] = 2251,
  [SMALL_STATE(86)] = 2264,
  [SMALL_STATE(87)] = 2277,
  [SMALL_STATE(88)] = 2290,
  [SMALL_STATE(89)] = 2303,
  [SMALL_STATE(90)] = 2316,
  [SMALL_STATE(91)] = 2329,
  [SMALL_STATE(92)] = 2342,
  [SMALL_STATE(93)] = 2355,
  [SMALL_STATE(94)] = 2368,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_literal, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_literal, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_literal_repeat1, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_literal_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_literal_repeat1, 2), SHIFT_REPEAT(8),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_literal_repeat1, 2), SHIFT_REPEAT(8),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_literal_repeat1, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_literal_repeat1, 1),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_literal_repeat1, 1), SHIFT(21),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 5),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 4),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_numeral, 4),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_numeral, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 9),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 9),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 8),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 8),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 7),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 7),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 6),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 6),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_literal, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_literal, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_literal, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_literal, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 10),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 10),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_literal, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_literal, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(47),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(47),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_literal_repeat1, 2), SHIFT_REPEAT(55),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_literal_repeat1, 2), SHIFT_REPEAT(55),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(64),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(61),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 3),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat3, 1), SHIFT(75),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat3, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat3, 2), SHIFT_REPEAT(63),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat3, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat3, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [365] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
