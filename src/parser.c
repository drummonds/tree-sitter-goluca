#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_comment = 2,
  sym__sp = 3,
  sym_date = 4,
  anon_sym_STAR = 5,
  anon_sym_BANG = 6,
  sym_payee = 7,
  sym_linked_prefix = 8,
  sym_account = 9,
  anon_sym_DASH_GT = 10,
  anon_sym_SLASH_SLASH = 11,
  anon_sym_u2192 = 12,
  anon_sym_GT = 13,
  sym_description = 14,
  sym_amount = 15,
  sym_commodity = 16,
  sym_source_file = 17,
  sym_transaction = 18,
  sym_header = 19,
  sym_flag = 20,
  sym_movement = 21,
  sym_arrow = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_transaction_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [sym__sp] = "_sp",
  [sym_date] = "date",
  [anon_sym_STAR] = "*",
  [anon_sym_BANG] = "!",
  [sym_payee] = "payee",
  [sym_linked_prefix] = "linked_prefix",
  [sym_account] = "account",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_u2192] = "\u2192",
  [anon_sym_GT] = ">",
  [sym_description] = "description",
  [sym_amount] = "amount",
  [sym_commodity] = "commodity",
  [sym_source_file] = "source_file",
  [sym_transaction] = "transaction",
  [sym_header] = "header",
  [sym_flag] = "flag",
  [sym_movement] = "movement",
  [sym_arrow] = "arrow",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_transaction_repeat1] = "transaction_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [sym__sp] = sym__sp,
  [sym_date] = sym_date,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_payee] = sym_payee,
  [sym_linked_prefix] = sym_linked_prefix,
  [sym_account] = sym_account,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_u2192] = anon_sym_u2192,
  [anon_sym_GT] = anon_sym_GT,
  [sym_description] = sym_description,
  [sym_amount] = sym_amount,
  [sym_commodity] = sym_commodity,
  [sym_source_file] = sym_source_file,
  [sym_transaction] = sym_transaction,
  [sym_header] = sym_header,
  [sym_flag] = sym_flag,
  [sym_movement] = sym_movement,
  [sym_arrow] = sym_arrow,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_transaction_repeat1] = aux_sym_transaction_repeat1,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__sp] = {
    .visible = false,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_payee] = {
    .visible = true,
    .named = true,
  },
  [sym_linked_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u2192] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_transaction] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_movement] = {
    .visible = true,
    .named = true,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transaction_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_from = 1,
  field_to = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_from] = "from",
  [field_to] = "to",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_from, 1},
    {field_to, 5},
  [2] =
    {field_from, 2},
    {field_to, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') SKIP(0);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == 0x2192) ADVANCE(35);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == '\r') SKIP(1);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '-') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 19:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(44);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') SKIP(21);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(8);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__sp);
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_linked_prefix);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_u2192);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_description);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_commodity);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(44);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 21},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 21},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__sp] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [sym_linked_prefix] = ACTIONS(1),
    [sym_account] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_u2192] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_description] = ACTIONS(1),
    [sym_amount] = ACTIONS(1),
    [sym_commodity] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(49),
    [sym_transaction] = STATE(3),
    [sym_header] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_date] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(11), 1,
      sym__sp,
    STATE(5), 2,
      sym_movement,
      aux_sym_transaction_repeat1,
    ACTIONS(9), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      sym_date,
  [14] = 5,
    ACTIONS(7), 1,
      sym_date,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_header,
    ACTIONS(15), 2,
      anon_sym_LF,
      sym_comment,
    STATE(4), 2,
      sym_transaction,
      aux_sym_source_file_repeat1,
  [32] = 5,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(22), 1,
      sym_date,
    STATE(12), 1,
      sym_header,
    ACTIONS(19), 2,
      anon_sym_LF,
      sym_comment,
    STATE(4), 2,
      sym_transaction,
      aux_sym_source_file_repeat1,
  [50] = 3,
    ACTIONS(27), 1,
      sym__sp,
    STATE(5), 2,
      sym_movement,
      aux_sym_transaction_repeat1,
    ACTIONS(25), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      sym_date,
  [64] = 2,
    STATE(22), 1,
      sym_arrow,
    ACTIONS(30), 4,
      anon_sym_DASH_GT,
      anon_sym_SLASH_SLASH,
      anon_sym_u2192,
      anon_sym_GT,
  [74] = 1,
    ACTIONS(32), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      sym__sp,
      sym_date,
  [82] = 1,
    ACTIONS(34), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      sym__sp,
      sym_date,
  [90] = 2,
    STATE(24), 1,
      sym_arrow,
    ACTIONS(30), 4,
      anon_sym_DASH_GT,
      anon_sym_SLASH_SLASH,
      anon_sym_u2192,
      anon_sym_GT,
  [100] = 1,
    ACTIONS(36), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      sym__sp,
      sym_date,
  [108] = 1,
    ACTIONS(38), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      sym__sp,
      sym_date,
  [116] = 2,
    ACTIONS(11), 1,
      sym__sp,
    STATE(2), 2,
      sym_movement,
      aux_sym_transaction_repeat1,
  [124] = 2,
    STATE(16), 1,
      sym_flag,
    ACTIONS(40), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [132] = 2,
    ACTIONS(42), 1,
      sym_linked_prefix,
    ACTIONS(44), 1,
      sym_account,
  [139] = 1,
    ACTIONS(46), 2,
      anon_sym_LF,
      sym__sp,
  [144] = 2,
    ACTIONS(48), 1,
      anon_sym_LF,
    ACTIONS(50), 1,
      sym__sp,
  [151] = 2,
    ACTIONS(52), 1,
      sym_description,
    ACTIONS(54), 1,
      sym_amount,
  [158] = 2,
    ACTIONS(56), 1,
      sym_description,
    ACTIONS(58), 1,
      sym_amount,
  [165] = 1,
    ACTIONS(60), 1,
      anon_sym_LF,
  [169] = 1,
    ACTIONS(62), 1,
      sym_account,
  [173] = 1,
    ACTIONS(64), 1,
      sym__sp,
  [177] = 1,
    ACTIONS(66), 1,
      sym__sp,
  [181] = 1,
    ACTIONS(68), 1,
      sym__sp,
  [185] = 1,
    ACTIONS(70), 1,
      sym__sp,
  [189] = 1,
    ACTIONS(72), 1,
      sym_account,
  [193] = 1,
    ACTIONS(74), 1,
      sym_account,
  [197] = 1,
    ACTIONS(76), 1,
      sym__sp,
  [201] = 1,
    ACTIONS(78), 1,
      sym__sp,
  [205] = 1,
    ACTIONS(80), 1,
      sym__sp,
  [209] = 1,
    ACTIONS(82), 1,
      sym__sp,
  [213] = 1,
    ACTIONS(84), 1,
      sym__sp,
  [217] = 1,
    ACTIONS(86), 1,
      sym__sp,
  [221] = 1,
    ACTIONS(88), 1,
      sym__sp,
  [225] = 1,
    ACTIONS(90), 1,
      sym__sp,
  [229] = 1,
    ACTIONS(92), 1,
      sym_amount,
  [233] = 1,
    ACTIONS(94), 1,
      sym_commodity,
  [237] = 1,
    ACTIONS(96), 1,
      sym_amount,
  [241] = 1,
    ACTIONS(98), 1,
      sym_commodity,
  [245] = 1,
    ACTIONS(100), 1,
      sym__sp,
  [249] = 1,
    ACTIONS(102), 1,
      anon_sym_LF,
  [253] = 1,
    ACTIONS(104), 1,
      sym__sp,
  [257] = 1,
    ACTIONS(106), 1,
      sym__sp,
  [261] = 1,
    ACTIONS(108), 1,
      sym_commodity,
  [265] = 1,
    ACTIONS(110), 1,
      sym_payee,
  [269] = 1,
    ACTIONS(112), 1,
      sym_commodity,
  [273] = 1,
    ACTIONS(114), 1,
      sym__sp,
  [277] = 1,
    ACTIONS(116), 1,
      anon_sym_LF,
  [281] = 1,
    ACTIONS(118), 1,
      anon_sym_LF,
  [285] = 1,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
  [289] = 1,
    ACTIONS(122), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 50,
  [SMALL_STATE(6)] = 64,
  [SMALL_STATE(7)] = 74,
  [SMALL_STATE(8)] = 82,
  [SMALL_STATE(9)] = 90,
  [SMALL_STATE(10)] = 100,
  [SMALL_STATE(11)] = 108,
  [SMALL_STATE(12)] = 116,
  [SMALL_STATE(13)] = 124,
  [SMALL_STATE(14)] = 132,
  [SMALL_STATE(15)] = 139,
  [SMALL_STATE(16)] = 144,
  [SMALL_STATE(17)] = 151,
  [SMALL_STATE(18)] = 158,
  [SMALL_STATE(19)] = 165,
  [SMALL_STATE(20)] = 169,
  [SMALL_STATE(21)] = 173,
  [SMALL_STATE(22)] = 177,
  [SMALL_STATE(23)] = 181,
  [SMALL_STATE(24)] = 185,
  [SMALL_STATE(25)] = 189,
  [SMALL_STATE(26)] = 193,
  [SMALL_STATE(27)] = 197,
  [SMALL_STATE(28)] = 201,
  [SMALL_STATE(29)] = 205,
  [SMALL_STATE(30)] = 209,
  [SMALL_STATE(31)] = 213,
  [SMALL_STATE(32)] = 217,
  [SMALL_STATE(33)] = 221,
  [SMALL_STATE(34)] = 225,
  [SMALL_STATE(35)] = 229,
  [SMALL_STATE(36)] = 233,
  [SMALL_STATE(37)] = 237,
  [SMALL_STATE(38)] = 241,
  [SMALL_STATE(39)] = 245,
  [SMALL_STATE(40)] = 249,
  [SMALL_STATE(41)] = 253,
  [SMALL_STATE(42)] = 257,
  [SMALL_STATE(43)] = 261,
  [SMALL_STATE(44)] = 265,
  [SMALL_STATE(45)] = 269,
  [SMALL_STATE(46)] = 273,
  [SMALL_STATE(47)] = 277,
  [SMALL_STATE(48)] = 281,
  [SMALL_STATE(49)] = 285,
  [SMALL_STATE(50)] = 289,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 2, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 11, 0, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 13, 0, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 12, 0, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 14, 0, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [120] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_goluca(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
