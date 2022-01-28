#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 4
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 1
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_hello = 1,
  sym_hex_digit = 2,
  anon_sym_BSLASH = 3,
  anon_sym_u = 4,
  sym_upper = 5,
  sym_lower = 6,
  anon_sym_0 = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_SQUOTE_LPAREN = 14,
  anon_sym_BQUOTE = 15,
  anon_sym_SQUOTE = 16,
  anon_sym_DQUOTE = 17,
  anon_sym_DOT = 18,
  anon_sym_SEMI = 19,
  anon_sym_COMMA = 20,
  anon_sym_BANG = 21,
  anon_sym_POUND = 22,
  anon_sym_PERCENT = 23,
  anon_sym_AMP = 24,
  anon_sym_STAR = 25,
  anon_sym_PLUS = 26,
  anon_sym_DASH = 27,
  anon_sym_SLASH = 28,
  anon_sym_COLON = 29,
  anon_sym_LT = 30,
  anon_sym_EQ = 31,
  anon_sym_GT = 32,
  anon_sym_QMARK = 33,
  anon_sym_AT = 34,
  anon_sym_CARET = 35,
  anon_sym_PIPE = 36,
  anon_sym_TILDE = 37,
  sym_char = 38,
  anon_sym_b = 39,
  anon_sym_t = 40,
  anon_sym_n = 41,
  anon_sym_f = 42,
  anon_sym_r = 43,
  anon_sym__ = 44,
  anon_sym_L = 45,
  anon_sym_l = 46,
  anon_sym_x = 47,
  anon_sym_X = 48,
  sym_non_zero_digit = 49,
  anon_sym_E = 50,
  anon_sym_e = 51,
  anon_sym_F = 52,
  anon_sym_D = 53,
  anon_sym_d = 54,
  anon_sym_DOLLAR = 55,
  sym_source_file = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_hello] = "hello",
  [sym_hex_digit] = "hex_digit",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_u] = "u",
  [sym_upper] = "upper",
  [sym_lower] = "lower",
  [anon_sym_0] = "0",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SQUOTE_LPAREN] = "'(",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DOT] = ".",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [anon_sym_BANG] = "!",
  [anon_sym_POUND] = "#",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP] = "&",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_COLON] = ":",
  [anon_sym_LT] = "<",
  [anon_sym_EQ] = "=",
  [anon_sym_GT] = ">",
  [anon_sym_QMARK] = "\?",
  [anon_sym_AT] = "@",
  [anon_sym_CARET] = "^",
  [anon_sym_PIPE] = "|",
  [anon_sym_TILDE] = "~",
  [sym_char] = "char",
  [anon_sym_b] = "b",
  [anon_sym_t] = "t",
  [anon_sym_n] = "n",
  [anon_sym_f] = "f",
  [anon_sym_r] = "r",
  [anon_sym__] = "_",
  [anon_sym_L] = "L",
  [anon_sym_l] = "l",
  [anon_sym_x] = "x",
  [anon_sym_X] = "X",
  [sym_non_zero_digit] = "non_zero_digit",
  [anon_sym_E] = "E",
  [anon_sym_e] = "e",
  [anon_sym_F] = "F",
  [anon_sym_D] = "D",
  [anon_sym_d] = "d",
  [anon_sym_DOLLAR] = "$",
  [sym_source_file] = "source_file",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_hello] = anon_sym_hello,
  [sym_hex_digit] = sym_hex_digit,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_u] = anon_sym_u,
  [sym_upper] = sym_upper,
  [sym_lower] = sym_lower,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SQUOTE_LPAREN] = anon_sym_SQUOTE_LPAREN,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [sym_char] = sym_char,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_n] = anon_sym_n,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_r] = anon_sym_r,
  [anon_sym__] = anon_sym__,
  [anon_sym_L] = anon_sym_L,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_X] = anon_sym_X,
  [sym_non_zero_digit] = sym_non_zero_digit,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_F] = anon_sym_F,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_source_file] = sym_source_file,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_hello] = {
    .visible = true,
    .named = false,
  },
  [sym_hex_digit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [sym_upper] = {
    .visible = true,
    .named = true,
  },
  [sym_lower] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
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
  [anon_sym_SQUOTE_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_n] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r] = {
    .visible = true,
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
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_X] = {
    .visible = true,
    .named = false,
  },
  [sym_non_zero_digit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_F] = {
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '&') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '0') ADVANCE(13);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == '?') ADVANCE(39);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == 'D') ADVANCE(57);
      if (lookahead == 'E') ADVANCE(54);
      if (lookahead == 'F') ADVANCE(56);
      if (lookahead == 'L') ADVANCE(50);
      if (lookahead == 'X') ADVANCE(53);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead == '^') ADVANCE(41);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == '`') ADVANCE(21);
      if (lookahead == 'b') ADVANCE(44);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == 'x') ADVANCE(52);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '}') ADVANCE(19);
      if (lookahead == '~') ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'C')) ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'h') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_hello);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_hex_digit);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_upper);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_lower);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '(') ADVANCE(20);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_L);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_hex_digit] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [sym_upper] = ACTIONS(1),
    [sym_lower] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SQUOTE_LPAREN] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_n] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_L] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_X] = ACTIONS(1),
    [sym_non_zero_digit] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_F] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [anon_sym_hello] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
  [4] = 1,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 4,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [7] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
