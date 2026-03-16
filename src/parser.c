#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 152
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
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
  aux_sym_option_key_token1 = 38,
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
  sym_option_key = 65,
  sym_option_value = 66,
  sym_customer_name = 67,
  aux_sym_source_file_repeat1 = 68,
  aux_sym_commodity_directive_repeat1 = 69,
  aux_sym_customer_directive_repeat1 = 70,
  aux_sym_transaction_repeat1 = 71,
  aux_sym_commodity_list_repeat1 = 72,
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
  [aux_sym_option_key_token1] = "option_key_token1",
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
  [sym_option_key] = "option_key",
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
  [aux_sym_option_key_token1] = aux_sym_option_key_token1,
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
  [sym_option_key] = sym_option_key,
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
  [aux_sym_option_key_token1] = {
    .visible = false,
    .named = false,
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
  [sym_option_key] = {
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
  [151] = 151,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(71);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') SKIP(0);
      if (lookahead == ' ') ADVANCE(179);
      if (lookahead == '!') ADVANCE(197);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '%') ADVANCE(195);
      if (lookahead == '*') ADVANCE(196);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == ',') ADVANCE(211);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '>') ADVANCE(203);
      if (lookahead == 'T') ADVANCE(181);
      if (lookahead == 'Z') ADVANCE(193);
      if (lookahead == '^') ADVANCE(182);
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == 0x2192) ADVANCE(202);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Y')) ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == '\r') SKIP(1);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 2:
      if (lookahead == '\r') SKIP(2);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'm') ADVANCE(104);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 3:
      if (lookahead == '\r') SKIP(3);
      if (lookahead == '+') ADVANCE(198);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == '\r') ADVANCE(176);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 5:
      if (lookahead == '\r') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 6:
      if (lookahead == '\r') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 7:
      if (lookahead == '\r') SKIP(7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 8:
      if (lookahead == '\r') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 9:
      if (lookahead == '\r') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(204);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(201);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(57);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(60);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 43:
      if (lookahead == 'y') ADVANCE(74);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 67:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 68:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 70:
      if (eof) ADVANCE(71);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') SKIP(70);
      if (lookahead == ' ') ADVANCE(179);
      if (lookahead == '!') ADVANCE(197);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '%') ADVANCE(195);
      if (lookahead == '*') ADVANCE(196);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'T') ADVANCE(180);
      if (lookahead == 'Z') ADVANCE(192);
      if (lookahead == '^') ADVANCE(182);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(73);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_open);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_alias);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_customer);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_customer);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_account);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_account);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_max_DASHaggregate_DASHbalance);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_max_DASHaggregate_DASHbalance);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_data);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_param_name);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_param_value);
      if (lookahead == '\r') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_param_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == '-') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == '-') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == '-') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == '-') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'b') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'b') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'l') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'c') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'c') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'd') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == 't') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'e') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'e') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'e') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'g') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'g') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'g') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'g') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'g') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'g') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'i') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'i') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'i') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'l') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'm') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'm') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'm') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'n') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'n') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'n') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'n') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'o') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'o') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'o') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'o') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'p') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'r') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'r') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 's') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 't') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 't') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 't') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 't') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'u') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'x') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'x') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'y') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_metadata_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_metadata_value_token1);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_metadata_value_token1);
      if (lookahead == '\r') ADVANCE(176);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_metadata_value_token1);
      if (lookahead == '\r') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_metadata_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__sp);
      if (lookahead == ' ') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_T);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '-') ADVANCE(56);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '-') ADVANCE(59);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_fractional);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_fractional);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_fractional);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_Z);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_tz_offset);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_linked_prefix);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_u2192);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_description_token1);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '.') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '.') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_commodity);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_option_key_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_alias_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 70},
  [2] = {.lex_state = 70},
  [3] = {.lex_state = 70},
  [4] = {.lex_state = 70},
  [5] = {.lex_state = 70},
  [6] = {.lex_state = 70},
  [7] = {.lex_state = 70},
  [8] = {.lex_state = 70},
  [9] = {.lex_state = 70},
  [10] = {.lex_state = 70},
  [11] = {.lex_state = 70},
  [12] = {.lex_state = 70},
  [13] = {.lex_state = 70},
  [14] = {.lex_state = 70},
  [15] = {.lex_state = 70},
  [16] = {.lex_state = 70},
  [17] = {.lex_state = 70},
  [18] = {.lex_state = 70},
  [19] = {.lex_state = 70},
  [20] = {.lex_state = 70},
  [21] = {.lex_state = 70},
  [22] = {.lex_state = 70},
  [23] = {.lex_state = 70},
  [24] = {.lex_state = 70},
  [25] = {.lex_state = 70},
  [26] = {.lex_state = 70},
  [27] = {.lex_state = 70},
  [28] = {.lex_state = 70},
  [29] = {.lex_state = 70},
  [30] = {.lex_state = 70},
  [31] = {.lex_state = 70},
  [32] = {.lex_state = 70},
  [33] = {.lex_state = 70},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 70},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 70},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
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
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 70},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
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
    [aux_sym_option_key_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(102),
    [sym_directive] = STATE(2),
    [sym_commodity_directive] = STATE(28),
    [sym_open_directive] = STATE(28),
    [sym_option_directive] = STATE(28),
    [sym_alias_directive] = STATE(28),
    [sym_customer_directive] = STATE(28),
    [sym_data_point] = STATE(28),
    [sym_transaction] = STATE(2),
    [sym_header] = STATE(40),
    [sym_datetime] = STATE(46),
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
    STATE(40), 1,
      sym_header,
    STATE(46), 1,
      sym_datetime,
    ACTIONS(19), 2,
      anon_sym_LF,
      sym_comment,
    STATE(3), 3,
      sym_directive,
      sym_transaction,
      aux_sym_source_file_repeat1,
    STATE(28), 6,
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
    STATE(40), 1,
      sym_header,
    STATE(46), 1,
      sym_datetime,
    ACTIONS(23), 2,
      anon_sym_LF,
      sym_comment,
    STATE(3), 3,
      sym_directive,
      sym_transaction,
      aux_sym_source_file_repeat1,
    STATE(28), 6,
      sym_commodity_directive,
      sym_open_directive,
      sym_option_directive,
      sym_alias_directive,
      sym_customer_directive,
      sym_data_point,
  [84] = 4,
    ACTIONS(43), 1,
      sym__sp,
    STATE(5), 2,
      sym_customer_property,
      aux_sym_customer_directive_repeat1,
    STATE(18), 3,
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
    ACTIONS(47), 1,
      sym__sp,
    STATE(5), 2,
      sym_customer_property,
      aux_sym_customer_directive_repeat1,
    STATE(18), 3,
      sym_customer_account,
      sym_customer_constraint,
      sym_metadata_line,
    ACTIONS(45), 8,
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
    STATE(8), 2,
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
    ACTIONS(66), 1,
      sym__sp,
    STATE(10), 2,
      sym_metadata_line,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(64), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [204] = 3,
    ACTIONS(66), 1,
      sym__sp,
    STATE(8), 2,
      sym_metadata_line,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(68), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [222] = 3,
    ACTIONS(66), 1,
      sym__sp,
    STATE(13), 2,
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
    ACTIONS(66), 1,
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
    ACTIONS(66), 1,
      sym__sp,
    STATE(8), 2,
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
    ACTIONS(66), 1,
      sym__sp,
    STATE(8), 2,
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
    ACTIONS(66), 1,
      sym__sp,
    STATE(8), 2,
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
    ACTIONS(66), 1,
      sym__sp,
    STATE(14), 2,
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
  [330] = 6,
    ACTIONS(86), 1,
      sym_fractional,
    STATE(36), 1,
      sym_timezone,
    STATE(53), 1,
      sym_period_anchor,
    ACTIONS(82), 2,
      sym__sp,
      anon_sym_PERCENT,
    ACTIONS(84), 2,
      anon_sym_CARET,
      anon_sym_DOLLAR,
    ACTIONS(88), 2,
      anon_sym_Z,
      sym_tz_offset,
  [352] = 1,
    ACTIONS(90), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym__sp,
      sym_date,
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
  [448] = 5,
    STATE(35), 1,
      sym_timezone,
    STATE(57), 1,
      sym_period_anchor,
    ACTIONS(84), 2,
      anon_sym_CARET,
      anon_sym_DOLLAR,
    ACTIONS(88), 2,
      anon_sym_Z,
      sym_tz_offset,
    ACTIONS(106), 2,
      sym__sp,
      anon_sym_PERCENT,
  [467] = 1,
    ACTIONS(108), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [478] = 1,
    ACTIONS(110), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [489] = 1,
    ACTIONS(112), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [500] = 1,
    ACTIONS(114), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [511] = 1,
    ACTIONS(116), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_commodity,
      anon_sym_option,
      anon_sym_alias,
      anon_sym_customer,
      sym_date,
  [522] = 4,
    ACTIONS(120), 1,
      anon_sym_T,
    STATE(67), 1,
      sym_period_anchor,
    ACTIONS(84), 2,
      anon_sym_CARET,
      anon_sym_DOLLAR,
    ACTIONS(118), 2,
      sym__sp,
      anon_sym_PERCENT,
  [537] = 5,
    ACTIONS(122), 1,
      anon_sym_commodity,
    ACTIONS(124), 1,
      anon_sym_open,
    ACTIONS(126), 1,
      anon_sym_data,
    STATE(63), 1,
      sym_flag,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [554] = 3,
    ACTIONS(43), 1,
      sym__sp,
    STATE(4), 2,
      sym_customer_property,
      aux_sym_customer_directive_repeat1,
    STATE(18), 3,
      sym_customer_account,
      sym_customer_constraint,
      sym_metadata_line,
  [567] = 3,
    STATE(60), 1,
      sym_period_anchor,
    ACTIONS(84), 2,
      anon_sym_CARET,
      anon_sym_DOLLAR,
    ACTIONS(130), 2,
      sym__sp,
      anon_sym_PERCENT,
  [579] = 3,
    STATE(57), 1,
      sym_period_anchor,
    ACTIONS(84), 2,
      anon_sym_CARET,
      anon_sym_DOLLAR,
    ACTIONS(106), 2,
      sym__sp,
      anon_sym_PERCENT,
  [591] = 2,
    STATE(91), 1,
      sym_arrow,
    ACTIONS(132), 4,
      anon_sym_DASH_GT,
      anon_sym_SLASH_SLASH,
      anon_sym_u2192,
      anon_sym_GT,
  [601] = 2,
    STATE(73), 1,
      sym_arrow,
    ACTIONS(132), 4,
      anon_sym_DASH_GT,
      anon_sym_SLASH_SLASH,
      anon_sym_u2192,
      anon_sym_GT,
  [611] = 3,
    ACTIONS(134), 1,
      anon_sym_data,
    STATE(55), 1,
      sym_flag,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [622] = 2,
    ACTIONS(52), 1,
      sym__sp,
    STATE(6), 3,
      sym_metadata_line,
      sym_movement,
      aux_sym_transaction_repeat1,
  [631] = 1,
    ACTIONS(136), 4,
      sym__sp,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [638] = 2,
    STATE(71), 1,
      sym_option_key,
    ACTIONS(138), 2,
      aux_sym_description_token1,
      aux_sym_option_key_token1,
  [646] = 3,
    ACTIONS(140), 1,
      anon_sym_account,
    ACTIONS(142), 1,
      anon_sym_max_DASHaggregate_DASHbalance,
    ACTIONS(144), 1,
      sym_metadata_key,
  [656] = 3,
    ACTIONS(146), 1,
      aux_sym_description_token1,
    ACTIONS(148), 1,
      sym_amount,
    STATE(126), 1,
      sym_description,
  [666] = 3,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_commodity_list_repeat1,
  [676] = 3,
    ACTIONS(154), 1,
      sym__sp,
    ACTIONS(156), 1,
      anon_sym_PERCENT,
    STATE(127), 1,
      sym_knowledge_datetime,
  [686] = 3,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(158), 1,
      anon_sym_LF,
    STATE(45), 1,
      aux_sym_commodity_list_repeat1,
  [696] = 3,
    ACTIONS(160), 1,
      anon_sym_LF,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_commodity_list_repeat1,
  [706] = 3,
    ACTIONS(144), 1,
      sym_metadata_key,
    ACTIONS(165), 1,
      sym_linked_prefix,
    ACTIONS(167), 1,
      sym_account,
  [716] = 3,
    ACTIONS(146), 1,
      aux_sym_description_token1,
    ACTIONS(169), 1,
      sym_amount,
    STATE(133), 1,
      sym_description,
  [726] = 2,
    STATE(117), 1,
      sym_option_value,
    ACTIONS(171), 2,
      aux_sym_metadata_value_token1,
      aux_sym_description_token1,
  [734] = 2,
    ACTIONS(173), 1,
      anon_sym_LF,
    ACTIONS(175), 1,
      sym__sp,
  [741] = 1,
    ACTIONS(106), 2,
      sym__sp,
      anon_sym_PERCENT,
  [746] = 2,
    ACTIONS(177), 1,
      aux_sym_metadata_value_token1,
    STATE(78), 1,
      sym_payee,
  [753] = 2,
    ACTIONS(179), 1,
      anon_sym_LF,
    ACTIONS(181), 1,
      sym__sp,
  [760] = 2,
    ACTIONS(15), 1,
      sym_date,
    STATE(118), 1,
      sym_datetime,
  [767] = 1,
    ACTIONS(130), 2,
      sym__sp,
      anon_sym_PERCENT,
  [772] = 2,
    ACTIONS(183), 1,
      aux_sym_metadata_value_token1,
    STATE(90), 1,
      sym_metadata_value,
  [779] = 2,
    ACTIONS(177), 1,
      aux_sym_metadata_value_token1,
    STATE(99), 1,
      sym_payee,
  [786] = 1,
    ACTIONS(185), 2,
      sym__sp,
      anon_sym_PERCENT,
  [791] = 2,
    ACTIONS(187), 1,
      sym_commodity,
    STATE(108), 1,
      sym_commodity_list,
  [798] = 1,
    ACTIONS(189), 2,
      anon_sym_LF,
      sym__sp,
  [803] = 2,
    ACTIONS(191), 1,
      anon_sym_LF,
    ACTIONS(193), 1,
      sym__sp,
  [810] = 2,
    ACTIONS(195), 1,
      aux_sym_description_token1,
    STATE(83), 1,
      sym_customer_name,
  [817] = 1,
    ACTIONS(160), 2,
      anon_sym_LF,
      anon_sym_COMMA,
  [822] = 1,
    ACTIONS(197), 2,
      sym__sp,
      anon_sym_PERCENT,
  [827] = 1,
    ACTIONS(199), 2,
      sym__sp,
      anon_sym_PERCENT,
  [832] = 1,
    ACTIONS(201), 1,
      sym__sp,
  [836] = 1,
    ACTIONS(203), 1,
      sym__sp,
  [840] = 1,
    ACTIONS(205), 1,
      sym__sp,
  [844] = 1,
    ACTIONS(207), 1,
      sym__sp,
  [848] = 1,
    ACTIONS(209), 1,
      sym__sp,
  [852] = 1,
    ACTIONS(211), 1,
      sym__sp,
  [856] = 1,
    ACTIONS(213), 1,
      anon_sym_LF,
  [860] = 1,
    ACTIONS(215), 1,
      sym__sp,
  [864] = 1,
    ACTIONS(217), 1,
      sym__sp,
  [868] = 1,
    ACTIONS(219), 1,
      anon_sym_LF,
  [872] = 1,
    ACTIONS(221), 1,
      anon_sym_LF,
  [876] = 1,
    ACTIONS(223), 1,
      sym_param_name,
  [880] = 1,
    ACTIONS(225), 1,
      sym__sp,
  [884] = 1,
    ACTIONS(227), 1,
      sym_param_name,
  [888] = 1,
    ACTIONS(229), 1,
      anon_sym_LF,
  [892] = 1,
    ACTIONS(231), 1,
      anon_sym_LF,
  [896] = 1,
    ACTIONS(233), 1,
      sym_commodity,
  [900] = 1,
    ACTIONS(235), 1,
      sym__sp,
  [904] = 1,
    ACTIONS(237), 1,
      sym__sp,
  [908] = 1,
    ACTIONS(239), 1,
      anon_sym_COLON,
  [912] = 1,
    ACTIONS(241), 1,
      sym_metadata_key,
  [916] = 1,
    ACTIONS(243), 1,
      anon_sym_LF,
  [920] = 1,
    ACTIONS(245), 1,
      anon_sym_LF,
  [924] = 1,
    ACTIONS(247), 1,
      sym__sp,
  [928] = 1,
    ACTIONS(249), 1,
      sym_account,
  [932] = 1,
    ACTIONS(251), 1,
      sym_account,
  [936] = 1,
    ACTIONS(253), 1,
      sym__sp,
  [940] = 1,
    ACTIONS(255), 1,
      sym__sp,
  [944] = 1,
    ACTIONS(257), 1,
      sym_param_value,
  [948] = 1,
    ACTIONS(259), 1,
      sym__sp,
  [952] = 1,
    ACTIONS(261), 1,
      sym__sp,
  [956] = 1,
    ACTIONS(263), 1,
      anon_sym_LF,
  [960] = 1,
    ACTIONS(265), 1,
      sym_account,
  [964] = 1,
    ACTIONS(267), 1,
      sym_amount,
  [968] = 1,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
  [972] = 1,
    ACTIONS(271), 1,
      sym_account,
  [976] = 1,
    ACTIONS(273), 1,
      sym__sp,
  [980] = 1,
    ACTIONS(275), 1,
      sym__sp,
  [984] = 1,
    ACTIONS(277), 1,
      sym__sp,
  [988] = 1,
    ACTIONS(279), 1,
      sym__sp,
  [992] = 1,
    ACTIONS(281), 1,
      anon_sym_LF,
  [996] = 1,
    ACTIONS(283), 1,
      anon_sym_LF,
  [1000] = 1,
    ACTIONS(285), 1,
      sym_param_value,
  [1004] = 1,
    ACTIONS(287), 1,
      sym__sp,
  [1008] = 1,
    ACTIONS(289), 1,
      sym_commodity,
  [1012] = 1,
    ACTIONS(291), 1,
      sym__sp,
  [1016] = 1,
    ACTIONS(293), 1,
      sym__sp,
  [1020] = 1,
    ACTIONS(295), 1,
      anon_sym_LF,
  [1024] = 1,
    ACTIONS(297), 1,
      sym_commodity,
  [1028] = 1,
    ACTIONS(299), 1,
      anon_sym_LF,
  [1032] = 1,
    ACTIONS(301), 1,
      sym__sp,
  [1036] = 1,
    ACTIONS(303), 1,
      sym_alias_name,
  [1040] = 1,
    ACTIONS(305), 1,
      anon_sym_LF,
  [1044] = 1,
    ACTIONS(307), 1,
      anon_sym_LF,
  [1048] = 1,
    ACTIONS(309), 1,
      sym_commodity,
  [1052] = 1,
    ACTIONS(311), 1,
      sym_time,
  [1056] = 1,
    ACTIONS(313), 1,
      sym__sp,
  [1060] = 1,
    ACTIONS(315), 1,
      sym__sp,
  [1064] = 1,
    ACTIONS(317), 1,
      sym__sp,
  [1068] = 1,
    ACTIONS(319), 1,
      sym__sp,
  [1072] = 1,
    ACTIONS(321), 1,
      sym_account,
  [1076] = 1,
    ACTIONS(323), 1,
      sym__sp,
  [1080] = 1,
    ACTIONS(325), 1,
      anon_sym_LF,
  [1084] = 1,
    ACTIONS(327), 1,
      anon_sym_LF,
  [1088] = 1,
    ACTIONS(329), 1,
      sym__sp,
  [1092] = 1,
    ACTIONS(331), 1,
      sym__sp,
  [1096] = 1,
    ACTIONS(333), 1,
      sym_commodity,
  [1100] = 1,
    ACTIONS(335), 1,
      sym_amount,
  [1104] = 1,
    ACTIONS(337), 1,
      sym__sp,
  [1108] = 1,
    ACTIONS(339), 1,
      sym_commodity,
  [1112] = 1,
    ACTIONS(341), 1,
      sym_amount,
  [1116] = 1,
    ACTIONS(343), 1,
      anon_sym_LF,
  [1120] = 1,
    ACTIONS(345), 1,
      sym__sp,
  [1124] = 1,
    ACTIONS(347), 1,
      anon_sym_LF,
  [1128] = 1,
    ACTIONS(349), 1,
      sym__sp,
  [1132] = 1,
    ACTIONS(351), 1,
      sym_account,
  [1136] = 1,
    ACTIONS(353), 1,
      sym_commodity,
  [1140] = 1,
    ACTIONS(355), 1,
      sym__sp,
  [1144] = 1,
    ACTIONS(357), 1,
      sym_commodity,
  [1148] = 1,
    ACTIONS(359), 1,
      anon_sym_LF,
  [1152] = 1,
    ACTIONS(361), 1,
      anon_sym_LF,
  [1156] = 1,
    ACTIONS(363), 1,
      sym__sp,
  [1160] = 1,
    ACTIONS(365), 1,
      sym__sp,
  [1164] = 1,
    ACTIONS(367), 1,
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
  [SMALL_STATE(18)] = 352,
  [SMALL_STATE(19)] = 364,
  [SMALL_STATE(20)] = 376,
  [SMALL_STATE(21)] = 388,
  [SMALL_STATE(22)] = 400,
  [SMALL_STATE(23)] = 412,
  [SMALL_STATE(24)] = 424,
  [SMALL_STATE(25)] = 436,
  [SMALL_STATE(26)] = 448,
  [SMALL_STATE(27)] = 467,
  [SMALL_STATE(28)] = 478,
  [SMALL_STATE(29)] = 489,
  [SMALL_STATE(30)] = 500,
  [SMALL_STATE(31)] = 511,
  [SMALL_STATE(32)] = 522,
  [SMALL_STATE(33)] = 537,
  [SMALL_STATE(34)] = 554,
  [SMALL_STATE(35)] = 567,
  [SMALL_STATE(36)] = 579,
  [SMALL_STATE(37)] = 591,
  [SMALL_STATE(38)] = 601,
  [SMALL_STATE(39)] = 611,
  [SMALL_STATE(40)] = 622,
  [SMALL_STATE(41)] = 631,
  [SMALL_STATE(42)] = 638,
  [SMALL_STATE(43)] = 646,
  [SMALL_STATE(44)] = 656,
  [SMALL_STATE(45)] = 666,
  [SMALL_STATE(46)] = 676,
  [SMALL_STATE(47)] = 686,
  [SMALL_STATE(48)] = 696,
  [SMALL_STATE(49)] = 706,
  [SMALL_STATE(50)] = 716,
  [SMALL_STATE(51)] = 726,
  [SMALL_STATE(52)] = 734,
  [SMALL_STATE(53)] = 741,
  [SMALL_STATE(54)] = 746,
  [SMALL_STATE(55)] = 753,
  [SMALL_STATE(56)] = 760,
  [SMALL_STATE(57)] = 767,
  [SMALL_STATE(58)] = 772,
  [SMALL_STATE(59)] = 779,
  [SMALL_STATE(60)] = 786,
  [SMALL_STATE(61)] = 791,
  [SMALL_STATE(62)] = 798,
  [SMALL_STATE(63)] = 803,
  [SMALL_STATE(64)] = 810,
  [SMALL_STATE(65)] = 817,
  [SMALL_STATE(66)] = 822,
  [SMALL_STATE(67)] = 827,
  [SMALL_STATE(68)] = 832,
  [SMALL_STATE(69)] = 836,
  [SMALL_STATE(70)] = 840,
  [SMALL_STATE(71)] = 844,
  [SMALL_STATE(72)] = 848,
  [SMALL_STATE(73)] = 852,
  [SMALL_STATE(74)] = 856,
  [SMALL_STATE(75)] = 860,
  [SMALL_STATE(76)] = 864,
  [SMALL_STATE(77)] = 868,
  [SMALL_STATE(78)] = 872,
  [SMALL_STATE(79)] = 876,
  [SMALL_STATE(80)] = 880,
  [SMALL_STATE(81)] = 884,
  [SMALL_STATE(82)] = 888,
  [SMALL_STATE(83)] = 892,
  [SMALL_STATE(84)] = 896,
  [SMALL_STATE(85)] = 900,
  [SMALL_STATE(86)] = 904,
  [SMALL_STATE(87)] = 908,
  [SMALL_STATE(88)] = 912,
  [SMALL_STATE(89)] = 916,
  [SMALL_STATE(90)] = 920,
  [SMALL_STATE(91)] = 924,
  [SMALL_STATE(92)] = 928,
  [SMALL_STATE(93)] = 932,
  [SMALL_STATE(94)] = 936,
  [SMALL_STATE(95)] = 940,
  [SMALL_STATE(96)] = 944,
  [SMALL_STATE(97)] = 948,
  [SMALL_STATE(98)] = 952,
  [SMALL_STATE(99)] = 956,
  [SMALL_STATE(100)] = 960,
  [SMALL_STATE(101)] = 964,
  [SMALL_STATE(102)] = 968,
  [SMALL_STATE(103)] = 972,
  [SMALL_STATE(104)] = 976,
  [SMALL_STATE(105)] = 980,
  [SMALL_STATE(106)] = 984,
  [SMALL_STATE(107)] = 988,
  [SMALL_STATE(108)] = 992,
  [SMALL_STATE(109)] = 996,
  [SMALL_STATE(110)] = 1000,
  [SMALL_STATE(111)] = 1004,
  [SMALL_STATE(112)] = 1008,
  [SMALL_STATE(113)] = 1012,
  [SMALL_STATE(114)] = 1016,
  [SMALL_STATE(115)] = 1020,
  [SMALL_STATE(116)] = 1024,
  [SMALL_STATE(117)] = 1028,
  [SMALL_STATE(118)] = 1032,
  [SMALL_STATE(119)] = 1036,
  [SMALL_STATE(120)] = 1040,
  [SMALL_STATE(121)] = 1044,
  [SMALL_STATE(122)] = 1048,
  [SMALL_STATE(123)] = 1052,
  [SMALL_STATE(124)] = 1056,
  [SMALL_STATE(125)] = 1060,
  [SMALL_STATE(126)] = 1064,
  [SMALL_STATE(127)] = 1068,
  [SMALL_STATE(128)] = 1072,
  [SMALL_STATE(129)] = 1076,
  [SMALL_STATE(130)] = 1080,
  [SMALL_STATE(131)] = 1084,
  [SMALL_STATE(132)] = 1088,
  [SMALL_STATE(133)] = 1092,
  [SMALL_STATE(134)] = 1096,
  [SMALL_STATE(135)] = 1100,
  [SMALL_STATE(136)] = 1104,
  [SMALL_STATE(137)] = 1108,
  [SMALL_STATE(138)] = 1112,
  [SMALL_STATE(139)] = 1116,
  [SMALL_STATE(140)] = 1120,
  [SMALL_STATE(141)] = 1124,
  [SMALL_STATE(142)] = 1128,
  [SMALL_STATE(143)] = 1132,
  [SMALL_STATE(144)] = 1136,
  [SMALL_STATE(145)] = 1140,
  [SMALL_STATE(146)] = 1144,
  [SMALL_STATE(147)] = 1148,
  [SMALL_STATE(148)] = 1152,
  [SMALL_STATE(149)] = 1156,
  [SMALL_STATE(150)] = 1160,
  [SMALL_STATE(151)] = 1164,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_customer_directive, 5, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_customer_directive_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_customer_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 5, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 6, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_directive, 6, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 7, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_directive, 9, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_directive, 7, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_directive, 8, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_customer_property, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 14, 0, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_line, 6, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_customer_account, 5, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_customer_constraint, 7, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 12, 0, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 11, 0, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 13, 0, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 4, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_directive, 6, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_directive, 6, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_point, 9, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_point, 8, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 5, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_list, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_list, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_list_repeat1, 2, 0, 0),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_list_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 6, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_period_anchor, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_key, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_customer_name, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_value, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [269] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 7, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_value, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knowledge_datetime, 2, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
