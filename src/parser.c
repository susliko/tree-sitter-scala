#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 748
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 116
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_SQUOTE = 2,
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
  anon_sym_CR_LF = 55,
  sym_indent = 56,
  sym_outdent = 57,
  anon_sym_EQ_GT_GT = 58,
  anon_sym_EQ_GT = 59,
  anon_sym_QMARK_EQ_GT = 60,
  sym_hk_type_param_clause = 61,
  anon_sym_COLON = 62,
  anon_sym_match = 63,
  anon_sym_case = 64,
  sym_annotation = 65,
  anon_sym_POUND = 66,
  sym_pattern = 67,
  sym_block_stat = 68,
  sym_block_result = 69,
  anon_sym_STAR = 70,
  sym_refine_dcl = 71,
  anon_sym_GT_COLON = 72,
  anon_sym_LT_COLON = 73,
  sym_source_file = 74,
  sym__simple_literal = 75,
  sym_id = 76,
  sym_integer_literal = 77,
  sym_hex_numeral = 78,
  sym_floating_point_literal = 79,
  sym_boolean_literal = 80,
  sym_character_literal = 81,
  sym_string_literal = 82,
  sym_comment = 83,
  sym_nl = 84,
  sym_semi = 85,
  sym_type = 86,
  sym_fun_param_clause = 87,
  sym_typed_fun_param = 88,
  sym__match_type = 89,
  sym_type_case_clauses = 90,
  sym_type_case_clause = 91,
  sym__infix_type = 92,
  sym__refined_type = 93,
  sym__annot_type = 94,
  sym__simple_type = 95,
  sym__simple_type1 = 96,
  sym__singleton = 97,
  sym__fun_arg_types = 98,
  sym_type_args = 99,
  sym_refinement = 100,
  sym__types = 101,
  aux_sym_symbol_literal_repeat1 = 102,
  aux_sym_string_literal_repeat1 = 103,
  aux_sym_string_literal_repeat2 = 104,
  aux_sym_string_literal_repeat3 = 105,
  aux_sym_semi_repeat1 = 106,
  aux_sym_qual_id_repeat1 = 107,
  aux_sym_fun_param_clause_repeat1 = 108,
  aux_sym_type_case_clauses_repeat1 = 109,
  aux_sym__infix_type_repeat1 = 110,
  aux_sym__refined_type_repeat1 = 111,
  aux_sym__annot_type_repeat1 = 112,
  aux_sym__fun_arg_types_repeat1 = 113,
  aux_sym_refinement_repeat1 = 114,
  aux_sym__types_repeat1 = 115,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_SQUOTE] = "'",
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
  [anon_sym_CR_LF] = "\r\n",
  [sym_indent] = "indent",
  [sym_outdent] = "outdent",
  [anon_sym_EQ_GT_GT] = "=>>",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_QMARK_EQ_GT] = "\?=>",
  [sym_hk_type_param_clause] = "hk_type_param_clause",
  [anon_sym_COLON] = ":",
  [anon_sym_match] = "match",
  [anon_sym_case] = "case",
  [sym_annotation] = "annotation",
  [anon_sym_POUND] = "#",
  [sym_pattern] = "pattern",
  [sym_block_stat] = "block_stat",
  [sym_block_result] = "block_result",
  [anon_sym_STAR] = "*",
  [sym_refine_dcl] = "refine_dcl",
  [anon_sym_GT_COLON] = ">:",
  [anon_sym_LT_COLON] = "<:",
  [sym_source_file] = "source_file",
  [sym__simple_literal] = "_simple_literal",
  [sym_id] = "id",
  [sym_integer_literal] = "integer_literal",
  [sym_hex_numeral] = "hex_numeral",
  [sym_floating_point_literal] = "floating_point_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_character_literal] = "character_literal",
  [sym_string_literal] = "string_literal",
  [sym_comment] = "comment",
  [sym_nl] = "nl",
  [sym_semi] = "semi",
  [sym_type] = "type",
  [sym_fun_param_clause] = "fun_param_clause",
  [sym_typed_fun_param] = "typed_fun_param",
  [sym__match_type] = "_match_type",
  [sym_type_case_clauses] = "type_case_clauses",
  [sym_type_case_clause] = "type_case_clause",
  [sym__infix_type] = "_infix_type",
  [sym__refined_type] = "_refined_type",
  [sym__annot_type] = "_annot_type",
  [sym__simple_type] = "_simple_type",
  [sym__simple_type1] = "_simple_type1",
  [sym__singleton] = "_singleton",
  [sym__fun_arg_types] = "_fun_arg_types",
  [sym_type_args] = "type_args",
  [sym_refinement] = "refinement",
  [sym__types] = "_types",
  [aux_sym_symbol_literal_repeat1] = "symbol_literal_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_string_literal_repeat2] = "string_literal_repeat2",
  [aux_sym_string_literal_repeat3] = "string_literal_repeat3",
  [aux_sym_semi_repeat1] = "semi_repeat1",
  [aux_sym_qual_id_repeat1] = "qual_id_repeat1",
  [aux_sym_fun_param_clause_repeat1] = "fun_param_clause_repeat1",
  [aux_sym_type_case_clauses_repeat1] = "type_case_clauses_repeat1",
  [aux_sym__infix_type_repeat1] = "_infix_type_repeat1",
  [aux_sym__refined_type_repeat1] = "_refined_type_repeat1",
  [aux_sym__annot_type_repeat1] = "_annot_type_repeat1",
  [aux_sym__fun_arg_types_repeat1] = "_fun_arg_types_repeat1",
  [aux_sym_refinement_repeat1] = "refinement_repeat1",
  [aux_sym__types_repeat1] = "_types_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
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
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [sym_indent] = sym_indent,
  [sym_outdent] = sym_outdent,
  [anon_sym_EQ_GT_GT] = anon_sym_EQ_GT_GT,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_QMARK_EQ_GT] = anon_sym_QMARK_EQ_GT,
  [sym_hk_type_param_clause] = sym_hk_type_param_clause,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_case] = anon_sym_case,
  [sym_annotation] = sym_annotation,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_pattern] = sym_pattern,
  [sym_block_stat] = sym_block_stat,
  [sym_block_result] = sym_block_result,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_refine_dcl] = sym_refine_dcl,
  [anon_sym_GT_COLON] = anon_sym_GT_COLON,
  [anon_sym_LT_COLON] = anon_sym_LT_COLON,
  [sym_source_file] = sym_source_file,
  [sym__simple_literal] = sym__simple_literal,
  [sym_id] = sym_id,
  [sym_integer_literal] = sym_integer_literal,
  [sym_hex_numeral] = sym_hex_numeral,
  [sym_floating_point_literal] = sym_floating_point_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_character_literal] = sym_character_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_comment] = sym_comment,
  [sym_nl] = sym_nl,
  [sym_semi] = sym_semi,
  [sym_type] = sym_type,
  [sym_fun_param_clause] = sym_fun_param_clause,
  [sym_typed_fun_param] = sym_typed_fun_param,
  [sym__match_type] = sym__match_type,
  [sym_type_case_clauses] = sym_type_case_clauses,
  [sym_type_case_clause] = sym_type_case_clause,
  [sym__infix_type] = sym__infix_type,
  [sym__refined_type] = sym__refined_type,
  [sym__annot_type] = sym__annot_type,
  [sym__simple_type] = sym__simple_type,
  [sym__simple_type1] = sym__simple_type1,
  [sym__singleton] = sym__singleton,
  [sym__fun_arg_types] = sym__fun_arg_types,
  [sym_type_args] = sym_type_args,
  [sym_refinement] = sym_refinement,
  [sym__types] = sym__types,
  [aux_sym_symbol_literal_repeat1] = aux_sym_symbol_literal_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_string_literal_repeat2] = aux_sym_string_literal_repeat2,
  [aux_sym_string_literal_repeat3] = aux_sym_string_literal_repeat3,
  [aux_sym_semi_repeat1] = aux_sym_semi_repeat1,
  [aux_sym_qual_id_repeat1] = aux_sym_qual_id_repeat1,
  [aux_sym_fun_param_clause_repeat1] = aux_sym_fun_param_clause_repeat1,
  [aux_sym_type_case_clauses_repeat1] = aux_sym_type_case_clauses_repeat1,
  [aux_sym__infix_type_repeat1] = aux_sym__infix_type_repeat1,
  [aux_sym__refined_type_repeat1] = aux_sym__refined_type_repeat1,
  [aux_sym__annot_type_repeat1] = aux_sym__annot_type_repeat1,
  [aux_sym__fun_arg_types_repeat1] = aux_sym__fun_arg_types_repeat1,
  [aux_sym_refinement_repeat1] = aux_sym_refinement_repeat1,
  [aux_sym__types_repeat1] = aux_sym__types_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
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
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_indent] = {
    .visible = true,
    .named = true,
  },
  [sym_outdent] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_hk_type_param_clause] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_block_stat] = {
    .visible = true,
    .named = true,
  },
  [sym_block_result] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_refine_dcl] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
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
  [sym_nl] = {
    .visible = true,
    .named = true,
  },
  [sym_semi] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_fun_param_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_fun_param] = {
    .visible = true,
    .named = true,
  },
  [sym__match_type] = {
    .visible = false,
    .named = true,
  },
  [sym_type_case_clauses] = {
    .visible = true,
    .named = true,
  },
  [sym_type_case_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__infix_type] = {
    .visible = false,
    .named = true,
  },
  [sym__refined_type] = {
    .visible = false,
    .named = true,
  },
  [sym__annot_type] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_type] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_type1] = {
    .visible = false,
    .named = true,
  },
  [sym__singleton] = {
    .visible = false,
    .named = true,
  },
  [sym__fun_arg_types] = {
    .visible = false,
    .named = true,
  },
  [sym_type_args] = {
    .visible = true,
    .named = true,
  },
  [sym_refinement] = {
    .visible = true,
    .named = true,
  },
  [sym__types] = {
    .visible = false,
    .named = true,
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
  [aux_sym_semi_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qual_id_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fun_param_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_case_clauses_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__infix_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__refined_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__annot_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__fun_arg_types_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_refinement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__types_repeat1] = {
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

static inline bool aux_sym_plainid_token2_character_set_2(int32_t c) {
  return (c < 8160
    ? (c < 4349
      ? (c < 661
        ? (c < 445
          ? (c < 223
            ? (c < 181
              ? (c >= 'b' && c <= 'z')
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
  return (c < 9280
    ? (c < 3449
      ? (c < 215
        ? (c < '|'
          ? (c < ':'
            ? (c < '#'
              ? c == '!'
              : (c <= '&' || (c >= '*' && c <= '.')))
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

static inline bool aux_sym_plainid_token4_character_set_3(int32_t c) {
  return (c < 9372
    ? (c < 3859
      ? (c < 1542
        ? (c < 169
          ? (c < '\\'
            ? (c < '*'
              ? (c >= '#' && c <= '&')
              : (c <= '-' || (c >= ':' && c <= '@')))
            : (c <= '\\' || (c < '~'
              ? (c >= '^' && c <= '|')
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

static inline bool aux_sym_plainid_token4_character_set_4(int32_t c) {
  return (c < 9372
    ? (c < 3859
      ? (c < 1542
        ? (c < 169
          ? (c < '<'
            ? (c < '*'
              ? (c >= '#' && c <= '&')
              : (c <= '-' || c == ':'))
            : (c <= '@' || (c < '~'
              ? (c >= '\\' && c <= '|')
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

static inline bool aux_sym_plainid_token4_character_set_5(int32_t c) {
  return (c < 9472
    ? (c < 3861
      ? (c < 1550
        ? (c < 172
          ? (c < '\\'
            ? (c < '*'
              ? (c >= '#' && c <= '&')
              : (c <= '-' || (c >= ':' && c <= '@')))
            : (c <= '\\' || (c < 166
              ? (c >= '^' && c <= '~')
              : (c <= 166 || c == 169))))
          : (c <= 172 || (c < 1014
            ? (c < 176
              ? c == 174
              : (c <= 177 || (c >= 215 && c <= 247)))
            : (c <= 1154 || (c < 1542
              ? (c >= 1421 && c <= 1422)
              : c <= 1544)))))
        : (c <= 1551 || (c < 3059
          ? (c < 2038
            ? (c < 1769
              ? c == 1758
              : (c <= 1769 || (c >= 1789 && c <= 1790)))
            : (c <= 2038 || (c < 2928
              ? c == 2554
              : c <= 2928)))
          : (c <= 3064 || (c < 3449
            ? (c < 3199
              ? c == 3066
              : (c <= 3199 || c == 3407))
            : (c <= 3449 || (c < 3859
              ? (c >= 3841 && c <= 3843)
              : c <= 3859)))))))
      : (c <= 3863 || (c < 7009
        ? (c < 4046
          ? (c < 3896
            ? (c < 3892
              ? (c >= 3866 && c <= 3871)
              : (c <= 3892 || c == 3894))
            : (c <= 3896 || (c < 4039
              ? (c >= 4030 && c <= 4037)
              : c <= 4044)))
          : (c <= 4047 || (c < 5741
            ? (c < 4254
              ? (c >= 4053 && c <= 4056)
              : (c <= 4255 || (c >= 5008 && c <= 5017)))
            : (c <= 5741 || (c < 6622
              ? c == 6464
              : c <= 6655)))))
        : (c <= 7018 || (c < 8506
          ? (c < 8314
            ? (c < 8260
              ? (c >= 7028 && c <= 7036)
              : (c <= 8260 || c == 8274))
            : (c <= 8316 || (c < 8448
              ? (c >= 8330 && c <= 8332)
              : c <= 8494)))
          : (c <= 8527 || (c < 9003
            ? (c < 8592
              ? (c >= 8586 && c <= 8587)
              : (c <= 8967 || (c >= 8972 && c <= 9000)))
            : (c <= 9254 || (c < 9372
              ? (c >= 9280 && c <= 9290)
              : c <= 9449)))))))))
    : (c <= 10087 || (c < 12992
      ? (c < 12272
        ? (c < 11126
          ? (c < 10649
            ? (c < 10183
              ? (c >= 10132 && c <= 10180)
              : (c <= 10213 || (c >= 10224 && c <= 10626)))
            : (c <= 10711 || (c < 10750
              ? (c >= 10716 && c <= 10747)
              : c <= 11123)))
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

static inline bool aux_sym_plainid_token4_character_set_6(int32_t c) {
  return (c < 9372
    ? (c < 3841
      ? (c < 1421
        ? (c < 166
          ? (c < '<'
            ? (c < '*'
              ? (c >= '#' && c <= '&')
              : (c <= '-' || c == ':'))
            : (c <= '@' || (c < '^'
              ? c == '\\'
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

static inline bool aux_sym_plainid_token4_character_set_7(int32_t c) {
  return (c < 9472
    ? (c < 3861
      ? (c < 1550
        ? (c < 172
          ? (c < '^'
            ? (c < '*'
              ? (c >= '%' && c <= '&')
              : (c <= '-' || (c >= ':' && c <= '\\')))
            : (c <= '~' || (c < 169
              ? c == 166
              : c <= 169)))
          : (c <= 172 || (c < 1014
            ? (c < 176
              ? c == 174
              : (c <= 177 || (c >= 215 && c <= 247)))
            : (c <= 1154 || (c < 1542
              ? (c >= 1421 && c <= 1422)
              : c <= 1544)))))
        : (c <= 1551 || (c < 3059
          ? (c < 2038
            ? (c < 1769
              ? c == 1758
              : (c <= 1769 || (c >= 1789 && c <= 1790)))
            : (c <= 2038 || (c < 2928
              ? c == 2554
              : c <= 2928)))
          : (c <= 3064 || (c < 3449
            ? (c < 3199
              ? c == 3066
              : (c <= 3199 || c == 3407))
            : (c <= 3449 || (c < 3859
              ? (c >= 3841 && c <= 3843)
              : c <= 3859)))))))
      : (c <= 3863 || (c < 7009
        ? (c < 4046
          ? (c < 3896
            ? (c < 3892
              ? (c >= 3866 && c <= 3871)
              : (c <= 3892 || c == 3894))
            : (c <= 3896 || (c < 4039
              ? (c >= 4030 && c <= 4037)
              : c <= 4044)))
          : (c <= 4047 || (c < 5741
            ? (c < 4254
              ? (c >= 4053 && c <= 4056)
              : (c <= 4255 || (c >= 5008 && c <= 5017)))
            : (c <= 5741 || (c < 6622
              ? c == 6464
              : c <= 6655)))))
        : (c <= 7018 || (c < 8506
          ? (c < 8314
            ? (c < 8260
              ? (c >= 7028 && c <= 7036)
              : (c <= 8260 || c == 8274))
            : (c <= 8316 || (c < 8448
              ? (c >= 8330 && c <= 8332)
              : c <= 8494)))
          : (c <= 8527 || (c < 9003
            ? (c < 8592
              ? (c >= 8586 && c <= 8587)
              : (c <= 8967 || (c >= 8972 && c <= 9000)))
            : (c <= 9254 || (c < 9372
              ? (c >= 9280 && c <= 9290)
              : c <= 9449)))))))))
    : (c <= 10087 || (c < 12992
      ? (c < 12272
        ? (c < 11126
          ? (c < 10649
            ? (c < 10183
              ? (c >= 10132 && c <= 10180)
              : (c <= 10213 || (c >= 10224 && c <= 10626)))
            : (c <= 10711 || (c < 10750
              ? (c >= 10716 && c <= 10747)
              : c <= 11123)))
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

static inline bool aux_sym_plainid_token4_character_set_8(int32_t c) {
  return (c < 9472
    ? (c < 3861
      ? (c < 1550
        ? (c < 172
          ? (c < '^'
            ? (c < '*'
              ? (c >= '%' && c <= '&')
              : (c <= '-' || (c >= ':' && c <= '\\')))
            : (c <= '|' || (c < 166
              ? c == '~'
              : (c <= 166 || c == 169))))
          : (c <= 172 || (c < 1014
            ? (c < 176
              ? c == 174
              : (c <= 177 || (c >= 215 && c <= 247)))
            : (c <= 1154 || (c < 1542
              ? (c >= 1421 && c <= 1422)
              : c <= 1544)))))
        : (c <= 1551 || (c < 3059
          ? (c < 2038
            ? (c < 1769
              ? c == 1758
              : (c <= 1769 || (c >= 1789 && c <= 1790)))
            : (c <= 2038 || (c < 2928
              ? c == 2554
              : c <= 2928)))
          : (c <= 3064 || (c < 3449
            ? (c < 3199
              ? c == 3066
              : (c <= 3199 || c == 3407))
            : (c <= 3449 || (c < 3859
              ? (c >= 3841 && c <= 3843)
              : c <= 3859)))))))
      : (c <= 3863 || (c < 7009
        ? (c < 4046
          ? (c < 3896
            ? (c < 3892
              ? (c >= 3866 && c <= 3871)
              : (c <= 3892 || c == 3894))
            : (c <= 3896 || (c < 4039
              ? (c >= 4030 && c <= 4037)
              : c <= 4044)))
          : (c <= 4047 || (c < 5741
            ? (c < 4254
              ? (c >= 4053 && c <= 4056)
              : (c <= 4255 || (c >= 5008 && c <= 5017)))
            : (c <= 5741 || (c < 6622
              ? c == 6464
              : c <= 6655)))))
        : (c <= 7018 || (c < 8506
          ? (c < 8314
            ? (c < 8260
              ? (c >= 7028 && c <= 7036)
              : (c <= 8260 || c == 8274))
            : (c <= 8316 || (c < 8448
              ? (c >= 8330 && c <= 8332)
              : c <= 8494)))
          : (c <= 8527 || (c < 9003
            ? (c < 8592
              ? (c >= 8586 && c <= 8587)
              : (c <= 8967 || (c >= 8972 && c <= 9000)))
            : (c <= 9254 || (c < 9372
              ? (c >= 9280 && c <= 9290)
              : c <= 9449)))))))))
    : (c <= 10087 || (c < 12992
      ? (c < 12272
        ? (c < 11126
          ? (c < 10649
            ? (c < 10183
              ? (c >= 10132 && c <= 10180)
              : (c <= 10213 || (c >= 10224 && c <= 10626)))
            : (c <= 10711 || (c < 10750
              ? (c >= 10716 && c <= 10747)
              : c <= 11123)))
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

static inline bool aux_sym_plainid_token4_character_set_9(int32_t c) {
  return (c < 9472
    ? (c < 3861
      ? (c < 1550
        ? (c < 172
          ? (c < '<'
            ? (c < '*'
              ? (c >= '%' && c <= '&')
              : (c <= '-' || c == ':'))
            : (c <= '|' || (c < 166
              ? c == '~'
              : (c <= 166 || c == 169))))
          : (c <= 172 || (c < 1014
            ? (c < 176
              ? c == 174
              : (c <= 177 || (c >= 215 && c <= 247)))
            : (c <= 1154 || (c < 1542
              ? (c >= 1421 && c <= 1422)
              : c <= 1544)))))
        : (c <= 1551 || (c < 3059
          ? (c < 2038
            ? (c < 1769
              ? c == 1758
              : (c <= 1769 || (c >= 1789 && c <= 1790)))
            : (c <= 2038 || (c < 2928
              ? c == 2554
              : c <= 2928)))
          : (c <= 3064 || (c < 3449
            ? (c < 3199
              ? c == 3066
              : (c <= 3199 || c == 3407))
            : (c <= 3449 || (c < 3859
              ? (c >= 3841 && c <= 3843)
              : c <= 3859)))))))
      : (c <= 3863 || (c < 7009
        ? (c < 4046
          ? (c < 3896
            ? (c < 3892
              ? (c >= 3866 && c <= 3871)
              : (c <= 3892 || c == 3894))
            : (c <= 3896 || (c < 4039
              ? (c >= 4030 && c <= 4037)
              : c <= 4044)))
          : (c <= 4047 || (c < 5741
            ? (c < 4254
              ? (c >= 4053 && c <= 4056)
              : (c <= 4255 || (c >= 5008 && c <= 5017)))
            : (c <= 5741 || (c < 6622
              ? c == 6464
              : c <= 6655)))))
        : (c <= 7018 || (c < 8506
          ? (c < 8314
            ? (c < 8260
              ? (c >= 7028 && c <= 7036)
              : (c <= 8260 || c == 8274))
            : (c <= 8316 || (c < 8448
              ? (c >= 8330 && c <= 8332)
              : c <= 8494)))
          : (c <= 8527 || (c < 9003
            ? (c < 8592
              ? (c >= 8586 && c <= 8587)
              : (c <= 8967 || (c >= 8972 && c <= 9000)))
            : (c <= 9254 || (c < 9372
              ? (c >= 9280 && c <= 9290)
              : c <= 9449)))))))))
    : (c <= 10087 || (c < 12992
      ? (c < 12272
        ? (c < 11126
          ? (c < 10649
            ? (c < 10183
              ? (c >= 10132 && c <= 10180)
              : (c <= 10213 || (c >= 10224 && c <= 10626)))
            : (c <= 10711 || (c < 10750
              ? (c >= 10716 && c <= 10747)
              : c <= 11123)))
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

static inline bool aux_sym_plainid_token4_character_set_10(int32_t c) {
  return (c < 9472
    ? (c < 3861
      ? (c < 1550
        ? (c < 172
          ? (c < '^'
            ? (c < '*'
              ? (c >= '%' && c <= '&')
              : (c <= '.' || (c >= ':' && c <= '\\')))
            : (c <= '~' || (c < 169
              ? c == 166
              : c <= 169)))
          : (c <= 172 || (c < 1014
            ? (c < 176
              ? c == 174
              : (c <= 177 || (c >= 215 && c <= 247)))
            : (c <= 1154 || (c < 1542
              ? (c >= 1421 && c <= 1422)
              : c <= 1544)))))
        : (c <= 1551 || (c < 3059
          ? (c < 2038
            ? (c < 1769
              ? c == 1758
              : (c <= 1769 || (c >= 1789 && c <= 1790)))
            : (c <= 2038 || (c < 2928
              ? c == 2554
              : c <= 2928)))
          : (c <= 3064 || (c < 3449
            ? (c < 3199
              ? c == 3066
              : (c <= 3199 || c == 3407))
            : (c <= 3449 || (c < 3859
              ? (c >= 3841 && c <= 3843)
              : c <= 3859)))))))
      : (c <= 3863 || (c < 7009
        ? (c < 4046
          ? (c < 3896
            ? (c < 3892
              ? (c >= 3866 && c <= 3871)
              : (c <= 3892 || c == 3894))
            : (c <= 3896 || (c < 4039
              ? (c >= 4030 && c <= 4037)
              : c <= 4044)))
          : (c <= 4047 || (c < 5741
            ? (c < 4254
              ? (c >= 4053 && c <= 4056)
              : (c <= 4255 || (c >= 5008 && c <= 5017)))
            : (c <= 5741 || (c < 6622
              ? c == 6464
              : c <= 6655)))))
        : (c <= 7018 || (c < 8506
          ? (c < 8314
            ? (c < 8260
              ? (c >= 7028 && c <= 7036)
              : (c <= 8260 || c == 8274))
            : (c <= 8316 || (c < 8448
              ? (c >= 8330 && c <= 8332)
              : c <= 8494)))
          : (c <= 8527 || (c < 9003
            ? (c < 8592
              ? (c >= 8586 && c <= 8587)
              : (c <= 8967 || (c >= 8972 && c <= 9000)))
            : (c <= 9254 || (c < 9372
              ? (c >= 9280 && c <= 9290)
              : c <= 9449)))))))))
    : (c <= 10087 || (c < 12992
      ? (c < 12272
        ? (c < 11126
          ? (c < 10649
            ? (c < 10183
              ? (c >= 10132 && c <= 10180)
              : (c <= 10213 || (c >= 10224 && c <= 10626)))
            : (c <= 10711 || (c < 10750
              ? (c >= 10716 && c <= 10747)
              : c <= 11123)))
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

static inline bool aux_sym_plainid_token4_character_set_11(int32_t c) {
  return (c < 9472
    ? (c < 3861
      ? (c < 1550
        ? (c < 172
          ? (c < '^'
            ? (c < '*'
              ? (c >= '%' && c <= '&')
              : (c <= '-' || (c >= '<' && c <= '\\')))
            : (c <= '|' || (c < 166
              ? c == '~'
              : (c <= 166 || c == 169))))
          : (c <= 172 || (c < 1014
            ? (c < 176
              ? c == 174
              : (c <= 177 || (c >= 215 && c <= 247)))
            : (c <= 1154 || (c < 1542
              ? (c >= 1421 && c <= 1422)
              : c <= 1544)))))
        : (c <= 1551 || (c < 3059
          ? (c < 2038
            ? (c < 1769
              ? c == 1758
              : (c <= 1769 || (c >= 1789 && c <= 1790)))
            : (c <= 2038 || (c < 2928
              ? c == 2554
              : c <= 2928)))
          : (c <= 3064 || (c < 3449
            ? (c < 3199
              ? c == 3066
              : (c <= 3199 || c == 3407))
            : (c <= 3449 || (c < 3859
              ? (c >= 3841 && c <= 3843)
              : c <= 3859)))))))
      : (c <= 3863 || (c < 7009
        ? (c < 4046
          ? (c < 3896
            ? (c < 3892
              ? (c >= 3866 && c <= 3871)
              : (c <= 3892 || c == 3894))
            : (c <= 3896 || (c < 4039
              ? (c >= 4030 && c <= 4037)
              : c <= 4044)))
          : (c <= 4047 || (c < 5741
            ? (c < 4254
              ? (c >= 4053 && c <= 4056)
              : (c <= 4255 || (c >= 5008 && c <= 5017)))
            : (c <= 5741 || (c < 6622
              ? c == 6464
              : c <= 6655)))))
        : (c <= 7018 || (c < 8506
          ? (c < 8314
            ? (c < 8260
              ? (c >= 7028 && c <= 7036)
              : (c <= 8260 || c == 8274))
            : (c <= 8316 || (c < 8448
              ? (c >= 8330 && c <= 8332)
              : c <= 8494)))
          : (c <= 8527 || (c < 9003
            ? (c < 8592
              ? (c >= 8586 && c <= 8587)
              : (c <= 8967 || (c >= 8972 && c <= 9000)))
            : (c <= 9254 || (c < 9372
              ? (c >= 9280 && c <= 9290)
              : c <= 9449)))))))))
    : (c <= 10087 || (c < 12992
      ? (c < 12272
        ? (c < 11126
          ? (c < 10649
            ? (c < 10183
              ? (c >= 10132 && c <= 10180)
              : (c <= 10213 || (c >= 10224 && c <= 10626)))
            : (c <= 10711 || (c < 10750
              ? (c >= 10716 && c <= 10747)
              : c <= 11123)))
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

static inline bool aux_sym_plainid_token4_character_set_12(int32_t c) {
  return (c < 9472
    ? (c < 3861
      ? (c < 1550
        ? (c < 172
          ? (c < '^'
            ? (c < '*'
              ? (c >= '%' && c <= '&')
              : (c <= '.' || (c >= ':' && c <= '\\')))
            : (c <= '|' || (c < 166
              ? c == '~'
              : (c <= 166 || c == 169))))
          : (c <= 172 || (c < 1014
            ? (c < 176
              ? c == 174
              : (c <= 177 || (c >= 215 && c <= 247)))
            : (c <= 1154 || (c < 1542
              ? (c >= 1421 && c <= 1422)
              : c <= 1544)))))
        : (c <= 1551 || (c < 3059
          ? (c < 2038
            ? (c < 1769
              ? c == 1758
              : (c <= 1769 || (c >= 1789 && c <= 1790)))
            : (c <= 2038 || (c < 2928
              ? c == 2554
              : c <= 2928)))
          : (c <= 3064 || (c < 3449
            ? (c < 3199
              ? c == 3066
              : (c <= 3199 || c == 3407))
            : (c <= 3449 || (c < 3859
              ? (c >= 3841 && c <= 3843)
              : c <= 3859)))))))
      : (c <= 3863 || (c < 7009
        ? (c < 4046
          ? (c < 3896
            ? (c < 3892
              ? (c >= 3866 && c <= 3871)
              : (c <= 3892 || c == 3894))
            : (c <= 3896 || (c < 4039
              ? (c >= 4030 && c <= 4037)
              : c <= 4044)))
          : (c <= 4047 || (c < 5741
            ? (c < 4254
              ? (c >= 4053 && c <= 4056)
              : (c <= 4255 || (c >= 5008 && c <= 5017)))
            : (c <= 5741 || (c < 6622
              ? c == 6464
              : c <= 6655)))))
        : (c <= 7018 || (c < 8506
          ? (c < 8314
            ? (c < 8260
              ? (c >= 7028 && c <= 7036)
              : (c <= 8260 || c == 8274))
            : (c <= 8316 || (c < 8448
              ? (c >= 8330 && c <= 8332)
              : c <= 8494)))
          : (c <= 8527 || (c < 9003
            ? (c < 8592
              ? (c >= 8586 && c <= 8587)
              : (c <= 8967 || (c >= 8972 && c <= 9000)))
            : (c <= 9254 || (c < 9372
              ? (c >= 9280 && c <= 9290)
              : c <= 9449)))))))))
    : (c <= 10087 || (c < 12992
      ? (c < 12272
        ? (c < 11126
          ? (c < 10649
            ? (c < 10183
              ? (c >= 10132 && c <= 10180)
              : (c <= 10213 || (c >= 10224 && c <= 10626)))
            : (c <= 10711 || (c < 10750
              ? (c >= 10716 && c <= 10747)
              : c <= 11123)))
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

static inline bool aux_sym_plainid_token4_character_set_13(int32_t c) {
  return (c < 9472
    ? (c < 3861
      ? (c < 1550
        ? (c < 172
          ? (c < '<'
            ? (c < '*'
              ? (c >= '%' && c <= '&')
              : (c <= '.' || c == ':'))
            : (c <= '|' || (c < 166
              ? c == '~'
              : (c <= 166 || c == 169))))
          : (c <= 172 || (c < 1014
            ? (c < 176
              ? c == 174
              : (c <= 177 || (c >= 215 && c <= 247)))
            : (c <= 1154 || (c < 1542
              ? (c >= 1421 && c <= 1422)
              : c <= 1544)))))
        : (c <= 1551 || (c < 3059
          ? (c < 2038
            ? (c < 1769
              ? c == 1758
              : (c <= 1769 || (c >= 1789 && c <= 1790)))
            : (c <= 2038 || (c < 2928
              ? c == 2554
              : c <= 2928)))
          : (c <= 3064 || (c < 3449
            ? (c < 3199
              ? c == 3066
              : (c <= 3199 || c == 3407))
            : (c <= 3449 || (c < 3859
              ? (c >= 3841 && c <= 3843)
              : c <= 3859)))))))
      : (c <= 3863 || (c < 7009
        ? (c < 4046
          ? (c < 3896
            ? (c < 3892
              ? (c >= 3866 && c <= 3871)
              : (c <= 3892 || c == 3894))
            : (c <= 3896 || (c < 4039
              ? (c >= 4030 && c <= 4037)
              : c <= 4044)))
          : (c <= 4047 || (c < 5741
            ? (c < 4254
              ? (c >= 4053 && c <= 4056)
              : (c <= 4255 || (c >= 5008 && c <= 5017)))
            : (c <= 5741 || (c < 6622
              ? c == 6464
              : c <= 6655)))))
        : (c <= 7018 || (c < 8506
          ? (c < 8314
            ? (c < 8260
              ? (c >= 7028 && c <= 7036)
              : (c <= 8260 || c == 8274))
            : (c <= 8316 || (c < 8448
              ? (c >= 8330 && c <= 8332)
              : c <= 8494)))
          : (c <= 8527 || (c < 9003
            ? (c < 8592
              ? (c >= 8586 && c <= 8587)
              : (c <= 8967 || (c >= 8972 && c <= 9000)))
            : (c <= 9254 || (c < 9372
              ? (c >= 9280 && c <= 9290)
              : c <= 9449)))))))))
    : (c <= 10087 || (c < 12992
      ? (c < 12272
        ? (c < 11126
          ? (c < 10649
            ? (c < 10183
              ? (c >= 10132 && c <= 10180)
              : (c <= 10213 || (c >= 10224 && c <= 10626)))
            : (c <= 10711 || (c < 10750
              ? (c >= 10716 && c <= 10747)
              : c <= 11123)))
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

static inline bool aux_sym_plainid_token4_character_set_14(int32_t c) {
  return (c < 9372
    ? (c < 3841
      ? (c < 1421
        ? (c < 166
          ? (c < ':'
            ? (c < '#'
              ? c == '!'
              : (c <= '&' || (c >= '*' && c <= '.')))
            : (c <= ':' || (c < '\\'
              ? (c >= '<' && c <= '@')
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

static inline bool aux_sym_plainid_token4_character_set_15(int32_t c) {
  return (c < 9372
    ? (c < 3841
      ? (c < 1421
        ? (c < 166
          ? (c < ':'
            ? (c < '#'
              ? c == '!'
              : (c <= '&' || (c >= '*' && c <= '.')))
            : (c <= '@' || (c < '^'
              ? c == '\\'
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

static inline bool aux_sym_plainid_token4_character_set_16(int32_t c) {
  return (c < 9372
    ? (c < 3859
      ? (c < 1542
        ? (c < 169
          ? (c < ':'
            ? (c < '#'
              ? c == '!'
              : (c <= '&' || (c >= '*' && c <= '.')))
            : (c <= '@' || (c < '^'
              ? c == '\\'
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

static inline bool aux_sym_plainid_token4_character_set_17(int32_t c) {
  return (c < 9372
    ? (c < 3859
      ? (c < 1542
        ? (c < 169
          ? (c < '\\'
            ? (c < '*'
              ? (c >= '#' && c <= '&')
              : (c <= '.' || (c >= ':' && c <= '@')))
            : (c <= '\\' || (c < '~'
              ? (c >= '^' && c <= '|')
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

static inline bool aux_sym_plainid_token4_character_set_18(int32_t c) {
  return (c < 9372
    ? (c < 3859
      ? (c < 1542
        ? (c < 169
          ? (c < '<'
            ? (c < '*'
              ? (c >= '%' && c <= '&')
              : (c <= '-' || c == ':'))
            : (c <= '\\' || (c < '~'
              ? (c >= '^' && c <= '|')
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

static inline bool aux_sym_plainid_token4_character_set_19(int32_t c) {
  return (c < 9372
    ? (c < 3859
      ? (c < 1542
        ? (c < 169
          ? (c < '<'
            ? (c < '*'
              ? (c >= '#' && c <= '&')
              : (c <= '.' || c == ':'))
            : (c <= '@' || (c < '~'
              ? (c >= '\\' && c <= '|')
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

static inline bool aux_sym_plainid_token4_character_set_20(int32_t c) {
  return (c < 9472
    ? (c < 3861
      ? (c < 1550
        ? (c < 172
          ? (c < '\\'
            ? (c < '*'
              ? (c >= '#' && c <= '&')
              : (c <= '.' || (c >= ':' && c <= '@')))
            : (c <= '\\' || (c < 166
              ? (c >= '^' && c <= '~')
              : (c <= 166 || c == 169))))
          : (c <= 172 || (c < 1014
            ? (c < 176
              ? c == 174
              : (c <= 177 || (c >= 215 && c <= 247)))
            : (c <= 1154 || (c < 1542
              ? (c >= 1421 && c <= 1422)
              : c <= 1544)))))
        : (c <= 1551 || (c < 3059
          ? (c < 2038
            ? (c < 1769
              ? c == 1758
              : (c <= 1769 || (c >= 1789 && c <= 1790)))
            : (c <= 2038 || (c < 2928
              ? c == 2554
              : c <= 2928)))
          : (c <= 3064 || (c < 3449
            ? (c < 3199
              ? c == 3066
              : (c <= 3199 || c == 3407))
            : (c <= 3449 || (c < 3859
              ? (c >= 3841 && c <= 3843)
              : c <= 3859)))))))
      : (c <= 3863 || (c < 7009
        ? (c < 4046
          ? (c < 3896
            ? (c < 3892
              ? (c >= 3866 && c <= 3871)
              : (c <= 3892 || c == 3894))
            : (c <= 3896 || (c < 4039
              ? (c >= 4030 && c <= 4037)
              : c <= 4044)))
          : (c <= 4047 || (c < 5741
            ? (c < 4254
              ? (c >= 4053 && c <= 4056)
              : (c <= 4255 || (c >= 5008 && c <= 5017)))
            : (c <= 5741 || (c < 6622
              ? c == 6464
              : c <= 6655)))))
        : (c <= 7018 || (c < 8506
          ? (c < 8314
            ? (c < 8260
              ? (c >= 7028 && c <= 7036)
              : (c <= 8260 || c == 8274))
            : (c <= 8316 || (c < 8448
              ? (c >= 8330 && c <= 8332)
              : c <= 8494)))
          : (c <= 8527 || (c < 9003
            ? (c < 8592
              ? (c >= 8586 && c <= 8587)
              : (c <= 8967 || (c >= 8972 && c <= 9000)))
            : (c <= 9254 || (c < 9372
              ? (c >= 9280 && c <= 9290)
              : c <= 9449)))))))))
    : (c <= 10087 || (c < 12992
      ? (c < 12272
        ? (c < 11126
          ? (c < 10649
            ? (c < 10183
              ? (c >= 10132 && c <= 10180)
              : (c <= 10213 || (c >= 10224 && c <= 10626)))
            : (c <= 10711 || (c < 10750
              ? (c >= 10716 && c <= 10747)
              : c <= 11123)))
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

static inline bool aux_sym_plainid_token4_character_set_21(int32_t c) {
  return (c < 9372
    ? (c < 3859
      ? (c < 1542
        ? (c < 169
          ? (c < '<'
            ? (c < '*'
              ? (c >= '%' && c <= '&')
              : (c <= '.' || c == ':'))
            : (c <= '\\' || (c < '~'
              ? (c >= '^' && c <= '|')
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

static inline bool aux_sym_plainid_token4_character_set_22(int32_t c) {
  return (c < 9280
    ? (c < 3449
      ? (c < 1014
        ? (c < '~'
          ? (c < ':'
            ? (c < '#'
              ? c == '!'
              : (c <= '&' || (c >= '*' && c <= '.')))
            : (c <= ':' || (c < '\\'
              ? (c >= '<' && c <= '@')
              : (c <= '\\' || (c >= '^' && c <= '|')))))
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

static inline bool aux_sym_plainid_token4_character_set_23(int32_t c) {
  return (c < 9372
    ? (c < 3841
      ? (c < 1421
        ? (c < 166
          ? (c < '<'
            ? (c < '*'
              ? (c >= '#' && c <= '&')
              : (c <= '.' || c == ':'))
            : (c <= '@' || (c < '^'
              ? c == '\\'
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

static inline bool aux_sym_plainid_token4_character_set_24(int32_t c) {
  return (c < 9372
    ? (c < 3859
      ? (c < 1542
        ? (c < 169
          ? (c < '^'
            ? (c < '<'
              ? (c >= '#' && c <= ':')
              : (c <= '@' || c == '\\'))
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

static inline bool aux_sym_plainid_token4_character_set_25(int32_t c) {
  return (c < 9372
    ? (c < 3841
      ? (c < 1421
        ? (c < 166
          ? (c < '\\'
            ? (c < '*'
              ? (c >= '#' && c <= '&')
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

static inline bool aux_sym_plainid_token4_character_set_26(int32_t c) {
  return (c < 9280
    ? (c < 3449
      ? (c < 1014
        ? (c < '~'
          ? (c < ':'
            ? (c < '#'
              ? c == '!'
              : (c <= '&' || (c >= '*' && c <= '.')))
            : (c <= ':' || (c < '\\'
              ? (c >= '<' && c <= '@')
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

static inline bool aux_sym_plainid_token4_character_set_27(int32_t c) {
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

static inline bool aux_sym_plainid_token4_character_set_28(int32_t c) {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(178);
      if (lookahead == '!') ADVANCE(98);
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(218);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '*') ADVANCE(317);
      if (lookahead == ',') ADVANCE(234);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '0') ADVANCE(258);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead == '3') ADVANCE(261);
      if (lookahead == '4') ADVANCE(262);
      if (lookahead == '5') ADVANCE(263);
      if (lookahead == '6') ADVANCE(264);
      if (lookahead == '7') ADVANCE(265);
      if (lookahead == '8') ADVANCE(266);
      if (lookahead == '9') ADVANCE(267);
      if (lookahead == ':') ADVANCE(307);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '<') ADVANCE(85);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '>') ADVANCE(86);
      if (lookahead == '?') ADVANCE(87);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == 'X') ADVANCE(270);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(168);
      if (lookahead == ']') ADVANCE(225);
      if (lookahead == '_') ADVANCE(255);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'x') ADVANCE(269);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(177)
      if (aux_sym_plainid_token1_character_set_1(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_varid_token1_character_set_1(lookahead)) ADVANCE(254);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '\'') ADVANCE(218);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '0') ADVANCE(258);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead == '3') ADVANCE(261);
      if (lookahead == '4') ADVANCE(262);
      if (lookahead == '5') ADVANCE(263);
      if (lookahead == '6') ADVANCE(264);
      if (lookahead == '7') ADVANCE(265);
      if (lookahead == '8') ADVANCE(266);
      if (lookahead == '9') ADVANCE(267);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'f') ADVANCE(239);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_1(lookahead)) ADVANCE(253);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '?') ADVANCE(87);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_2(lookahead)) ADVANCE(253);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == 'X') ADVANCE(270);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == 'x') ADVANCE(269);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_2(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_3(lookahead)) ADVANCE(253);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == 'X') ADVANCE(270);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == 'x') ADVANCE(269);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_2(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_3(lookahead)) ADVANCE(253);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == 'X') ADVANCE(270);
      if (lookahead == ']') ADVANCE(225);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == 'x') ADVANCE(269);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_4(lookahead)) ADVANCE(253);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == 'X') ADVANCE(270);
      if (lookahead == ']') ADVANCE(225);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == 'x') ADVANCE(269);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_4(lookahead)) ADVANCE(253);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == 'X') ADVANCE(270);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == 'x') ADVANCE(269);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_5(lookahead)) ADVANCE(253);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == 'X') ADVANCE(270);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == 'x') ADVANCE(269);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_5(lookahead)) ADVANCE(253);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_2(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_3(lookahead)) ADVANCE(253);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_2(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_3(lookahead)) ADVANCE(253);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_5(lookahead)) ADVANCE(253);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_5(lookahead)) ADVANCE(253);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(186);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == ']') ADVANCE(225);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_4(lookahead)) ADVANCE(253);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(186);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == ']') ADVANCE(225);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_4(lookahead)) ADVANCE(253);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(187);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == 'X') ADVANCE(270);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == 'x') ADVANCE(269);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_6(lookahead)) ADVANCE(253);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(187);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == 'X') ADVANCE(270);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == 'x') ADVANCE(269);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_6(lookahead)) ADVANCE(253);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_7(lookahead)) ADVANCE(253);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(189);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_2(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_8(lookahead)) ADVANCE(253);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(190);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == ']') ADVANCE(225);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_9(lookahead)) ADVANCE(253);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(191);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_5(lookahead)) ADVANCE(253);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(191);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_5(lookahead)) ADVANCE(253);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(191);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(279);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(279);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_5(lookahead)) ADVANCE(253);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_2(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_3(lookahead)) ADVANCE(253);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_2(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_3(lookahead)) ADVANCE(253);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(279);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(279);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_2(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_3(lookahead)) ADVANCE(253);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(193);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == ']') ADVANCE(225);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_4(lookahead)) ADVANCE(253);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(193);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead == ']') ADVANCE(225);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_4(lookahead)) ADVANCE(253);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(193);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(279);
      if (lookahead == ']') ADVANCE(225);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(279);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_4(lookahead)) ADVANCE(253);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_10(lookahead)) ADVANCE(253);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ':') ADVANCE(308);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_11(lookahead)) ADVANCE(253);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(196);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_2(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_12(lookahead)) ADVANCE(253);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_6(lookahead)) ADVANCE(253);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_6(lookahead)) ADVANCE(253);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == ']') ADVANCE(225);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_13(lookahead)) ADVANCE(253);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(199);
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == 'X') ADVANCE(270);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'x') ADVANCE(269);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_6(lookahead)) ADVANCE(253);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(199);
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == 'X') ADVANCE(270);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'x') ADVANCE(269);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_6(lookahead)) ADVANCE(253);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(200);
      if (lookahead == '\r') ADVANCE(38);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == ']') ADVANCE(225);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(38)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_14(lookahead)) ADVANCE(253);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(39);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(39)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_2(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_15(lookahead)) ADVANCE(253);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == '\r') ADVANCE(40);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(40)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_16(lookahead)) ADVANCE(253);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '\r') ADVANCE(41);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(41)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_2(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_17(lookahead)) ADVANCE(253);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(204);
      if (lookahead == '\r') ADVANCE(42);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(42)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_6(lookahead)) ADVANCE(253);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(204);
      if (lookahead == '\r') ADVANCE(42);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(42)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_6(lookahead)) ADVANCE(253);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(205);
      if (lookahead == '\r') ADVANCE(44);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(44)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_18(lookahead)) ADVANCE(253);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(206);
      if (lookahead == '\r') ADVANCE(45);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == ']') ADVANCE(225);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_19(lookahead)) ADVANCE(253);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(207);
      if (lookahead == '\r') ADVANCE(46);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(46)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_20(lookahead)) ADVANCE(253);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '\r') ADVANCE(47);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(47)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_21(lookahead)) ADVANCE(253);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(209);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_6(lookahead)) ADVANCE(253);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(209);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_6(lookahead)) ADVANCE(253);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(209);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(279);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(279);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_6(lookahead)) ADVANCE(253);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(51)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_18(lookahead)) ADVANCE(253);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '\r') ADVANCE(52);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(52)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_22(lookahead)) ADVANCE(253);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(53)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_23(lookahead)) ADVANCE(253);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(54)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_21(lookahead)) ADVANCE(253);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == '\r') ADVANCE(55);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(55)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_6(lookahead)) ADVANCE(253);
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == '\r') ADVANCE(55);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(55)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_6(lookahead)) ADVANCE(253);
      END_STATE();
    case 57:
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == '\r') ADVANCE(55);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(279);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(279);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(55)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_6(lookahead)) ADVANCE(253);
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(58)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_22(lookahead)) ADVANCE(253);
      END_STATE();
    case 59:
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead == '\r') ADVANCE(59);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(59)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_23(lookahead)) ADVANCE(253);
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(217);
      if (lookahead == '\r') ADVANCE(60);
      if (lookahead == '!') ADVANCE(151);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '?') ADVANCE(87);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(60)
      END_STATE();
    case 61:
      if (lookahead == '!') ADVANCE(314);
      END_STATE();
    case 62:
      if (lookahead == '!') ADVANCE(311);
      END_STATE();
    case 63:
      if (lookahead == '!') ADVANCE(315);
      END_STATE();
    case 64:
      if (lookahead == '!') ADVANCE(318);
      END_STATE();
    case 65:
      if (lookahead == '!') ADVANCE(316);
      END_STATE();
    case 66:
      if (lookahead == '!') ADVANCE(306);
      END_STATE();
    case 67:
      if (lookahead == '!') ADVANCE(252);
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '\'') ADVANCE(218);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '0') ADVANCE(258);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead == '3') ADVANCE(261);
      if (lookahead == '4') ADVANCE(262);
      if (lookahead == '5') ADVANCE(263);
      if (lookahead == '6') ADVANCE(264);
      if (lookahead == '7') ADVANCE(265);
      if (lookahead == '8') ADVANCE(266);
      if (lookahead == '9') ADVANCE(267);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'f') ADVANCE(239);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_24(lookahead)) ADVANCE(253);
      END_STATE();
    case 68:
      if (lookahead == '!') ADVANCE(252);
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '\'') ADVANCE(218);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '0') ADVANCE(258);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead == '3') ADVANCE(261);
      if (lookahead == '4') ADVANCE(262);
      if (lookahead == '5') ADVANCE(263);
      if (lookahead == '6') ADVANCE(264);
      if (lookahead == '7') ADVANCE(265);
      if (lookahead == '8') ADVANCE(266);
      if (lookahead == '9') ADVANCE(267);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'f') ADVANCE(239);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_25(lookahead)) ADVANCE(253);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '\'') ADVANCE(218);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '0') ADVANCE(258);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead == '3') ADVANCE(261);
      if (lookahead == '4') ADVANCE(262);
      if (lookahead == '5') ADVANCE(263);
      if (lookahead == '6') ADVANCE(264);
      if (lookahead == '7') ADVANCE(265);
      if (lookahead == '8') ADVANCE(266);
      if (lookahead == '9') ADVANCE(267);
      if (lookahead == '_') ADVANCE(255);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'f') ADVANCE(239);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(69)
      if (aux_sym_plainid_token1_character_set_1(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_1(lookahead)) ADVANCE(253);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '\'') ADVANCE(218);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '0') ADVANCE(258);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead == '3') ADVANCE(261);
      if (lookahead == '4') ADVANCE(262);
      if (lookahead == '5') ADVANCE(263);
      if (lookahead == '6') ADVANCE(264);
      if (lookahead == '7') ADVANCE(265);
      if (lookahead == '8') ADVANCE(266);
      if (lookahead == '9') ADVANCE(267);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'f') ADVANCE(239);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_1(lookahead)) ADVANCE(253);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '/') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(285);
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 72:
      if (lookahead == '"') ADVANCE(282);
      END_STATE();
    case 73:
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '\'') ADVANCE(218);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      END_STATE();
    case 74:
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '\'') ADVANCE(218);
      if (lookahead == '/') ADVANCE(287);
      if (lookahead == '\\') ADVANCE(168);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(73)
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 75:
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '/') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(285);
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 76:
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == ',') ADVANCE(234);
      if (lookahead == '.') ADVANCE(231);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '0') ADVANCE(258);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead == '3') ADVANCE(261);
      if (lookahead == '4') ADVANCE(262);
      if (lookahead == '5') ADVANCE(263);
      if (lookahead == '6') ADVANCE(264);
      if (lookahead == '7') ADVANCE(265);
      if (lookahead == '8') ADVANCE(266);
      if (lookahead == '9') ADVANCE(267);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '?') ADVANCE(87);
      if (lookahead == ']') ADVANCE(225);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      END_STATE();
    case 77:
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == ']') ADVANCE(225);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_26(lookahead)) ADVANCE(253);
      END_STATE();
    case 78:
      if (lookahead == '*') ADVANCE(288);
      if (lookahead == '/') ADVANCE(292);
      END_STATE();
    case 79:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      END_STATE();
    case 80:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 81:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      END_STATE();
    case 82:
      if (lookahead == '/') ADVANCE(291);
      END_STATE();
    case 83:
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(83)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_2(lookahead)) ADVANCE(253);
      END_STATE();
    case 84:
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(84)
      if (aux_sym_plainid_token1_character_set_2(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_plainid_token4_character_set_2(lookahead)) ADVANCE(253);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(320);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(319);
      END_STATE();
    case 87:
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 88:
      if (lookahead == '>') ADVANCE(302);
      END_STATE();
    case 89:
      if (lookahead == '>') ADVANCE(304);
      END_STATE();
    case 90:
      if (lookahead == '>') ADVANCE(301);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(154);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(119);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(159);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(149);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(117);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'b') ADVANCE(135);
      if (lookahead == 'h') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 113:
      if (lookahead == 'b') ADVANCE(298);
      if (lookahead == 'c') ADVANCE(299);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 115:
      if (lookahead == 'c') ADVANCE(299);
      END_STATE();
    case 116:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 117:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 118:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 119:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 129:
      if (lookahead == 'f') ADVANCE(131);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(309);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 133:
      if (lookahead == 'k') ADVANCE(95);
      END_STATE();
    case 134:
      if (lookahead == 'k') ADVANCE(91);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 168:
      if (lookahead == 'u') ADVANCE(169);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(236);
      END_STATE();
    case 169:
      if (lookahead == 'u') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      END_STATE();
    case 170:
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 171:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 172:
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 173:
      if (lookahead == 'y') ADVANCE(150);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      END_STATE();
    case 177:
      if (eof) ADVANCE(178);
      if (lookahead == '!') ADVANCE(98);
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(218);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '*') ADVANCE(317);
      if (lookahead == ',') ADVANCE(234);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(231);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '0') ADVANCE(258);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead == '3') ADVANCE(261);
      if (lookahead == '4') ADVANCE(262);
      if (lookahead == '5') ADVANCE(263);
      if (lookahead == '6') ADVANCE(264);
      if (lookahead == '7') ADVANCE(265);
      if (lookahead == '8') ADVANCE(266);
      if (lookahead == '9') ADVANCE(267);
      if (lookahead == ':') ADVANCE(307);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '<') ADVANCE(85);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '>') ADVANCE(86);
      if (lookahead == '?') ADVANCE(87);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == 'X') ADVANCE(270);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == ']') ADVANCE(225);
      if (lookahead == '_') ADVANCE(255);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'x') ADVANCE(269);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(177)
      if (aux_sym_plainid_token1_character_set_1(lookahead)) ADVANCE(237);
      if (aux_sym_plainid_token2_character_set_1(lookahead)) ADVANCE(238);
      if (aux_sym_varid_token1_character_set_1(lookahead)) ADVANCE(254);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '\r') ADVANCE(8);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead == '\r') ADVANCE(10);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '\r') ADVANCE(12);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(186);
      if (lookahead == '\r') ADVANCE(14);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(187);
      if (lookahead == '\r') ADVANCE(16);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == '\r') ADVANCE(18);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(189);
      if (lookahead == '\r') ADVANCE(19);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(190);
      if (lookahead == '\r') ADVANCE(20);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(191);
      if (lookahead == '\r') ADVANCE(21);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '\r') ADVANCE(24);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(193);
      if (lookahead == '\r') ADVANCE(27);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead == '\r') ADVANCE(30);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '\r') ADVANCE(31);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(196);
      if (lookahead == '\r') ADVANCE(32);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '\r') ADVANCE(33);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '\r') ADVANCE(35);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(199);
      if (lookahead == '\r') ADVANCE(36);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(200);
      if (lookahead == '\r') ADVANCE(38);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(39);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == '\r') ADVANCE(40);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '\r') ADVANCE(41);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(204);
      if (lookahead == '\r') ADVANCE(42);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(205);
      if (lookahead == '\r') ADVANCE(44);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(206);
      if (lookahead == '\r') ADVANCE(45);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(207);
      if (lookahead == '\r') ADVANCE(46);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '\r') ADVANCE(47);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(209);
      if (lookahead == '\r') ADVANCE(48);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '\r') ADVANCE(51);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '\r') ADVANCE(52);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\r') ADVANCE(53);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\r') ADVANCE(54);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == '\r') ADVANCE(55);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(58);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(217);
      if (lookahead == '\r') ADVANCE(60);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (aux_sym_plainid_token4_character_set_27(lookahead)) ADVANCE(253);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_unicode_escape);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(72);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (aux_sym_plainid_token4_character_set_27(lookahead)) ADVANCE(253);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (aux_sym_plainid_token4_character_set_27(lookahead)) ADVANCE(253);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_char_escape_seq);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_plainid_token1);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_plainid_token2);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_plainid_token2);
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_plainid_token2);
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_plainid_token2);
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_plainid_token2);
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_plainid_token2);
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_plainid_token3);
      if (lookahead == '_') ADVANCE(245);
      if (aux_sym_plainid_token3_character_set_1(lookahead)) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_plainid_token3);
      if (lookahead == '_') ADVANCE(245);
      if (aux_sym_plainid_token3_character_set_1(lookahead)) ADVANCE(244);
      if (aux_sym_plainid_token3_character_set_2(lookahead)) ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_plainid_token3);
      if (aux_sym_plainid_token4_character_set_27(lookahead)) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_plainid_token4);
      if (lookahead == '*') ADVANCE(289);
      if (lookahead == '/') ADVANCE(293);
      if (aux_sym_plainid_token4_character_set_28(lookahead)) ADVANCE(253);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_plainid_token4);
      if (lookahead == '=') ADVANCE(250);
      if (aux_sym_plainid_token4_character_set_27(lookahead)) ADVANCE(253);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_plainid_token4);
      if (lookahead == '>') ADVANCE(303);
      if (aux_sym_plainid_token4_character_set_27(lookahead)) ADVANCE(253);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_plainid_token4);
      if (lookahead == '>') ADVANCE(305);
      if (aux_sym_plainid_token4_character_set_27(lookahead)) ADVANCE(253);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_plainid_token4);
      if (lookahead == 'a') ADVANCE(142);
      if (aux_sym_plainid_token4_character_set_27(lookahead)) ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_plainid_token4);
      if (lookahead == 'h') ADVANCE(133);
      if (aux_sym_plainid_token4_character_set_27(lookahead)) ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_plainid_token4);
      if (aux_sym_plainid_token4_character_set_27(lookahead)) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_varid_token1);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_L);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_decimal_numeral_token1);
      if (lookahead == '_') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_hex_numeral_token1);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_hex_numeral_token2);
      if (lookahead == '_') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_DOT2);
      if (aux_sym_plainid_token4_character_set_27(lookahead)) ADVANCE(253);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_floating_point_literal_token1);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_exponent_part_token1);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_exponent_part_token2);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_exponent_part_token2);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(277);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__float_type);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(288);
      if (lookahead == '/') ADVANCE(292);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(283);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_char_element_token1);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_char_element_token1);
      if (lookahead == '*') ADVANCE(288);
      if (lookahead == '/') ADVANCE(292);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (aux_sym_plainid_token4_character_set_27(lookahead)) ADVANCE(253);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (aux_sym_plainid_token4_character_set_27(lookahead)) ADVANCE(253);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_indent);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_outdent);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_EQ_GT_GT);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead == '>') ADVANCE(300);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (aux_sym_plainid_token4_character_set_27(lookahead)) ADVANCE(253);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ_GT);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ_GT);
      if (aux_sym_plainid_token4_character_set_27(lookahead)) ADVANCE(253);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_hk_type_param_clause);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (aux_sym_plainid_token4_character_set_27(lookahead)) ADVANCE(253);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (aux_sym_plainid_token4_character_set_27(lookahead)) ADVANCE(253);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_pattern);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_block_stat);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_block_result);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(291);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_refine_dcl);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_GT_COLON);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 68},
  [2] = {.lex_state = 67},
  [3] = {.lex_state = 67},
  [4] = {.lex_state = 67},
  [5] = {.lex_state = 67},
  [6] = {.lex_state = 68},
  [7] = {.lex_state = 68},
  [8] = {.lex_state = 68},
  [9] = {.lex_state = 68},
  [10] = {.lex_state = 68},
  [11] = {.lex_state = 68},
  [12] = {.lex_state = 68},
  [13] = {.lex_state = 68},
  [14] = {.lex_state = 68},
  [15] = {.lex_state = 67},
  [16] = {.lex_state = 68},
  [17] = {.lex_state = 67},
  [18] = {.lex_state = 68},
  [19] = {.lex_state = 68},
  [20] = {.lex_state = 68},
  [21] = {.lex_state = 68},
  [22] = {.lex_state = 68},
  [23] = {.lex_state = 68},
  [24] = {.lex_state = 68},
  [25] = {.lex_state = 68},
  [26] = {.lex_state = 68},
  [27] = {.lex_state = 68},
  [28] = {.lex_state = 68},
  [29] = {.lex_state = 68},
  [30] = {.lex_state = 68},
  [31] = {.lex_state = 68},
  [32] = {.lex_state = 68},
  [33] = {.lex_state = 68},
  [34] = {.lex_state = 68},
  [35] = {.lex_state = 68},
  [36] = {.lex_state = 68},
  [37] = {.lex_state = 68},
  [38] = {.lex_state = 68},
  [39] = {.lex_state = 68},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 69},
  [46] = {.lex_state = 69},
  [47] = {.lex_state = 70},
  [48] = {.lex_state = 70},
  [49] = {.lex_state = 70},
  [50] = {.lex_state = 70},
  [51] = {.lex_state = 70},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 70},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 17},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 19},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 20},
  [67] = {.lex_state = 19},
  [68] = {.lex_state = 18},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 19},
  [71] = {.lex_state = 22},
  [72] = {.lex_state = 18},
  [73] = {.lex_state = 20},
  [74] = {.lex_state = 18},
  [75] = {.lex_state = 25},
  [76] = {.lex_state = 28},
  [77] = {.lex_state = 20},
  [78] = {.lex_state = 18},
  [79] = {.lex_state = 28},
  [80] = {.lex_state = 30},
  [81] = {.lex_state = 22},
  [82] = {.lex_state = 28},
  [83] = {.lex_state = 31},
  [84] = {.lex_state = 20},
  [85] = {.lex_state = 19},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 19},
  [88] = {.lex_state = 31},
  [89] = {.lex_state = 18},
  [90] = {.lex_state = 20},
  [91] = {.lex_state = 32},
  [92] = {.lex_state = 34},
  [93] = {.lex_state = 31},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 35},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 25},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 19},
  [100] = {.lex_state = 18},
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 20},
  [103] = {.lex_state = 25},
  [104] = {.lex_state = 37},
  [105] = {.lex_state = 31},
  [106] = {.lex_state = 22},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 29},
  [109] = {.lex_state = 26},
  [110] = {.lex_state = 23},
  [111] = {.lex_state = 23},
  [112] = {.lex_state = 38},
  [113] = {.lex_state = 26},
  [114] = {.lex_state = 23},
  [115] = {.lex_state = 26},
  [116] = {.lex_state = 23},
  [117] = {.lex_state = 39},
  [118] = {.lex_state = 40},
  [119] = {.lex_state = 38},
  [120] = {.lex_state = 26},
  [121] = {.lex_state = 26},
  [122] = {.lex_state = 29},
  [123] = {.lex_state = 39},
  [124] = {.lex_state = 39},
  [125] = {.lex_state = 29},
  [126] = {.lex_state = 40},
  [127] = {.lex_state = 38},
  [128] = {.lex_state = 29},
  [129] = {.lex_state = 29},
  [130] = {.lex_state = 40},
  [131] = {.lex_state = 23},
  [132] = {.lex_state = 21},
  [133] = {.lex_state = 27},
  [134] = {.lex_state = 21},
  [135] = {.lex_state = 24},
  [136] = {.lex_state = 24},
  [137] = {.lex_state = 27},
  [138] = {.lex_state = 24},
  [139] = {.lex_state = 21},
  [140] = {.lex_state = 27},
  [141] = {.lex_state = 27},
  [142] = {.lex_state = 27},
  [143] = {.lex_state = 27},
  [144] = {.lex_state = 21},
  [145] = {.lex_state = 24},
  [146] = {.lex_state = 27},
  [147] = {.lex_state = 27},
  [148] = {.lex_state = 41},
  [149] = {.lex_state = 27},
  [150] = {.lex_state = 43},
  [151] = {.lex_state = 44},
  [152] = {.lex_state = 45},
  [153] = {.lex_state = 44},
  [154] = {.lex_state = 21},
  [155] = {.lex_state = 21},
  [156] = {.lex_state = 21},
  [157] = {.lex_state = 41},
  [158] = {.lex_state = 46},
  [159] = {.lex_state = 24},
  [160] = {.lex_state = 24},
  [161] = {.lex_state = 24},
  [162] = {.lex_state = 27},
  [163] = {.lex_state = 27},
  [164] = {.lex_state = 24},
  [165] = {.lex_state = 27},
  [166] = {.lex_state = 41},
  [167] = {.lex_state = 21},
  [168] = {.lex_state = 45},
  [169] = {.lex_state = 46},
  [170] = {.lex_state = 24},
  [171] = {.lex_state = 24},
  [172] = {.lex_state = 24},
  [173] = {.lex_state = 24},
  [174] = {.lex_state = 21},
  [175] = {.lex_state = 24},
  [176] = {.lex_state = 24},
  [177] = {.lex_state = 21},
  [178] = {.lex_state = 21},
  [179] = {.lex_state = 21},
  [180] = {.lex_state = 27},
  [181] = {.lex_state = 46},
  [182] = {.lex_state = 21},
  [183] = {.lex_state = 27},
  [184] = {.lex_state = 27},
  [185] = {.lex_state = 24},
  [186] = {.lex_state = 24},
  [187] = {.lex_state = 21},
  [188] = {.lex_state = 27},
  [189] = {.lex_state = 21},
  [190] = {.lex_state = 45},
  [191] = {.lex_state = 21},
  [192] = {.lex_state = 24},
  [193] = {.lex_state = 21},
  [194] = {.lex_state = 21},
  [195] = {.lex_state = 21},
  [196] = {.lex_state = 24},
  [197] = {.lex_state = 27},
  [198] = {.lex_state = 24},
  [199] = {.lex_state = 27},
  [200] = {.lex_state = 27},
  [201] = {.lex_state = 41},
  [202] = {.lex_state = 41},
  [203] = {.lex_state = 46},
  [204] = {.lex_state = 39},
  [205] = {.lex_state = 46},
  [206] = {.lex_state = 40},
  [207] = {.lex_state = 47},
  [208] = {.lex_state = 41},
  [209] = {.lex_state = 76},
  [210] = {.lex_state = 44},
  [211] = {.lex_state = 40},
  [212] = {.lex_state = 33},
  [213] = {.lex_state = 76},
  [214] = {.lex_state = 49},
  [215] = {.lex_state = 33},
  [216] = {.lex_state = 49},
  [217] = {.lex_state = 49},
  [218] = {.lex_state = 76},
  [219] = {.lex_state = 45},
  [220] = {.lex_state = 46},
  [221] = {.lex_state = 44},
  [222] = {.lex_state = 41},
  [223] = {.lex_state = 44},
  [224] = {.lex_state = 45},
  [225] = {.lex_state = 39},
  [226] = {.lex_state = 45},
  [227] = {.lex_state = 40},
  [228] = {.lex_state = 45},
  [229] = {.lex_state = 41},
  [230] = {.lex_state = 45},
  [231] = {.lex_state = 45},
  [232] = {.lex_state = 45},
  [233] = {.lex_state = 41},
  [234] = {.lex_state = 76},
  [235] = {.lex_state = 46},
  [236] = {.lex_state = 46},
  [237] = {.lex_state = 44},
  [238] = {.lex_state = 46},
  [239] = {.lex_state = 76},
  [240] = {.lex_state = 41},
  [241] = {.lex_state = 39},
  [242] = {.lex_state = 44},
  [243] = {.lex_state = 46},
  [244] = {.lex_state = 51},
  [245] = {.lex_state = 38},
  [246] = {.lex_state = 39},
  [247] = {.lex_state = 38},
  [248] = {.lex_state = 40},
  [249] = {.lex_state = 51},
  [250] = {.lex_state = 52},
  [251] = {.lex_state = 40},
  [252] = {.lex_state = 39},
  [253] = {.lex_state = 52},
  [254] = {.lex_state = 50},
  [255] = {.lex_state = 52},
  [256] = {.lex_state = 38},
  [257] = {.lex_state = 38},
  [258] = {.lex_state = 40},
  [259] = {.lex_state = 39},
  [260] = {.lex_state = 50},
  [261] = {.lex_state = 38},
  [262] = {.lex_state = 40},
  [263] = {.lex_state = 50},
  [264] = {.lex_state = 40},
  [265] = {.lex_state = 39},
  [266] = {.lex_state = 50},
  [267] = {.lex_state = 50},
  [268] = {.lex_state = 39},
  [269] = {.lex_state = 48},
  [270] = {.lex_state = 48},
  [271] = {.lex_state = 48},
  [272] = {.lex_state = 51},
  [273] = {.lex_state = 48},
  [274] = {.lex_state = 48},
  [275] = {.lex_state = 48},
  [276] = {.lex_state = 53},
  [277] = {.lex_state = 48},
  [278] = {.lex_state = 42},
  [279] = {.lex_state = 48},
  [280] = {.lex_state = 48},
  [281] = {.lex_state = 48},
  [282] = {.lex_state = 39},
  [283] = {.lex_state = 48},
  [284] = {.lex_state = 39},
  [285] = {.lex_state = 48},
  [286] = {.lex_state = 48},
  [287] = {.lex_state = 54},
  [288] = {.lex_state = 48},
  [289] = {.lex_state = 48},
  [290] = {.lex_state = 53},
  [291] = {.lex_state = 56},
  [292] = {.lex_state = 40},
  [293] = {.lex_state = 53},
  [294] = {.lex_state = 48},
  [295] = {.lex_state = 77},
  [296] = {.lex_state = 48},
  [297] = {.lex_state = 77},
  [298] = {.lex_state = 48},
  [299] = {.lex_state = 56},
  [300] = {.lex_state = 42},
  [301] = {.lex_state = 48},
  [302] = {.lex_state = 40},
  [303] = {.lex_state = 77},
  [304] = {.lex_state = 51},
  [305] = {.lex_state = 51},
  [306] = {.lex_state = 51},
  [307] = {.lex_state = 56},
  [308] = {.lex_state = 51},
  [309] = {.lex_state = 57},
  [310] = {.lex_state = 53},
  [311] = {.lex_state = 53},
  [312] = {.lex_state = 53},
  [313] = {.lex_state = 53},
  [314] = {.lex_state = 58},
  [315] = {.lex_state = 53},
  [316] = {.lex_state = 57},
  [317] = {.lex_state = 53},
  [318] = {.lex_state = 57},
  [319] = {.lex_state = 53},
  [320] = {.lex_state = 58},
  [321] = {.lex_state = 57},
  [322] = {.lex_state = 58},
  [323] = {.lex_state = 57},
  [324] = {.lex_state = 55},
  [325] = {.lex_state = 59},
  [326] = {.lex_state = 59},
  [327] = {.lex_state = 77},
  [328] = {.lex_state = 55},
  [329] = {.lex_state = 59},
  [330] = {.lex_state = 77},
  [331] = {.lex_state = 55},
  [332] = {.lex_state = 3},
  [333] = {.lex_state = 55},
  [334] = {.lex_state = 52},
  [335] = {.lex_state = 55},
  [336] = {.lex_state = 55},
  [337] = {.lex_state = 55},
  [338] = {.lex_state = 55},
  [339] = {.lex_state = 55},
  [340] = {.lex_state = 55},
  [341] = {.lex_state = 55},
  [342] = {.lex_state = 55},
  [343] = {.lex_state = 55},
  [344] = {.lex_state = 55},
  [345] = {.lex_state = 55},
  [346] = {.lex_state = 52},
  [347] = {.lex_state = 55},
  [348] = {.lex_state = 52},
  [349] = {.lex_state = 3},
  [350] = {.lex_state = 55},
  [351] = {.lex_state = 55},
  [352] = {.lex_state = 52},
  [353] = {.lex_state = 52},
  [354] = {.lex_state = 3},
  [355] = {.lex_state = 55},
  [356] = {.lex_state = 59},
  [357] = {.lex_state = 59},
  [358] = {.lex_state = 59},
  [359] = {.lex_state = 59},
  [360] = {.lex_state = 59},
  [361] = {.lex_state = 59},
  [362] = {.lex_state = 60},
  [363] = {.lex_state = 59},
  [364] = {.lex_state = 58},
  [365] = {.lex_state = 60},
  [366] = {.lex_state = 60},
  [367] = {.lex_state = 58},
  [368] = {.lex_state = 60},
  [369] = {.lex_state = 60},
  [370] = {.lex_state = 3},
  [371] = {.lex_state = 58},
  [372] = {.lex_state = 60},
  [373] = {.lex_state = 58},
  [374] = {.lex_state = 3},
  [375] = {.lex_state = 58},
  [376] = {.lex_state = 60},
  [377] = {.lex_state = 60},
  [378] = {.lex_state = 60},
  [379] = {.lex_state = 60},
  [380] = {.lex_state = 74},
  [381] = {.lex_state = 74},
  [382] = {.lex_state = 74},
  [383] = {.lex_state = 60},
  [384] = {.lex_state = 60},
  [385] = {.lex_state = 83},
  [386] = {.lex_state = 74},
  [387] = {.lex_state = 74},
  [388] = {.lex_state = 60},
  [389] = {.lex_state = 60},
  [390] = {.lex_state = 83},
  [391] = {.lex_state = 83},
  [392] = {.lex_state = 60},
  [393] = {.lex_state = 60},
  [394] = {.lex_state = 60},
  [395] = {.lex_state = 60},
  [396] = {.lex_state = 60},
  [397] = {.lex_state = 60},
  [398] = {.lex_state = 74},
  [399] = {.lex_state = 74},
  [400] = {.lex_state = 74},
  [401] = {.lex_state = 74},
  [402] = {.lex_state = 60},
  [403] = {.lex_state = 60},
  [404] = {.lex_state = 60},
  [405] = {.lex_state = 60},
  [406] = {.lex_state = 74},
  [407] = {.lex_state = 60},
  [408] = {.lex_state = 60},
  [409] = {.lex_state = 60},
  [410] = {.lex_state = 60},
  [411] = {.lex_state = 60},
  [412] = {.lex_state = 60},
  [413] = {.lex_state = 60},
  [414] = {.lex_state = 74},
  [415] = {.lex_state = 60},
  [416] = {.lex_state = 84},
  [417] = {.lex_state = 76},
  [418] = {.lex_state = 60},
  [419] = {.lex_state = 74},
  [420] = {.lex_state = 60},
  [421] = {.lex_state = 60},
  [422] = {.lex_state = 60},
  [423] = {.lex_state = 60},
  [424] = {.lex_state = 74},
  [425] = {.lex_state = 74},
  [426] = {.lex_state = 74},
  [427] = {.lex_state = 84},
  [428] = {.lex_state = 83},
  [429] = {.lex_state = 84},
  [430] = {.lex_state = 71},
  [431] = {.lex_state = 83},
  [432] = {.lex_state = 84},
  [433] = {.lex_state = 71},
  [434] = {.lex_state = 74},
  [435] = {.lex_state = 84},
  [436] = {.lex_state = 71},
  [437] = {.lex_state = 74},
  [438] = {.lex_state = 84},
  [439] = {.lex_state = 74},
  [440] = {.lex_state = 74},
  [441] = {.lex_state = 71},
  [442] = {.lex_state = 84},
  [443] = {.lex_state = 74},
  [444] = {.lex_state = 74},
  [445] = {.lex_state = 84},
  [446] = {.lex_state = 74},
  [447] = {.lex_state = 74},
  [448] = {.lex_state = 71},
  [449] = {.lex_state = 71},
  [450] = {.lex_state = 60},
  [451] = {.lex_state = 71},
  [452] = {.lex_state = 74},
  [453] = {.lex_state = 60},
  [454] = {.lex_state = 71},
  [455] = {.lex_state = 84},
  [456] = {.lex_state = 74},
  [457] = {.lex_state = 74},
  [458] = {.lex_state = 84},
  [459] = {.lex_state = 74},
  [460] = {.lex_state = 74},
  [461] = {.lex_state = 71},
  [462] = {.lex_state = 84},
  [463] = {.lex_state = 74},
  [464] = {.lex_state = 74},
  [465] = {.lex_state = 74},
  [466] = {.lex_state = 74},
  [467] = {.lex_state = 74},
  [468] = {.lex_state = 74},
  [469] = {.lex_state = 74},
  [470] = {.lex_state = 74},
  [471] = {.lex_state = 74},
  [472] = {.lex_state = 74},
  [473] = {.lex_state = 74},
  [474] = {.lex_state = 71},
  [475] = {.lex_state = 76},
  [476] = {.lex_state = 76},
  [477] = {.lex_state = 2},
  [478] = {.lex_state = 76},
  [479] = {.lex_state = 60},
  [480] = {.lex_state = 76},
  [481] = {.lex_state = 71},
  [482] = {.lex_state = 76},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 74},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 76},
  [489] = {.lex_state = 74},
  [490] = {.lex_state = 74},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 71},
  [493] = {.lex_state = 71},
  [494] = {.lex_state = 76},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 74},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 74},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 76},
  [503] = {.lex_state = 76},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 76},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 76},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 76},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 76},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 74},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 71},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 76},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 76},
  [537] = {.lex_state = 71},
  [538] = {.lex_state = 76},
  [539] = {.lex_state = 76},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 76},
  [542] = {.lex_state = 76},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 76},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 76},
  [547] = {.lex_state = 76},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 76},
  [550] = {.lex_state = 76},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 76},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 76},
  [556] = {.lex_state = 76},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 76},
  [562] = {.lex_state = 76},
  [563] = {.lex_state = 76},
  [564] = {.lex_state = 76},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 75},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 268},
  [572] = {.lex_state = 268},
  [573] = {.lex_state = 268},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 244},
  [578] = {.lex_state = 244},
  [579] = {.lex_state = 268},
  [580] = {.lex_state = 272},
  [581] = {.lex_state = 268},
  [582] = {.lex_state = 268},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 268},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 268},
  [589] = {.lex_state = 268},
  [590] = {.lex_state = 268},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 76},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 268},
  [595] = {.lex_state = 272},
  [596] = {.lex_state = 268},
  [597] = {.lex_state = 268},
  [598] = {.lex_state = 76},
  [599] = {.lex_state = 268},
  [600] = {.lex_state = 268},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 268},
  [603] = {.lex_state = 268},
  [604] = {.lex_state = 268},
  [605] = {.lex_state = 268},
  [606] = {.lex_state = 268},
  [607] = {.lex_state = 268},
  [608] = {.lex_state = 268},
  [609] = {.lex_state = 268},
  [610] = {.lex_state = 76},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 268},
  [613] = {.lex_state = 244},
  [614] = {.lex_state = 268},
  [615] = {.lex_state = 268},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 268},
  [620] = {.lex_state = 272},
  [621] = {.lex_state = 268},
  [622] = {.lex_state = 268},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 2},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 268},
  [627] = {.lex_state = 272},
  [628] = {.lex_state = 268},
  [629] = {.lex_state = 244},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 268},
  [632] = {.lex_state = 81},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 268},
  [635] = {.lex_state = 268},
  [636] = {.lex_state = 80},
  [637] = {.lex_state = 268},
  [638] = {.lex_state = 268},
  [639] = {.lex_state = 268},
  [640] = {.lex_state = 268},
  [641] = {.lex_state = 278},
  [642] = {.lex_state = 244},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 244},
  [646] = {.lex_state = 2},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 244},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 272},
  [651] = {.lex_state = 244},
  [652] = {.lex_state = 268},
  [653] = {.lex_state = 80},
  [654] = {.lex_state = 244},
  [655] = {.lex_state = 80},
  [656] = {.lex_state = 278},
  [657] = {.lex_state = 244},
  [658] = {.lex_state = 71},
  [659] = {.lex_state = 2},
  [660] = {.lex_state = 244},
  [661] = {.lex_state = 2},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 244},
  [664] = {.lex_state = 2},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 278},
  [667] = {.lex_state = 80},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 81},
  [670] = {.lex_state = 80},
  [671] = {.lex_state = 268},
  [672] = {.lex_state = 80},
  [673] = {.lex_state = 80},
  [674] = {.lex_state = 268},
  [675] = {.lex_state = 80},
  [676] = {.lex_state = 80},
  [677] = {.lex_state = 80},
  [678] = {.lex_state = 76},
  [679] = {.lex_state = 80},
  [680] = {.lex_state = 80},
  [681] = {.lex_state = 268},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 244},
  [684] = {.lex_state = 80},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 81},
  [687] = {.lex_state = 80},
  [688] = {.lex_state = 80},
  [689] = {.lex_state = 80},
  [690] = {.lex_state = 80},
  [691] = {.lex_state = 76},
  [692] = {.lex_state = 2},
  [693] = {.lex_state = 80},
  [694] = {.lex_state = 80},
  [695] = {.lex_state = 80},
  [696] = {.lex_state = 80},
  [697] = {.lex_state = 80},
  [698] = {.lex_state = 278},
  [699] = {.lex_state = 80},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 81},
  [702] = {.lex_state = 80},
  [703] = {.lex_state = 268},
  [704] = {.lex_state = 80},
  [705] = {.lex_state = 80},
  [706] = {.lex_state = 80},
  [707] = {.lex_state = 80},
  [708] = {.lex_state = 80},
  [709] = {.lex_state = 80},
  [710] = {.lex_state = 76},
  [711] = {.lex_state = 80},
  [712] = {.lex_state = 81},
  [713] = {.lex_state = 80},
  [714] = {.lex_state = 2},
  [715] = {.lex_state = 80},
  [716] = {.lex_state = 80},
  [717] = {.lex_state = 80},
  [718] = {.lex_state = 80},
  [719] = {.lex_state = 80},
  [720] = {.lex_state = 80},
  [721] = {.lex_state = 278},
  [722] = {.lex_state = 268},
  [723] = {.lex_state = 278},
  [724] = {.lex_state = 278},
  [725] = {.lex_state = 296},
  [726] = {.lex_state = 80},
  [727] = {.lex_state = 278},
  [728] = {.lex_state = 278},
  [729] = {.lex_state = 278},
  [730] = {.lex_state = 268},
  [731] = {.lex_state = 278},
  [732] = {.lex_state = 80},
  [733] = {.lex_state = 278},
  [734] = {.lex_state = 278},
  [735] = {.lex_state = 278},
  [736] = {.lex_state = 278},
  [737] = {.lex_state = 278},
  [738] = {.lex_state = 278},
  [739] = {.lex_state = 278},
  [740] = {.lex_state = 278},
  [741] = {.lex_state = 278},
  [742] = {.lex_state = 278},
  [743] = {.lex_state = 278},
  [744] = {.lex_state = 278},
  [745] = {.lex_state = 278},
  [746] = {.lex_state = 278},
  [747] = {(TSStateId)(-1)},
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
    [anon_sym_EQ_GT_GT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_QMARK_EQ_GT] = ACTIONS(1),
    [sym_hk_type_param_clause] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_annotation] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_pattern] = ACTIONS(1),
    [sym_block_stat] = ACTIONS(1),
    [sym_block_result] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_refine_dcl] = ACTIONS(1),
    [anon_sym_GT_COLON] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(630),
    [sym__simple_literal] = STATE(279),
    [sym_id] = STATE(223),
    [sym_integer_literal] = STATE(280),
    [sym_hex_numeral] = STATE(215),
    [sym_floating_point_literal] = STATE(280),
    [sym_boolean_literal] = STATE(280),
    [sym_character_literal] = STATE(280),
    [sym_string_literal] = STATE(280),
    [sym_comment] = STATE(1),
    [sym_type] = STATE(624),
    [sym_fun_param_clause] = STATE(524),
    [sym__match_type] = STATE(646),
    [sym__infix_type] = STATE(477),
    [sym__refined_type] = STATE(349),
    [sym__annot_type] = STATE(250),
    [sym__simple_type] = STATE(290),
    [sym__simple_type1] = STATE(207),
    [sym__singleton] = STATE(555),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [aux_sym_plainid_token1] = ACTIONS(19),
    [aux_sym_plainid_token2] = ACTIONS(21),
    [aux_sym_plainid_token4] = ACTIONS(23),
    [anon_sym_0] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(27),
    [anon_sym_2] = ACTIONS(27),
    [anon_sym_3] = ACTIONS(27),
    [anon_sym_4] = ACTIONS(27),
    [anon_sym_5] = ACTIONS(27),
    [anon_sym_6] = ACTIONS(27),
    [anon_sym_7] = ACTIONS(27),
    [anon_sym_8] = ACTIONS(27),
    [anon_sym_9] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(31),
    [anon_sym_SLASH_STAR] = ACTIONS(33),
    [anon_sym_SLASH_SLASH] = ACTIONS(35),
    [sym_hk_type_param_clause] = ACTIONS(37),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 35,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(47), 1,
      anon_sym_BQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      aux_sym_plainid_token1,
    ACTIONS(55), 1,
      aux_sym_plainid_token2,
    ACTIONS(57), 1,
      aux_sym_plainid_token4,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_EQ_GT,
    ACTIONS(69), 1,
      sym_hk_type_param_clause,
    STATE(2), 1,
      sym_comment,
    STATE(88), 1,
      sym_id,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(295), 1,
      sym__refined_type,
    STATE(417), 1,
      sym__infix_type,
    STATE(484), 1,
      sym_type,
    STATE(495), 1,
      sym__match_type,
    STATE(504), 1,
      sym_fun_param_clause,
    STATE(534), 1,
      sym_typed_fun_param,
    STATE(564), 1,
      sym__singleton,
    STATE(574), 1,
      sym__types,
    STATE(576), 1,
      sym__fun_arg_types,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [119] = 35,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_BQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      aux_sym_plainid_token1,
    ACTIONS(55), 1,
      aux_sym_plainid_token2,
    ACTIONS(57), 1,
      aux_sym_plainid_token4,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_EQ_GT,
    ACTIONS(69), 1,
      sym_hk_type_param_clause,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_comment,
    STATE(88), 1,
      sym_id,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(295), 1,
      sym__refined_type,
    STATE(417), 1,
      sym__infix_type,
    STATE(484), 1,
      sym_type,
    STATE(495), 1,
      sym__match_type,
    STATE(504), 1,
      sym_fun_param_clause,
    STATE(534), 1,
      sym_typed_fun_param,
    STATE(564), 1,
      sym__singleton,
    STATE(618), 1,
      sym__types,
    STATE(700), 1,
      sym__fun_arg_types,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [238] = 35,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_BQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      aux_sym_plainid_token1,
    ACTIONS(55), 1,
      aux_sym_plainid_token2,
    ACTIONS(57), 1,
      aux_sym_plainid_token4,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_EQ_GT,
    ACTIONS(69), 1,
      sym_hk_type_param_clause,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_comment,
    STATE(88), 1,
      sym_id,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(295), 1,
      sym__refined_type,
    STATE(417), 1,
      sym__infix_type,
    STATE(484), 1,
      sym_type,
    STATE(495), 1,
      sym__match_type,
    STATE(504), 1,
      sym_fun_param_clause,
    STATE(534), 1,
      sym_typed_fun_param,
    STATE(564), 1,
      sym__singleton,
    STATE(585), 1,
      sym__types,
    STATE(685), 1,
      sym__fun_arg_types,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [357] = 35,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_BQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      aux_sym_plainid_token1,
    ACTIONS(55), 1,
      aux_sym_plainid_token2,
    ACTIONS(57), 1,
      aux_sym_plainid_token4,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_EQ_GT,
    ACTIONS(69), 1,
      sym_hk_type_param_clause,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_comment,
    STATE(88), 1,
      sym_id,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(295), 1,
      sym__refined_type,
    STATE(417), 1,
      sym__infix_type,
    STATE(484), 1,
      sym_type,
    STATE(495), 1,
      sym__match_type,
    STATE(504), 1,
      sym_fun_param_clause,
    STATE(534), 1,
      sym_typed_fun_param,
    STATE(564), 1,
      sym__singleton,
    STATE(623), 1,
      sym__types,
    STATE(668), 1,
      sym__fun_arg_types,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [476] = 31,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(69), 1,
      sym_hk_type_param_clause,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      aux_sym_plainid_token1,
    ACTIONS(81), 1,
      aux_sym_plainid_token2,
    ACTIONS(83), 1,
      aux_sym_plainid_token4,
    STATE(6), 1,
      sym_comment,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(102), 1,
      sym_id,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(295), 1,
      sym__refined_type,
    STATE(417), 1,
      sym__infix_type,
    STATE(487), 1,
      sym_type,
    STATE(495), 1,
      sym__match_type,
    STATE(504), 1,
      sym_fun_param_clause,
    STATE(564), 1,
      sym__singleton,
    STATE(585), 1,
      sym__types,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [583] = 31,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(69), 1,
      sym_hk_type_param_clause,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      aux_sym_plainid_token1,
    ACTIONS(81), 1,
      aux_sym_plainid_token2,
    ACTIONS(83), 1,
      aux_sym_plainid_token4,
    STATE(7), 1,
      sym_comment,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(102), 1,
      sym_id,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(295), 1,
      sym__refined_type,
    STATE(417), 1,
      sym__infix_type,
    STATE(487), 1,
      sym_type,
    STATE(495), 1,
      sym__match_type,
    STATE(504), 1,
      sym_fun_param_clause,
    STATE(564), 1,
      sym__singleton,
    STATE(623), 1,
      sym__types,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [690] = 31,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(69), 1,
      sym_hk_type_param_clause,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      aux_sym_plainid_token1,
    ACTIONS(81), 1,
      aux_sym_plainid_token2,
    ACTIONS(83), 1,
      aux_sym_plainid_token4,
    STATE(8), 1,
      sym_comment,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(102), 1,
      sym_id,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(295), 1,
      sym__refined_type,
    STATE(417), 1,
      sym__infix_type,
    STATE(487), 1,
      sym_type,
    STATE(495), 1,
      sym__match_type,
    STATE(504), 1,
      sym_fun_param_clause,
    STATE(564), 1,
      sym__singleton,
    STATE(633), 1,
      sym__types,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [797] = 31,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(69), 1,
      sym_hk_type_param_clause,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      aux_sym_plainid_token1,
    ACTIONS(81), 1,
      aux_sym_plainid_token2,
    ACTIONS(83), 1,
      aux_sym_plainid_token4,
    STATE(9), 1,
      sym_comment,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(102), 1,
      sym_id,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(295), 1,
      sym__refined_type,
    STATE(417), 1,
      sym__infix_type,
    STATE(487), 1,
      sym_type,
    STATE(495), 1,
      sym__match_type,
    STATE(504), 1,
      sym_fun_param_clause,
    STATE(564), 1,
      sym__singleton,
    STATE(601), 1,
      sym__types,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [904] = 31,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(69), 1,
      sym_hk_type_param_clause,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      aux_sym_plainid_token1,
    ACTIONS(81), 1,
      aux_sym_plainid_token2,
    ACTIONS(83), 1,
      aux_sym_plainid_token4,
    STATE(10), 1,
      sym_comment,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(102), 1,
      sym_id,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(295), 1,
      sym__refined_type,
    STATE(417), 1,
      sym__infix_type,
    STATE(487), 1,
      sym_type,
    STATE(495), 1,
      sym__match_type,
    STATE(504), 1,
      sym_fun_param_clause,
    STATE(564), 1,
      sym__singleton,
    STATE(574), 1,
      sym__types,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [1011] = 31,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(69), 1,
      sym_hk_type_param_clause,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      aux_sym_plainid_token1,
    ACTIONS(81), 1,
      aux_sym_plainid_token2,
    ACTIONS(83), 1,
      aux_sym_plainid_token4,
    STATE(11), 1,
      sym_comment,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(102), 1,
      sym_id,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(295), 1,
      sym__refined_type,
    STATE(417), 1,
      sym__infix_type,
    STATE(487), 1,
      sym_type,
    STATE(495), 1,
      sym__match_type,
    STATE(504), 1,
      sym_fun_param_clause,
    STATE(564), 1,
      sym__singleton,
    STATE(587), 1,
      sym__types,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [1118] = 31,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(69), 1,
      sym_hk_type_param_clause,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      aux_sym_plainid_token1,
    ACTIONS(81), 1,
      aux_sym_plainid_token2,
    ACTIONS(83), 1,
      aux_sym_plainid_token4,
    STATE(12), 1,
      sym_comment,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(102), 1,
      sym_id,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(295), 1,
      sym__refined_type,
    STATE(417), 1,
      sym__infix_type,
    STATE(487), 1,
      sym_type,
    STATE(495), 1,
      sym__match_type,
    STATE(504), 1,
      sym_fun_param_clause,
    STATE(564), 1,
      sym__singleton,
    STATE(575), 1,
      sym__types,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [1225] = 31,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(69), 1,
      sym_hk_type_param_clause,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      aux_sym_plainid_token1,
    ACTIONS(81), 1,
      aux_sym_plainid_token2,
    ACTIONS(83), 1,
      aux_sym_plainid_token4,
    STATE(13), 1,
      sym_comment,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(102), 1,
      sym_id,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(295), 1,
      sym__refined_type,
    STATE(417), 1,
      sym__infix_type,
    STATE(487), 1,
      sym_type,
    STATE(495), 1,
      sym__match_type,
    STATE(504), 1,
      sym_fun_param_clause,
    STATE(564), 1,
      sym__singleton,
    STATE(662), 1,
      sym__types,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [1332] = 31,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(69), 1,
      sym_hk_type_param_clause,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      aux_sym_plainid_token1,
    ACTIONS(81), 1,
      aux_sym_plainid_token2,
    ACTIONS(83), 1,
      aux_sym_plainid_token4,
    STATE(14), 1,
      sym_comment,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(102), 1,
      sym_id,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(295), 1,
      sym__refined_type,
    STATE(417), 1,
      sym__infix_type,
    STATE(487), 1,
      sym_type,
    STATE(495), 1,
      sym__match_type,
    STATE(504), 1,
      sym_fun_param_clause,
    STATE(564), 1,
      sym__singleton,
    STATE(616), 1,
      sym__types,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [1439] = 31,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(69), 1,
      sym_hk_type_param_clause,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      aux_sym_plainid_token1,
    ACTIONS(81), 1,
      aux_sym_plainid_token2,
    ACTIONS(83), 1,
      aux_sym_plainid_token4,
    ACTIONS(85), 1,
      anon_sym_EQ_GT,
    STATE(15), 1,
      sym_comment,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(102), 1,
      sym_id,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(295), 1,
      sym__refined_type,
    STATE(417), 1,
      sym__infix_type,
    STATE(495), 1,
      sym__match_type,
    STATE(504), 1,
      sym_fun_param_clause,
    STATE(557), 1,
      sym_type,
    STATE(564), 1,
      sym__singleton,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [1546] = 31,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(69), 1,
      sym_hk_type_param_clause,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      aux_sym_plainid_token1,
    ACTIONS(81), 1,
      aux_sym_plainid_token2,
    ACTIONS(83), 1,
      aux_sym_plainid_token4,
    STATE(16), 1,
      sym_comment,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(102), 1,
      sym_id,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(295), 1,
      sym__refined_type,
    STATE(417), 1,
      sym__infix_type,
    STATE(487), 1,
      sym_type,
    STATE(495), 1,
      sym__match_type,
    STATE(504), 1,
      sym_fun_param_clause,
    STATE(564), 1,
      sym__singleton,
    STATE(618), 1,
      sym__types,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [1653] = 31,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(69), 1,
      sym_hk_type_param_clause,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      aux_sym_plainid_token1,
    ACTIONS(81), 1,
      aux_sym_plainid_token2,
    ACTIONS(83), 1,
      aux_sym_plainid_token4,
    ACTIONS(85), 1,
      anon_sym_EQ_GT,
    STATE(17), 1,
      sym_comment,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(102), 1,
      sym_id,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(295), 1,
      sym__refined_type,
    STATE(417), 1,
      sym__infix_type,
    STATE(495), 1,
      sym__match_type,
    STATE(504), 1,
      sym_fun_param_clause,
    STATE(554), 1,
      sym_type,
    STATE(564), 1,
      sym__singleton,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [1760] = 30,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(69), 1,
      sym_hk_type_param_clause,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      aux_sym_plainid_token1,
    ACTIONS(81), 1,
      aux_sym_plainid_token2,
    ACTIONS(83), 1,
      aux_sym_plainid_token4,
    STATE(18), 1,
      sym_comment,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(102), 1,
      sym_id,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(295), 1,
      sym__refined_type,
    STATE(417), 1,
      sym__infix_type,
    STATE(495), 1,
      sym__match_type,
    STATE(504), 1,
      sym_fun_param_clause,
    STATE(510), 1,
      sym_type,
    STATE(564), 1,
      sym__singleton,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [1864] = 30,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      aux_sym_plainid_token1,
    ACTIONS(101), 1,
      aux_sym_plainid_token2,
    ACTIONS(103), 1,
      aux_sym_plainid_token4,
    ACTIONS(105), 1,
      anon_sym_0,
    ACTIONS(111), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(113), 1,
      sym_hk_type_param_clause,
    STATE(19), 1,
      sym_comment,
    STATE(80), 1,
      sym__simple_type1,
    STATE(86), 1,
      sym_hex_numeral,
    STATE(89), 1,
      sym_id,
    STATE(126), 1,
      sym__annot_type,
    STATE(181), 1,
      sym__simple_type,
    STATE(191), 1,
      sym__simple_literal,
    STATE(211), 1,
      sym__refined_type,
    STATE(372), 1,
      sym_type,
    STATE(378), 1,
      sym__infix_type,
    STATE(422), 1,
      sym__match_type,
    STATE(533), 1,
      sym_fun_param_clause,
    STATE(561), 1,
      sym__singleton,
    ACTIONS(109), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(189), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(107), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [1968] = 30,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(69), 1,
      sym_hk_type_param_clause,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      aux_sym_plainid_token1,
    ACTIONS(81), 1,
      aux_sym_plainid_token2,
    ACTIONS(83), 1,
      aux_sym_plainid_token4,
    STATE(20), 1,
      sym_comment,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(102), 1,
      sym_id,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(295), 1,
      sym__refined_type,
    STATE(417), 1,
      sym__infix_type,
    STATE(495), 1,
      sym__match_type,
    STATE(504), 1,
      sym_fun_param_clause,
    STATE(551), 1,
      sym_type,
    STATE(564), 1,
      sym__singleton,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [2072] = 30,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      aux_sym_plainid_token1,
    ACTIONS(101), 1,
      aux_sym_plainid_token2,
    ACTIONS(103), 1,
      aux_sym_plainid_token4,
    ACTIONS(105), 1,
      anon_sym_0,
    ACTIONS(111), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(113), 1,
      sym_hk_type_param_clause,
    STATE(21), 1,
      sym_comment,
    STATE(80), 1,
      sym__simple_type1,
    STATE(86), 1,
      sym_hex_numeral,
    STATE(89), 1,
      sym_id,
    STATE(126), 1,
      sym__annot_type,
    STATE(181), 1,
      sym__simple_type,
    STATE(191), 1,
      sym__simple_literal,
    STATE(211), 1,
      sym__refined_type,
    STATE(378), 1,
      sym__infix_type,
    STATE(422), 1,
      sym__match_type,
    STATE(423), 1,
      sym_type,
    STATE(533), 1,
      sym_fun_param_clause,
    STATE(561), 1,
      sym__singleton,
    ACTIONS(109), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(189), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(107), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [2176] = 30,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      aux_sym_plainid_token1,
    ACTIONS(101), 1,
      aux_sym_plainid_token2,
    ACTIONS(103), 1,
      aux_sym_plainid_token4,
    ACTIONS(105), 1,
      anon_sym_0,
    ACTIONS(111), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(113), 1,
      sym_hk_type_param_clause,
    STATE(22), 1,
      sym_comment,
    STATE(80), 1,
      sym__simple_type1,
    STATE(86), 1,
      sym_hex_numeral,
    STATE(89), 1,
      sym_id,
    STATE(126), 1,
      sym__annot_type,
    STATE(181), 1,
      sym__simple_type,
    STATE(191), 1,
      sym__simple_literal,
    STATE(211), 1,
      sym__refined_type,
    STATE(378), 1,
      sym__infix_type,
    STATE(415), 1,
      sym_type,
    STATE(422), 1,
      sym__match_type,
    STATE(533), 1,
      sym_fun_param_clause,
    STATE(561), 1,
      sym__singleton,
    ACTIONS(109), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(189), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(107), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [2280] = 30,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(69), 1,
      sym_hk_type_param_clause,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      aux_sym_plainid_token1,
    ACTIONS(81), 1,
      aux_sym_plainid_token2,
    ACTIONS(83), 1,
      aux_sym_plainid_token4,
    STATE(23), 1,
      sym_comment,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(102), 1,
      sym_id,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(295), 1,
      sym__refined_type,
    STATE(417), 1,
      sym__infix_type,
    STATE(495), 1,
      sym__match_type,
    STATE(504), 1,
      sym_fun_param_clause,
    STATE(558), 1,
      sym_type,
    STATE(564), 1,
      sym__singleton,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [2384] = 30,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      aux_sym_plainid_token1,
    ACTIONS(101), 1,
      aux_sym_plainid_token2,
    ACTIONS(103), 1,
      aux_sym_plainid_token4,
    ACTIONS(105), 1,
      anon_sym_0,
    ACTIONS(111), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(113), 1,
      sym_hk_type_param_clause,
    STATE(24), 1,
      sym_comment,
    STATE(80), 1,
      sym__simple_type1,
    STATE(86), 1,
      sym_hex_numeral,
    STATE(89), 1,
      sym_id,
    STATE(126), 1,
      sym__annot_type,
    STATE(181), 1,
      sym__simple_type,
    STATE(191), 1,
      sym__simple_literal,
    STATE(211), 1,
      sym__refined_type,
    STATE(378), 1,
      sym__infix_type,
    STATE(420), 1,
      sym_type,
    STATE(422), 1,
      sym__match_type,
    STATE(533), 1,
      sym_fun_param_clause,
    STATE(561), 1,
      sym__singleton,
    ACTIONS(109), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(189), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(107), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [2488] = 30,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_BQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(19), 1,
      aux_sym_plainid_token1,
    ACTIONS(21), 1,
      aux_sym_plainid_token2,
    ACTIONS(23), 1,
      aux_sym_plainid_token4,
    ACTIONS(25), 1,
      anon_sym_0,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      sym_hk_type_param_clause,
    STATE(25), 1,
      sym_comment,
    STATE(207), 1,
      sym__simple_type1,
    STATE(215), 1,
      sym_hex_numeral,
    STATE(223), 1,
      sym_id,
    STATE(250), 1,
      sym__annot_type,
    STATE(279), 1,
      sym__simple_literal,
    STATE(290), 1,
      sym__simple_type,
    STATE(349), 1,
      sym__refined_type,
    STATE(477), 1,
      sym__infix_type,
    STATE(524), 1,
      sym_fun_param_clause,
    STATE(555), 1,
      sym__singleton,
    STATE(646), 1,
      sym__match_type,
    STATE(664), 1,
      sym_type,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(280), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(27), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [2592] = 30,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(69), 1,
      sym_hk_type_param_clause,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      aux_sym_plainid_token1,
    ACTIONS(81), 1,
      aux_sym_plainid_token2,
    ACTIONS(83), 1,
      aux_sym_plainid_token4,
    STATE(26), 1,
      sym_comment,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(102), 1,
      sym_id,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(295), 1,
      sym__refined_type,
    STATE(417), 1,
      sym__infix_type,
    STATE(495), 1,
      sym__match_type,
    STATE(504), 1,
      sym_fun_param_clause,
    STATE(519), 1,
      sym_type,
    STATE(564), 1,
      sym__singleton,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [2696] = 30,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_BQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(19), 1,
      aux_sym_plainid_token1,
    ACTIONS(21), 1,
      aux_sym_plainid_token2,
    ACTIONS(23), 1,
      aux_sym_plainid_token4,
    ACTIONS(25), 1,
      anon_sym_0,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      sym_hk_type_param_clause,
    STATE(27), 1,
      sym_comment,
    STATE(207), 1,
      sym__simple_type1,
    STATE(215), 1,
      sym_hex_numeral,
    STATE(223), 1,
      sym_id,
    STATE(250), 1,
      sym__annot_type,
    STATE(279), 1,
      sym__simple_literal,
    STATE(290), 1,
      sym__simple_type,
    STATE(349), 1,
      sym__refined_type,
    STATE(477), 1,
      sym__infix_type,
    STATE(524), 1,
      sym_fun_param_clause,
    STATE(555), 1,
      sym__singleton,
    STATE(646), 1,
      sym__match_type,
    STATE(661), 1,
      sym_type,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(280), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(27), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [2800] = 30,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      aux_sym_plainid_token1,
    ACTIONS(101), 1,
      aux_sym_plainid_token2,
    ACTIONS(103), 1,
      aux_sym_plainid_token4,
    ACTIONS(105), 1,
      anon_sym_0,
    ACTIONS(111), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(113), 1,
      sym_hk_type_param_clause,
    STATE(28), 1,
      sym_comment,
    STATE(80), 1,
      sym__simple_type1,
    STATE(86), 1,
      sym_hex_numeral,
    STATE(89), 1,
      sym_id,
    STATE(126), 1,
      sym__annot_type,
    STATE(181), 1,
      sym__simple_type,
    STATE(191), 1,
      sym__simple_literal,
    STATE(211), 1,
      sym__refined_type,
    STATE(378), 1,
      sym__infix_type,
    STATE(421), 1,
      sym_type,
    STATE(422), 1,
      sym__match_type,
    STATE(533), 1,
      sym_fun_param_clause,
    STATE(561), 1,
      sym__singleton,
    ACTIONS(109), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(189), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(107), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [2904] = 30,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_BQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(19), 1,
      aux_sym_plainid_token1,
    ACTIONS(21), 1,
      aux_sym_plainid_token2,
    ACTIONS(23), 1,
      aux_sym_plainid_token4,
    ACTIONS(25), 1,
      anon_sym_0,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      sym_hk_type_param_clause,
    STATE(29), 1,
      sym_comment,
    STATE(207), 1,
      sym__simple_type1,
    STATE(215), 1,
      sym_hex_numeral,
    STATE(223), 1,
      sym_id,
    STATE(250), 1,
      sym__annot_type,
    STATE(279), 1,
      sym__simple_literal,
    STATE(290), 1,
      sym__simple_type,
    STATE(349), 1,
      sym__refined_type,
    STATE(477), 1,
      sym__infix_type,
    STATE(524), 1,
      sym_fun_param_clause,
    STATE(555), 1,
      sym__singleton,
    STATE(646), 1,
      sym__match_type,
    STATE(659), 1,
      sym_type,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(280), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(27), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3008] = 30,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_BQUOTE,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_DOT,
    ACTIONS(127), 1,
      aux_sym_plainid_token1,
    ACTIONS(129), 1,
      aux_sym_plainid_token2,
    ACTIONS(131), 1,
      aux_sym_plainid_token4,
    ACTIONS(133), 1,
      anon_sym_0,
    ACTIONS(139), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(141), 1,
      sym_hk_type_param_clause,
    STATE(30), 1,
      sym_comment,
    STATE(91), 1,
      sym__simple_type1,
    STATE(98), 1,
      sym_hex_numeral,
    STATE(99), 1,
      sym_id,
    STATE(117), 1,
      sym__annot_type,
    STATE(166), 1,
      sym__simple_type,
    STATE(175), 1,
      sym__simple_literal,
    STATE(225), 1,
      sym__refined_type,
    STATE(372), 1,
      sym_type,
    STATE(377), 1,
      sym__infix_type,
    STATE(422), 1,
      sym__match_type,
    STATE(513), 1,
      sym_fun_param_clause,
    STATE(544), 1,
      sym__singleton,
    ACTIONS(137), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(173), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(135), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3112] = 30,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(69), 1,
      sym_hk_type_param_clause,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      aux_sym_plainid_token1,
    ACTIONS(81), 1,
      aux_sym_plainid_token2,
    ACTIONS(83), 1,
      aux_sym_plainid_token4,
    STATE(31), 1,
      sym_comment,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(102), 1,
      sym_id,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(295), 1,
      sym__refined_type,
    STATE(417), 1,
      sym__infix_type,
    STATE(495), 1,
      sym__match_type,
    STATE(504), 1,
      sym_fun_param_clause,
    STATE(526), 1,
      sym_type,
    STATE(564), 1,
      sym__singleton,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3216] = 30,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_BQUOTE,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_DOT,
    ACTIONS(127), 1,
      aux_sym_plainid_token1,
    ACTIONS(129), 1,
      aux_sym_plainid_token2,
    ACTIONS(131), 1,
      aux_sym_plainid_token4,
    ACTIONS(133), 1,
      anon_sym_0,
    ACTIONS(139), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(141), 1,
      sym_hk_type_param_clause,
    STATE(32), 1,
      sym_comment,
    STATE(91), 1,
      sym__simple_type1,
    STATE(98), 1,
      sym_hex_numeral,
    STATE(99), 1,
      sym_id,
    STATE(117), 1,
      sym__annot_type,
    STATE(166), 1,
      sym__simple_type,
    STATE(175), 1,
      sym__simple_literal,
    STATE(225), 1,
      sym__refined_type,
    STATE(377), 1,
      sym__infix_type,
    STATE(422), 1,
      sym__match_type,
    STATE(423), 1,
      sym_type,
    STATE(513), 1,
      sym_fun_param_clause,
    STATE(544), 1,
      sym__singleton,
    ACTIONS(137), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(173), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(135), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3320] = 30,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_BQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(19), 1,
      aux_sym_plainid_token1,
    ACTIONS(21), 1,
      aux_sym_plainid_token2,
    ACTIONS(23), 1,
      aux_sym_plainid_token4,
    ACTIONS(25), 1,
      anon_sym_0,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      sym_hk_type_param_clause,
    STATE(33), 1,
      sym_comment,
    STATE(207), 1,
      sym__simple_type1,
    STATE(215), 1,
      sym_hex_numeral,
    STATE(223), 1,
      sym_id,
    STATE(250), 1,
      sym__annot_type,
    STATE(279), 1,
      sym__simple_literal,
    STATE(290), 1,
      sym__simple_type,
    STATE(349), 1,
      sym__refined_type,
    STATE(477), 1,
      sym__infix_type,
    STATE(524), 1,
      sym_fun_param_clause,
    STATE(555), 1,
      sym__singleton,
    STATE(646), 1,
      sym__match_type,
    STATE(692), 1,
      sym_type,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(280), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(27), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3424] = 30,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(69), 1,
      sym_hk_type_param_clause,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      aux_sym_plainid_token1,
    ACTIONS(81), 1,
      aux_sym_plainid_token2,
    ACTIONS(83), 1,
      aux_sym_plainid_token4,
    STATE(34), 1,
      sym_comment,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(102), 1,
      sym_id,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(295), 1,
      sym__refined_type,
    STATE(417), 1,
      sym__infix_type,
    STATE(495), 1,
      sym__match_type,
    STATE(504), 1,
      sym_fun_param_clause,
    STATE(509), 1,
      sym_type,
    STATE(564), 1,
      sym__singleton,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3528] = 30,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(69), 1,
      sym_hk_type_param_clause,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      aux_sym_plainid_token1,
    ACTIONS(81), 1,
      aux_sym_plainid_token2,
    ACTIONS(83), 1,
      aux_sym_plainid_token4,
    STATE(35), 1,
      sym_comment,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(102), 1,
      sym_id,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(295), 1,
      sym__refined_type,
    STATE(417), 1,
      sym__infix_type,
    STATE(495), 1,
      sym__match_type,
    STATE(504), 1,
      sym_fun_param_clause,
    STATE(535), 1,
      sym_type,
    STATE(564), 1,
      sym__singleton,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3632] = 30,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(69), 1,
      sym_hk_type_param_clause,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      aux_sym_plainid_token1,
    ACTIONS(81), 1,
      aux_sym_plainid_token2,
    ACTIONS(83), 1,
      aux_sym_plainid_token4,
    STATE(36), 1,
      sym_comment,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(102), 1,
      sym_id,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(295), 1,
      sym__refined_type,
    STATE(417), 1,
      sym__infix_type,
    STATE(495), 1,
      sym__match_type,
    STATE(504), 1,
      sym_fun_param_clause,
    STATE(507), 1,
      sym_type,
    STATE(564), 1,
      sym__singleton,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3736] = 30,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_BQUOTE,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_DOT,
    ACTIONS(127), 1,
      aux_sym_plainid_token1,
    ACTIONS(129), 1,
      aux_sym_plainid_token2,
    ACTIONS(131), 1,
      aux_sym_plainid_token4,
    ACTIONS(133), 1,
      anon_sym_0,
    ACTIONS(139), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(141), 1,
      sym_hk_type_param_clause,
    STATE(37), 1,
      sym_comment,
    STATE(91), 1,
      sym__simple_type1,
    STATE(98), 1,
      sym_hex_numeral,
    STATE(99), 1,
      sym_id,
    STATE(117), 1,
      sym__annot_type,
    STATE(166), 1,
      sym__simple_type,
    STATE(175), 1,
      sym__simple_literal,
    STATE(225), 1,
      sym__refined_type,
    STATE(377), 1,
      sym__infix_type,
    STATE(421), 1,
      sym_type,
    STATE(422), 1,
      sym__match_type,
    STATE(513), 1,
      sym_fun_param_clause,
    STATE(544), 1,
      sym__singleton,
    ACTIONS(137), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(173), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(135), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3840] = 30,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_BQUOTE,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_DOT,
    ACTIONS(127), 1,
      aux_sym_plainid_token1,
    ACTIONS(129), 1,
      aux_sym_plainid_token2,
    ACTIONS(131), 1,
      aux_sym_plainid_token4,
    ACTIONS(133), 1,
      anon_sym_0,
    ACTIONS(139), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(141), 1,
      sym_hk_type_param_clause,
    STATE(38), 1,
      sym_comment,
    STATE(91), 1,
      sym__simple_type1,
    STATE(98), 1,
      sym_hex_numeral,
    STATE(99), 1,
      sym_id,
    STATE(117), 1,
      sym__annot_type,
    STATE(166), 1,
      sym__simple_type,
    STATE(175), 1,
      sym__simple_literal,
    STATE(225), 1,
      sym__refined_type,
    STATE(377), 1,
      sym__infix_type,
    STATE(420), 1,
      sym_type,
    STATE(422), 1,
      sym__match_type,
    STATE(513), 1,
      sym_fun_param_clause,
    STATE(544), 1,
      sym__singleton,
    ACTIONS(137), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(173), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(135), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3944] = 30,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_BQUOTE,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_DOT,
    ACTIONS(127), 1,
      aux_sym_plainid_token1,
    ACTIONS(129), 1,
      aux_sym_plainid_token2,
    ACTIONS(131), 1,
      aux_sym_plainid_token4,
    ACTIONS(133), 1,
      anon_sym_0,
    ACTIONS(139), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(141), 1,
      sym_hk_type_param_clause,
    STATE(39), 1,
      sym_comment,
    STATE(91), 1,
      sym__simple_type1,
    STATE(98), 1,
      sym_hex_numeral,
    STATE(99), 1,
      sym_id,
    STATE(117), 1,
      sym__annot_type,
    STATE(166), 1,
      sym__simple_type,
    STATE(175), 1,
      sym__simple_literal,
    STATE(225), 1,
      sym__refined_type,
    STATE(377), 1,
      sym__infix_type,
    STATE(415), 1,
      sym_type,
    STATE(422), 1,
      sym__match_type,
    STATE(513), 1,
      sym_fun_param_clause,
    STATE(544), 1,
      sym__singleton,
    ACTIONS(137), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(173), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(135), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [4048] = 26,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(83), 1,
      aux_sym_plainid_token4,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_BQUOTE,
    ACTIONS(151), 1,
      anon_sym_0,
    ACTIONS(157), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(40), 1,
      sym_comment,
    STATE(49), 1,
      sym_nl,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(102), 1,
      sym_id,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(327), 1,
      sym__refined_type,
    STATE(564), 1,
      sym__singleton,
    ACTIONS(81), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
    ACTIONS(143), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(155), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(153), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [4142] = 26,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      aux_sym_plainid_token4,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_BQUOTE,
    ACTIONS(165), 1,
      anon_sym_0,
    ACTIONS(171), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(41), 1,
      sym_comment,
    STATE(50), 1,
      sym_nl,
    STATE(80), 1,
      sym__simple_type1,
    STATE(86), 1,
      sym_hex_numeral,
    STATE(89), 1,
      sym_id,
    STATE(126), 1,
      sym__annot_type,
    STATE(181), 1,
      sym__simple_type,
    STATE(191), 1,
      sym__simple_literal,
    STATE(292), 1,
      sym__refined_type,
    STATE(561), 1,
      sym__singleton,
    ACTIONS(101), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
    ACTIONS(143), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(169), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(189), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(167), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [4236] = 26,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      aux_sym_plainid_token4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_BQUOTE,
    ACTIONS(179), 1,
      anon_sym_0,
    ACTIONS(185), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(42), 1,
      sym_comment,
    STATE(47), 1,
      sym_nl,
    STATE(207), 1,
      sym__simple_type1,
    STATE(215), 1,
      sym_hex_numeral,
    STATE(223), 1,
      sym_id,
    STATE(250), 1,
      sym__annot_type,
    STATE(279), 1,
      sym__simple_literal,
    STATE(290), 1,
      sym__simple_type,
    STATE(370), 1,
      sym__refined_type,
    STATE(555), 1,
      sym__singleton,
    ACTIONS(21), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
    ACTIONS(143), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(280), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(181), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [4330] = 26,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_BQUOTE,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(201), 1,
      aux_sym_plainid_token4,
    ACTIONS(203), 1,
      anon_sym_0,
    ACTIONS(209), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(43), 1,
      sym_comment,
    STATE(51), 1,
      sym_nl,
    STATE(272), 1,
      sym_id,
    STATE(278), 1,
      sym_hex_numeral,
    STATE(287), 1,
      sym__simple_type1,
    STATE(314), 1,
      sym__annot_type,
    STATE(325), 1,
      sym__simple_type,
    STATE(340), 1,
      sym__simple_literal,
    STATE(431), 1,
      sym__refined_type,
    STATE(541), 1,
      sym__singleton,
    ACTIONS(143), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(199), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
    ACTIONS(207), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(351), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(205), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [4424] = 26,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(117), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      aux_sym_plainid_token4,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_BQUOTE,
    ACTIONS(217), 1,
      anon_sym_0,
    ACTIONS(223), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(44), 1,
      sym_comment,
    STATE(48), 1,
      sym_nl,
    STATE(91), 1,
      sym__simple_type1,
    STATE(98), 1,
      sym_hex_numeral,
    STATE(99), 1,
      sym_id,
    STATE(117), 1,
      sym__annot_type,
    STATE(166), 1,
      sym__simple_type,
    STATE(175), 1,
      sym__simple_literal,
    STATE(284), 1,
      sym__refined_type,
    STATE(544), 1,
      sym__singleton,
    ACTIONS(129), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
    ACTIONS(143), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(221), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(173), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(219), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [4518] = 26,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(201), 1,
      aux_sym_plainid_token4,
    ACTIONS(225), 1,
      anon_sym_SQUOTE,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_BQUOTE,
    ACTIONS(231), 1,
      anon_sym__,
    ACTIONS(233), 1,
      anon_sym_0,
    ACTIONS(239), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(45), 1,
      sym_comment,
    STATE(272), 1,
      sym_id,
    STATE(278), 1,
      sym_hex_numeral,
    STATE(287), 1,
      sym__simple_type1,
    STATE(314), 1,
      sym__annot_type,
    STATE(325), 1,
      sym__simple_type,
    STATE(340), 1,
      sym__simple_literal,
    STATE(391), 1,
      sym__refined_type,
    STATE(541), 1,
      sym__singleton,
    STATE(678), 1,
      sym__infix_type,
    ACTIONS(199), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
    ACTIONS(237), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(351), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(235), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [4611] = 26,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(201), 1,
      aux_sym_plainid_token4,
    ACTIONS(225), 1,
      anon_sym_SQUOTE,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      anon_sym_0,
    ACTIONS(239), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(241), 1,
      anon_sym__,
    STATE(46), 1,
      sym_comment,
    STATE(272), 1,
      sym_id,
    STATE(278), 1,
      sym_hex_numeral,
    STATE(287), 1,
      sym__simple_type1,
    STATE(314), 1,
      sym__annot_type,
    STATE(325), 1,
      sym__simple_type,
    STATE(340), 1,
      sym__simple_literal,
    STATE(391), 1,
      sym__refined_type,
    STATE(541), 1,
      sym__singleton,
    STATE(710), 1,
      sym__infix_type,
    ACTIONS(199), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
    ACTIONS(237), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(351), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(235), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [4704] = 25,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_BQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(19), 1,
      aux_sym_plainid_token1,
    ACTIONS(21), 1,
      aux_sym_plainid_token2,
    ACTIONS(23), 1,
      aux_sym_plainid_token4,
    ACTIONS(25), 1,
      anon_sym_0,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_comment,
    STATE(207), 1,
      sym__simple_type1,
    STATE(215), 1,
      sym_hex_numeral,
    STATE(223), 1,
      sym_id,
    STATE(250), 1,
      sym__annot_type,
    STATE(279), 1,
      sym__simple_literal,
    STATE(290), 1,
      sym__simple_type,
    STATE(374), 1,
      sym__refined_type,
    STATE(555), 1,
      sym__singleton,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(280), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(27), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [4793] = 25,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DASH,
    ACTIONS(121), 1,
      anon_sym_BQUOTE,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_DOT,
    ACTIONS(127), 1,
      aux_sym_plainid_token1,
    ACTIONS(129), 1,
      aux_sym_plainid_token2,
    ACTIONS(131), 1,
      aux_sym_plainid_token4,
    ACTIONS(133), 1,
      anon_sym_0,
    ACTIONS(139), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_comment,
    STATE(91), 1,
      sym__simple_type1,
    STATE(98), 1,
      sym_hex_numeral,
    STATE(99), 1,
      sym_id,
    STATE(117), 1,
      sym__annot_type,
    STATE(166), 1,
      sym__simple_type,
    STATE(175), 1,
      sym__simple_literal,
    STATE(282), 1,
      sym__refined_type,
    STATE(544), 1,
      sym__singleton,
    ACTIONS(137), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(173), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(135), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [4882] = 25,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      aux_sym_plainid_token1,
    ACTIONS(81), 1,
      aux_sym_plainid_token2,
    ACTIONS(83), 1,
      aux_sym_plainid_token4,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym_comment,
    STATE(95), 1,
      sym__simple_type1,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(102), 1,
      sym_id,
    STATE(119), 1,
      sym__annot_type,
    STATE(190), 1,
      sym__simple_type,
    STATE(199), 1,
      sym__simple_literal,
    STATE(330), 1,
      sym__refined_type,
    STATE(564), 1,
      sym__singleton,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [4971] = 25,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      aux_sym_plainid_token1,
    ACTIONS(101), 1,
      aux_sym_plainid_token2,
    ACTIONS(103), 1,
      aux_sym_plainid_token4,
    ACTIONS(105), 1,
      anon_sym_0,
    ACTIONS(111), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_comment,
    STATE(80), 1,
      sym__simple_type1,
    STATE(86), 1,
      sym_hex_numeral,
    STATE(89), 1,
      sym_id,
    STATE(126), 1,
      sym__annot_type,
    STATE(181), 1,
      sym__simple_type,
    STATE(191), 1,
      sym__simple_literal,
    STATE(302), 1,
      sym__refined_type,
    STATE(561), 1,
      sym__singleton,
    ACTIONS(109), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(189), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(107), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [5060] = 25,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(199), 1,
      aux_sym_plainid_token2,
    ACTIONS(201), 1,
      aux_sym_plainid_token4,
    ACTIONS(225), 1,
      anon_sym_SQUOTE,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      anon_sym_0,
    ACTIONS(239), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(251), 1,
      aux_sym_plainid_token1,
    STATE(51), 1,
      sym_comment,
    STATE(272), 1,
      sym_id,
    STATE(278), 1,
      sym_hex_numeral,
    STATE(287), 1,
      sym__simple_type1,
    STATE(314), 1,
      sym__annot_type,
    STATE(325), 1,
      sym__simple_type,
    STATE(340), 1,
      sym__simple_literal,
    STATE(428), 1,
      sym__refined_type,
    STATE(541), 1,
      sym__singleton,
    ACTIONS(237), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(351), 5,
      sym_integer_literal,
      sym_floating_point_literal,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
    ACTIONS(235), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [5149] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(52), 1,
      sym_comment,
    ACTIONS(253), 24,
      anon_sym_LF,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      anon_sym_LPAREN,
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
      anon_sym_CR_LF,
  [5185] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(53), 1,
      sym_comment,
    ACTIONS(255), 24,
      anon_sym_LF,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      anon_sym_LPAREN,
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
      anon_sym_CR_LF,
  [5221] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(54), 1,
      sym_comment,
    ACTIONS(257), 24,
      anon_sym_LF,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      anon_sym_LPAREN,
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
      anon_sym_CR_LF,
  [5257] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(265), 1,
      anon_sym_DOT2,
    ACTIONS(267), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(269), 1,
      sym__float_type,
    STATE(55), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_L,
      anon_sym_l,
    ACTIONS(263), 2,
      anon_sym_x,
      anon_sym_X,
    ACTIONS(259), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [5301] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(275), 1,
      anon_sym_DOT2,
    ACTIONS(277), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(279), 1,
      sym__float_type,
    STATE(56), 1,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_L,
      anon_sym_l,
    ACTIONS(273), 2,
      anon_sym_x,
      anon_sym_X,
    ACTIONS(259), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [5345] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(285), 1,
      anon_sym_DOT2,
    ACTIONS(287), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(289), 1,
      sym__float_type,
    STATE(57), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_L,
      anon_sym_l,
    ACTIONS(283), 2,
      anon_sym_x,
      anon_sym_X,
    ACTIONS(259), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [5389] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(58), 1,
      sym_comment,
    ACTIONS(293), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
    ACTIONS(291), 17,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
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
  [5425] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(299), 1,
      anon_sym_DOT2,
    ACTIONS(301), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(303), 1,
      sym__float_type,
    STATE(59), 1,
      sym_comment,
    ACTIONS(297), 2,
      anon_sym_L,
      anon_sym_l,
    ACTIONS(295), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [5465] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(307), 1,
      anon_sym_DOT2,
    ACTIONS(309), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(311), 1,
      sym__float_type,
    STATE(60), 1,
      sym_comment,
    ACTIONS(305), 2,
      anon_sym_L,
      anon_sym_l,
    ACTIONS(295), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [5505] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(315), 1,
      anon_sym_DOT2,
    ACTIONS(317), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(319), 1,
      sym__float_type,
    STATE(61), 1,
      sym_comment,
    ACTIONS(313), 2,
      anon_sym_L,
      anon_sym_l,
    ACTIONS(295), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [5545] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(325), 1,
      anon_sym_DOT2,
    ACTIONS(327), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(329), 1,
      sym__float_type,
    STATE(62), 1,
      sym_comment,
    ACTIONS(321), 2,
      anon_sym_L,
      anon_sym_l,
    ACTIONS(323), 2,
      anon_sym_x,
      anon_sym_X,
    ACTIONS(259), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [5586] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(333), 1,
      anon_sym_DOT,
    STATE(63), 2,
      sym_comment,
      aux_sym_qual_id_repeat1,
    ACTIONS(331), 16,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
      anon_sym_POUND,
  [5618] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(336), 1,
      anon_sym_DOT,
    STATE(64), 2,
      sym_comment,
      aux_sym_qual_id_repeat1,
    ACTIONS(331), 16,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
      anon_sym_POUND,
  [5650] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(341), 1,
      anon_sym_DOT,
    STATE(65), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_qual_id_repeat1,
    ACTIONS(339), 16,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
      anon_sym_POUND,
  [5684] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(343), 1,
      anon_sym_DOT,
    STATE(66), 2,
      sym_comment,
      aux_sym_qual_id_repeat1,
    ACTIONS(331), 16,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
      anon_sym_POUND,
  [5716] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(346), 1,
      anon_sym_DOT,
    STATE(64), 1,
      aux_sym_qual_id_repeat1,
    STATE(67), 1,
      sym_comment,
    ACTIONS(339), 16,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
      anon_sym_POUND,
  [5750] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(348), 1,
      anon_sym_DOT,
    STATE(63), 1,
      aux_sym_qual_id_repeat1,
    STATE(68), 1,
      sym_comment,
    ACTIONS(339), 16,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
      anon_sym_POUND,
  [5784] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(69), 1,
      sym_comment,
    ACTIONS(350), 17,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_L,
      anon_sym_l,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [5813] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(70), 1,
      sym_comment,
    ACTIONS(257), 17,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
      anon_sym_POUND,
  [5842] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(354), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(356), 1,
      sym__float_type,
    STATE(71), 1,
      sym_comment,
    ACTIONS(352), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [5875] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(72), 1,
      sym_comment,
    ACTIONS(257), 17,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
      anon_sym_POUND,
  [5904] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(73), 1,
      sym_comment,
    ACTIONS(257), 17,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
      anon_sym_POUND,
  [5933] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(74), 1,
      sym_comment,
    ACTIONS(255), 17,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
      anon_sym_POUND,
  [5962] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(358), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(360), 1,
      sym__float_type,
    STATE(75), 1,
      sym_comment,
    ACTIONS(352), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [5995] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(364), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(366), 1,
      sym__float_type,
    STATE(76), 1,
      sym_comment,
    ACTIONS(362), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [6028] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(77), 1,
      sym_comment,
    ACTIONS(255), 17,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
      anon_sym_POUND,
  [6057] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(78), 1,
      sym_comment,
    ACTIONS(253), 17,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
      anon_sym_POUND,
  [6086] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(370), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(372), 1,
      sym__float_type,
    STATE(79), 1,
      sym_comment,
    ACTIONS(368), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [6119] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(378), 1,
      anon_sym_POUND,
    STATE(80), 1,
      sym_comment,
    STATE(238), 1,
      sym_type_args,
    ACTIONS(374), 14,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [6154] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(380), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(382), 1,
      sym__float_type,
    STATE(81), 1,
      sym_comment,
    ACTIONS(368), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [6187] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(384), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(386), 1,
      sym__float_type,
    STATE(82), 1,
      sym_comment,
    ACTIONS(352), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [6220] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(83), 1,
      sym_comment,
    ACTIONS(257), 17,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_COLON,
      anon_sym_match,
      sym_annotation,
      anon_sym_POUND,
  [6249] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(84), 1,
      sym_comment,
    ACTIONS(331), 17,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
      anon_sym_POUND,
  [6278] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(85), 1,
      sym_comment,
    ACTIONS(253), 17,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
      anon_sym_POUND,
  [6307] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(86), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_L,
      anon_sym_l,
    ACTIONS(259), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [6338] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(87), 1,
      sym_comment,
    ACTIONS(255), 17,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
      anon_sym_POUND,
  [6367] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_DOT,
    ACTIONS(392), 1,
      anon_sym_COLON,
    STATE(88), 1,
      sym_comment,
    ACTIONS(388), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
      anon_sym_POUND,
  [6400] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_DOT,
    STATE(89), 1,
      sym_comment,
    ACTIONS(388), 16,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
      anon_sym_POUND,
  [6431] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(90), 1,
      sym_comment,
    ACTIONS(253), 17,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
      anon_sym_POUND,
  [6460] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(394), 1,
      anon_sym_LBRACK,
    ACTIONS(396), 1,
      anon_sym_POUND,
    STATE(91), 1,
      sym_comment,
    STATE(202), 1,
      sym_type_args,
    ACTIONS(374), 14,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [6495] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(400), 1,
      anon_sym_DOT2,
    ACTIONS(402), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(404), 1,
      sym__float_type,
    STATE(92), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_L,
      anon_sym_l,
    ACTIONS(295), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [6532] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(93), 1,
      sym_comment,
    ACTIONS(255), 17,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_COLON,
      anon_sym_match,
      sym_annotation,
      anon_sym_POUND,
  [6561] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(94), 1,
      sym_comment,
    ACTIONS(331), 17,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
      anon_sym_POUND,
  [6590] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_POUND,
    STATE(95), 1,
      sym_comment,
    STATE(226), 1,
      sym_type_args,
    ACTIONS(374), 14,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [6625] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(96), 1,
      sym_comment,
    ACTIONS(350), 17,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_L,
      anon_sym_l,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [6654] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(410), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(412), 1,
      sym__float_type,
    STATE(97), 1,
      sym_comment,
    ACTIONS(362), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [6687] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(98), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_L,
      anon_sym_l,
    ACTIONS(259), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [6718] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_DOT,
    STATE(99), 1,
      sym_comment,
    ACTIONS(388), 16,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
      anon_sym_POUND,
  [6749] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(100), 1,
      sym_comment,
    ACTIONS(331), 17,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
      anon_sym_POUND,
  [6778] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(101), 1,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_L,
      anon_sym_l,
    ACTIONS(259), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [6809] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_DOT,
    STATE(102), 1,
      sym_comment,
    ACTIONS(388), 16,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
      anon_sym_POUND,
  [6840] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(414), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(416), 1,
      sym__float_type,
    STATE(103), 1,
      sym_comment,
    ACTIONS(368), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [6873] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(422), 1,
      anon_sym_DOT2,
    ACTIONS(424), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(426), 1,
      sym__float_type,
    STATE(104), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_L,
      anon_sym_l,
    ACTIONS(420), 2,
      anon_sym_x,
      anon_sym_X,
    ACTIONS(259), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [6912] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(105), 1,
      sym_comment,
    ACTIONS(253), 17,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_COLON,
      anon_sym_match,
      sym_annotation,
      anon_sym_POUND,
  [6941] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(428), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(430), 1,
      sym__float_type,
    STATE(106), 1,
      sym_comment,
    ACTIONS(362), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [6974] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(107), 1,
      sym_comment,
    ACTIONS(350), 17,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_L,
      anon_sym_l,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [7003] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(434), 1,
      sym__float_type,
    STATE(108), 1,
      sym_comment,
    ACTIONS(432), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [7033] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(416), 1,
      sym__float_type,
    STATE(109), 1,
      sym_comment,
    ACTIONS(368), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [7063] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      sym__float_type,
    STATE(110), 1,
      sym_comment,
    ACTIONS(436), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [7093] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(442), 1,
      sym__float_type,
    STATE(111), 1,
      sym_comment,
    ACTIONS(440), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [7123] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(449), 1,
      anon_sym_LBRACE,
    STATE(257), 1,
      sym_refinement,
    STATE(560), 1,
      sym_nl,
    ACTIONS(444), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(112), 2,
      sym_comment,
      aux_sym__refined_type_repeat1,
    ACTIONS(447), 10,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [7159] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(454), 1,
      sym__float_type,
    STATE(113), 1,
      sym_comment,
    ACTIONS(452), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [7189] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(456), 1,
      sym__float_type,
    STATE(114), 1,
      sym_comment,
    ACTIONS(432), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [7219] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(458), 1,
      sym__float_type,
    STATE(115), 1,
      sym_comment,
    ACTIONS(432), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [7249] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(460), 1,
      sym__float_type,
    STATE(116), 1,
      sym_comment,
    ACTIONS(452), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [7279] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym_comment,
    STATE(123), 1,
      aux_sym__refined_type_repeat1,
    STATE(246), 1,
      sym_refinement,
    STATE(566), 1,
      sym_nl,
    ACTIONS(462), 12,
      anon_sym_LF,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [7315] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    STATE(262), 1,
      sym_refinement,
    STATE(568), 1,
      sym_nl,
    ACTIONS(444), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(118), 2,
      sym_comment,
      aux_sym__refined_type_repeat1,
    ACTIONS(447), 10,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [7351] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(471), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      sym_comment,
    STATE(127), 1,
      aux_sym__refined_type_repeat1,
    STATE(257), 1,
      sym_refinement,
    STATE(560), 1,
      sym_nl,
    ACTIONS(469), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(462), 10,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [7389] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(473), 1,
      sym__float_type,
    STATE(120), 1,
      sym_comment,
    ACTIONS(436), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [7419] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(475), 1,
      sym__float_type,
    STATE(121), 1,
      sym_comment,
    ACTIONS(440), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [7449] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(477), 1,
      sym__float_type,
    STATE(122), 1,
      sym_comment,
    ACTIONS(440), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [7479] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
    STATE(123), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym__refined_type_repeat1,
    STATE(246), 1,
      sym_refinement,
    STATE(566), 1,
      sym_nl,
    ACTIONS(479), 12,
      anon_sym_LF,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [7515] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(481), 1,
      anon_sym_LBRACE,
    STATE(246), 1,
      sym_refinement,
    STATE(566), 1,
      sym_nl,
    ACTIONS(444), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(124), 2,
      sym_comment,
      aux_sym__refined_type_repeat1,
    ACTIONS(447), 10,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [7551] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(484), 1,
      sym__float_type,
    STATE(125), 1,
      sym_comment,
    ACTIONS(436), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [7581] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    STATE(126), 1,
      sym_comment,
    STATE(130), 1,
      aux_sym__refined_type_repeat1,
    STATE(262), 1,
      sym_refinement,
    STATE(568), 1,
      sym_nl,
    ACTIONS(462), 12,
      anon_sym_LF,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [7617] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(471), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      aux_sym__refined_type_repeat1,
    STATE(127), 1,
      sym_comment,
    STATE(257), 1,
      sym_refinement,
    STATE(560), 1,
      sym_nl,
    ACTIONS(469), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(479), 10,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [7655] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(488), 1,
      sym__float_type,
    STATE(128), 1,
      sym_comment,
    ACTIONS(452), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [7685] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(372), 1,
      sym__float_type,
    STATE(129), 1,
      sym_comment,
    ACTIONS(368), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [7715] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      aux_sym__refined_type_repeat1,
    STATE(130), 1,
      sym_comment,
    STATE(262), 1,
      sym_refinement,
    STATE(568), 1,
      sym_nl,
    ACTIONS(479), 12,
      anon_sym_LF,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [7751] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(382), 1,
      sym__float_type,
    STATE(131), 1,
      sym_comment,
    ACTIONS(368), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [7781] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(132), 1,
      sym_comment,
    ACTIONS(440), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [7808] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(133), 1,
      sym_comment,
    ACTIONS(352), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [7835] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(134), 1,
      sym_comment,
    ACTIONS(490), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [7862] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(135), 1,
      sym_comment,
    ACTIONS(352), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [7889] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(136), 1,
      sym_comment,
    ACTIONS(490), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [7916] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(137), 1,
      sym_comment,
    ACTIONS(492), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [7943] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(138), 1,
      sym_comment,
    ACTIONS(494), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [7970] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(139), 1,
      sym_comment,
    ACTIONS(494), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [7997] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(140), 1,
      sym_comment,
    ACTIONS(440), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [8024] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(141), 1,
      sym_comment,
    ACTIONS(436), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [8051] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(142), 1,
      sym_comment,
    ACTIONS(432), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [8078] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(143), 1,
      sym_comment,
    ACTIONS(452), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [8105] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(144), 1,
      sym_comment,
    ACTIONS(496), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [8132] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(145), 1,
      sym_comment,
    ACTIONS(498), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [8159] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(146), 1,
      sym_comment,
    ACTIONS(368), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [8186] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(147), 1,
      sym_comment,
    ACTIONS(496), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [8213] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(502), 1,
      sym_annotation,
    STATE(148), 1,
      sym_comment,
    STATE(157), 1,
      aux_sym__annot_type_repeat1,
    ACTIONS(500), 13,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [8244] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(149), 1,
      sym_comment,
    ACTIONS(362), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [8271] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(506), 1,
      anon_sym_DOT2,
    ACTIONS(508), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(510), 1,
      sym__float_type,
    STATE(150), 1,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_L,
      anon_sym_l,
    ACTIONS(295), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [8306] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(512), 1,
      anon_sym_DOT,
    STATE(151), 2,
      sym_comment,
      aux_sym_qual_id_repeat1,
    ACTIONS(331), 13,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
      anon_sym_POUND,
  [8335] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(517), 1,
      sym_annotation,
    STATE(152), 2,
      sym_comment,
      aux_sym__annot_type_repeat1,
    ACTIONS(515), 13,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [8364] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(520), 1,
      anon_sym_DOT,
    STATE(151), 1,
      aux_sym_qual_id_repeat1,
    STATE(153), 1,
      sym_comment,
    ACTIONS(339), 13,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
      anon_sym_POUND,
  [8395] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(154), 1,
      sym_comment,
    ACTIONS(368), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [8422] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(155), 1,
      sym_comment,
    ACTIONS(498), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [8449] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(156), 1,
      sym_comment,
    ACTIONS(362), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [8476] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(522), 1,
      sym_annotation,
    STATE(157), 2,
      sym_comment,
      aux_sym__annot_type_repeat1,
    ACTIONS(515), 13,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [8505] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(525), 1,
      sym_annotation,
    STATE(158), 1,
      sym_comment,
    STATE(169), 1,
      aux_sym__annot_type_repeat1,
    ACTIONS(500), 13,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [8536] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(159), 1,
      sym_comment,
    ACTIONS(527), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [8563] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(160), 1,
      sym_comment,
    ACTIONS(295), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [8590] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(161), 1,
      sym_comment,
    ACTIONS(529), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [8617] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(162), 1,
      sym_comment,
    ACTIONS(490), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [8644] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(163), 1,
      sym_comment,
    ACTIONS(494), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [8671] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(164), 1,
      sym_comment,
    ACTIONS(531), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [8698] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(165), 1,
      sym_comment,
    ACTIONS(498), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [8725] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(502), 1,
      sym_annotation,
    STATE(148), 1,
      aux_sym__annot_type_repeat1,
    STATE(166), 1,
      sym_comment,
    ACTIONS(533), 13,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [8756] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(167), 1,
      sym_comment,
    ACTIONS(452), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [8783] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(535), 1,
      sym_annotation,
    STATE(152), 1,
      aux_sym__annot_type_repeat1,
    STATE(168), 1,
      sym_comment,
    ACTIONS(500), 13,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [8814] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(537), 1,
      sym_annotation,
    STATE(169), 2,
      sym_comment,
      aux_sym__annot_type_repeat1,
    ACTIONS(515), 13,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [8843] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(170), 1,
      sym_comment,
    ACTIONS(492), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [8870] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(171), 1,
      sym_comment,
    ACTIONS(440), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [8897] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(172), 1,
      sym_comment,
    ACTIONS(362), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [8924] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(173), 1,
      sym_comment,
    ACTIONS(540), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [8951] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(174), 1,
      sym_comment,
    ACTIONS(527), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [8978] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_DOT,
    STATE(175), 1,
      sym_comment,
    ACTIONS(374), 14,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [9007] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(176), 1,
      sym_comment,
    ACTIONS(542), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [9034] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(177), 1,
      sym_comment,
    ACTIONS(295), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [9061] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(178), 1,
      sym_comment,
    ACTIONS(529), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [9088] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(179), 1,
      sym_comment,
    ACTIONS(531), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [9115] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(180), 1,
      sym_comment,
    ACTIONS(527), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [9142] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(525), 1,
      sym_annotation,
    STATE(158), 1,
      aux_sym__annot_type_repeat1,
    STATE(181), 1,
      sym_comment,
    ACTIONS(533), 13,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [9173] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(182), 1,
      sym_comment,
    ACTIONS(492), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [9200] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(183), 1,
      sym_comment,
    ACTIONS(295), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [9227] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(184), 1,
      sym_comment,
    ACTIONS(529), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [9254] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(185), 1,
      sym_comment,
    ACTIONS(496), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [9281] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(186), 1,
      sym_comment,
    ACTIONS(436), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [9308] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(187), 1,
      sym_comment,
    ACTIONS(352), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [9335] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(188), 1,
      sym_comment,
    ACTIONS(531), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [9362] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(189), 1,
      sym_comment,
    ACTIONS(540), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [9389] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(535), 1,
      sym_annotation,
    STATE(168), 1,
      aux_sym__annot_type_repeat1,
    STATE(190), 1,
      sym_comment,
    ACTIONS(533), 13,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [9420] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_DOT,
    STATE(191), 1,
      sym_comment,
    ACTIONS(374), 14,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [9449] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(192), 1,
      sym_comment,
    ACTIONS(432), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [9476] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(193), 1,
      sym_comment,
    ACTIONS(436), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [9503] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(194), 1,
      sym_comment,
    ACTIONS(432), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [9530] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(195), 1,
      sym_comment,
    ACTIONS(542), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [9557] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(196), 1,
      sym_comment,
    ACTIONS(452), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [9584] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(197), 1,
      sym_comment,
    ACTIONS(540), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [9611] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(198), 1,
      sym_comment,
    ACTIONS(368), 15,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [9638] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_DOT,
    STATE(199), 1,
      sym_comment,
    ACTIONS(374), 14,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [9667] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(200), 1,
      sym_comment,
    ACTIONS(542), 15,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [9694] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(201), 1,
      sym_comment,
    ACTIONS(544), 14,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [9720] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(202), 1,
      sym_comment,
    ACTIONS(546), 14,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [9746] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(203), 1,
      sym_comment,
    ACTIONS(255), 14,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [9772] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(550), 1,
      anon_sym_BQUOTE,
    ACTIONS(556), 1,
      aux_sym_plainid_token4,
    STATE(44), 1,
      sym_id,
    ACTIONS(553), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
    STATE(204), 2,
      sym_comment,
      aux_sym__infix_type_repeat1,
    ACTIONS(548), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [9806] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(205), 1,
      sym_comment,
    ACTIONS(253), 14,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [9832] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(550), 1,
      anon_sym_BQUOTE,
    ACTIONS(556), 1,
      aux_sym_plainid_token4,
    STATE(41), 1,
      sym_id,
    ACTIONS(553), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
    STATE(206), 2,
      sym_comment,
      aux_sym__infix_type_repeat1,
    ACTIONS(548), 8,
      anon_sym_LF,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [9866] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(559), 1,
      anon_sym_LBRACK,
    ACTIONS(561), 1,
      anon_sym_POUND,
    STATE(207), 1,
      sym_comment,
    STATE(319), 1,
      sym_type_args,
    ACTIONS(374), 11,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [9898] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(208), 1,
      sym_comment,
    ACTIONS(563), 14,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [9924] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_0,
    ACTIONS(565), 1,
      anon_sym_DOT,
    STATE(86), 1,
      sym_hex_numeral,
    STATE(209), 1,
      sym_comment,
    STATE(179), 2,
      sym_integer_literal,
      sym_floating_point_literal,
    ACTIONS(107), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [9958] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(210), 1,
      sym_comment,
    ACTIONS(253), 14,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
      anon_sym_POUND,
  [9984] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(569), 1,
      anon_sym_BQUOTE,
    ACTIONS(573), 1,
      aux_sym_plainid_token4,
    STATE(41), 1,
      sym_id,
    STATE(211), 1,
      sym_comment,
    STATE(227), 1,
      aux_sym__infix_type_repeat1,
    ACTIONS(571), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
    ACTIONS(567), 8,
      anon_sym_LF,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [10020] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(212), 1,
      sym_comment,
    ACTIONS(350), 14,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_L,
      anon_sym_l,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [10046] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(133), 1,
      anon_sym_0,
    ACTIONS(575), 1,
      anon_sym_DOT,
    STATE(98), 1,
      sym_hex_numeral,
    STATE(213), 1,
      sym_comment,
    STATE(164), 2,
      sym_integer_literal,
      sym_floating_point_literal,
    ACTIONS(135), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [10080] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(577), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(579), 1,
      sym__float_type,
    STATE(214), 1,
      sym_comment,
    ACTIONS(362), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [10110] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(215), 1,
      sym_comment,
    ACTIONS(321), 2,
      anon_sym_L,
      anon_sym_l,
    ACTIONS(259), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [10138] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(581), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(583), 1,
      sym__float_type,
    STATE(216), 1,
      sym_comment,
    ACTIONS(368), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [10168] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(585), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(587), 1,
      sym__float_type,
    STATE(217), 1,
      sym_comment,
    ACTIONS(352), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [10198] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(233), 1,
      anon_sym_0,
    ACTIONS(589), 1,
      anon_sym_DOT,
    STATE(218), 1,
      sym_comment,
    STATE(278), 1,
      sym_hex_numeral,
    STATE(350), 2,
      sym_integer_literal,
      sym_floating_point_literal,
    ACTIONS(235), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [10232] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(219), 1,
      sym_comment,
    ACTIONS(591), 14,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [10258] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(220), 1,
      sym_comment,
    ACTIONS(544), 14,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [10284] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(221), 1,
      sym_comment,
    ACTIONS(257), 14,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
      anon_sym_POUND,
  [10310] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(222), 1,
      sym_comment,
    ACTIONS(255), 14,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [10336] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_DOT,
    STATE(223), 1,
      sym_comment,
    ACTIONS(388), 13,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
      anon_sym_POUND,
  [10364] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(224), 1,
      sym_comment,
    ACTIONS(544), 14,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [10390] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(569), 1,
      anon_sym_BQUOTE,
    ACTIONS(573), 1,
      aux_sym_plainid_token4,
    STATE(44), 1,
      sym_id,
    STATE(225), 1,
      sym_comment,
    STATE(241), 1,
      aux_sym__infix_type_repeat1,
    ACTIONS(571), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
    ACTIONS(567), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [10426] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(226), 1,
      sym_comment,
    ACTIONS(546), 14,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [10452] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(569), 1,
      anon_sym_BQUOTE,
    ACTIONS(573), 1,
      aux_sym_plainid_token4,
    STATE(41), 1,
      sym_id,
    STATE(206), 1,
      aux_sym__infix_type_repeat1,
    STATE(227), 1,
      sym_comment,
    ACTIONS(571), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
    ACTIONS(593), 8,
      anon_sym_LF,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [10488] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(228), 1,
      sym_comment,
    ACTIONS(253), 14,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [10514] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(229), 1,
      sym_comment,
    ACTIONS(253), 14,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [10540] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(230), 1,
      sym_comment,
    ACTIONS(255), 14,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [10566] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(231), 1,
      sym_comment,
    ACTIONS(563), 14,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [10592] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(232), 1,
      sym_comment,
    ACTIONS(257), 14,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [10618] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(233), 1,
      sym_comment,
    ACTIONS(591), 14,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [10644] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      anon_sym_0,
    ACTIONS(595), 1,
      anon_sym_DOT,
    STATE(215), 1,
      sym_hex_numeral,
    STATE(234), 1,
      sym_comment,
    STATE(269), 2,
      sym_integer_literal,
      sym_floating_point_literal,
    ACTIONS(27), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [10678] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(235), 1,
      sym_comment,
    ACTIONS(591), 14,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [10704] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(236), 1,
      sym_comment,
    ACTIONS(257), 14,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [10730] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(237), 1,
      sym_comment,
    ACTIONS(255), 14,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
      anon_sym_POUND,
  [10756] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(238), 1,
      sym_comment,
    ACTIONS(546), 14,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [10782] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(597), 1,
      anon_sym_DOT,
    STATE(101), 1,
      sym_hex_numeral,
    STATE(239), 1,
      sym_comment,
    STATE(188), 2,
      sym_integer_literal,
      sym_floating_point_literal,
    ACTIONS(61), 9,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [10816] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(240), 1,
      sym_comment,
    ACTIONS(257), 14,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [10842] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(569), 1,
      anon_sym_BQUOTE,
    ACTIONS(573), 1,
      aux_sym_plainid_token4,
    STATE(44), 1,
      sym_id,
    STATE(204), 1,
      aux_sym__infix_type_repeat1,
    STATE(241), 1,
      sym_comment,
    ACTIONS(571), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
    ACTIONS(593), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [10878] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(242), 1,
      sym_comment,
    ACTIONS(331), 14,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
      anon_sym_POUND,
  [10904] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(243), 1,
      sym_comment,
    ACTIONS(563), 14,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
      sym_annotation,
  [10930] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_DOT,
    STATE(244), 2,
      sym_comment,
      aux_sym_qual_id_repeat1,
    ACTIONS(331), 11,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
      anon_sym_POUND,
  [10957] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(245), 1,
      sym_comment,
    ACTIONS(447), 13,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [10982] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(246), 1,
      sym_comment,
    ACTIONS(602), 13,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [11007] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(247), 1,
      sym_comment,
    ACTIONS(604), 13,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [11032] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(248), 1,
      sym_comment,
    ACTIONS(606), 13,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [11057] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(608), 1,
      anon_sym_DOT,
    STATE(244), 1,
      aux_sym_qual_id_repeat1,
    STATE(249), 1,
      sym_comment,
    ACTIONS(339), 11,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
      anon_sym_POUND,
  [11086] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(469), 1,
      anon_sym_CR_LF,
    ACTIONS(610), 1,
      anon_sym_LBRACE,
    STATE(250), 1,
      sym_comment,
    STATE(253), 1,
      aux_sym__refined_type_repeat1,
    STATE(348), 1,
      sym_refinement,
    STATE(540), 1,
      sym_nl,
    ACTIONS(462), 8,
      anon_sym_LF,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [11121] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(251), 1,
      sym_comment,
    ACTIONS(612), 13,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [11146] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(252), 1,
      sym_comment,
    ACTIONS(612), 13,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [11171] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(469), 1,
      anon_sym_CR_LF,
    ACTIONS(610), 1,
      anon_sym_LBRACE,
    STATE(253), 1,
      sym_comment,
    STATE(255), 1,
      aux_sym__refined_type_repeat1,
    STATE(348), 1,
      sym_refinement,
    STATE(540), 1,
      sym_nl,
    ACTIONS(479), 8,
      anon_sym_LF,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [11206] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(614), 1,
      sym__float_type,
    STATE(254), 1,
      sym_comment,
    ACTIONS(452), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [11233] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    STATE(348), 1,
      sym_refinement,
    STATE(540), 1,
      sym_nl,
    ACTIONS(444), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(255), 2,
      sym_comment,
      aux_sym__refined_type_repeat1,
    ACTIONS(447), 7,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [11266] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(256), 1,
      sym_comment,
    ACTIONS(612), 13,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [11291] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(257), 1,
      sym_comment,
    ACTIONS(602), 13,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [11316] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(258), 1,
      sym_comment,
    ACTIONS(447), 13,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [11341] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(259), 1,
      sym_comment,
    ACTIONS(447), 13,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [11366] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(583), 1,
      sym__float_type,
    STATE(260), 1,
      sym_comment,
    ACTIONS(368), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [11393] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(261), 1,
      sym_comment,
    ACTIONS(606), 13,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [11418] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(262), 1,
      sym_comment,
    ACTIONS(602), 13,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [11443] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(619), 1,
      sym__float_type,
    STATE(263), 1,
      sym_comment,
    ACTIONS(432), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [11470] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(264), 1,
      sym_comment,
    ACTIONS(604), 13,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [11495] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(265), 1,
      sym_comment,
    ACTIONS(604), 13,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [11520] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(621), 1,
      sym__float_type,
    STATE(266), 1,
      sym_comment,
    ACTIONS(436), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [11547] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(623), 1,
      sym__float_type,
    STATE(267), 1,
      sym_comment,
    ACTIONS(440), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [11574] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(268), 1,
      sym_comment,
    ACTIONS(606), 13,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [11599] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(269), 1,
      sym_comment,
    ACTIONS(531), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [11623] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(270), 1,
      sym_comment,
    ACTIONS(494), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [11647] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(271), 1,
      sym_comment,
    ACTIONS(527), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [11671] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_DOT,
    STATE(272), 1,
      sym_comment,
    ACTIONS(388), 11,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
      anon_sym_POUND,
  [11697] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(273), 1,
      sym_comment,
    ACTIONS(362), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [11721] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(274), 1,
      sym_comment,
    ACTIONS(496), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [11745] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(275), 1,
      sym_comment,
    ACTIONS(542), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [11769] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(625), 1,
      sym_annotation,
    STATE(276), 2,
      sym_comment,
      aux_sym__annot_type_repeat1,
    ACTIONS(515), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [11795] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(277), 1,
      sym_comment,
    ACTIONS(368), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [11819] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(278), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_L,
      anon_sym_l,
    ACTIONS(259), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [11845] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_DOT,
    STATE(279), 1,
      sym_comment,
    ACTIONS(374), 11,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [11871] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(280), 1,
      sym_comment,
    ACTIONS(540), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [11895] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(281), 1,
      sym_comment,
    ACTIONS(452), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [11919] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(282), 1,
      sym_comment,
    ACTIONS(628), 12,
      anon_sym_LF,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [11943] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(283), 1,
      sym_comment,
    ACTIONS(432), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [11967] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(284), 1,
      sym_comment,
    ACTIONS(548), 12,
      anon_sym_LF,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [11991] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(285), 1,
      sym_comment,
    ACTIONS(436), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [12015] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(286), 1,
      sym_comment,
    ACTIONS(440), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [12039] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(630), 1,
      anon_sym_LBRACK,
    ACTIONS(632), 1,
      anon_sym_POUND,
    STATE(287), 1,
      sym_comment,
    STATE(357), 1,
      sym_type_args,
    ACTIONS(374), 9,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [12069] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(288), 1,
      sym_comment,
    ACTIONS(492), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [12093] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(289), 1,
      sym_comment,
    ACTIONS(352), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [12117] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(634), 1,
      sym_annotation,
    STATE(290), 1,
      sym_comment,
    STATE(293), 1,
      aux_sym__annot_type_repeat1,
    ACTIONS(533), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [12145] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(636), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(638), 1,
      sym__float_type,
    STATE(291), 1,
      sym_comment,
    ACTIONS(368), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [12173] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(292), 1,
      sym_comment,
    ACTIONS(548), 12,
      anon_sym_LF,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [12197] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(634), 1,
      sym_annotation,
    STATE(276), 1,
      aux_sym__annot_type_repeat1,
    STATE(293), 1,
      sym_comment,
    ACTIONS(500), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [12225] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(294), 1,
      sym_comment,
    ACTIONS(295), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [12249] = 11,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(571), 1,
      aux_sym_plainid_token2,
    ACTIONS(573), 1,
      aux_sym_plainid_token4,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    ACTIONS(644), 1,
      aux_sym_plainid_token1,
    STATE(40), 1,
      sym_id,
    STATE(295), 1,
      sym_comment,
    STATE(303), 1,
      aux_sym__infix_type_repeat1,
    ACTIONS(567), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
    ACTIONS(640), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_match,
  [12287] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(296), 1,
      sym_comment,
    ACTIONS(498), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [12311] = 10,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(553), 1,
      aux_sym_plainid_token2,
    ACTIONS(556), 1,
      aux_sym_plainid_token4,
    ACTIONS(648), 1,
      anon_sym_BQUOTE,
    ACTIONS(651), 1,
      aux_sym_plainid_token1,
    STATE(40), 1,
      sym_id,
    STATE(297), 2,
      sym_comment,
      aux_sym__infix_type_repeat1,
    ACTIONS(548), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
    ACTIONS(646), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_match,
  [12347] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(298), 1,
      sym_comment,
    ACTIONS(529), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [12371] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(654), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(656), 1,
      sym__float_type,
    STATE(299), 1,
      sym_comment,
    ACTIONS(362), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [12399] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(300), 1,
      sym_comment,
    ACTIONS(350), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_L,
      anon_sym_l,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [12423] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(301), 1,
      sym_comment,
    ACTIONS(490), 12,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [12447] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(302), 1,
      sym_comment,
    ACTIONS(628), 12,
      anon_sym_LF,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_SEMI,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      anon_sym_case,
  [12471] = 11,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(571), 1,
      aux_sym_plainid_token2,
    ACTIONS(573), 1,
      aux_sym_plainid_token4,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    ACTIONS(644), 1,
      aux_sym_plainid_token1,
    STATE(40), 1,
      sym_id,
    STATE(297), 1,
      aux_sym__infix_type_repeat1,
    STATE(303), 1,
      sym_comment,
    ACTIONS(593), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
    ACTIONS(658), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_match,
  [12509] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(304), 1,
      sym_comment,
    ACTIONS(331), 12,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
      anon_sym_POUND,
  [12533] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(305), 1,
      sym_comment,
    ACTIONS(253), 12,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
      anon_sym_POUND,
  [12557] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(306), 1,
      sym_comment,
    ACTIONS(255), 12,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
      anon_sym_POUND,
  [12581] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(660), 1,
      aux_sym_exponent_part_token1,
    ACTIONS(662), 1,
      sym__float_type,
    STATE(307), 1,
      sym_comment,
    ACTIONS(352), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [12609] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(308), 1,
      sym_comment,
    ACTIONS(257), 12,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
      anon_sym_POUND,
  [12633] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(664), 1,
      sym__float_type,
    STATE(309), 1,
      sym_comment,
    ACTIONS(452), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [12658] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(310), 1,
      sym_comment,
    ACTIONS(257), 11,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [12681] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(311), 1,
      sym_comment,
    ACTIONS(591), 11,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [12704] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(312), 1,
      sym_comment,
    ACTIONS(255), 11,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [12727] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(313), 1,
      sym_comment,
    ACTIONS(253), 11,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [12750] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(666), 1,
      anon_sym_LBRACE,
    STATE(314), 1,
      sym_comment,
    STATE(322), 1,
      aux_sym__refined_type_repeat1,
    STATE(375), 1,
      sym_refinement,
    STATE(548), 1,
      sym_nl,
    ACTIONS(469), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(462), 5,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_EQ_GT,
  [12783] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(315), 1,
      sym_comment,
    ACTIONS(544), 11,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [12806] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(668), 1,
      sym__float_type,
    STATE(316), 1,
      sym_comment,
    ACTIONS(440), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [12831] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(317), 1,
      sym_comment,
    ACTIONS(563), 11,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [12854] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(670), 1,
      sym__float_type,
    STATE(318), 1,
      sym_comment,
    ACTIONS(436), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [12879] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(319), 1,
      sym_comment,
    ACTIONS(546), 11,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
      sym_annotation,
  [12902] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(672), 1,
      anon_sym_LBRACE,
    STATE(375), 1,
      sym_refinement,
    STATE(548), 1,
      sym_nl,
    ACTIONS(444), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(320), 2,
      sym_comment,
      aux_sym__refined_type_repeat1,
    ACTIONS(447), 5,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_EQ_GT,
  [12933] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(675), 1,
      sym__float_type,
    STATE(321), 1,
      sym_comment,
    ACTIONS(432), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [12958] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(666), 1,
      anon_sym_LBRACE,
    STATE(320), 1,
      aux_sym__refined_type_repeat1,
    STATE(322), 1,
      sym_comment,
    STATE(375), 1,
      sym_refinement,
    STATE(548), 1,
      sym_nl,
    ACTIONS(469), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(479), 5,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_EQ_GT,
  [12991] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(638), 1,
      sym__float_type,
    STATE(323), 1,
      sym_comment,
    ACTIONS(368), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13016] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(324), 1,
      sym_comment,
    ACTIONS(432), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13038] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(677), 1,
      sym_annotation,
    STATE(325), 1,
      sym_comment,
    STATE(329), 1,
      aux_sym__annot_type_repeat1,
    ACTIONS(533), 8,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
  [13064] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(679), 1,
      sym_annotation,
    STATE(326), 2,
      sym_comment,
      aux_sym__annot_type_repeat1,
    ACTIONS(515), 8,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
  [13088] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(327), 1,
      sym_comment,
    ACTIONS(548), 5,
      anon_sym_COMMA,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
    ACTIONS(646), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_match,
  [13112] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(328), 1,
      sym_comment,
    ACTIONS(490), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13134] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(677), 1,
      sym_annotation,
    STATE(326), 1,
      aux_sym__annot_type_repeat1,
    STATE(329), 1,
      sym_comment,
    ACTIONS(500), 8,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
  [13160] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(330), 1,
      sym_comment,
    ACTIONS(628), 5,
      anon_sym_COMMA,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
    ACTIONS(682), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      anon_sym_match,
  [13184] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(331), 1,
      sym_comment,
    ACTIONS(362), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13206] = 10,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(569), 1,
      anon_sym_BQUOTE,
    ACTIONS(573), 1,
      aux_sym_plainid_token4,
    ACTIONS(658), 1,
      anon_sym_LF,
    STATE(42), 1,
      sym_id,
    STATE(332), 1,
      sym_comment,
    STATE(354), 1,
      aux_sym__infix_type_repeat1,
    ACTIONS(571), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
    ACTIONS(593), 3,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [13240] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(333), 1,
      sym_comment,
    ACTIONS(496), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13262] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(334), 1,
      sym_comment,
    ACTIONS(612), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [13284] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(335), 1,
      sym_comment,
    ACTIONS(542), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13306] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(336), 1,
      sym_comment,
    ACTIONS(527), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13328] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(337), 1,
      sym_comment,
    ACTIONS(368), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13350] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(338), 1,
      sym_comment,
    ACTIONS(295), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13372] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(339), 1,
      sym_comment,
    ACTIONS(529), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13394] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_DOT,
    STATE(340), 1,
      sym_comment,
    ACTIONS(374), 9,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13418] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(341), 1,
      sym_comment,
    ACTIONS(452), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13440] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(342), 1,
      sym_comment,
    ACTIONS(494), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13462] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(343), 1,
      sym_comment,
    ACTIONS(436), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13484] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(344), 1,
      sym_comment,
    ACTIONS(352), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13506] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(345), 1,
      sym_comment,
    ACTIONS(440), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13528] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(346), 1,
      sym_comment,
    ACTIONS(447), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [13550] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(347), 1,
      sym_comment,
    ACTIONS(492), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13572] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(348), 1,
      sym_comment,
    ACTIONS(602), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [13594] = 10,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(569), 1,
      anon_sym_BQUOTE,
    ACTIONS(573), 1,
      aux_sym_plainid_token4,
    ACTIONS(640), 1,
      anon_sym_LF,
    STATE(42), 1,
      sym_id,
    STATE(332), 1,
      aux_sym__infix_type_repeat1,
    STATE(349), 1,
      sym_comment,
    ACTIONS(571), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
    ACTIONS(567), 3,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [13628] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(350), 1,
      sym_comment,
    ACTIONS(531), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13650] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(351), 1,
      sym_comment,
    ACTIONS(540), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13672] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(352), 1,
      sym_comment,
    ACTIONS(604), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [13694] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(353), 1,
      sym_comment,
    ACTIONS(606), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [13716] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(550), 1,
      anon_sym_BQUOTE,
    ACTIONS(556), 1,
      aux_sym_plainid_token4,
    ACTIONS(646), 1,
      anon_sym_LF,
    STATE(42), 1,
      sym_id,
    ACTIONS(553), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
    STATE(354), 2,
      sym_comment,
      aux_sym__infix_type_repeat1,
    ACTIONS(548), 3,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [13748] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(355), 1,
      sym_comment,
    ACTIONS(498), 10,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_DOT,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13770] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(356), 1,
      sym_comment,
    ACTIONS(257), 9,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13791] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(357), 1,
      sym_comment,
    ACTIONS(546), 9,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13812] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(358), 1,
      sym_comment,
    ACTIONS(255), 9,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13833] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(359), 1,
      sym_comment,
    ACTIONS(544), 9,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13854] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(360), 1,
      sym_comment,
    ACTIONS(253), 9,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13875] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(361), 1,
      sym_comment,
    ACTIONS(591), 9,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13896] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(411), 1,
      sym_nl,
    ACTIONS(684), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(362), 2,
      sym_comment,
      aux_sym_semi_repeat1,
    ACTIONS(687), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_outdent,
      anon_sym_case,
      sym_refine_dcl,
  [13921] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(363), 1,
      sym_comment,
    ACTIONS(563), 9,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
      sym_annotation,
  [13942] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(364), 1,
      sym_comment,
    ACTIONS(447), 8,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
  [13962] = 10,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(691), 1,
      anon_sym_RBRACE,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(695), 1,
      sym_refine_dcl,
    STATE(365), 1,
      sym_comment,
    STATE(384), 1,
      aux_sym_refinement_repeat1,
    STATE(408), 1,
      sym_nl,
    STATE(450), 1,
      sym_semi,
    ACTIONS(689), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [13994] = 10,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(697), 1,
      anon_sym_RBRACE,
    ACTIONS(699), 1,
      sym_refine_dcl,
    STATE(366), 1,
      sym_comment,
    STATE(408), 1,
      sym_nl,
    STATE(409), 1,
      aux_sym_refinement_repeat1,
    STATE(450), 1,
      sym_semi,
    ACTIONS(689), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [14026] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(367), 1,
      sym_comment,
    ACTIONS(604), 8,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
  [14046] = 10,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(701), 1,
      anon_sym_RBRACE,
    ACTIONS(703), 1,
      sym_refine_dcl,
    STATE(368), 1,
      sym_comment,
    STATE(403), 1,
      aux_sym_refinement_repeat1,
    STATE(408), 1,
      sym_nl,
    STATE(450), 1,
      sym_semi,
    ACTIONS(689), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [14078] = 10,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(705), 1,
      anon_sym_RBRACE,
    ACTIONS(707), 1,
      sym_refine_dcl,
    STATE(369), 1,
      sym_comment,
    STATE(395), 1,
      aux_sym_refinement_repeat1,
    STATE(408), 1,
      sym_nl,
    STATE(450), 1,
      sym_semi,
    ACTIONS(689), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [14110] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(646), 1,
      anon_sym_LF,
    STATE(370), 1,
      sym_comment,
    ACTIONS(548), 7,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [14132] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(371), 1,
      sym_comment,
    ACTIONS(606), 8,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
  [14152] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(711), 1,
      anon_sym_SEMI,
    STATE(372), 1,
      sym_comment,
    STATE(397), 1,
      sym_nl,
    STATE(494), 1,
      sym_semi,
    ACTIONS(689), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(709), 3,
      anon_sym_RBRACE,
      sym_outdent,
      anon_sym_case,
  [14180] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(373), 1,
      sym_comment,
    ACTIONS(612), 8,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
  [14200] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(682), 1,
      anon_sym_LF,
    STATE(374), 1,
      sym_comment,
    ACTIONS(628), 7,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
      anon_sym_match,
  [14222] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(375), 1,
      sym_comment,
    ACTIONS(602), 8,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
      aux_sym_plainid_token4,
      anon_sym_CR_LF,
      anon_sym_EQ_GT,
  [14242] = 10,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(713), 1,
      anon_sym_RBRACE,
    ACTIONS(715), 1,
      sym_refine_dcl,
    STATE(376), 1,
      sym_comment,
    STATE(392), 1,
      aux_sym_refinement_repeat1,
    STATE(408), 1,
      sym_nl,
    STATE(450), 1,
      sym_semi,
    ACTIONS(689), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [14274] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(721), 1,
      anon_sym_match,
    STATE(377), 1,
      sym_comment,
    ACTIONS(719), 2,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
    ACTIONS(717), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_case,
  [14298] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(721), 1,
      anon_sym_match,
    STATE(378), 1,
      sym_comment,
    ACTIONS(723), 2,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
    ACTIONS(717), 5,
      anon_sym_LF,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_CR_LF,
      anon_sym_case,
  [14322] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
    STATE(379), 1,
      sym_comment,
    STATE(383), 1,
      aux_sym_refinement_repeat1,
    STATE(408), 1,
      sym_nl,
    STATE(450), 1,
      sym_semi,
    ACTIONS(689), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [14351] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(731), 1,
      anon_sym_DQUOTE,
    STATE(380), 1,
      sym_comment,
    STATE(399), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(729), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
    ACTIONS(727), 3,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      aux_sym_char_element_token1,
  [14376] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(733), 1,
      anon_sym_DQUOTE,
    STATE(381), 1,
      sym_comment,
    STATE(406), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(729), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
    ACTIONS(727), 3,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      aux_sym_char_element_token1,
  [14401] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(735), 1,
      anon_sym_DQUOTE,
    STATE(381), 1,
      aux_sym_string_literal_repeat1,
    STATE(382), 1,
      sym_comment,
    ACTIONS(729), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
    ACTIONS(727), 3,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      aux_sym_char_element_token1,
  [14426] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(737), 1,
      anon_sym_RBRACE,
    STATE(383), 1,
      sym_comment,
    STATE(408), 1,
      sym_nl,
    STATE(413), 1,
      aux_sym_refinement_repeat1,
    STATE(450), 1,
      sym_semi,
    ACTIONS(689), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [14455] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
    STATE(384), 1,
      sym_comment,
    STATE(408), 1,
      sym_nl,
    STATE(413), 1,
      aux_sym_refinement_repeat1,
    STATE(450), 1,
      sym_semi,
    ACTIONS(689), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [14484] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(548), 1,
      anon_sym_EQ_GT,
    ACTIONS(556), 1,
      aux_sym_plainid_token4,
    ACTIONS(648), 1,
      anon_sym_BQUOTE,
    STATE(43), 1,
      sym_id,
    ACTIONS(651), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
    STATE(385), 2,
      sym_comment,
      aux_sym__infix_type_repeat1,
  [14511] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(739), 1,
      anon_sym_DQUOTE,
    STATE(386), 1,
      sym_comment,
    STATE(406), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(729), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
    ACTIONS(727), 3,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      aux_sym_char_element_token1,
  [14536] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(741), 1,
      anon_sym_DQUOTE,
    STATE(386), 1,
      aux_sym_string_literal_repeat1,
    STATE(387), 1,
      sym_comment,
    ACTIONS(729), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
    ACTIONS(727), 3,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      aux_sym_char_element_token1,
  [14561] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
    STATE(388), 1,
      sym_comment,
    STATE(393), 1,
      aux_sym_refinement_repeat1,
    STATE(408), 1,
      sym_nl,
    STATE(450), 1,
      sym_semi,
    ACTIONS(689), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [14590] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(389), 1,
      sym_comment,
    ACTIONS(293), 7,
      anon_sym_LF,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_case,
      sym_refine_dcl,
  [14609] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(573), 1,
      aux_sym_plainid_token4,
    ACTIONS(593), 1,
      anon_sym_EQ_GT,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    STATE(43), 1,
      sym_id,
    STATE(385), 1,
      aux_sym__infix_type_repeat1,
    STATE(390), 1,
      sym_comment,
    ACTIONS(644), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
  [14638] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(567), 1,
      anon_sym_EQ_GT,
    ACTIONS(573), 1,
      aux_sym_plainid_token4,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    STATE(43), 1,
      sym_id,
    STATE(390), 1,
      aux_sym__infix_type_repeat1,
    STATE(391), 1,
      sym_comment,
    ACTIONS(644), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
  [14667] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
    STATE(392), 1,
      sym_comment,
    STATE(408), 1,
      sym_nl,
    STATE(413), 1,
      aux_sym_refinement_repeat1,
    STATE(450), 1,
      sym_semi,
    ACTIONS(689), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [14696] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(745), 1,
      anon_sym_RBRACE,
    STATE(393), 1,
      sym_comment,
    STATE(408), 1,
      sym_nl,
    STATE(413), 1,
      aux_sym_refinement_repeat1,
    STATE(450), 1,
      sym_semi,
    ACTIONS(689), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [14725] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(747), 1,
      anon_sym_RBRACE,
    STATE(394), 1,
      sym_comment,
    STATE(408), 1,
      sym_nl,
    STATE(413), 1,
      aux_sym_refinement_repeat1,
    STATE(450), 1,
      sym_semi,
    ACTIONS(689), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [14754] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(749), 1,
      anon_sym_RBRACE,
    STATE(395), 1,
      sym_comment,
    STATE(408), 1,
      sym_nl,
    STATE(413), 1,
      aux_sym_refinement_repeat1,
    STATE(450), 1,
      sym_semi,
    ACTIONS(689), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [14783] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(749), 1,
      anon_sym_RBRACE,
    STATE(394), 1,
      aux_sym_refinement_repeat1,
    STATE(396), 1,
      sym_comment,
    STATE(408), 1,
      sym_nl,
    STATE(450), 1,
      sym_semi,
    ACTIONS(689), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [14812] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(397), 1,
      sym_comment,
    STATE(405), 1,
      aux_sym_semi_repeat1,
    STATE(411), 1,
      sym_nl,
    ACTIONS(689), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(751), 3,
      anon_sym_RBRACE,
      sym_outdent,
      anon_sym_case,
  [14837] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(753), 1,
      anon_sym_DQUOTE,
    STATE(398), 1,
      sym_comment,
    STATE(406), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(729), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
    ACTIONS(727), 3,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      aux_sym_char_element_token1,
  [14862] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(755), 1,
      anon_sym_DQUOTE,
    STATE(399), 1,
      sym_comment,
    STATE(406), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(729), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
    ACTIONS(727), 3,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      aux_sym_char_element_token1,
  [14887] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(757), 1,
      anon_sym_DQUOTE,
    STATE(400), 1,
      sym_comment,
    STATE(406), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(729), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
    ACTIONS(727), 3,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      aux_sym_char_element_token1,
  [14912] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(759), 1,
      anon_sym_DQUOTE,
    STATE(400), 1,
      aux_sym_string_literal_repeat1,
    STATE(401), 1,
      sym_comment,
    ACTIONS(729), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
    ACTIONS(727), 3,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      aux_sym_char_element_token1,
  [14937] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(761), 1,
      anon_sym_RBRACE,
    STATE(402), 1,
      sym_comment,
    STATE(404), 1,
      aux_sym_refinement_repeat1,
    STATE(408), 1,
      sym_nl,
    STATE(450), 1,
      sym_semi,
    ACTIONS(689), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [14966] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(761), 1,
      anon_sym_RBRACE,
    STATE(403), 1,
      sym_comment,
    STATE(408), 1,
      sym_nl,
    STATE(413), 1,
      aux_sym_refinement_repeat1,
    STATE(450), 1,
      sym_semi,
    ACTIONS(689), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [14995] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(763), 1,
      anon_sym_RBRACE,
    STATE(404), 1,
      sym_comment,
    STATE(408), 1,
      sym_nl,
    STATE(413), 1,
      aux_sym_refinement_repeat1,
    STATE(450), 1,
      sym_semi,
    ACTIONS(689), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [15024] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(362), 1,
      aux_sym_semi_repeat1,
    STATE(405), 1,
      sym_comment,
    STATE(411), 1,
      sym_nl,
    ACTIONS(689), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(765), 3,
      anon_sym_RBRACE,
      sym_outdent,
      anon_sym_case,
  [15049] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(773), 1,
      anon_sym_DQUOTE,
    ACTIONS(770), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
    STATE(406), 2,
      sym_comment,
      aux_sym_string_literal_repeat1,
    ACTIONS(767), 3,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      aux_sym_char_element_token1,
  [15072] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(775), 1,
      anon_sym_RBRACE,
    STATE(407), 1,
      sym_comment,
    STATE(408), 1,
      sym_nl,
    STATE(410), 1,
      aux_sym_refinement_repeat1,
    STATE(450), 1,
      sym_semi,
    ACTIONS(689), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [15101] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(408), 1,
      sym_comment,
    STATE(411), 1,
      sym_nl,
    STATE(412), 1,
      aux_sym_semi_repeat1,
    ACTIONS(751), 5,
      anon_sym_LF,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_CR_LF,
      sym_refine_dcl,
  [15124] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(775), 1,
      anon_sym_RBRACE,
    STATE(408), 1,
      sym_nl,
    STATE(409), 1,
      sym_comment,
    STATE(413), 1,
      aux_sym_refinement_repeat1,
    STATE(450), 1,
      sym_semi,
    ACTIONS(689), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [15153] = 9,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(777), 1,
      anon_sym_RBRACE,
    STATE(408), 1,
      sym_nl,
    STATE(410), 1,
      sym_comment,
    STATE(413), 1,
      aux_sym_refinement_repeat1,
    STATE(450), 1,
      sym_semi,
    ACTIONS(689), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [15182] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(411), 1,
      sym_comment,
    ACTIONS(779), 7,
      anon_sym_LF,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_case,
      sym_refine_dcl,
  [15201] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(362), 1,
      aux_sym_semi_repeat1,
    STATE(411), 1,
      sym_nl,
    STATE(412), 1,
      sym_comment,
    ACTIONS(765), 5,
      anon_sym_LF,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_CR_LF,
      sym_refine_dcl,
  [15224] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(784), 1,
      anon_sym_RBRACE,
    ACTIONS(786), 1,
      anon_sym_SEMI,
    STATE(408), 1,
      sym_nl,
    STATE(450), 1,
      sym_semi,
    ACTIONS(781), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(413), 2,
      sym_comment,
      aux_sym_refinement_repeat1,
  [15251] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(789), 1,
      anon_sym_DQUOTE,
    STATE(398), 1,
      aux_sym_string_literal_repeat1,
    STATE(414), 1,
      sym_comment,
    ACTIONS(729), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
    ACTIONS(727), 3,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      aux_sym_char_element_token1,
  [15276] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(415), 1,
      sym_comment,
    ACTIONS(791), 6,
      anon_sym_LF,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_case,
  [15294] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(793), 1,
      anon_sym_BQUOTE,
    ACTIONS(797), 1,
      aux_sym_plainid_token4,
    STATE(416), 1,
      sym_comment,
    STATE(545), 1,
      sym_typed_fun_param,
    STATE(665), 1,
      sym_id,
    ACTIONS(795), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
  [15320] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(803), 1,
      anon_sym_match,
    STATE(417), 1,
      sym_comment,
    ACTIONS(801), 2,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
    ACTIONS(799), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [15342] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(418), 1,
      sym_comment,
    ACTIONS(805), 6,
      anon_sym_LF,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_case,
  [15360] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(419), 1,
      sym_comment,
    ACTIONS(809), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
    ACTIONS(807), 4,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      aux_sym_char_element_token1,
  [15380] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(420), 1,
      sym_comment,
    ACTIONS(811), 6,
      anon_sym_LF,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_case,
  [15398] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(421), 1,
      sym_comment,
    ACTIONS(813), 6,
      anon_sym_LF,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_case,
  [15416] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(422), 1,
      sym_comment,
    ACTIONS(717), 6,
      anon_sym_LF,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_case,
  [15434] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(423), 1,
      sym_comment,
    ACTIONS(791), 6,
      anon_sym_LF,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_CR_LF,
      sym_outdent,
      anon_sym_case,
  [15452] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(817), 1,
      anon_sym_BQUOTE,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    STATE(424), 1,
      sym_comment,
    STATE(444), 1,
      aux_sym_symbol_literal_repeat1,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [15475] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(821), 1,
      anon_sym_BQUOTE,
    STATE(425), 1,
      sym_comment,
    STATE(444), 1,
      aux_sym_symbol_literal_repeat1,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [15498] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(823), 1,
      anon_sym_BQUOTE,
    STATE(426), 1,
      sym_comment,
    STATE(460), 1,
      aux_sym_symbol_literal_repeat1,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [15521] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(103), 1,
      aux_sym_plainid_token4,
    STATE(100), 1,
      sym_id,
    STATE(427), 1,
      sym_comment,
    ACTIONS(99), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
  [15544] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(428), 1,
      sym_comment,
    ACTIONS(628), 2,
      aux_sym_plainid_token4,
      anon_sym_EQ_GT,
    ACTIONS(682), 3,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
  [15563] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(825), 1,
      anon_sym_BQUOTE,
    ACTIONS(829), 1,
      aux_sym_plainid_token4,
    STATE(363), 1,
      sym_id,
    STATE(429), 1,
      sym_comment,
    ACTIONS(827), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
  [15586] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(739), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(831), 1,
      anon_sym_DQUOTE,
    ACTIONS(833), 1,
      aux_sym_string_literal_token1,
    STATE(430), 1,
      sym_comment,
    STATE(481), 1,
      aux_sym_string_literal_repeat2,
    STATE(520), 1,
      aux_sym_string_literal_repeat3,
  [15611] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(431), 1,
      sym_comment,
    ACTIONS(548), 2,
      aux_sym_plainid_token4,
      anon_sym_EQ_GT,
    ACTIONS(646), 3,
      anon_sym_BQUOTE,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
  [15630] = 7,
    ACTIONS(13), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      aux_sym_plainid_token4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(242), 1,
      sym_id,
    STATE(432), 1,
      sym_comment,
    ACTIONS(19), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
  [15653] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(741), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(831), 1,
      anon_sym_DQUOTE,
    ACTIONS(833), 1,
      aux_sym_string_literal_token1,
    STATE(430), 1,
      aux_sym_string_literal_repeat2,
    STATE(433), 1,
      sym_comment,
    STATE(522), 1,
      aux_sym_string_literal_repeat3,
  [15678] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(835), 1,
      anon_sym_BQUOTE,
    STATE(424), 1,
      aux_sym_symbol_literal_repeat1,
    STATE(434), 1,
      sym_comment,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [15701] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(201), 1,
      aux_sym_plainid_token4,
    ACTIONS(229), 1,
      anon_sym_BQUOTE,
    STATE(304), 1,
      sym_id,
    STATE(435), 1,
      sym_comment,
    ACTIONS(251), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
  [15724] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(789), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(831), 1,
      anon_sym_DQUOTE,
    ACTIONS(833), 1,
      aux_sym_string_literal_token1,
    STATE(436), 1,
      sym_comment,
    STATE(474), 1,
      aux_sym_string_literal_repeat2,
    STATE(491), 1,
      aux_sym_string_literal_repeat3,
  [15749] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(837), 1,
      anon_sym_BQUOTE,
    STATE(437), 1,
      sym_comment,
    STATE(444), 1,
      aux_sym_symbol_literal_repeat1,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [15772] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(121), 1,
      anon_sym_BQUOTE,
    ACTIONS(131), 1,
      aux_sym_plainid_token4,
    STATE(94), 1,
      sym_id,
    STATE(438), 1,
      sym_comment,
    ACTIONS(127), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
  [15795] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(839), 1,
      anon_sym_BQUOTE,
    STATE(439), 1,
      sym_comment,
    STATE(443), 1,
      aux_sym_symbol_literal_repeat1,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [15818] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(841), 1,
      anon_sym_BQUOTE,
    STATE(440), 1,
      sym_comment,
    STATE(444), 1,
      aux_sym_symbol_literal_repeat1,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [15841] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(731), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(831), 1,
      anon_sym_DQUOTE,
    ACTIONS(833), 1,
      aux_sym_string_literal_token1,
    STATE(441), 1,
      sym_comment,
    STATE(451), 1,
      aux_sym_string_literal_repeat2,
    STATE(506), 1,
      aux_sym_string_literal_repeat3,
  [15866] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(843), 1,
      anon_sym_BQUOTE,
    ACTIONS(847), 1,
      aux_sym_plainid_token4,
    STATE(243), 1,
      sym_id,
    STATE(442), 1,
      sym_comment,
    ACTIONS(845), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
  [15889] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(849), 1,
      anon_sym_BQUOTE,
    STATE(443), 1,
      sym_comment,
    STATE(444), 1,
      aux_sym_symbol_literal_repeat1,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [15912] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(854), 1,
      anon_sym_BQUOTE,
    ACTIONS(856), 1,
      aux_sym_char_element_token1,
    ACTIONS(851), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
    STATE(444), 2,
      sym_comment,
      aux_sym_symbol_literal_repeat1,
  [15933] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(859), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      aux_sym_plainid_token4,
    STATE(231), 1,
      sym_id,
    STATE(445), 1,
      sym_comment,
    ACTIONS(861), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
  [15956] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(865), 1,
      anon_sym_BQUOTE,
    STATE(440), 1,
      aux_sym_symbol_literal_repeat1,
    STATE(446), 1,
      sym_comment,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [15979] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(867), 1,
      anon_sym_BQUOTE,
    STATE(444), 1,
      aux_sym_symbol_literal_repeat1,
    STATE(447), 1,
      sym_comment,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [16002] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(757), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(831), 1,
      anon_sym_DQUOTE,
    ACTIONS(833), 1,
      aux_sym_string_literal_token1,
    STATE(448), 1,
      sym_comment,
    STATE(481), 1,
      aux_sym_string_literal_repeat2,
    STATE(517), 1,
      aux_sym_string_literal_repeat3,
  [16027] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(735), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(831), 1,
      anon_sym_DQUOTE,
    ACTIONS(833), 1,
      aux_sym_string_literal_token1,
    STATE(449), 1,
      sym_comment,
    STATE(461), 1,
      aux_sym_string_literal_repeat2,
    STATE(501), 1,
      aux_sym_string_literal_repeat3,
  [16052] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(871), 1,
      sym_refine_dcl,
    STATE(450), 1,
      sym_comment,
    ACTIONS(869), 4,
      anon_sym_LF,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_CR_LF,
  [16071] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(755), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(831), 1,
      anon_sym_DQUOTE,
    ACTIONS(833), 1,
      aux_sym_string_literal_token1,
    STATE(451), 1,
      sym_comment,
    STATE(481), 1,
      aux_sym_string_literal_repeat2,
    STATE(497), 1,
      aux_sym_string_literal_repeat3,
  [16096] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(873), 1,
      anon_sym_BQUOTE,
    STATE(437), 1,
      aux_sym_symbol_literal_repeat1,
    STATE(452), 1,
      sym_comment,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [16119] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(453), 1,
      sym_comment,
    ACTIONS(751), 5,
      anon_sym_LF,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_CR_LF,
      sym_refine_dcl,
  [16136] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(759), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(831), 1,
      anon_sym_DQUOTE,
    ACTIONS(833), 1,
      aux_sym_string_literal_token1,
    STATE(448), 1,
      aux_sym_string_literal_repeat2,
    STATE(454), 1,
      sym_comment,
    STATE(511), 1,
      aux_sym_string_literal_repeat3,
  [16161] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(875), 1,
      anon_sym_BQUOTE,
    ACTIONS(879), 1,
      aux_sym_plainid_token4,
    STATE(208), 1,
      sym_id,
    STATE(455), 1,
      sym_comment,
    ACTIONS(877), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
  [16184] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(881), 1,
      anon_sym_BQUOTE,
    STATE(447), 1,
      aux_sym_symbol_literal_repeat1,
    STATE(456), 1,
      sym_comment,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [16207] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(883), 1,
      anon_sym_BQUOTE,
    STATE(444), 1,
      aux_sym_symbol_literal_repeat1,
    STATE(457), 1,
      sym_comment,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [16230] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(83), 1,
      aux_sym_plainid_token4,
    STATE(84), 1,
      sym_id,
    STATE(458), 1,
      sym_comment,
    ACTIONS(79), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
  [16253] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(885), 1,
      anon_sym_BQUOTE,
    STATE(425), 1,
      aux_sym_symbol_literal_repeat1,
    STATE(459), 1,
      sym_comment,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [16276] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(887), 1,
      anon_sym_BQUOTE,
    STATE(444), 1,
      aux_sym_symbol_literal_repeat1,
    STATE(460), 1,
      sym_comment,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [16299] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(733), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(831), 1,
      anon_sym_DQUOTE,
    ACTIONS(833), 1,
      aux_sym_string_literal_token1,
    STATE(461), 1,
      sym_comment,
    STATE(481), 1,
      aux_sym_string_literal_repeat2,
    STATE(531), 1,
      aux_sym_string_literal_repeat3,
  [16324] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(889), 1,
      anon_sym_BQUOTE,
    ACTIONS(893), 1,
      aux_sym_plainid_token4,
    STATE(317), 1,
      sym_id,
    STATE(462), 1,
      sym_comment,
    ACTIONS(891), 2,
      aux_sym_plainid_token1,
      aux_sym_plainid_token2,
  [16347] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(895), 1,
      anon_sym_BQUOTE,
    STATE(457), 1,
      aux_sym_symbol_literal_repeat1,
    STATE(463), 1,
      sym_comment,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [16370] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(897), 1,
      anon_sym_BQUOTE,
    STATE(444), 1,
      aux_sym_symbol_literal_repeat1,
    STATE(464), 1,
      sym_comment,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [16393] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(899), 1,
      anon_sym_BQUOTE,
    STATE(464), 1,
      aux_sym_symbol_literal_repeat1,
    STATE(465), 1,
      sym_comment,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [16416] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(901), 1,
      anon_sym_BQUOTE,
    STATE(444), 1,
      aux_sym_symbol_literal_repeat1,
    STATE(466), 1,
      sym_comment,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [16439] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(903), 1,
      anon_sym_BQUOTE,
    STATE(466), 1,
      aux_sym_symbol_literal_repeat1,
    STATE(467), 1,
      sym_comment,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [16462] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(905), 1,
      anon_sym_BQUOTE,
    STATE(444), 1,
      aux_sym_symbol_literal_repeat1,
    STATE(468), 1,
      sym_comment,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [16485] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(907), 1,
      anon_sym_BQUOTE,
    STATE(469), 1,
      sym_comment,
    STATE(472), 1,
      aux_sym_symbol_literal_repeat1,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [16508] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(909), 1,
      anon_sym_BQUOTE,
    STATE(468), 1,
      aux_sym_symbol_literal_repeat1,
    STATE(470), 1,
      sym_comment,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [16531] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(911), 1,
      anon_sym_BQUOTE,
    STATE(444), 1,
      aux_sym_symbol_literal_repeat1,
    STATE(471), 1,
      sym_comment,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [16554] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(913), 1,
      anon_sym_BQUOTE,
    STATE(444), 1,
      aux_sym_symbol_literal_repeat1,
    STATE(472), 1,
      sym_comment,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [16577] = 7,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      aux_sym_char_element_token1,
    ACTIONS(915), 1,
      anon_sym_BQUOTE,
    STATE(471), 1,
      aux_sym_symbol_literal_repeat1,
    STATE(473), 1,
      sym_comment,
    ACTIONS(815), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [16600] = 8,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(753), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(831), 1,
      anon_sym_DQUOTE,
    ACTIONS(833), 1,
      aux_sym_string_literal_token1,
    STATE(474), 1,
      sym_comment,
    STATE(481), 1,
      aux_sym_string_literal_repeat2,
    STATE(498), 1,
      aux_sym_string_literal_repeat3,
  [16625] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(917), 1,
      sym_outdent,
    ACTIONS(919), 1,
      anon_sym_case,
    STATE(475), 1,
      sym_comment,
    STATE(478), 1,
      aux_sym_type_case_clauses_repeat1,
    STATE(514), 1,
      sym_type_case_clause,
  [16647] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(919), 1,
      anon_sym_case,
    ACTIONS(921), 1,
      sym_outdent,
    STATE(475), 1,
      aux_sym_type_case_clauses_repeat1,
    STATE(476), 1,
      sym_comment,
    STATE(514), 1,
      sym_type_case_clause,
  [16669] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(799), 1,
      anon_sym_LF,
    ACTIONS(925), 1,
      anon_sym_match,
    STATE(477), 1,
      sym_comment,
    ACTIONS(923), 2,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
  [16689] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(927), 1,
      sym_outdent,
    ACTIONS(929), 1,
      anon_sym_case,
    STATE(514), 1,
      sym_type_case_clause,
    STATE(478), 2,
      sym_comment,
      aux_sym_type_case_clauses_repeat1,
  [16709] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(479), 1,
      sym_comment,
    ACTIONS(784), 4,
      anon_sym_LF,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_CR_LF,
  [16725] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(917), 1,
      anon_sym_RBRACE,
    ACTIONS(932), 1,
      anon_sym_case,
    STATE(480), 1,
      sym_comment,
    STATE(488), 1,
      aux_sym_type_case_clauses_repeat1,
    STATE(514), 1,
      sym_type_case_clause,
  [16747] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(937), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(939), 1,
      aux_sym_string_literal_token1,
    STATE(481), 2,
      sym_comment,
      aux_sym_string_literal_repeat2,
  [16767] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(921), 1,
      anon_sym_RBRACE,
    ACTIONS(932), 1,
      anon_sym_case,
    STATE(480), 1,
      aux_sym_type_case_clauses_repeat1,
    STATE(482), 1,
      sym_comment,
    STATE(514), 1,
      sym_type_case_clause,
  [16789] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    STATE(483), 1,
      sym_comment,
    STATE(486), 1,
      aux_sym__types_repeat1,
    ACTIONS(942), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [16809] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(946), 1,
      anon_sym_RPAREN,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    STATE(483), 1,
      aux_sym__types_repeat1,
    STATE(484), 1,
      sym_comment,
    STATE(530), 1,
      aux_sym__fun_arg_types_repeat1,
  [16831] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(485), 1,
      sym_comment,
    ACTIONS(950), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
    ACTIONS(952), 2,
      anon_sym_BQUOTE,
      aux_sym_char_element_token1,
  [16849] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(956), 1,
      anon_sym_COMMA,
    ACTIONS(954), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(486), 2,
      sym_comment,
      aux_sym__types_repeat1,
  [16867] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    STATE(483), 1,
      aux_sym__types_repeat1,
    STATE(487), 1,
      sym_comment,
    ACTIONS(959), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [16887] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(927), 1,
      anon_sym_RBRACE,
    ACTIONS(961), 1,
      anon_sym_case,
    STATE(514), 1,
      sym_type_case_clause,
    STATE(488), 2,
      sym_comment,
      aux_sym_type_case_clauses_repeat1,
  [16907] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(966), 1,
      aux_sym_char_element_token1,
    STATE(489), 1,
      sym_comment,
    ACTIONS(964), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [16924] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(970), 1,
      aux_sym_char_element_token1,
    STATE(490), 1,
      sym_comment,
    ACTIONS(968), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [16941] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(972), 1,
      anon_sym_DQUOTE,
    ACTIONS(974), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(491), 1,
      sym_comment,
    STATE(500), 1,
      aux_sym_string_literal_repeat3,
  [16960] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(492), 1,
      sym_comment,
    ACTIONS(976), 3,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_string_literal_token1,
  [16975] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(978), 1,
      anon_sym_DQUOTE,
    ACTIONS(981), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(983), 1,
      aux_sym_string_literal_token1,
    STATE(493), 1,
      sym_comment,
  [16994] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    STATE(494), 1,
      sym_comment,
    ACTIONS(985), 3,
      anon_sym_RBRACE,
      sym_outdent,
      anon_sym_case,
  [17009] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    STATE(495), 1,
      sym_comment,
    ACTIONS(799), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [17024] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(989), 1,
      aux_sym_char_element_token1,
    STATE(496), 1,
      sym_comment,
    ACTIONS(987), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [17041] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(972), 1,
      anon_sym_DQUOTE,
    ACTIONS(991), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(497), 1,
      sym_comment,
    STATE(500), 1,
      aux_sym_string_literal_repeat3,
  [17060] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(972), 1,
      anon_sym_DQUOTE,
    ACTIONS(993), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(498), 1,
      sym_comment,
    STATE(500), 1,
      aux_sym_string_literal_repeat3,
  [17079] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(997), 1,
      aux_sym_char_element_token1,
    STATE(499), 1,
      sym_comment,
    ACTIONS(995), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [17096] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    ACTIONS(1002), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(500), 2,
      sym_comment,
      aux_sym_string_literal_repeat3,
  [17113] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(972), 1,
      anon_sym_DQUOTE,
    ACTIONS(1004), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(500), 1,
      aux_sym_string_literal_repeat3,
    STATE(501), 1,
      sym_comment,
  [17132] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(932), 1,
      anon_sym_case,
    STATE(482), 1,
      sym_type_case_clause,
    STATE(502), 1,
      sym_comment,
    STATE(682), 1,
      sym_type_case_clauses,
  [17151] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(919), 1,
      anon_sym_case,
    STATE(476), 1,
      sym_type_case_clause,
    STATE(503), 1,
      sym_comment,
    STATE(592), 1,
      sym_type_case_clauses,
  [17170] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(801), 1,
      anon_sym_QMARK_EQ_GT,
    ACTIONS(1006), 1,
      anon_sym_EQ_GT_GT,
    ACTIONS(1008), 1,
      anon_sym_EQ_GT,
    STATE(504), 1,
      sym_comment,
  [17189] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(932), 1,
      anon_sym_case,
    STATE(482), 1,
      sym_type_case_clause,
    STATE(505), 1,
      sym_comment,
    STATE(591), 1,
      sym_type_case_clauses,
  [17208] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(972), 1,
      anon_sym_DQUOTE,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(500), 1,
      aux_sym_string_literal_repeat3,
    STATE(506), 1,
      sym_comment,
  [17227] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    STATE(507), 1,
      sym_comment,
    ACTIONS(954), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [17242] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(919), 1,
      anon_sym_case,
    STATE(476), 1,
      sym_type_case_clause,
    STATE(508), 1,
      sym_comment,
    STATE(691), 1,
      sym_type_case_clauses,
  [17261] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    STATE(509), 1,
      sym_comment,
    ACTIONS(1012), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [17276] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    STATE(510), 1,
      sym_comment,
    ACTIONS(1012), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [17291] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(972), 1,
      anon_sym_DQUOTE,
    ACTIONS(1014), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(500), 1,
      aux_sym_string_literal_repeat3,
    STATE(511), 1,
      sym_comment,
  [17310] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    STATE(512), 1,
      sym_comment,
    ACTIONS(1016), 3,
      anon_sym_RBRACE,
      sym_outdent,
      anon_sym_case,
  [17325] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(719), 1,
      anon_sym_EQ_GT,
    ACTIONS(1018), 1,
      anon_sym_EQ_GT_GT,
    ACTIONS(1020), 1,
      anon_sym_QMARK_EQ_GT,
    STATE(513), 1,
      sym_comment,
  [17344] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    STATE(514), 1,
      sym_comment,
    ACTIONS(1022), 3,
      anon_sym_RBRACE,
      sym_outdent,
      anon_sym_case,
  [17359] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1024), 1,
      anon_sym_RPAREN,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    STATE(515), 1,
      sym_comment,
    STATE(521), 1,
      aux_sym__fun_arg_types_repeat1,
  [17378] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1028), 1,
      anon_sym_RPAREN,
    ACTIONS(1030), 1,
      anon_sym_COMMA,
    STATE(516), 1,
      sym_comment,
    STATE(529), 1,
      aux_sym_fun_param_clause_repeat1,
  [17397] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(972), 1,
      anon_sym_DQUOTE,
    ACTIONS(1032), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(500), 1,
      aux_sym_string_literal_repeat3,
    STATE(517), 1,
      sym_comment,
  [17416] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1036), 1,
      aux_sym_char_element_token1,
    STATE(518), 1,
      sym_comment,
    ACTIONS(1034), 2,
      sym_unicode_escape,
      sym_char_escape_seq,
  [17433] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    STATE(519), 1,
      sym_comment,
    ACTIONS(1038), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [17448] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(972), 1,
      anon_sym_DQUOTE,
    ACTIONS(1040), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(500), 1,
      aux_sym_string_literal_repeat3,
    STATE(520), 1,
      sym_comment,
  [17467] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1042), 1,
      anon_sym_RPAREN,
    ACTIONS(1044), 1,
      anon_sym_COMMA,
    STATE(521), 2,
      sym_comment,
      aux_sym__fun_arg_types_repeat1,
  [17484] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(972), 1,
      anon_sym_DQUOTE,
    ACTIONS(1047), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(500), 1,
      aux_sym_string_literal_repeat3,
    STATE(522), 1,
      sym_comment,
  [17503] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(523), 1,
      sym_comment,
    ACTIONS(937), 3,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_string_literal_token1,
  [17518] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(923), 1,
      anon_sym_EQ_GT,
    ACTIONS(1049), 1,
      anon_sym_EQ_GT_GT,
    ACTIONS(1051), 1,
      anon_sym_QMARK_EQ_GT,
    STATE(524), 1,
      sym_comment,
  [17537] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1055), 1,
      anon_sym_EQ_GT,
    STATE(525), 1,
      sym_comment,
    ACTIONS(1053), 2,
      anon_sym_EQ_GT_GT,
      anon_sym_QMARK_EQ_GT,
  [17554] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    STATE(526), 1,
      sym_comment,
    ACTIONS(1057), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [17569] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    STATE(527), 1,
      sym_comment,
    ACTIONS(1059), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [17584] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1063), 1,
      anon_sym_EQ_GT,
    STATE(528), 1,
      sym_comment,
    ACTIONS(1061), 2,
      anon_sym_EQ_GT_GT,
      anon_sym_QMARK_EQ_GT,
  [17601] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
    ACTIONS(1067), 1,
      anon_sym_COMMA,
    STATE(529), 2,
      sym_comment,
      aux_sym_fun_param_clause_repeat1,
  [17618] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    ACTIONS(1070), 1,
      anon_sym_RPAREN,
    STATE(521), 1,
      aux_sym__fun_arg_types_repeat1,
    STATE(530), 1,
      sym_comment,
  [17637] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(972), 1,
      anon_sym_DQUOTE,
    ACTIONS(1072), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(500), 1,
      aux_sym_string_literal_repeat3,
    STATE(531), 1,
      sym_comment,
  [17656] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(919), 1,
      anon_sym_case,
    STATE(476), 1,
      sym_type_case_clause,
    STATE(532), 1,
      sym_comment,
    STATE(610), 1,
      sym_type_case_clauses,
  [17675] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(723), 1,
      anon_sym_EQ_GT,
    ACTIONS(1074), 1,
      anon_sym_EQ_GT_GT,
    ACTIONS(1076), 1,
      anon_sym_QMARK_EQ_GT,
    STATE(533), 1,
      sym_comment,
  [17694] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1030), 1,
      anon_sym_COMMA,
    ACTIONS(1078), 1,
      anon_sym_RPAREN,
    STATE(516), 1,
      aux_sym_fun_param_clause_repeat1,
    STATE(534), 1,
      sym_comment,
  [17713] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    ACTIONS(1070), 1,
      anon_sym_RPAREN,
    STATE(515), 1,
      aux_sym__fun_arg_types_repeat1,
    STATE(535), 1,
      sym_comment,
  [17732] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(932), 1,
      anon_sym_case,
    STATE(482), 1,
      sym_type_case_clause,
    STATE(536), 1,
      sym_comment,
    STATE(611), 1,
      sym_type_case_clauses,
  [17751] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(537), 1,
      sym_comment,
    ACTIONS(1080), 3,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_string_literal_token1,
  [17766] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    STATE(538), 1,
      sym_comment,
    ACTIONS(1082), 2,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
  [17780] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1084), 1,
      anon_sym_LBRACE,
    ACTIONS(1086), 1,
      sym_indent,
    STATE(539), 1,
      sym_comment,
  [17796] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1088), 1,
      anon_sym_LBRACE,
    STATE(346), 1,
      sym_refinement,
    STATE(540), 1,
      sym_comment,
  [17812] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1090), 1,
      anon_sym_DOT,
    STATE(249), 1,
      aux_sym_qual_id_repeat1,
    STATE(541), 1,
      sym_comment,
  [17828] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    STATE(542), 1,
      sym_comment,
    ACTIONS(1092), 2,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
  [17842] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(923), 1,
      anon_sym_EQ_GT,
    ACTIONS(1049), 1,
      anon_sym_EQ_GT_GT,
    STATE(543), 1,
      sym_comment,
  [17858] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1094), 1,
      anon_sym_DOT,
    STATE(67), 1,
      aux_sym_qual_id_repeat1,
    STATE(544), 1,
      sym_comment,
  [17874] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    STATE(545), 1,
      sym_comment,
    ACTIONS(1065), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [17888] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    STATE(546), 1,
      sym_comment,
    ACTIONS(1096), 2,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
  [17902] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    STATE(547), 1,
      sym_comment,
    ACTIONS(1098), 2,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
  [17916] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1100), 1,
      anon_sym_LBRACE,
    STATE(364), 1,
      sym_refinement,
    STATE(548), 1,
      sym_comment,
  [17932] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1102), 1,
      anon_sym_LBRACE,
    ACTIONS(1104), 1,
      sym_indent,
    STATE(549), 1,
      sym_comment,
  [17948] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    STATE(550), 1,
      sym_comment,
    ACTIONS(1106), 2,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
  [17962] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    STATE(551), 1,
      sym_comment,
    ACTIONS(1108), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [17976] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1110), 1,
      anon_sym_LBRACE,
    ACTIONS(1112), 1,
      sym_indent,
    STATE(552), 1,
      sym_comment,
  [17992] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(723), 1,
      anon_sym_EQ_GT,
    ACTIONS(1074), 1,
      anon_sym_EQ_GT_GT,
    STATE(553), 1,
      sym_comment,
  [18008] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    STATE(554), 1,
      sym_comment,
    ACTIONS(1114), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18022] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1117), 1,
      anon_sym_DOT,
    STATE(153), 1,
      aux_sym_qual_id_repeat1,
    STATE(555), 1,
      sym_comment,
  [18038] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    STATE(556), 1,
      sym_comment,
    ACTIONS(1119), 2,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
  [18052] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    STATE(557), 1,
      sym_comment,
    ACTIONS(1042), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18066] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    STATE(558), 1,
      sym_comment,
    ACTIONS(1121), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18080] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(719), 1,
      anon_sym_EQ_GT,
    ACTIONS(1018), 1,
      anon_sym_EQ_GT_GT,
    STATE(559), 1,
      sym_comment,
  [18096] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1123), 1,
      anon_sym_LBRACE,
    STATE(245), 1,
      sym_refinement,
    STATE(560), 1,
      sym_comment,
  [18112] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1125), 1,
      anon_sym_DOT,
    STATE(68), 1,
      aux_sym_qual_id_repeat1,
    STATE(561), 1,
      sym_comment,
  [18128] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    STATE(562), 1,
      sym_comment,
    ACTIONS(1127), 2,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
  [18142] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    STATE(563), 1,
      sym_comment,
    ACTIONS(1129), 2,
      anon_sym_EQ_GT,
      anon_sym_QMARK_EQ_GT,
  [18156] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1131), 1,
      anon_sym_DOT,
    STATE(65), 1,
      aux_sym_qual_id_repeat1,
    STATE(564), 1,
      sym_comment,
  [18172] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1006), 1,
      anon_sym_EQ_GT_GT,
    ACTIONS(1008), 1,
      anon_sym_EQ_GT,
    STATE(565), 1,
      sym_comment,
  [18188] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1133), 1,
      anon_sym_LBRACE,
    STATE(259), 1,
      sym_refinement,
    STATE(566), 1,
      sym_comment,
  [18204] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(983), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1135), 1,
      anon_sym_DQUOTE,
    STATE(567), 1,
      sym_comment,
  [18220] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1137), 1,
      anon_sym_LBRACE,
    STATE(258), 1,
      sym_refinement,
    STATE(568), 1,
      sym_comment,
  [18236] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(981), 1,
      anon_sym_DQUOTE,
    ACTIONS(1139), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(569), 1,
      sym_comment,
  [18252] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1141), 1,
      anon_sym_COLON,
    STATE(570), 1,
      sym_comment,
  [18265] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1143), 1,
      aux_sym_decimal_numeral_token1,
    STATE(571), 1,
      sym_comment,
  [18278] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1145), 1,
      aux_sym_decimal_numeral_token1,
    STATE(572), 1,
      sym_comment,
  [18291] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1147), 1,
      aux_sym_decimal_numeral_token1,
    STATE(573), 1,
      sym_comment,
  [18304] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1149), 1,
      anon_sym_RPAREN,
    STATE(574), 1,
      sym_comment,
  [18317] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1151), 1,
      anon_sym_RPAREN,
    STATE(575), 1,
      sym_comment,
  [18330] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1153), 1,
      anon_sym_RPAREN,
    STATE(576), 1,
      sym_comment,
  [18343] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1155), 1,
      aux_sym_plainid_token3,
    STATE(577), 1,
      sym_comment,
  [18356] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1157), 1,
      aux_sym_plainid_token3,
    STATE(578), 1,
      sym_comment,
  [18369] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1159), 1,
      aux_sym_decimal_numeral_token1,
    STATE(579), 1,
      sym_comment,
  [18382] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1161), 1,
      aux_sym_hex_numeral_token2,
    STATE(580), 1,
      sym_comment,
  [18395] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1163), 1,
      aux_sym_decimal_numeral_token1,
    STATE(581), 1,
      sym_comment,
  [18408] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1165), 1,
      aux_sym_decimal_numeral_token1,
    STATE(582), 1,
      sym_comment,
  [18421] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1167), 1,
      anon_sym_SQUOTE,
    STATE(583), 1,
      sym_comment,
  [18434] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1169), 1,
      anon_sym_SQUOTE,
    STATE(584), 1,
      sym_comment,
  [18447] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1171), 1,
      anon_sym_RPAREN,
    STATE(585), 1,
      sym_comment,
  [18460] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1173), 1,
      aux_sym_decimal_numeral_token1,
    STATE(586), 1,
      sym_comment,
  [18473] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1175), 1,
      anon_sym_RBRACK,
    STATE(587), 1,
      sym_comment,
  [18486] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1177), 1,
      aux_sym_decimal_numeral_token1,
    STATE(588), 1,
      sym_comment,
  [18499] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1179), 1,
      aux_sym_decimal_numeral_token1,
    STATE(589), 1,
      sym_comment,
  [18512] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1181), 1,
      aux_sym_decimal_numeral_token1,
    STATE(590), 1,
      sym_comment,
  [18525] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1183), 1,
      anon_sym_RBRACE,
    STATE(591), 1,
      sym_comment,
  [18538] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1183), 1,
      sym_outdent,
    STATE(592), 1,
      sym_comment,
  [18551] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1185), 1,
      anon_sym_SQUOTE,
    STATE(593), 1,
      sym_comment,
  [18564] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1187), 1,
      aux_sym_decimal_numeral_token1,
    STATE(594), 1,
      sym_comment,
  [18577] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1189), 1,
      aux_sym_hex_numeral_token2,
    STATE(595), 1,
      sym_comment,
  [18590] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1191), 1,
      aux_sym_decimal_numeral_token1,
    STATE(596), 1,
      sym_comment,
  [18603] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1193), 1,
      aux_sym_decimal_numeral_token1,
    STATE(597), 1,
      sym_comment,
  [18616] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1195), 1,
      anon_sym_STAR_SLASH,
    STATE(598), 1,
      sym_comment,
  [18629] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1197), 1,
      aux_sym_decimal_numeral_token1,
    STATE(599), 1,
      sym_comment,
  [18642] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1199), 1,
      aux_sym_decimal_numeral_token1,
    STATE(600), 1,
      sym_comment,
  [18655] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1201), 1,
      anon_sym_RBRACK,
    STATE(601), 1,
      sym_comment,
  [18668] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1203), 1,
      aux_sym_decimal_numeral_token1,
    STATE(602), 1,
      sym_comment,
  [18681] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1205), 1,
      aux_sym_decimal_numeral_token1,
    STATE(603), 1,
      sym_comment,
  [18694] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1207), 1,
      aux_sym_decimal_numeral_token1,
    STATE(604), 1,
      sym_comment,
  [18707] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1209), 1,
      aux_sym_decimal_numeral_token1,
    STATE(605), 1,
      sym_comment,
  [18720] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1211), 1,
      aux_sym_decimal_numeral_token1,
    STATE(606), 1,
      sym_comment,
  [18733] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1213), 1,
      aux_sym_decimal_numeral_token1,
    STATE(607), 1,
      sym_comment,
  [18746] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1215), 1,
      aux_sym_decimal_numeral_token1,
    STATE(608), 1,
      sym_comment,
  [18759] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1217), 1,
      aux_sym_decimal_numeral_token1,
    STATE(609), 1,
      sym_comment,
  [18772] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1219), 1,
      sym_outdent,
    STATE(610), 1,
      sym_comment,
  [18785] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1219), 1,
      anon_sym_RBRACE,
    STATE(611), 1,
      sym_comment,
  [18798] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1221), 1,
      aux_sym_decimal_numeral_token1,
    STATE(612), 1,
      sym_comment,
  [18811] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1223), 1,
      aux_sym_plainid_token3,
    STATE(613), 1,
      sym_comment,
  [18824] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1225), 1,
      aux_sym_decimal_numeral_token1,
    STATE(614), 1,
      sym_comment,
  [18837] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1227), 1,
      aux_sym_decimal_numeral_token1,
    STATE(615), 1,
      sym_comment,
  [18850] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1229), 1,
      anon_sym_RBRACK,
    STATE(616), 1,
      sym_comment,
  [18863] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1231), 1,
      anon_sym_SQUOTE,
    STATE(617), 1,
      sym_comment,
  [18876] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1233), 1,
      anon_sym_RPAREN,
    STATE(618), 1,
      sym_comment,
  [18889] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1235), 1,
      aux_sym_decimal_numeral_token1,
    STATE(619), 1,
      sym_comment,
  [18902] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1237), 1,
      aux_sym_hex_numeral_token2,
    STATE(620), 1,
      sym_comment,
  [18915] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1239), 1,
      aux_sym_decimal_numeral_token1,
    STATE(621), 1,
      sym_comment,
  [18928] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1241), 1,
      aux_sym_decimal_numeral_token1,
    STATE(622), 1,
      sym_comment,
  [18941] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1243), 1,
      anon_sym_RPAREN,
    STATE(623), 1,
      sym_comment,
  [18954] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1245), 1,
      anon_sym_LF,
    STATE(624), 1,
      sym_comment,
  [18967] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1247), 1,
      anon_sym_SQUOTE,
    STATE(625), 1,
      sym_comment,
  [18980] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1249), 1,
      aux_sym_decimal_numeral_token1,
    STATE(626), 1,
      sym_comment,
  [18993] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1251), 1,
      aux_sym_hex_numeral_token2,
    STATE(627), 1,
      sym_comment,
  [19006] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1253), 1,
      aux_sym_decimal_numeral_token1,
    STATE(628), 1,
      sym_comment,
  [19019] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1255), 1,
      aux_sym_plainid_token3,
    STATE(629), 1,
      sym_comment,
  [19032] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1257), 1,
      ts_builtin_sym_end,
    STATE(630), 1,
      sym_comment,
  [19045] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1259), 1,
      aux_sym_decimal_numeral_token1,
    STATE(631), 1,
      sym_comment,
  [19058] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1261), 1,
      aux_sym_hex_numeral_token1,
    STATE(632), 1,
      sym_comment,
  [19071] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1263), 1,
      anon_sym_RBRACK,
    STATE(633), 1,
      sym_comment,
  [19084] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1265), 1,
      aux_sym_decimal_numeral_token1,
    STATE(634), 1,
      sym_comment,
  [19097] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1267), 1,
      aux_sym_decimal_numeral_token1,
    STATE(635), 1,
      sym_comment,
  [19110] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1269), 1,
      aux_sym_floating_point_literal_token1,
    STATE(636), 1,
      sym_comment,
  [19123] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1271), 1,
      aux_sym_decimal_numeral_token1,
    STATE(637), 1,
      sym_comment,
  [19136] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1273), 1,
      aux_sym_decimal_numeral_token1,
    STATE(638), 1,
      sym_comment,
  [19149] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1275), 1,
      aux_sym_decimal_numeral_token1,
    STATE(639), 1,
      sym_comment,
  [19162] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1277), 1,
      aux_sym_decimal_numeral_token1,
    STATE(640), 1,
      sym_comment,
  [19175] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1279), 1,
      aux_sym_exponent_part_token2,
    STATE(641), 1,
      sym_comment,
  [19188] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1281), 1,
      aux_sym_plainid_token3,
    STATE(642), 1,
      sym_comment,
  [19201] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1283), 1,
      ts_builtin_sym_end,
    STATE(643), 1,
      sym_comment,
  [19214] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    STATE(644), 1,
      sym_comment,
  [19227] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1285), 1,
      aux_sym_plainid_token3,
    STATE(645), 1,
      sym_comment,
  [19240] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(799), 1,
      anon_sym_LF,
    STATE(646), 1,
      sym_comment,
  [19253] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1287), 1,
      anon_sym_COLON,
    STATE(647), 1,
      sym_comment,
  [19266] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1289), 1,
      aux_sym_plainid_token3,
    STATE(648), 1,
      sym_comment,
  [19279] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1291), 1,
      anon_sym_COLON,
    STATE(649), 1,
      sym_comment,
  [19292] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1293), 1,
      aux_sym_hex_numeral_token2,
    STATE(650), 1,
      sym_comment,
  [19305] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1295), 1,
      aux_sym_plainid_token3,
    STATE(651), 1,
      sym_comment,
  [19318] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1297), 1,
      aux_sym_decimal_numeral_token1,
    STATE(652), 1,
      sym_comment,
  [19331] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1299), 1,
      aux_sym_floating_point_literal_token1,
    STATE(653), 1,
      sym_comment,
  [19344] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1301), 1,
      aux_sym_plainid_token3,
    STATE(654), 1,
      sym_comment,
  [19357] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1303), 1,
      aux_sym_floating_point_literal_token1,
    STATE(655), 1,
      sym_comment,
  [19370] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1305), 1,
      aux_sym_exponent_part_token2,
    STATE(656), 1,
      sym_comment,
  [19383] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1307), 1,
      aux_sym_plainid_token3,
    STATE(657), 1,
      sym_comment,
  [19396] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1309), 1,
      aux_sym_string_literal_token1,
    STATE(658), 1,
      sym_comment,
  [19409] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1012), 1,
      anon_sym_LF,
    STATE(659), 1,
      sym_comment,
  [19422] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1311), 1,
      aux_sym_plainid_token3,
    STATE(660), 1,
      sym_comment,
  [19435] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1012), 1,
      anon_sym_LF,
    STATE(661), 1,
      sym_comment,
  [19448] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1313), 1,
      anon_sym_RBRACK,
    STATE(662), 1,
      sym_comment,
  [19461] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1315), 1,
      aux_sym_plainid_token3,
    STATE(663), 1,
      sym_comment,
  [19474] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1038), 1,
      anon_sym_LF,
    STATE(664), 1,
      sym_comment,
  [19487] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1317), 1,
      anon_sym_COLON,
    STATE(665), 1,
      sym_comment,
  [19500] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1319), 1,
      aux_sym_exponent_part_token2,
    STATE(666), 1,
      sym_comment,
  [19513] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1321), 1,
      aux_sym_floating_point_literal_token1,
    STATE(667), 1,
      sym_comment,
  [19526] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1323), 1,
      anon_sym_RPAREN,
    STATE(668), 1,
      sym_comment,
  [19539] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1325), 1,
      aux_sym_hex_numeral_token1,
    STATE(669), 1,
      sym_comment,
  [19552] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1327), 1,
      aux_sym_floating_point_literal_token1,
    STATE(670), 1,
      sym_comment,
  [19565] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1329), 1,
      aux_sym_decimal_numeral_token1,
    STATE(671), 1,
      sym_comment,
  [19578] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1331), 1,
      aux_sym_floating_point_literal_token1,
    STATE(672), 1,
      sym_comment,
  [19591] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1333), 1,
      aux_sym_floating_point_literal_token1,
    STATE(673), 1,
      sym_comment,
  [19604] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1335), 1,
      aux_sym_decimal_numeral_token1,
    STATE(674), 1,
      sym_comment,
  [19617] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1337), 1,
      aux_sym_floating_point_literal_token1,
    STATE(675), 1,
      sym_comment,
  [19630] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1339), 1,
      aux_sym_floating_point_literal_token1,
    STATE(676), 1,
      sym_comment,
  [19643] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1341), 1,
      aux_sym_floating_point_literal_token1,
    STATE(677), 1,
      sym_comment,
  [19656] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1343), 1,
      anon_sym_EQ_GT,
    STATE(678), 1,
      sym_comment,
  [19669] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1345), 1,
      aux_sym_floating_point_literal_token1,
    STATE(679), 1,
      sym_comment,
  [19682] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1347), 1,
      aux_sym_floating_point_literal_token1,
    STATE(680), 1,
      sym_comment,
  [19695] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1349), 1,
      aux_sym_decimal_numeral_token1,
    STATE(681), 1,
      sym_comment,
  [19708] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1351), 1,
      anon_sym_RBRACE,
    STATE(682), 1,
      sym_comment,
  [19721] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1353), 1,
      aux_sym_plainid_token3,
    STATE(683), 1,
      sym_comment,
  [19734] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1355), 1,
      aux_sym_floating_point_literal_token1,
    STATE(684), 1,
      sym_comment,
  [19747] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1357), 1,
      anon_sym_RPAREN,
    STATE(685), 1,
      sym_comment,
  [19760] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1359), 1,
      aux_sym_hex_numeral_token1,
    STATE(686), 1,
      sym_comment,
  [19773] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1361), 1,
      aux_sym_floating_point_literal_token1,
    STATE(687), 1,
      sym_comment,
  [19786] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1363), 1,
      aux_sym_floating_point_literal_token1,
    STATE(688), 1,
      sym_comment,
  [19799] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1365), 1,
      aux_sym_floating_point_literal_token1,
    STATE(689), 1,
      sym_comment,
  [19812] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1367), 1,
      aux_sym_floating_point_literal_token1,
    STATE(690), 1,
      sym_comment,
  [19825] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1351), 1,
      sym_outdent,
    STATE(691), 1,
      sym_comment,
  [19838] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1057), 1,
      anon_sym_LF,
    STATE(692), 1,
      sym_comment,
  [19851] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1369), 1,
      aux_sym_floating_point_literal_token1,
    STATE(693), 1,
      sym_comment,
  [19864] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1371), 1,
      aux_sym_floating_point_literal_token1,
    STATE(694), 1,
      sym_comment,
  [19877] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1373), 1,
      aux_sym_floating_point_literal_token1,
    STATE(695), 1,
      sym_comment,
  [19890] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1375), 1,
      aux_sym_floating_point_literal_token1,
    STATE(696), 1,
      sym_comment,
  [19903] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1377), 1,
      aux_sym_floating_point_literal_token1,
    STATE(697), 1,
      sym_comment,
  [19916] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1379), 1,
      aux_sym_exponent_part_token2,
    STATE(698), 1,
      sym_comment,
  [19929] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1381), 1,
      aux_sym_floating_point_literal_token1,
    STATE(699), 1,
      sym_comment,
  [19942] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1383), 1,
      anon_sym_RPAREN,
    STATE(700), 1,
      sym_comment,
  [19955] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1385), 1,
      aux_sym_hex_numeral_token1,
    STATE(701), 1,
      sym_comment,
  [19968] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1387), 1,
      aux_sym_floating_point_literal_token1,
    STATE(702), 1,
      sym_comment,
  [19981] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1389), 1,
      aux_sym_decimal_numeral_token1,
    STATE(703), 1,
      sym_comment,
  [19994] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1391), 1,
      aux_sym_floating_point_literal_token1,
    STATE(704), 1,
      sym_comment,
  [20007] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1393), 1,
      aux_sym_floating_point_literal_token1,
    STATE(705), 1,
      sym_comment,
  [20020] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1395), 1,
      aux_sym_floating_point_literal_token1,
    STATE(706), 1,
      sym_comment,
  [20033] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1397), 1,
      aux_sym_floating_point_literal_token1,
    STATE(707), 1,
      sym_comment,
  [20046] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1399), 1,
      aux_sym_floating_point_literal_token1,
    STATE(708), 1,
      sym_comment,
  [20059] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1401), 1,
      aux_sym_floating_point_literal_token1,
    STATE(709), 1,
      sym_comment,
  [20072] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1403), 1,
      anon_sym_EQ_GT,
    STATE(710), 1,
      sym_comment,
  [20085] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1405), 1,
      aux_sym_floating_point_literal_token1,
    STATE(711), 1,
      sym_comment,
  [20098] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1407), 1,
      aux_sym_hex_numeral_token1,
    STATE(712), 1,
      sym_comment,
  [20111] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1409), 1,
      aux_sym_floating_point_literal_token1,
    STATE(713), 1,
      sym_comment,
  [20124] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1059), 1,
      anon_sym_LF,
    STATE(714), 1,
      sym_comment,
  [20137] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1411), 1,
      aux_sym_floating_point_literal_token1,
    STATE(715), 1,
      sym_comment,
  [20150] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1413), 1,
      aux_sym_floating_point_literal_token1,
    STATE(716), 1,
      sym_comment,
  [20163] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1415), 1,
      aux_sym_floating_point_literal_token1,
    STATE(717), 1,
      sym_comment,
  [20176] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1417), 1,
      aux_sym_floating_point_literal_token1,
    STATE(718), 1,
      sym_comment,
  [20189] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1419), 1,
      aux_sym_floating_point_literal_token1,
    STATE(719), 1,
      sym_comment,
  [20202] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1421), 1,
      aux_sym_floating_point_literal_token1,
    STATE(720), 1,
      sym_comment,
  [20215] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1423), 1,
      aux_sym_exponent_part_token2,
    STATE(721), 1,
      sym_comment,
  [20228] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1425), 1,
      aux_sym_decimal_numeral_token1,
    STATE(722), 1,
      sym_comment,
  [20241] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1427), 1,
      aux_sym_exponent_part_token2,
    STATE(723), 1,
      sym_comment,
  [20254] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1429), 1,
      aux_sym_exponent_part_token2,
    STATE(724), 1,
      sym_comment,
  [20267] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1431), 1,
      aux_sym_comment_token1,
    STATE(725), 1,
      sym_comment,
  [20280] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1433), 1,
      aux_sym_floating_point_literal_token1,
    STATE(726), 1,
      sym_comment,
  [20293] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1435), 1,
      aux_sym_exponent_part_token2,
    STATE(727), 1,
      sym_comment,
  [20306] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1437), 1,
      aux_sym_exponent_part_token2,
    STATE(728), 1,
      sym_comment,
  [20319] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1439), 1,
      aux_sym_exponent_part_token2,
    STATE(729), 1,
      sym_comment,
  [20332] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1441), 1,
      aux_sym_decimal_numeral_token1,
    STATE(730), 1,
      sym_comment,
  [20345] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1443), 1,
      aux_sym_exponent_part_token2,
    STATE(731), 1,
      sym_comment,
  [20358] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1445), 1,
      aux_sym_floating_point_literal_token1,
    STATE(732), 1,
      sym_comment,
  [20371] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1447), 1,
      aux_sym_exponent_part_token2,
    STATE(733), 1,
      sym_comment,
  [20384] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1449), 1,
      aux_sym_exponent_part_token2,
    STATE(734), 1,
      sym_comment,
  [20397] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1451), 1,
      aux_sym_exponent_part_token2,
    STATE(735), 1,
      sym_comment,
  [20410] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1453), 1,
      aux_sym_exponent_part_token2,
    STATE(736), 1,
      sym_comment,
  [20423] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1455), 1,
      aux_sym_exponent_part_token2,
    STATE(737), 1,
      sym_comment,
  [20436] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1457), 1,
      aux_sym_exponent_part_token2,
    STATE(738), 1,
      sym_comment,
  [20449] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1459), 1,
      aux_sym_exponent_part_token2,
    STATE(739), 1,
      sym_comment,
  [20462] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1461), 1,
      aux_sym_exponent_part_token2,
    STATE(740), 1,
      sym_comment,
  [20475] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1463), 1,
      aux_sym_exponent_part_token2,
    STATE(741), 1,
      sym_comment,
  [20488] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1465), 1,
      aux_sym_exponent_part_token2,
    STATE(742), 1,
      sym_comment,
  [20501] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1467), 1,
      aux_sym_exponent_part_token2,
    STATE(743), 1,
      sym_comment,
  [20514] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1469), 1,
      aux_sym_exponent_part_token2,
    STATE(744), 1,
      sym_comment,
  [20527] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1471), 1,
      aux_sym_exponent_part_token2,
    STATE(745), 1,
      sym_comment,
  [20540] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1473), 1,
      aux_sym_exponent_part_token2,
    STATE(746), 1,
      sym_comment,
  [20553] = 1,
    ACTIONS(1475), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 119,
  [SMALL_STATE(4)] = 238,
  [SMALL_STATE(5)] = 357,
  [SMALL_STATE(6)] = 476,
  [SMALL_STATE(7)] = 583,
  [SMALL_STATE(8)] = 690,
  [SMALL_STATE(9)] = 797,
  [SMALL_STATE(10)] = 904,
  [SMALL_STATE(11)] = 1011,
  [SMALL_STATE(12)] = 1118,
  [SMALL_STATE(13)] = 1225,
  [SMALL_STATE(14)] = 1332,
  [SMALL_STATE(15)] = 1439,
  [SMALL_STATE(16)] = 1546,
  [SMALL_STATE(17)] = 1653,
  [SMALL_STATE(18)] = 1760,
  [SMALL_STATE(19)] = 1864,
  [SMALL_STATE(20)] = 1968,
  [SMALL_STATE(21)] = 2072,
  [SMALL_STATE(22)] = 2176,
  [SMALL_STATE(23)] = 2280,
  [SMALL_STATE(24)] = 2384,
  [SMALL_STATE(25)] = 2488,
  [SMALL_STATE(26)] = 2592,
  [SMALL_STATE(27)] = 2696,
  [SMALL_STATE(28)] = 2800,
  [SMALL_STATE(29)] = 2904,
  [SMALL_STATE(30)] = 3008,
  [SMALL_STATE(31)] = 3112,
  [SMALL_STATE(32)] = 3216,
  [SMALL_STATE(33)] = 3320,
  [SMALL_STATE(34)] = 3424,
  [SMALL_STATE(35)] = 3528,
  [SMALL_STATE(36)] = 3632,
  [SMALL_STATE(37)] = 3736,
  [SMALL_STATE(38)] = 3840,
  [SMALL_STATE(39)] = 3944,
  [SMALL_STATE(40)] = 4048,
  [SMALL_STATE(41)] = 4142,
  [SMALL_STATE(42)] = 4236,
  [SMALL_STATE(43)] = 4330,
  [SMALL_STATE(44)] = 4424,
  [SMALL_STATE(45)] = 4518,
  [SMALL_STATE(46)] = 4611,
  [SMALL_STATE(47)] = 4704,
  [SMALL_STATE(48)] = 4793,
  [SMALL_STATE(49)] = 4882,
  [SMALL_STATE(50)] = 4971,
  [SMALL_STATE(51)] = 5060,
  [SMALL_STATE(52)] = 5149,
  [SMALL_STATE(53)] = 5185,
  [SMALL_STATE(54)] = 5221,
  [SMALL_STATE(55)] = 5257,
  [SMALL_STATE(56)] = 5301,
  [SMALL_STATE(57)] = 5345,
  [SMALL_STATE(58)] = 5389,
  [SMALL_STATE(59)] = 5425,
  [SMALL_STATE(60)] = 5465,
  [SMALL_STATE(61)] = 5505,
  [SMALL_STATE(62)] = 5545,
  [SMALL_STATE(63)] = 5586,
  [SMALL_STATE(64)] = 5618,
  [SMALL_STATE(65)] = 5650,
  [SMALL_STATE(66)] = 5684,
  [SMALL_STATE(67)] = 5716,
  [SMALL_STATE(68)] = 5750,
  [SMALL_STATE(69)] = 5784,
  [SMALL_STATE(70)] = 5813,
  [SMALL_STATE(71)] = 5842,
  [SMALL_STATE(72)] = 5875,
  [SMALL_STATE(73)] = 5904,
  [SMALL_STATE(74)] = 5933,
  [SMALL_STATE(75)] = 5962,
  [SMALL_STATE(76)] = 5995,
  [SMALL_STATE(77)] = 6028,
  [SMALL_STATE(78)] = 6057,
  [SMALL_STATE(79)] = 6086,
  [SMALL_STATE(80)] = 6119,
  [SMALL_STATE(81)] = 6154,
  [SMALL_STATE(82)] = 6187,
  [SMALL_STATE(83)] = 6220,
  [SMALL_STATE(84)] = 6249,
  [SMALL_STATE(85)] = 6278,
  [SMALL_STATE(86)] = 6307,
  [SMALL_STATE(87)] = 6338,
  [SMALL_STATE(88)] = 6367,
  [SMALL_STATE(89)] = 6400,
  [SMALL_STATE(90)] = 6431,
  [SMALL_STATE(91)] = 6460,
  [SMALL_STATE(92)] = 6495,
  [SMALL_STATE(93)] = 6532,
  [SMALL_STATE(94)] = 6561,
  [SMALL_STATE(95)] = 6590,
  [SMALL_STATE(96)] = 6625,
  [SMALL_STATE(97)] = 6654,
  [SMALL_STATE(98)] = 6687,
  [SMALL_STATE(99)] = 6718,
  [SMALL_STATE(100)] = 6749,
  [SMALL_STATE(101)] = 6778,
  [SMALL_STATE(102)] = 6809,
  [SMALL_STATE(103)] = 6840,
  [SMALL_STATE(104)] = 6873,
  [SMALL_STATE(105)] = 6912,
  [SMALL_STATE(106)] = 6941,
  [SMALL_STATE(107)] = 6974,
  [SMALL_STATE(108)] = 7003,
  [SMALL_STATE(109)] = 7033,
  [SMALL_STATE(110)] = 7063,
  [SMALL_STATE(111)] = 7093,
  [SMALL_STATE(112)] = 7123,
  [SMALL_STATE(113)] = 7159,
  [SMALL_STATE(114)] = 7189,
  [SMALL_STATE(115)] = 7219,
  [SMALL_STATE(116)] = 7249,
  [SMALL_STATE(117)] = 7279,
  [SMALL_STATE(118)] = 7315,
  [SMALL_STATE(119)] = 7351,
  [SMALL_STATE(120)] = 7389,
  [SMALL_STATE(121)] = 7419,
  [SMALL_STATE(122)] = 7449,
  [SMALL_STATE(123)] = 7479,
  [SMALL_STATE(124)] = 7515,
  [SMALL_STATE(125)] = 7551,
  [SMALL_STATE(126)] = 7581,
  [SMALL_STATE(127)] = 7617,
  [SMALL_STATE(128)] = 7655,
  [SMALL_STATE(129)] = 7685,
  [SMALL_STATE(130)] = 7715,
  [SMALL_STATE(131)] = 7751,
  [SMALL_STATE(132)] = 7781,
  [SMALL_STATE(133)] = 7808,
  [SMALL_STATE(134)] = 7835,
  [SMALL_STATE(135)] = 7862,
  [SMALL_STATE(136)] = 7889,
  [SMALL_STATE(137)] = 7916,
  [SMALL_STATE(138)] = 7943,
  [SMALL_STATE(139)] = 7970,
  [SMALL_STATE(140)] = 7997,
  [SMALL_STATE(141)] = 8024,
  [SMALL_STATE(142)] = 8051,
  [SMALL_STATE(143)] = 8078,
  [SMALL_STATE(144)] = 8105,
  [SMALL_STATE(145)] = 8132,
  [SMALL_STATE(146)] = 8159,
  [SMALL_STATE(147)] = 8186,
  [SMALL_STATE(148)] = 8213,
  [SMALL_STATE(149)] = 8244,
  [SMALL_STATE(150)] = 8271,
  [SMALL_STATE(151)] = 8306,
  [SMALL_STATE(152)] = 8335,
  [SMALL_STATE(153)] = 8364,
  [SMALL_STATE(154)] = 8395,
  [SMALL_STATE(155)] = 8422,
  [SMALL_STATE(156)] = 8449,
  [SMALL_STATE(157)] = 8476,
  [SMALL_STATE(158)] = 8505,
  [SMALL_STATE(159)] = 8536,
  [SMALL_STATE(160)] = 8563,
  [SMALL_STATE(161)] = 8590,
  [SMALL_STATE(162)] = 8617,
  [SMALL_STATE(163)] = 8644,
  [SMALL_STATE(164)] = 8671,
  [SMALL_STATE(165)] = 8698,
  [SMALL_STATE(166)] = 8725,
  [SMALL_STATE(167)] = 8756,
  [SMALL_STATE(168)] = 8783,
  [SMALL_STATE(169)] = 8814,
  [SMALL_STATE(170)] = 8843,
  [SMALL_STATE(171)] = 8870,
  [SMALL_STATE(172)] = 8897,
  [SMALL_STATE(173)] = 8924,
  [SMALL_STATE(174)] = 8951,
  [SMALL_STATE(175)] = 8978,
  [SMALL_STATE(176)] = 9007,
  [SMALL_STATE(177)] = 9034,
  [SMALL_STATE(178)] = 9061,
  [SMALL_STATE(179)] = 9088,
  [SMALL_STATE(180)] = 9115,
  [SMALL_STATE(181)] = 9142,
  [SMALL_STATE(182)] = 9173,
  [SMALL_STATE(183)] = 9200,
  [SMALL_STATE(184)] = 9227,
  [SMALL_STATE(185)] = 9254,
  [SMALL_STATE(186)] = 9281,
  [SMALL_STATE(187)] = 9308,
  [SMALL_STATE(188)] = 9335,
  [SMALL_STATE(189)] = 9362,
  [SMALL_STATE(190)] = 9389,
  [SMALL_STATE(191)] = 9420,
  [SMALL_STATE(192)] = 9449,
  [SMALL_STATE(193)] = 9476,
  [SMALL_STATE(194)] = 9503,
  [SMALL_STATE(195)] = 9530,
  [SMALL_STATE(196)] = 9557,
  [SMALL_STATE(197)] = 9584,
  [SMALL_STATE(198)] = 9611,
  [SMALL_STATE(199)] = 9638,
  [SMALL_STATE(200)] = 9667,
  [SMALL_STATE(201)] = 9694,
  [SMALL_STATE(202)] = 9720,
  [SMALL_STATE(203)] = 9746,
  [SMALL_STATE(204)] = 9772,
  [SMALL_STATE(205)] = 9806,
  [SMALL_STATE(206)] = 9832,
  [SMALL_STATE(207)] = 9866,
  [SMALL_STATE(208)] = 9898,
  [SMALL_STATE(209)] = 9924,
  [SMALL_STATE(210)] = 9958,
  [SMALL_STATE(211)] = 9984,
  [SMALL_STATE(212)] = 10020,
  [SMALL_STATE(213)] = 10046,
  [SMALL_STATE(214)] = 10080,
  [SMALL_STATE(215)] = 10110,
  [SMALL_STATE(216)] = 10138,
  [SMALL_STATE(217)] = 10168,
  [SMALL_STATE(218)] = 10198,
  [SMALL_STATE(219)] = 10232,
  [SMALL_STATE(220)] = 10258,
  [SMALL_STATE(221)] = 10284,
  [SMALL_STATE(222)] = 10310,
  [SMALL_STATE(223)] = 10336,
  [SMALL_STATE(224)] = 10364,
  [SMALL_STATE(225)] = 10390,
  [SMALL_STATE(226)] = 10426,
  [SMALL_STATE(227)] = 10452,
  [SMALL_STATE(228)] = 10488,
  [SMALL_STATE(229)] = 10514,
  [SMALL_STATE(230)] = 10540,
  [SMALL_STATE(231)] = 10566,
  [SMALL_STATE(232)] = 10592,
  [SMALL_STATE(233)] = 10618,
  [SMALL_STATE(234)] = 10644,
  [SMALL_STATE(235)] = 10678,
  [SMALL_STATE(236)] = 10704,
  [SMALL_STATE(237)] = 10730,
  [SMALL_STATE(238)] = 10756,
  [SMALL_STATE(239)] = 10782,
  [SMALL_STATE(240)] = 10816,
  [SMALL_STATE(241)] = 10842,
  [SMALL_STATE(242)] = 10878,
  [SMALL_STATE(243)] = 10904,
  [SMALL_STATE(244)] = 10930,
  [SMALL_STATE(245)] = 10957,
  [SMALL_STATE(246)] = 10982,
  [SMALL_STATE(247)] = 11007,
  [SMALL_STATE(248)] = 11032,
  [SMALL_STATE(249)] = 11057,
  [SMALL_STATE(250)] = 11086,
  [SMALL_STATE(251)] = 11121,
  [SMALL_STATE(252)] = 11146,
  [SMALL_STATE(253)] = 11171,
  [SMALL_STATE(254)] = 11206,
  [SMALL_STATE(255)] = 11233,
  [SMALL_STATE(256)] = 11266,
  [SMALL_STATE(257)] = 11291,
  [SMALL_STATE(258)] = 11316,
  [SMALL_STATE(259)] = 11341,
  [SMALL_STATE(260)] = 11366,
  [SMALL_STATE(261)] = 11393,
  [SMALL_STATE(262)] = 11418,
  [SMALL_STATE(263)] = 11443,
  [SMALL_STATE(264)] = 11470,
  [SMALL_STATE(265)] = 11495,
  [SMALL_STATE(266)] = 11520,
  [SMALL_STATE(267)] = 11547,
  [SMALL_STATE(268)] = 11574,
  [SMALL_STATE(269)] = 11599,
  [SMALL_STATE(270)] = 11623,
  [SMALL_STATE(271)] = 11647,
  [SMALL_STATE(272)] = 11671,
  [SMALL_STATE(273)] = 11697,
  [SMALL_STATE(274)] = 11721,
  [SMALL_STATE(275)] = 11745,
  [SMALL_STATE(276)] = 11769,
  [SMALL_STATE(277)] = 11795,
  [SMALL_STATE(278)] = 11819,
  [SMALL_STATE(279)] = 11845,
  [SMALL_STATE(280)] = 11871,
  [SMALL_STATE(281)] = 11895,
  [SMALL_STATE(282)] = 11919,
  [SMALL_STATE(283)] = 11943,
  [SMALL_STATE(284)] = 11967,
  [SMALL_STATE(285)] = 11991,
  [SMALL_STATE(286)] = 12015,
  [SMALL_STATE(287)] = 12039,
  [SMALL_STATE(288)] = 12069,
  [SMALL_STATE(289)] = 12093,
  [SMALL_STATE(290)] = 12117,
  [SMALL_STATE(291)] = 12145,
  [SMALL_STATE(292)] = 12173,
  [SMALL_STATE(293)] = 12197,
  [SMALL_STATE(294)] = 12225,
  [SMALL_STATE(295)] = 12249,
  [SMALL_STATE(296)] = 12287,
  [SMALL_STATE(297)] = 12311,
  [SMALL_STATE(298)] = 12347,
  [SMALL_STATE(299)] = 12371,
  [SMALL_STATE(300)] = 12399,
  [SMALL_STATE(301)] = 12423,
  [SMALL_STATE(302)] = 12447,
  [SMALL_STATE(303)] = 12471,
  [SMALL_STATE(304)] = 12509,
  [SMALL_STATE(305)] = 12533,
  [SMALL_STATE(306)] = 12557,
  [SMALL_STATE(307)] = 12581,
  [SMALL_STATE(308)] = 12609,
  [SMALL_STATE(309)] = 12633,
  [SMALL_STATE(310)] = 12658,
  [SMALL_STATE(311)] = 12681,
  [SMALL_STATE(312)] = 12704,
  [SMALL_STATE(313)] = 12727,
  [SMALL_STATE(314)] = 12750,
  [SMALL_STATE(315)] = 12783,
  [SMALL_STATE(316)] = 12806,
  [SMALL_STATE(317)] = 12831,
  [SMALL_STATE(318)] = 12854,
  [SMALL_STATE(319)] = 12879,
  [SMALL_STATE(320)] = 12902,
  [SMALL_STATE(321)] = 12933,
  [SMALL_STATE(322)] = 12958,
  [SMALL_STATE(323)] = 12991,
  [SMALL_STATE(324)] = 13016,
  [SMALL_STATE(325)] = 13038,
  [SMALL_STATE(326)] = 13064,
  [SMALL_STATE(327)] = 13088,
  [SMALL_STATE(328)] = 13112,
  [SMALL_STATE(329)] = 13134,
  [SMALL_STATE(330)] = 13160,
  [SMALL_STATE(331)] = 13184,
  [SMALL_STATE(332)] = 13206,
  [SMALL_STATE(333)] = 13240,
  [SMALL_STATE(334)] = 13262,
  [SMALL_STATE(335)] = 13284,
  [SMALL_STATE(336)] = 13306,
  [SMALL_STATE(337)] = 13328,
  [SMALL_STATE(338)] = 13350,
  [SMALL_STATE(339)] = 13372,
  [SMALL_STATE(340)] = 13394,
  [SMALL_STATE(341)] = 13418,
  [SMALL_STATE(342)] = 13440,
  [SMALL_STATE(343)] = 13462,
  [SMALL_STATE(344)] = 13484,
  [SMALL_STATE(345)] = 13506,
  [SMALL_STATE(346)] = 13528,
  [SMALL_STATE(347)] = 13550,
  [SMALL_STATE(348)] = 13572,
  [SMALL_STATE(349)] = 13594,
  [SMALL_STATE(350)] = 13628,
  [SMALL_STATE(351)] = 13650,
  [SMALL_STATE(352)] = 13672,
  [SMALL_STATE(353)] = 13694,
  [SMALL_STATE(354)] = 13716,
  [SMALL_STATE(355)] = 13748,
  [SMALL_STATE(356)] = 13770,
  [SMALL_STATE(357)] = 13791,
  [SMALL_STATE(358)] = 13812,
  [SMALL_STATE(359)] = 13833,
  [SMALL_STATE(360)] = 13854,
  [SMALL_STATE(361)] = 13875,
  [SMALL_STATE(362)] = 13896,
  [SMALL_STATE(363)] = 13921,
  [SMALL_STATE(364)] = 13942,
  [SMALL_STATE(365)] = 13962,
  [SMALL_STATE(366)] = 13994,
  [SMALL_STATE(367)] = 14026,
  [SMALL_STATE(368)] = 14046,
  [SMALL_STATE(369)] = 14078,
  [SMALL_STATE(370)] = 14110,
  [SMALL_STATE(371)] = 14132,
  [SMALL_STATE(372)] = 14152,
  [SMALL_STATE(373)] = 14180,
  [SMALL_STATE(374)] = 14200,
  [SMALL_STATE(375)] = 14222,
  [SMALL_STATE(376)] = 14242,
  [SMALL_STATE(377)] = 14274,
  [SMALL_STATE(378)] = 14298,
  [SMALL_STATE(379)] = 14322,
  [SMALL_STATE(380)] = 14351,
  [SMALL_STATE(381)] = 14376,
  [SMALL_STATE(382)] = 14401,
  [SMALL_STATE(383)] = 14426,
  [SMALL_STATE(384)] = 14455,
  [SMALL_STATE(385)] = 14484,
  [SMALL_STATE(386)] = 14511,
  [SMALL_STATE(387)] = 14536,
  [SMALL_STATE(388)] = 14561,
  [SMALL_STATE(389)] = 14590,
  [SMALL_STATE(390)] = 14609,
  [SMALL_STATE(391)] = 14638,
  [SMALL_STATE(392)] = 14667,
  [SMALL_STATE(393)] = 14696,
  [SMALL_STATE(394)] = 14725,
  [SMALL_STATE(395)] = 14754,
  [SMALL_STATE(396)] = 14783,
  [SMALL_STATE(397)] = 14812,
  [SMALL_STATE(398)] = 14837,
  [SMALL_STATE(399)] = 14862,
  [SMALL_STATE(400)] = 14887,
  [SMALL_STATE(401)] = 14912,
  [SMALL_STATE(402)] = 14937,
  [SMALL_STATE(403)] = 14966,
  [SMALL_STATE(404)] = 14995,
  [SMALL_STATE(405)] = 15024,
  [SMALL_STATE(406)] = 15049,
  [SMALL_STATE(407)] = 15072,
  [SMALL_STATE(408)] = 15101,
  [SMALL_STATE(409)] = 15124,
  [SMALL_STATE(410)] = 15153,
  [SMALL_STATE(411)] = 15182,
  [SMALL_STATE(412)] = 15201,
  [SMALL_STATE(413)] = 15224,
  [SMALL_STATE(414)] = 15251,
  [SMALL_STATE(415)] = 15276,
  [SMALL_STATE(416)] = 15294,
  [SMALL_STATE(417)] = 15320,
  [SMALL_STATE(418)] = 15342,
  [SMALL_STATE(419)] = 15360,
  [SMALL_STATE(420)] = 15380,
  [SMALL_STATE(421)] = 15398,
  [SMALL_STATE(422)] = 15416,
  [SMALL_STATE(423)] = 15434,
  [SMALL_STATE(424)] = 15452,
  [SMALL_STATE(425)] = 15475,
  [SMALL_STATE(426)] = 15498,
  [SMALL_STATE(427)] = 15521,
  [SMALL_STATE(428)] = 15544,
  [SMALL_STATE(429)] = 15563,
  [SMALL_STATE(430)] = 15586,
  [SMALL_STATE(431)] = 15611,
  [SMALL_STATE(432)] = 15630,
  [SMALL_STATE(433)] = 15653,
  [SMALL_STATE(434)] = 15678,
  [SMALL_STATE(435)] = 15701,
  [SMALL_STATE(436)] = 15724,
  [SMALL_STATE(437)] = 15749,
  [SMALL_STATE(438)] = 15772,
  [SMALL_STATE(439)] = 15795,
  [SMALL_STATE(440)] = 15818,
  [SMALL_STATE(441)] = 15841,
  [SMALL_STATE(442)] = 15866,
  [SMALL_STATE(443)] = 15889,
  [SMALL_STATE(444)] = 15912,
  [SMALL_STATE(445)] = 15933,
  [SMALL_STATE(446)] = 15956,
  [SMALL_STATE(447)] = 15979,
  [SMALL_STATE(448)] = 16002,
  [SMALL_STATE(449)] = 16027,
  [SMALL_STATE(450)] = 16052,
  [SMALL_STATE(451)] = 16071,
  [SMALL_STATE(452)] = 16096,
  [SMALL_STATE(453)] = 16119,
  [SMALL_STATE(454)] = 16136,
  [SMALL_STATE(455)] = 16161,
  [SMALL_STATE(456)] = 16184,
  [SMALL_STATE(457)] = 16207,
  [SMALL_STATE(458)] = 16230,
  [SMALL_STATE(459)] = 16253,
  [SMALL_STATE(460)] = 16276,
  [SMALL_STATE(461)] = 16299,
  [SMALL_STATE(462)] = 16324,
  [SMALL_STATE(463)] = 16347,
  [SMALL_STATE(464)] = 16370,
  [SMALL_STATE(465)] = 16393,
  [SMALL_STATE(466)] = 16416,
  [SMALL_STATE(467)] = 16439,
  [SMALL_STATE(468)] = 16462,
  [SMALL_STATE(469)] = 16485,
  [SMALL_STATE(470)] = 16508,
  [SMALL_STATE(471)] = 16531,
  [SMALL_STATE(472)] = 16554,
  [SMALL_STATE(473)] = 16577,
  [SMALL_STATE(474)] = 16600,
  [SMALL_STATE(475)] = 16625,
  [SMALL_STATE(476)] = 16647,
  [SMALL_STATE(477)] = 16669,
  [SMALL_STATE(478)] = 16689,
  [SMALL_STATE(479)] = 16709,
  [SMALL_STATE(480)] = 16725,
  [SMALL_STATE(481)] = 16747,
  [SMALL_STATE(482)] = 16767,
  [SMALL_STATE(483)] = 16789,
  [SMALL_STATE(484)] = 16809,
  [SMALL_STATE(485)] = 16831,
  [SMALL_STATE(486)] = 16849,
  [SMALL_STATE(487)] = 16867,
  [SMALL_STATE(488)] = 16887,
  [SMALL_STATE(489)] = 16907,
  [SMALL_STATE(490)] = 16924,
  [SMALL_STATE(491)] = 16941,
  [SMALL_STATE(492)] = 16960,
  [SMALL_STATE(493)] = 16975,
  [SMALL_STATE(494)] = 16994,
  [SMALL_STATE(495)] = 17009,
  [SMALL_STATE(496)] = 17024,
  [SMALL_STATE(497)] = 17041,
  [SMALL_STATE(498)] = 17060,
  [SMALL_STATE(499)] = 17079,
  [SMALL_STATE(500)] = 17096,
  [SMALL_STATE(501)] = 17113,
  [SMALL_STATE(502)] = 17132,
  [SMALL_STATE(503)] = 17151,
  [SMALL_STATE(504)] = 17170,
  [SMALL_STATE(505)] = 17189,
  [SMALL_STATE(506)] = 17208,
  [SMALL_STATE(507)] = 17227,
  [SMALL_STATE(508)] = 17242,
  [SMALL_STATE(509)] = 17261,
  [SMALL_STATE(510)] = 17276,
  [SMALL_STATE(511)] = 17291,
  [SMALL_STATE(512)] = 17310,
  [SMALL_STATE(513)] = 17325,
  [SMALL_STATE(514)] = 17344,
  [SMALL_STATE(515)] = 17359,
  [SMALL_STATE(516)] = 17378,
  [SMALL_STATE(517)] = 17397,
  [SMALL_STATE(518)] = 17416,
  [SMALL_STATE(519)] = 17433,
  [SMALL_STATE(520)] = 17448,
  [SMALL_STATE(521)] = 17467,
  [SMALL_STATE(522)] = 17484,
  [SMALL_STATE(523)] = 17503,
  [SMALL_STATE(524)] = 17518,
  [SMALL_STATE(525)] = 17537,
  [SMALL_STATE(526)] = 17554,
  [SMALL_STATE(527)] = 17569,
  [SMALL_STATE(528)] = 17584,
  [SMALL_STATE(529)] = 17601,
  [SMALL_STATE(530)] = 17618,
  [SMALL_STATE(531)] = 17637,
  [SMALL_STATE(532)] = 17656,
  [SMALL_STATE(533)] = 17675,
  [SMALL_STATE(534)] = 17694,
  [SMALL_STATE(535)] = 17713,
  [SMALL_STATE(536)] = 17732,
  [SMALL_STATE(537)] = 17751,
  [SMALL_STATE(538)] = 17766,
  [SMALL_STATE(539)] = 17780,
  [SMALL_STATE(540)] = 17796,
  [SMALL_STATE(541)] = 17812,
  [SMALL_STATE(542)] = 17828,
  [SMALL_STATE(543)] = 17842,
  [SMALL_STATE(544)] = 17858,
  [SMALL_STATE(545)] = 17874,
  [SMALL_STATE(546)] = 17888,
  [SMALL_STATE(547)] = 17902,
  [SMALL_STATE(548)] = 17916,
  [SMALL_STATE(549)] = 17932,
  [SMALL_STATE(550)] = 17948,
  [SMALL_STATE(551)] = 17962,
  [SMALL_STATE(552)] = 17976,
  [SMALL_STATE(553)] = 17992,
  [SMALL_STATE(554)] = 18008,
  [SMALL_STATE(555)] = 18022,
  [SMALL_STATE(556)] = 18038,
  [SMALL_STATE(557)] = 18052,
  [SMALL_STATE(558)] = 18066,
  [SMALL_STATE(559)] = 18080,
  [SMALL_STATE(560)] = 18096,
  [SMALL_STATE(561)] = 18112,
  [SMALL_STATE(562)] = 18128,
  [SMALL_STATE(563)] = 18142,
  [SMALL_STATE(564)] = 18156,
  [SMALL_STATE(565)] = 18172,
  [SMALL_STATE(566)] = 18188,
  [SMALL_STATE(567)] = 18204,
  [SMALL_STATE(568)] = 18220,
  [SMALL_STATE(569)] = 18236,
  [SMALL_STATE(570)] = 18252,
  [SMALL_STATE(571)] = 18265,
  [SMALL_STATE(572)] = 18278,
  [SMALL_STATE(573)] = 18291,
  [SMALL_STATE(574)] = 18304,
  [SMALL_STATE(575)] = 18317,
  [SMALL_STATE(576)] = 18330,
  [SMALL_STATE(577)] = 18343,
  [SMALL_STATE(578)] = 18356,
  [SMALL_STATE(579)] = 18369,
  [SMALL_STATE(580)] = 18382,
  [SMALL_STATE(581)] = 18395,
  [SMALL_STATE(582)] = 18408,
  [SMALL_STATE(583)] = 18421,
  [SMALL_STATE(584)] = 18434,
  [SMALL_STATE(585)] = 18447,
  [SMALL_STATE(586)] = 18460,
  [SMALL_STATE(587)] = 18473,
  [SMALL_STATE(588)] = 18486,
  [SMALL_STATE(589)] = 18499,
  [SMALL_STATE(590)] = 18512,
  [SMALL_STATE(591)] = 18525,
  [SMALL_STATE(592)] = 18538,
  [SMALL_STATE(593)] = 18551,
  [SMALL_STATE(594)] = 18564,
  [SMALL_STATE(595)] = 18577,
  [SMALL_STATE(596)] = 18590,
  [SMALL_STATE(597)] = 18603,
  [SMALL_STATE(598)] = 18616,
  [SMALL_STATE(599)] = 18629,
  [SMALL_STATE(600)] = 18642,
  [SMALL_STATE(601)] = 18655,
  [SMALL_STATE(602)] = 18668,
  [SMALL_STATE(603)] = 18681,
  [SMALL_STATE(604)] = 18694,
  [SMALL_STATE(605)] = 18707,
  [SMALL_STATE(606)] = 18720,
  [SMALL_STATE(607)] = 18733,
  [SMALL_STATE(608)] = 18746,
  [SMALL_STATE(609)] = 18759,
  [SMALL_STATE(610)] = 18772,
  [SMALL_STATE(611)] = 18785,
  [SMALL_STATE(612)] = 18798,
  [SMALL_STATE(613)] = 18811,
  [SMALL_STATE(614)] = 18824,
  [SMALL_STATE(615)] = 18837,
  [SMALL_STATE(616)] = 18850,
  [SMALL_STATE(617)] = 18863,
  [SMALL_STATE(618)] = 18876,
  [SMALL_STATE(619)] = 18889,
  [SMALL_STATE(620)] = 18902,
  [SMALL_STATE(621)] = 18915,
  [SMALL_STATE(622)] = 18928,
  [SMALL_STATE(623)] = 18941,
  [SMALL_STATE(624)] = 18954,
  [SMALL_STATE(625)] = 18967,
  [SMALL_STATE(626)] = 18980,
  [SMALL_STATE(627)] = 18993,
  [SMALL_STATE(628)] = 19006,
  [SMALL_STATE(629)] = 19019,
  [SMALL_STATE(630)] = 19032,
  [SMALL_STATE(631)] = 19045,
  [SMALL_STATE(632)] = 19058,
  [SMALL_STATE(633)] = 19071,
  [SMALL_STATE(634)] = 19084,
  [SMALL_STATE(635)] = 19097,
  [SMALL_STATE(636)] = 19110,
  [SMALL_STATE(637)] = 19123,
  [SMALL_STATE(638)] = 19136,
  [SMALL_STATE(639)] = 19149,
  [SMALL_STATE(640)] = 19162,
  [SMALL_STATE(641)] = 19175,
  [SMALL_STATE(642)] = 19188,
  [SMALL_STATE(643)] = 19201,
  [SMALL_STATE(644)] = 19214,
  [SMALL_STATE(645)] = 19227,
  [SMALL_STATE(646)] = 19240,
  [SMALL_STATE(647)] = 19253,
  [SMALL_STATE(648)] = 19266,
  [SMALL_STATE(649)] = 19279,
  [SMALL_STATE(650)] = 19292,
  [SMALL_STATE(651)] = 19305,
  [SMALL_STATE(652)] = 19318,
  [SMALL_STATE(653)] = 19331,
  [SMALL_STATE(654)] = 19344,
  [SMALL_STATE(655)] = 19357,
  [SMALL_STATE(656)] = 19370,
  [SMALL_STATE(657)] = 19383,
  [SMALL_STATE(658)] = 19396,
  [SMALL_STATE(659)] = 19409,
  [SMALL_STATE(660)] = 19422,
  [SMALL_STATE(661)] = 19435,
  [SMALL_STATE(662)] = 19448,
  [SMALL_STATE(663)] = 19461,
  [SMALL_STATE(664)] = 19474,
  [SMALL_STATE(665)] = 19487,
  [SMALL_STATE(666)] = 19500,
  [SMALL_STATE(667)] = 19513,
  [SMALL_STATE(668)] = 19526,
  [SMALL_STATE(669)] = 19539,
  [SMALL_STATE(670)] = 19552,
  [SMALL_STATE(671)] = 19565,
  [SMALL_STATE(672)] = 19578,
  [SMALL_STATE(673)] = 19591,
  [SMALL_STATE(674)] = 19604,
  [SMALL_STATE(675)] = 19617,
  [SMALL_STATE(676)] = 19630,
  [SMALL_STATE(677)] = 19643,
  [SMALL_STATE(678)] = 19656,
  [SMALL_STATE(679)] = 19669,
  [SMALL_STATE(680)] = 19682,
  [SMALL_STATE(681)] = 19695,
  [SMALL_STATE(682)] = 19708,
  [SMALL_STATE(683)] = 19721,
  [SMALL_STATE(684)] = 19734,
  [SMALL_STATE(685)] = 19747,
  [SMALL_STATE(686)] = 19760,
  [SMALL_STATE(687)] = 19773,
  [SMALL_STATE(688)] = 19786,
  [SMALL_STATE(689)] = 19799,
  [SMALL_STATE(690)] = 19812,
  [SMALL_STATE(691)] = 19825,
  [SMALL_STATE(692)] = 19838,
  [SMALL_STATE(693)] = 19851,
  [SMALL_STATE(694)] = 19864,
  [SMALL_STATE(695)] = 19877,
  [SMALL_STATE(696)] = 19890,
  [SMALL_STATE(697)] = 19903,
  [SMALL_STATE(698)] = 19916,
  [SMALL_STATE(699)] = 19929,
  [SMALL_STATE(700)] = 19942,
  [SMALL_STATE(701)] = 19955,
  [SMALL_STATE(702)] = 19968,
  [SMALL_STATE(703)] = 19981,
  [SMALL_STATE(704)] = 19994,
  [SMALL_STATE(705)] = 20007,
  [SMALL_STATE(706)] = 20020,
  [SMALL_STATE(707)] = 20033,
  [SMALL_STATE(708)] = 20046,
  [SMALL_STATE(709)] = 20059,
  [SMALL_STATE(710)] = 20072,
  [SMALL_STATE(711)] = 20085,
  [SMALL_STATE(712)] = 20098,
  [SMALL_STATE(713)] = 20111,
  [SMALL_STATE(714)] = 20124,
  [SMALL_STATE(715)] = 20137,
  [SMALL_STATE(716)] = 20150,
  [SMALL_STATE(717)] = 20163,
  [SMALL_STATE(718)] = 20176,
  [SMALL_STATE(719)] = 20189,
  [SMALL_STATE(720)] = 20202,
  [SMALL_STATE(721)] = 20215,
  [SMALL_STATE(722)] = 20228,
  [SMALL_STATE(723)] = 20241,
  [SMALL_STATE(724)] = 20254,
  [SMALL_STATE(725)] = 20267,
  [SMALL_STATE(726)] = 20280,
  [SMALL_STATE(727)] = 20293,
  [SMALL_STATE(728)] = 20306,
  [SMALL_STATE(729)] = 20319,
  [SMALL_STATE(730)] = 20332,
  [SMALL_STATE(731)] = 20345,
  [SMALL_STATE(732)] = 20358,
  [SMALL_STATE(733)] = 20371,
  [SMALL_STATE(734)] = 20384,
  [SMALL_STATE(735)] = 20397,
  [SMALL_STATE(736)] = 20410,
  [SMALL_STATE(737)] = 20423,
  [SMALL_STATE(738)] = 20436,
  [SMALL_STATE(739)] = 20449,
  [SMALL_STATE(740)] = 20462,
  [SMALL_STATE(741)] = 20475,
  [SMALL_STATE(742)] = 20488,
  [SMALL_STATE(743)] = 20501,
  [SMALL_STATE(744)] = 20514,
  [SMALL_STATE(745)] = 20527,
  [SMALL_STATE(746)] = 20540,
  [SMALL_STATE(747)] = 20553,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(688),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(683),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(598),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(725),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(711),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(712),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(670),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(701),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(702),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nl, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nl, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(716),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(673),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qual_id_repeat1, 2),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qual_id_repeat1, 2), SHIFT_REPEAT(427),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qual_id_repeat1, 2), SHIFT_REPEAT(438),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_type1, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qual_id_repeat1, 2), SHIFT_REPEAT(458),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_numeral, 4),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 5),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_type, 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_type1, 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__singleton, 1),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(686),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 7),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 8),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 9),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__refined_type_repeat1, 2), SHIFT_REPEAT(644),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__refined_type_repeat1, 2),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__refined_type_repeat1, 2), SHIFT_REPEAT(369),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 6),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__refined_type, 1),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [466] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__refined_type_repeat1, 2), SHIFT_REPEAT(376),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__refined_type, 2),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__refined_type_repeat1, 2), SHIFT_REPEAT(368),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 3),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 10),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 4),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_literal, 3),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annot_type, 2),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qual_id_repeat1, 2), SHIFT_REPEAT(432),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__annot_type_repeat1, 2),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__annot_type_repeat1, 2), SHIFT_REPEAT(224),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [522] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__annot_type_repeat1, 2), SHIFT_REPEAT(201),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 2),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_literal, 2),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annot_type, 1),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [537] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__annot_type_repeat1, 2), SHIFT_REPEAT(220),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_literal, 1),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__annot_type_repeat1, 1),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_type, 2),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__infix_type_repeat1, 2),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__infix_type_repeat1, 2), SHIFT_REPEAT(434),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__infix_type_repeat1, 2), SHIFT_REPEAT(577),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__infix_type_repeat1, 2), SHIFT_REPEAT(52),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_type, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__infix_type, 1),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_args, 3),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__infix_type, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qual_id_repeat1, 2), SHIFT_REPEAT(435),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__refined_type_repeat1, 1),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_refinement, 2),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_refinement, 4),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_refinement, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [616] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__refined_type_repeat1, 2), SHIFT_REPEAT(366),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [625] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__annot_type_repeat1, 2), SHIFT_REPEAT(315),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__infix_type_repeat1, 3),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__infix_type, 1),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__infix_type_repeat1, 2),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__infix_type_repeat1, 2), SHIFT_REPEAT(434),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__infix_type_repeat1, 2), SHIFT_REPEAT(577),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__infix_type, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [672] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__refined_type_repeat1, 2), SHIFT_REPEAT(365),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [679] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__annot_type_repeat1, 2), SHIFT_REPEAT(359),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__infix_type_repeat1, 3),
  [684] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_semi_repeat1, 2), SHIFT_REPEAT(389),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_semi_repeat1, 2),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_case_clause, 4),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_semi, 1),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_semi, 2),
  [767] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(419),
  [770] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(419),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_semi_repeat1, 1),
  [781] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_refinement_repeat1, 2), SHIFT_REPEAT(389),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_refinement_repeat1, 2),
  [786] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_refinement_repeat1, 2), SHIFT_REPEAT(453),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__match_type, 5),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 4),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 5),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [851] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_literal_repeat1, 2), SHIFT_REPEAT(485),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_literal_repeat1, 2),
  [856] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_literal_repeat1, 2), SHIFT_REPEAT(485),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_refinement_repeat1, 1),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(647),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_case_clauses, 2),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_case_clauses, 1),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_case_clauses_repeat1, 2),
  [929] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_case_clauses_repeat1, 2), SHIFT_REPEAT(45),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [934] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(567),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [939] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(492),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__types, 2),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fun_arg_types, 1),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_literal_repeat1, 1),
  [952] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_literal_repeat1, 1),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__types_repeat1, 2),
  [956] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__types_repeat1, 2), SHIFT_REPEAT(36),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__types, 1),
  [961] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_case_clauses_repeat1, 2), SHIFT_REPEAT(46),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [976] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 1),
  [978] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat3, 1), SHIFT(658),
  [981] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat3, 1),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_case_clause, 5),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [999] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat3, 2), SHIFT_REPEAT(569),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat3, 2),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semi, 1),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_case_clauses_repeat1, 1),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fun_arg_types, 3),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fun_arg_types_repeat1, 2),
  [1044] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fun_arg_types_repeat1, 2), SHIFT_REPEAT(15),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_param_clause, 3),
  [1055] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_param_clause, 3),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_type, 5),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_param_clause, 4),
  [1063] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_param_clause, 4),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fun_param_clause_repeat1, 2),
  [1067] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fun_param_clause_repeat1, 2), SHIFT_REPEAT(416),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fun_arg_types, 2),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1080] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 3),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_fun_param, 3),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fun_arg_types_repeat1, 2), REDUCE(aux_sym__types_repeat1, 2),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fun_arg_types_repeat1, 3),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(658),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat3, 1),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1257] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 2),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(747),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
