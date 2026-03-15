#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 151
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_comment = 2,
  anon_sym_commodity = 3,
  anon_sym_open = 4,
  anon_sym_option = 5,
  anon_sym_alias = 6,
  anon_sym_customer = 7,
  anon_sym_account = 8,
  anon_sym_max_DASHaggregate_DASHbalance = 9,
  anon_sym_data = 10,
  sym_param_name = 11,
  sym_param_value = 12,
  anon_sym_COLON = 13,
  sym_metadata_key = 14,
  aux_sym_metadata_value_token1 = 15,
  sym__sp = 16,
  anon_sym_T = 17,
  anon_sym_CARET = 18,
  anon_sym_DOLLAR = 19,
  sym_date = 20,
  sym_time = 21,
  sym_fractional = 22,
  anon_sym_Z = 23,
  sym_tz_offset = 24,
  anon_sym_PERCENT = 25,
  anon_sym_STAR = 26,
  anon_sym_BANG = 27,
  sym_linked_prefix = 28,
  sym_account = 29,
  anon_sym_DASH_GT = 30,
  anon_sym_SLASH_SLASH = 31,
  anon_sym_u2192 = 32,
  anon_sym_GT = 33,
  aux_sym_description_token1 = 34,
  sym_amount = 35,
  sym_commodity = 36,
  anon_sym_COMMA = 37,
  sym_option_key = 38,
  sym_alias_name = 39,
  sym_source_file = 40,
  sym_directive = 41,
  sym_commodity_directive = 42,
  sym_open_directive = 43,
  sym_option_directive = 44,
  sym_alias_directive = 45,
  sym_customer_directive = 46,
  sym_customer_property = 47,
  sym_customer_account = 48,
  sym_customer_constraint = 49,
  sym_data_point = 50,
  sym_metadata_line = 51,
  sym_metadata_value = 52,
  sym_transaction = 53,
  sym_header = 54,
  sym_datetime = 55,
  sym_period_anchor = 56,
  sym_timezone = 57,
  sym_knowledge_datetime = 58,
  sym_flag = 59,
  sym_payee = 60,
  sym_movement = 61,
  sym_arrow = 62,
  sym_description = 63,
  sym_commodity_list = 64,
  sym_option_value = 65,
  sym_customer_name = 66,
  aux_sym_source_file_repeat1 = 67,
  aux_sym_commodity_directive_repeat1 = 68,
  aux_sym_customer_directive_repeat1 = 69,
  aux_sym_transaction_repeat1 = 70,
  aux_sym_commodity_list_repeat1 = 71,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [anon_sym_commodity] = "commodity",
  [anon_sym_open] = "open",
  [anon_sym_option] = "option",
  [anon_sym_alias] = "alias",
  [anon_sym_customer] = "customer",
  [anon_sym_account] = "account",
  [anon_sym_max_DASHaggregate_DASHbalance] = "max-aggregate-balance",
  [anon_sym_data] = "data",
  [sym_param_name] = "param_name",
  [sym_param_value] = "param_value",
  [anon_sym_COLON] = ":",
  [sym_metadata_key] = "metadata_key",
  [aux_sym_metadata_value_token1] = "metadata_value_token1",
  [sym__sp] = "_sp",
  [anon_sym_T] = "T",
  [anon_sym_CARET] = "^",
  [anon_sym_DOLLAR] = "$",
  [sym_date] = "date",
  [sym_time] = "time",
  [sym_fractional] = "fractional",
  [anon_sym_Z] = "Z",
  [sym_tz_offset] = "tz_offset",
  [anon_sym_PERCENT] = "%",
  [anon_sym_STAR] = "*",
  [anon_sym_BANG] = "!",
  [sym_linked_prefix] = "linked_prefix",
  [sym_account] = "account",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_u2192] = "\u2192",
  [anon_sym_GT] = ">",
  [aux_sym_description_token1] = "description_token1",
  [sym_amount] = "amount",
  [sym_commodity] = "commodity",
  [anon_sym_COMMA] = ",",
  [sym_option_key] = "option_key",
  [sym_alias_name] = "alias_name",
  [sym_source_file] = "source_file",
  [sym_directive] = "directive",
  [sym_commodity_directive] = "commodity_directive",
  [sym_open_directive] = "open_directive",
  [sym_option_directive] = "option_directive",
  [sym_alias_directive] = "alias_directive",
  [sym_customer_directive] = "customer_directive",
  [sym_customer_property] = "customer_property",
  [sym_customer_account] = "customer_account",
  [sym_customer_constraint] = "customer_constraint",
  [sym_data_point] = "data_point",
  [sym_metadata_line] = "metadata_line",
  [sym_metadata_value] = "metadata_value",
  [sym_transaction] = "transaction",
  [sym_header] = "header",
  [sym_datetime] = "datetime",
  [sym_period_anchor] = "period_anchor",
  [sym_timezone] = "timezone",
  [sym_knowledge_datetime] = "knowledge_datetime",
  [sym_flag] = "flag",
  [sym_payee] = "payee",
  [sym_movement] = "movement",
  [sym_arrow] = "arrow",
  [sym_description] = "description",
  [sym_commodity_list] = "commodity_list",
  [sym_option_value] = "option_value",
  [sym_customer_name] = "customer_name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_commodity_directive_repeat1] = "commodity_directive_repeat1",
  [aux_sym_customer_directive_repeat1] = "customer_directive_repeat1",
  [aux_sym_transaction_repeat1] = "transaction_repeat1",
  [aux_sym_commodity_list_repeat1] = "commodity_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [anon_sym_commodity] = anon_sym_commodity,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_customer] = anon_sym_customer,
  [anon_sym_account] = anon_sym_account,
  [anon_sym_max_DASHaggregate_DASHbalance] = anon_sym_max_DASHaggregate_DASHbalance,
  [anon_sym_data] = anon_sym_data,
  [sym_param_name] = sym_param_name,
  [sym_param_value] = sym_param_value,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_metadata_key] = sym_metadata_key,
  [aux_sym_metadata_value_token1] = aux_sym_metadata_value_token1,
  [sym__sp] = sym__sp,
  [anon_sym_T] = anon_sym_T,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_date] = sym_date,
  [sym_time] = sym_time,
  [sym_fractional] = sym_fractional,
  [anon_sym_Z] = anon_sym_Z,
  [sym_tz_offset] = sym_tz_offset,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_linked_prefix] = sym_linked_prefix,
  [sym_account] = sym_account,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_u2192] = anon_sym_u2192,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_description_token1] = aux_sym_description_token1,
  [sym_amount] = sym_amount,
  [sym_commodity] = sym_commodity,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_option_key] = sym_option_key,
  [sym_alias_name] = sym_alias_name,
  [sym_source_file] = sym_source_file,
  [sym_directive] = sym_directive,
  [sym_commodity_directive] = sym_commodity_directive,
  [sym_open_directive] = sym_open_directive,
  [sym_option_directive] = sym_option_directive,
  [sym_alias_directive] = sym_alias_directive,
  [sym_customer_directive] = sym_customer_directive,
  [sym_customer_property] = sym_customer_property,
  [sym_customer_account] = sym_customer_account,
  [sym_customer_constraint] = sym_customer_constraint,
  [sym_data_point] = sym_data_point,
  [sym_metadata_line] = sym_metadata_line,
  [sym_metadata_value] = sym_metadata_value,
  [sym_transaction] = sym_transaction,
  [sym_header] = sym_header,
  [sym_datetime] = sym_datetime,
  [sym_period_anchor] = sym_period_anchor,
  [sym_timezone] = sym_timezone,
  [sym_knowledge_datetime] = sym_knowledge_datetime,
  [sym_flag] = sym_flag,
  [sym_payee] = sym_payee,
  [sym_movement] = sym_movement,
  [sym_arrow] = sym_arrow,
  [sym_description] = sym_description,
  [sym_commodity_list] = sym_commodity_list,
  [sym_option_value] = sym_option_value,
  [sym_customer_name] = sym_customer_name,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_commodity_directive_repeat1] = aux_sym_commodity_directive_repeat1,
  [aux_sym_customer_directive_repeat1] = aux_sym_customer_directive_repeat1,
  [aux_sym_transaction_repeat1] = aux_sym_transaction_repeat1,
  [aux_sym_commodity_list_repeat1] = aux_sym_commodity_list_repeat1,
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
  [anon_sym_commodity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_customer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_account] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max_DASHaggregate_DASHbalance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [sym_param_name] = {
    .visible = true,
    .named = true,
  },
  [sym_param_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_metadata_key] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_metadata_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__sp] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_T] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym_fractional] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Z] = {
    .visible = true,
    .named = false,
  },
  [sym_tz_offset] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
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
  [aux_sym_description_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_option_key] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_name] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_open_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_option_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_customer_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_customer_property] = {
    .visible = true,
    .named = true,
  },
  [sym_customer_account] = {
    .visible = true,
    .named = true,
  },
  [sym_customer_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_data_point] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata_line] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata_value] = {
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
  [sym_datetime] = {
    .visible = true,
    .named = true,
  },
  [sym_period_anchor] = {
    .visible = true,
    .named = true,
  },
  [sym_timezone] = {
    .visible = true,
    .named = true,
  },
  [sym_knowledge_datetime] = {
    .visible = true,
    .named = true,
  },
  [sym_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_payee] = {
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
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity_list] = {
    .visible = true,
    .named = true,
  },
  [sym_option_value] = {
    .visible = true,
    .named = true,
  },
  [sym_customer_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_customer_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transaction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_list_repeat1] = {
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
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(70);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') SKIP(0);
      if (lookahead == ' ') ADVANCE(176);
      if (lookahead == '!') ADVANCE(194);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '%') ADVANCE(192);
      if (lookahead == '*') ADVANCE(193);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '>') ADVANCE(200);
      if (lookahead == 'T') ADVANCE(178);
      if (lookahead == 'Z') ADVANCE(190);
      if (lookahead == '^') ADVANCE(179);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 0x2192) ADVANCE(199);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Y')) ADVANCE(66);
      END_STATE();
    case 1:
      if (lookahead == '\r') SKIP(1);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'm') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      END_STATE();
    case 2:
      if (lookahead == '\r') SKIP(2);
      if (lookahead == '+') ADVANCE(195);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == '\r') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 4:
      if (lookahead == '\r') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 5:
      if (lookahead == '\r') SKIP(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 6:
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 7:
      if (lookahead == '\r') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 8:
      if (lookahead == '\r') SKIP(8);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(201);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(198);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(56);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(59);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 42:
      if (lookahead == 'y') ADVANCE(73);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 66:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 67:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 69:
      if (eof) ADVANCE(70);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') SKIP(69);
      if (lookahead == ' ') ADVANCE(176);
      if (lookahead == '!') ADVANCE(194);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '%') ADVANCE(192);
      if (lookahead == '*') ADVANCE(193);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == 'T') ADVANCE(177);
      if (lookahead == 'Z') ADVANCE(189);
      if (lookahead == '^') ADVANCE(179);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(72);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_open);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_alias);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_customer);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_customer);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_account);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_account);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_max_DASHaggregate_DASHbalance);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_max_DASHaggregate_DASHbalance);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_data);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_param_name);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_param_value);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_param_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == '-') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == '-') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == '-') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == '-') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'b') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'b') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == 'l') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'c') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'c') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'd') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 't') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'e') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'g') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'g') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'g') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'g') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'g') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'g') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'i') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'i') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'i') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'l') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'm') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'm') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'n') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'n') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'n') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'n') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'o') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'o') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'o') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'o') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'p') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'r') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'r') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 's') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 's') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 't') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 't') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 't') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 't') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 't') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'u') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'u') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'x') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'x') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'y') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_metadata_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_metadata_value_token1);
      if (lookahead == '\r') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_metadata_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__sp);
      if (lookahead == ' ') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_T);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '-') ADVANCE(55);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '-') ADVANCE(58);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_fractional);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_fractional);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_fractional);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_Z);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_tz_offset);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_linked_prefix);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_u2192);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_description_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == ',') ADVANCE(205);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == ':') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == ',') ADVANCE(205);
      if (lookahead == '.') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == ',') ADVANCE(205);
      if (lookahead == '.') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_commodity);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_option_key);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_alias_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 69},
  [2] = {.lex_state = 69},
  [3] = {.lex_state = 69},
  [4] = {.lex_state = 69},
  [5] = {.lex_state = 69},
  [6] = {.lex_state = 69},
  [7] = {.lex_state = 69},
  [8] = {.lex_state = 69},
  [9] = {.lex_state = 69},
  [10] = {.lex_state = 69},
  [11] = {.lex_state = 69},
  [12] = {.lex_state = 69},
  [13] = {.lex_state = 69},
  [14] = {.lex_state = 69},
  [15] = {.lex_state = 69},
  [16] = {.lex_state = 69},
  [17] = {.lex_state = 69},
  [18] = {.lex_state = 69},
  [19] = {.lex_state = 69},
  [20] = {.lex_state = 69},
  [21] = {.lex_state = 69},
  [22] = {.lex_state = 69},
  [23] = {.lex_state = 69},
  [24] = {.lex_state = 69},
  [25] = {.lex_state = 69},
  [26] = {.lex_state = 69},
  [27] = {.lex_state = 69},
  [28] = {.lex_state = 69},
  [29] = {.lex_state = 69},
  [30] = {.lex_state = 69},
  [31] = {.lex_state = 69},
  [32] = {.lex_state = 69},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 69},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 69},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 69},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 69},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_customer] = ACTIONS(1),
    [anon_sym_account] = ACTIONS(1),
    [anon_sym_max_DASHaggregate_DASHbalance] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_metadata_key] = ACTIONS(1),
    [sym__sp] = ACTIONS(1),
    [anon_sym_T] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [sym_fractional] = ACTIONS(1),
    [anon_sym_Z] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [sym_linked_prefix] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_u2192] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym_description_token1] = ACTIONS(1),
    [sym_amount] = ACTIONS(1),
    [sym_commodity] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_option_key] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(129),
    [sym_directive] = STATE(2),
    [sym_commodity_directive] = STATE(30),
    [sym_open_directive] = STATE(30),
    [sym_option_directive] = STATE(30),
    [sym_alias_directive] = STATE(30),
    [sym_customer_directive] = STATE(30),
    [sym_data_point] = STATE(30),
    [sym_transaction] = STATE(2),
    [sym_header] = STATE(41),
    [sym_datetime] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_commodity] = ACTIONS(7),
    [anon_sym_option] = ACTIONS(9),
    [anon_sym_alias] = ACTIONS(11),
    [anon_sym_customer] = ACTIONS(13),
    [sym_date] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(7), 1,
      anon_sym_commodity,
    ACTIONS(9), 1,
      anon_sym_option,
    ACTIONS(11), 1,
      anon_sym_alias,
    ACTIONS(13), 1,
      anon_sym_customer,
    ACTIONS(15), 1,
      sym_date,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(41), 1,
      sym_header,
    STATE(45), 1,
      sym_datetime,
    ACTIONS(19), 2,
      anon_sym_LF,
      sym_comment,
    STATE(3), 3,
      sym_directive,
      sym_transaction,
      aux_sym_source_file_repeat1,
    STATE(30), 6,
      sym_commodity_directive,
      sym_open_directive,
      sym_option_directive,
      sym_alias_directive,
      sym_customer_directive,
      sym_data_point,
  [42] = 11,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 1,
      anon_sym_commodity,
    ACTIONS(29), 1,
      anon_sym_option,
    ACTIONS(32), 1,
      anon_sym_alias,
    ACTIONS(35), 1,
      anon_sym_customer,
    ACTIONS(38), 1,
      sym_date,
    STATE(41), 1,
      sym_header,
    STATE(45), 1,
      sym_datetime,
    ACTIONS(23), 2,
      anon_sym_LF,
      sym_comment,
    STATE(3), 3,
      sym_directive,
      sym_transaction,
      aux_sym_source_file_repeat1,
    STATE(30), 6,
      sym_commodity_directive,
      sym_open_directive,
      sym_option_directive,
      sym_alias_directive,
      sym_customer_directive,
      sym_data_point,
  [84] = 4,
    ACTIONS(43), 1,
      sym__sp,
    STATE(4), 2,
      sym_customer_property,
      aux_sym_customer_directive_repeat1,
    STATE(17), 3,
      sym_customer_account,
      sym_customer_constraint,
      sym_metadata_line,
    ACTIONS(41), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [107] = 4,
    ACTIONS(48), 1,
      sym__sp,
    STATE(4), 2,
      sym_customer_property,
      aux_sym_customer_directive_repeat1,
    STATE(17), 3,
      sym_customer_account,
      sym_customer_constraint,
      sym_metadata_line,
    ACTIONS(46), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [130] = 3,
    ACTIONS(52), 1,
      sym__sp,
    STATE(7), 3,
      sym_metadata_line,
      sym_movement,
      aux_sym_transaction_repeat1,
    ACTIONS(50), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [149] = 3,
    ACTIONS(56), 1,
      sym__sp,
    STATE(7), 3,
      sym_metadata_line,
      sym_movement,
      aux_sym_transaction_repeat1,
    ACTIONS(54), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [168] = 3,
    ACTIONS(61), 1,
      sym__sp,
    STATE(11), 2,
      sym_metadata_line,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(59), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [186] = 3,
    ACTIONS(61), 1,
      sym__sp,
    STATE(13), 2,
      sym_metadata_line,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(63), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [204] = 3,
    ACTIONS(67), 1,
      sym__sp,
    STATE(10), 2,
      sym_metadata_line,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(65), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [222] = 3,
    ACTIONS(61), 1,
      sym__sp,
    STATE(10), 2,
      sym_metadata_line,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(70), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [240] = 3,
    ACTIONS(61), 1,
      sym__sp,
    STATE(15), 2,
      sym_metadata_line,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(72), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [258] = 3,
    ACTIONS(61), 1,
      sym__sp,
    STATE(10), 2,
      sym_metadata_line,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(74), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [276] = 3,
    ACTIONS(61), 1,
      sym__sp,
    STATE(16), 2,
      sym_metadata_line,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(76), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [294] = 3,
    ACTIONS(61), 1,
      sym__sp,
    STATE(10), 2,
      sym_metadata_line,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(78), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [312] = 3,
    ACTIONS(61), 1,
      sym__sp,
    STATE(10), 2,
      sym_metadata_line,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(80), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [330] = 1,
    ACTIONS(82), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym__sp,
      sym_date,
  [342] = 6,
    ACTIONS(88), 1,
      sym_fractional,
    STATE(38), 1,
      sym_timezone,
    STATE(63), 1,
      sym_period_anchor,
    ACTIONS(84), 2,
      sym__sp,
      anon_sym_PERCENT,
    ACTIONS(86), 2,
      anon_sym_CARET,
      anon_sym_DOLLAR,
    ACTIONS(90), 2,
      anon_sym_Z,
      sym_tz_offset,
  [364] = 1,
    ACTIONS(92), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym__sp,
      sym_date,
  [376] = 1,
    ACTIONS(94), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym__sp,
      sym_date,
  [388] = 1,
    ACTIONS(96), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym__sp,
      sym_date,
  [400] = 1,
    ACTIONS(98), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym__sp,
      sym_date,
  [412] = 1,
    ACTIONS(100), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym__sp,
      sym_date,
  [424] = 1,
    ACTIONS(102), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym__sp,
      sym_date,
  [436] = 1,
    ACTIONS(104), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym__sp,
      sym_date,
  [448] = 1,
    ACTIONS(106), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [459] = 1,
    ACTIONS(108), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [470] = 1,
    ACTIONS(110), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [481] = 1,
    ACTIONS(112), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [492] = 1,
    ACTIONS(114), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [503] = 5,
    STATE(36), 1,
      sym_timezone,
    STATE(56), 1,
      sym_period_anchor,
    ACTIONS(86), 2,
      anon_sym_CARET,
      anon_sym_DOLLAR,
    ACTIONS(90), 2,
      anon_sym_Z,
      sym_tz_offset,
    ACTIONS(116), 2,
      sym__sp,
      anon_sym_PERCENT,
  [522] = 5,
    ACTIONS(118), 1,
      anon_sym_commodity,
    ACTIONS(120), 1,
      anon_sym_open,
    ACTIONS(122), 1,
      anon_sym_data,
    STATE(55), 1,
      sym_flag,
    ACTIONS(124), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [539] = 3,
    ACTIONS(48), 1,
      sym__sp,
    STATE(5), 2,
      sym_customer_property,
      aux_sym_customer_directive_repeat1,
    STATE(17), 3,
      sym_customer_account,
      sym_customer_constraint,
      sym_metadata_line,
  [552] = 4,
    ACTIONS(128), 1,
      anon_sym_T,
    STATE(57), 1,
      sym_period_anchor,
    ACTIONS(86), 2,
      anon_sym_CARET,
      anon_sym_DOLLAR,
    ACTIONS(126), 2,
      sym__sp,
      anon_sym_PERCENT,
  [567] = 2,
    STATE(90), 1,
      sym_arrow,
    ACTIONS(130), 4,
      anon_sym_DASH_GT,
      anon_sym_SLASH_SLASH,
      anon_sym_u2192,
      anon_sym_GT,
  [577] = 3,
    STATE(50), 1,
      sym_period_anchor,
    ACTIONS(86), 2,
      anon_sym_CARET,
      anon_sym_DOLLAR,
    ACTIONS(132), 2,
      sym__sp,
      anon_sym_PERCENT,
  [589] = 2,
    STATE(72), 1,
      sym_arrow,
    ACTIONS(130), 4,
      anon_sym_DASH_GT,
      anon_sym_SLASH_SLASH,
      anon_sym_u2192,
      anon_sym_GT,
  [599] = 3,
    STATE(56), 1,
      sym_period_anchor,
    ACTIONS(86), 2,
      anon_sym_CARET,
      anon_sym_DOLLAR,
    ACTIONS(116), 2,
      sym__sp,
      anon_sym_PERCENT,
  [611] = 1,
    ACTIONS(134), 4,
      sym__sp,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [618] = 3,
    ACTIONS(136), 1,
      anon_sym_data,
    STATE(58), 1,
      sym_flag,
    ACTIONS(124), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [629] = 2,
    ACTIONS(52), 1,
      sym__sp,
    STATE(6), 3,
      sym_metadata_line,
      sym_movement,
      aux_sym_transaction_repeat1,
  [638] = 3,
    ACTIONS(138), 1,
      anon_sym_LF,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_commodity_list_repeat1,
  [648] = 3,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    ACTIONS(142), 1,
      anon_sym_LF,
    STATE(42), 1,
      aux_sym_commodity_list_repeat1,
  [658] = 3,
    ACTIONS(144), 1,
      aux_sym_description_token1,
    ACTIONS(146), 1,
      sym_amount,
    STATE(125), 1,
      sym_description,
  [668] = 3,
    ACTIONS(148), 1,
      sym__sp,
    ACTIONS(150), 1,
      anon_sym_PERCENT,
    STATE(93), 1,
      sym_knowledge_datetime,
  [678] = 3,
    ACTIONS(152), 1,
      anon_sym_LF,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_commodity_list_repeat1,
  [688] = 3,
    ACTIONS(144), 1,
      aux_sym_description_token1,
    ACTIONS(157), 1,
      sym_amount,
    STATE(132), 1,
      sym_description,
  [698] = 3,
    ACTIONS(159), 1,
      sym_metadata_key,
    ACTIONS(161), 1,
      sym_linked_prefix,
    ACTIONS(163), 1,
      sym_account,
  [708] = 3,
    ACTIONS(159), 1,
      sym_metadata_key,
    ACTIONS(165), 1,
      anon_sym_account,
    ACTIONS(167), 1,
      anon_sym_max_DASHaggregate_DASHbalance,
  [718] = 1,
    ACTIONS(169), 2,
      sym__sp,
      anon_sym_PERCENT,
  [723] = 2,
    ACTIONS(15), 1,
      sym_date,
    STATE(81), 1,
      sym_datetime,
  [730] = 2,
    ACTIONS(171), 1,
      sym_commodity,
    STATE(107), 1,
      sym_commodity_list,
  [737] = 2,
    ACTIONS(173), 1,
      aux_sym_description_token1,
    STATE(127), 1,
      sym_customer_name,
  [744] = 1,
    ACTIONS(175), 2,
      anon_sym_LF,
      sym__sp,
  [749] = 2,
    ACTIONS(177), 1,
      anon_sym_LF,
    ACTIONS(179), 1,
      sym__sp,
  [756] = 1,
    ACTIONS(132), 2,
      sym__sp,
      anon_sym_PERCENT,
  [761] = 1,
    ACTIONS(181), 2,
      sym__sp,
      anon_sym_PERCENT,
  [766] = 2,
    ACTIONS(183), 1,
      anon_sym_LF,
    ACTIONS(185), 1,
      sym__sp,
  [773] = 2,
    ACTIONS(187), 1,
      aux_sym_metadata_value_token1,
    STATE(135), 1,
      sym_option_value,
  [780] = 2,
    ACTIONS(189), 1,
      aux_sym_metadata_value_token1,
    STATE(89), 1,
      sym_metadata_value,
  [787] = 1,
    ACTIONS(191), 2,
      sym__sp,
      anon_sym_PERCENT,
  [792] = 2,
    ACTIONS(193), 1,
      aux_sym_metadata_value_token1,
    STATE(98), 1,
      sym_payee,
  [799] = 1,
    ACTIONS(116), 2,
      sym__sp,
      anon_sym_PERCENT,
  [804] = 2,
    ACTIONS(195), 1,
      anon_sym_LF,
    ACTIONS(197), 1,
      sym__sp,
  [811] = 1,
    ACTIONS(152), 2,
      anon_sym_LF,
      anon_sym_COMMA,
  [816] = 2,
    ACTIONS(193), 1,
      aux_sym_metadata_value_token1,
    STATE(77), 1,
      sym_payee,
  [823] = 1,
    ACTIONS(199), 1,
      sym_commodity,
  [827] = 1,
    ACTIONS(201), 1,
      sym__sp,
  [831] = 1,
    ACTIONS(203), 1,
      sym__sp,
  [835] = 1,
    ACTIONS(205), 1,
      sym__sp,
  [839] = 1,
    ACTIONS(207), 1,
      sym__sp,
  [843] = 1,
    ACTIONS(209), 1,
      sym__sp,
  [847] = 1,
    ACTIONS(211), 1,
      anon_sym_LF,
  [851] = 1,
    ACTIONS(213), 1,
      sym__sp,
  [855] = 1,
    ACTIONS(215), 1,
      sym__sp,
  [859] = 1,
    ACTIONS(217), 1,
      anon_sym_LF,
  [863] = 1,
    ACTIONS(219), 1,
      anon_sym_LF,
  [867] = 1,
    ACTIONS(221), 1,
      sym_param_name,
  [871] = 1,
    ACTIONS(223), 1,
      sym__sp,
  [875] = 1,
    ACTIONS(225), 1,
      sym__sp,
  [879] = 1,
    ACTIONS(227), 1,
      sym__sp,
  [883] = 1,
    ACTIONS(229), 1,
      sym__sp,
  [887] = 1,
    ACTIONS(231), 1,
      sym__sp,
  [891] = 1,
    ACTIONS(233), 1,
      sym__sp,
  [895] = 1,
    ACTIONS(235), 1,
      sym__sp,
  [899] = 1,
    ACTIONS(237), 1,
      sym_commodity,
  [903] = 1,
    ACTIONS(239), 1,
      sym_account,
  [907] = 1,
    ACTIONS(241), 1,
      anon_sym_LF,
  [911] = 1,
    ACTIONS(243), 1,
      anon_sym_LF,
  [915] = 1,
    ACTIONS(245), 1,
      sym__sp,
  [919] = 1,
    ACTIONS(247), 1,
      sym_account,
  [923] = 1,
    ACTIONS(249), 1,
      sym_option_key,
  [927] = 1,
    ACTIONS(251), 1,
      sym__sp,
  [931] = 1,
    ACTIONS(253), 1,
      sym_alias_name,
  [935] = 1,
    ACTIONS(255), 1,
      sym_param_value,
  [939] = 1,
    ACTIONS(257), 1,
      sym__sp,
  [943] = 1,
    ACTIONS(259), 1,
      sym__sp,
  [947] = 1,
    ACTIONS(261), 1,
      anon_sym_LF,
  [951] = 1,
    ACTIONS(263), 1,
      sym_account,
  [955] = 1,
    ACTIONS(265), 1,
      sym_amount,
  [959] = 1,
    ACTIONS(267), 1,
      anon_sym_LF,
  [963] = 1,
    ACTIONS(269), 1,
      sym_account,
  [967] = 1,
    ACTIONS(271), 1,
      sym__sp,
  [971] = 1,
    ACTIONS(273), 1,
      sym__sp,
  [975] = 1,
    ACTIONS(275), 1,
      sym__sp,
  [979] = 1,
    ACTIONS(277), 1,
      sym__sp,
  [983] = 1,
    ACTIONS(279), 1,
      anon_sym_LF,
  [987] = 1,
    ACTIONS(281), 1,
      anon_sym_LF,
  [991] = 1,
    ACTIONS(283), 1,
      sym_param_value,
  [995] = 1,
    ACTIONS(285), 1,
      sym__sp,
  [999] = 1,
    ACTIONS(287), 1,
      sym_time,
  [1003] = 1,
    ACTIONS(289), 1,
      sym__sp,
  [1007] = 1,
    ACTIONS(291), 1,
      sym__sp,
  [1011] = 1,
    ACTIONS(293), 1,
      sym__sp,
  [1015] = 1,
    ACTIONS(295), 1,
      sym_commodity,
  [1019] = 1,
    ACTIONS(297), 1,
      sym_commodity,
  [1023] = 1,
    ACTIONS(299), 1,
      sym_account,
  [1027] = 1,
    ACTIONS(301), 1,
      sym_param_name,
  [1031] = 1,
    ACTIONS(303), 1,
      anon_sym_LF,
  [1035] = 1,
    ACTIONS(305), 1,
      sym__sp,
  [1039] = 1,
    ACTIONS(307), 1,
      sym_commodity,
  [1043] = 1,
    ACTIONS(309), 1,
      anon_sym_LF,
  [1047] = 1,
    ACTIONS(311), 1,
      sym__sp,
  [1051] = 1,
    ACTIONS(313), 1,
      sym__sp,
  [1055] = 1,
    ACTIONS(315), 1,
      sym__sp,
  [1059] = 1,
    ACTIONS(317), 1,
      sym__sp,
  [1063] = 1,
    ACTIONS(319), 1,
      anon_sym_LF,
  [1067] = 1,
    ACTIONS(321), 1,
      sym_metadata_key,
  [1071] = 1,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
  [1075] = 1,
    ACTIONS(325), 1,
      anon_sym_LF,
  [1079] = 1,
    ACTIONS(327), 1,
      sym__sp,
  [1083] = 1,
    ACTIONS(329), 1,
      sym__sp,
  [1087] = 1,
    ACTIONS(331), 1,
      anon_sym_LF,
  [1091] = 1,
    ACTIONS(333), 1,
      sym_amount,
  [1095] = 1,
    ACTIONS(335), 1,
      anon_sym_LF,
  [1099] = 1,
    ACTIONS(337), 1,
      sym_commodity,
  [1103] = 1,
    ACTIONS(339), 1,
      sym_amount,
  [1107] = 1,
    ACTIONS(341), 1,
      anon_sym_LF,
  [1111] = 1,
    ACTIONS(343), 1,
      sym__sp,
  [1115] = 1,
    ACTIONS(345), 1,
      anon_sym_LF,
  [1119] = 1,
    ACTIONS(347), 1,
      sym__sp,
  [1123] = 1,
    ACTIONS(349), 1,
      anon_sym_LF,
  [1127] = 1,
    ACTIONS(351), 1,
      sym_commodity,
  [1131] = 1,
    ACTIONS(353), 1,
      anon_sym_COLON,
  [1135] = 1,
    ACTIONS(355), 1,
      sym_commodity,
  [1139] = 1,
    ACTIONS(357), 1,
      anon_sym_LF,
  [1143] = 1,
    ACTIONS(359), 1,
      anon_sym_LF,
  [1147] = 1,
    ACTIONS(361), 1,
      sym_account,
  [1151] = 1,
    ACTIONS(363), 1,
      sym__sp,
  [1155] = 1,
    ACTIONS(365), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 107,
  [SMALL_STATE(6)] = 130,
  [SMALL_STATE(7)] = 149,
  [SMALL_STATE(8)] = 168,
  [SMALL_STATE(9)] = 186,
  [SMALL_STATE(10)] = 204,
  [SMALL_STATE(11)] = 222,
  [SMALL_STATE(12)] = 240,
  [SMALL_STATE(13)] = 258,
  [SMALL_STATE(14)] = 276,
  [SMALL_STATE(15)] = 294,
  [SMALL_STATE(16)] = 312,
  [SMALL_STATE(17)] = 330,
  [SMALL_STATE(18)] = 342,
  [SMALL_STATE(19)] = 364,
  [SMALL_STATE(20)] = 376,
  [SMALL_STATE(21)] = 388,
  [SMALL_STATE(22)] = 400,
  [SMALL_STATE(23)] = 412,
  [SMALL_STATE(24)] = 424,
  [SMALL_STATE(25)] = 436,
  [SMALL_STATE(26)] = 448,
  [SMALL_STATE(27)] = 459,
  [SMALL_STATE(28)] = 470,
  [SMALL_STATE(29)] = 481,
  [SMALL_STATE(30)] = 492,
  [SMALL_STATE(31)] = 503,
  [SMALL_STATE(32)] = 522,
  [SMALL_STATE(33)] = 539,
  [SMALL_STATE(34)] = 552,
  [SMALL_STATE(35)] = 567,
  [SMALL_STATE(36)] = 577,
  [SMALL_STATE(37)] = 589,
  [SMALL_STATE(38)] = 599,
  [SMALL_STATE(39)] = 611,
  [SMALL_STATE(40)] = 618,
  [SMALL_STATE(41)] = 629,
  [SMALL_STATE(42)] = 638,
  [SMALL_STATE(43)] = 648,
  [SMALL_STATE(44)] = 658,
  [SMALL_STATE(45)] = 668,
  [SMALL_STATE(46)] = 678,
  [SMALL_STATE(47)] = 688,
  [SMALL_STATE(48)] = 698,
  [SMALL_STATE(49)] = 708,
  [SMALL_STATE(50)] = 718,
  [SMALL_STATE(51)] = 723,
  [SMALL_STATE(52)] = 730,
  [SMALL_STATE(53)] = 737,
  [SMALL_STATE(54)] = 744,
  [SMALL_STATE(55)] = 749,
  [SMALL_STATE(56)] = 756,
  [SMALL_STATE(57)] = 761,
  [SMALL_STATE(58)] = 766,
  [SMALL_STATE(59)] = 773,
  [SMALL_STATE(60)] = 780,
  [SMALL_STATE(61)] = 787,
  [SMALL_STATE(62)] = 792,
  [SMALL_STATE(63)] = 799,
  [SMALL_STATE(64)] = 804,
  [SMALL_STATE(65)] = 811,
  [SMALL_STATE(66)] = 816,
  [SMALL_STATE(67)] = 823,
  [SMALL_STATE(68)] = 827,
  [SMALL_STATE(69)] = 831,
  [SMALL_STATE(70)] = 835,
  [SMALL_STATE(71)] = 839,
  [SMALL_STATE(72)] = 843,
  [SMALL_STATE(73)] = 847,
  [SMALL_STATE(74)] = 851,
  [SMALL_STATE(75)] = 855,
  [SMALL_STATE(76)] = 859,
  [SMALL_STATE(77)] = 863,
  [SMALL_STATE(78)] = 867,
  [SMALL_STATE(79)] = 871,
  [SMALL_STATE(80)] = 875,
  [SMALL_STATE(81)] = 879,
  [SMALL_STATE(82)] = 883,
  [SMALL_STATE(83)] = 887,
  [SMALL_STATE(84)] = 891,
  [SMALL_STATE(85)] = 895,
  [SMALL_STATE(86)] = 899,
  [SMALL_STATE(87)] = 903,
  [SMALL_STATE(88)] = 907,
  [SMALL_STATE(89)] = 911,
  [SMALL_STATE(90)] = 915,
  [SMALL_STATE(91)] = 919,
  [SMALL_STATE(92)] = 923,
  [SMALL_STATE(93)] = 927,
  [SMALL_STATE(94)] = 931,
  [SMALL_STATE(95)] = 935,
  [SMALL_STATE(96)] = 939,
  [SMALL_STATE(97)] = 943,
  [SMALL_STATE(98)] = 947,
  [SMALL_STATE(99)] = 951,
  [SMALL_STATE(100)] = 955,
  [SMALL_STATE(101)] = 959,
  [SMALL_STATE(102)] = 963,
  [SMALL_STATE(103)] = 967,
  [SMALL_STATE(104)] = 971,
  [SMALL_STATE(105)] = 975,
  [SMALL_STATE(106)] = 979,
  [SMALL_STATE(107)] = 983,
  [SMALL_STATE(108)] = 987,
  [SMALL_STATE(109)] = 991,
  [SMALL_STATE(110)] = 995,
  [SMALL_STATE(111)] = 999,
  [SMALL_STATE(112)] = 1003,
  [SMALL_STATE(113)] = 1007,
  [SMALL_STATE(114)] = 1011,
  [SMALL_STATE(115)] = 1015,
  [SMALL_STATE(116)] = 1019,
  [SMALL_STATE(117)] = 1023,
  [SMALL_STATE(118)] = 1027,
  [SMALL_STATE(119)] = 1031,
  [SMALL_STATE(120)] = 1035,
  [SMALL_STATE(121)] = 1039,
  [SMALL_STATE(122)] = 1043,
  [SMALL_STATE(123)] = 1047,
  [SMALL_STATE(124)] = 1051,
  [SMALL_STATE(125)] = 1055,
  [SMALL_STATE(126)] = 1059,
  [SMALL_STATE(127)] = 1063,
  [SMALL_STATE(128)] = 1067,
  [SMALL_STATE(129)] = 1071,
  [SMALL_STATE(130)] = 1075,
  [SMALL_STATE(131)] = 1079,
  [SMALL_STATE(132)] = 1083,
  [SMALL_STATE(133)] = 1087,
  [SMALL_STATE(134)] = 1091,
  [SMALL_STATE(135)] = 1095,
  [SMALL_STATE(136)] = 1099,
  [SMALL_STATE(137)] = 1103,
  [SMALL_STATE(138)] = 1107,
  [SMALL_STATE(139)] = 1111,
  [SMALL_STATE(140)] = 1115,
  [SMALL_STATE(141)] = 1119,
  [SMALL_STATE(142)] = 1123,
  [SMALL_STATE(143)] = 1127,
  [SMALL_STATE(144)] = 1131,
  [SMALL_STATE(145)] = 1135,
  [SMALL_STATE(146)] = 1139,
  [SMALL_STATE(147)] = 1143,
  [SMALL_STATE(148)] = 1147,
  [SMALL_STATE(149)] = 1151,
  [SMALL_STATE(150)] = 1155,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_customer_directive_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_customer_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_customer_directive, 5, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 6, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 5, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_directive, 6, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 7, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_directive, 8, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_directive, 7, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_directive, 9, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_customer_property, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 14, 0, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_customer_account, 5, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_line, 6, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_customer_constraint, 7, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 11, 0, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 12, 0, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 13, 0, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_point, 9, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_directive, 6, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_point, 8, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_directive, 6, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 4, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 5, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_list, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_list, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_list_repeat1, 2, 0, 0),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_list_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 6, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_period_anchor, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knowledge_datetime, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_value, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 7, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_customer_name, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [323] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_value, 1, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
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
