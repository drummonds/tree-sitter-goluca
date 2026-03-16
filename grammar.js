/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "goluca",

  extras: (_) => [/\r/],

  rules: {
    source_file: ($) =>
      repeat(choice($.directive, $.transaction, $.comment, "\n")),

    comment: (_) => token(seq(/[#;]/, /[^\n]*/)),

    // --- Directives ---

    directive: ($) =>
      choice(
        $.commodity_directive,
        $.open_directive,
        $.option_directive,
        $.alias_directive,
        $.customer_directive,
        $.data_point,
      ),

    commodity_directive: ($) =>
      seq(
        optional(seq($.datetime, $._sp)),
        "commodity",
        $._sp,
        $.commodity,
        "\n",
        repeat($.metadata_line),
      ),

    open_directive: ($) =>
      seq(
        $.datetime,
        $._sp,
        "open",
        $._sp,
        $.account,
        optional(seq($._sp, $.commodity_list)),
        "\n",
        repeat($.metadata_line),
      ),

    option_directive: ($) =>
      seq(
        "option",
        $._sp,
        $.option_key,
        $._sp,
        $.option_value,
        "\n",
      ),

    alias_directive: ($) =>
      seq("alias", $._sp, $.alias_name, $._sp, $.account, "\n"),

    customer_directive: ($) =>
      seq(
        "customer",
        $._sp,
        $.customer_name,
        "\n",
        repeat1($.customer_property),
      ),

    customer_property: ($) =>
      choice(
        $.customer_account,
        $.customer_constraint,
        $.metadata_line,
      ),

    customer_account: ($) =>
      seq($._sp, "account", $._sp, $.account, "\n"),

    customer_constraint: ($) =>
      seq(
        $._sp,
        "max-aggregate-balance",
        $._sp,
        $.amount,
        $._sp,
        $.commodity,
        "\n",
      ),

    data_point: ($) =>
      seq(
        $.datetime,
        optional($.knowledge_datetime),
        $._sp,
        "data",
        $._sp,
        $.param_name,
        $._sp,
        $.param_value,
        "\n",
      ),

    param_name: (_) => /[a-zA-Z][a-zA-Z0-9_-]*(:[a-zA-Z][a-zA-Z0-9_-]*)*/,

    param_value: (_) => token(prec(-1, /[^\n]+/)),

    // --- Metadata ---

    metadata_line: ($) =>
      seq($._sp, $.metadata_key, ":", $._sp, $.metadata_value, "\n"),

    metadata_key: (_) => /[a-z][a-z0-9_-]*/,

    metadata_value: (_) => /[^\n]+/,

    // --- Transactions ---

    transaction: ($) =>
      seq($.header, repeat1(choice($.movement, $.metadata_line))),

    header: ($) =>
      seq(
        $.datetime,
        optional($.knowledge_datetime),
        $._sp,
        $.flag,
        optional(seq($._sp, $.payee)),
        "\n",
      ),

    _sp: (_) => / +/,

    datetime: ($) =>
      seq(
        $.date,
        optional(seq("T", $.time, optional($.fractional), optional($.timezone))),
        optional($.period_anchor),
      ),

    period_anchor: (_) => choice("^", "$"),

    date: (_) => /\d{4}(-\d{2}(-\d{2})?)?/,

    time: (_) => /\d{2}:\d{2}:\d{2}/,

    fractional: (_) => /\.\d{3}(\d{3}(\d{3})?)?/,

    timezone: ($) => choice("Z", $.tz_offset),

    tz_offset: (_) => /[+-]\d{2}:\d{2}/,

    knowledge_datetime: ($) => seq("%", $.datetime),

    flag: (_) => choice("*", "!"),

    payee: (_) => /[^\n]+/,

    movement: ($) =>
      seq(
        $._sp,
        optional($.linked_prefix),
        field("from", $.account),
        $._sp,
        $.arrow,
        $._sp,
        field("to", $.account),
        optional(seq($._sp, $.description)),
        $._sp,
        $.amount,
        $._sp,
        $.commodity,
        "\n",
      ),

    linked_prefix: (_) => "+",

    account: (_) => /[A-Za-z0-9][a-zA-Z0-9]*(:[A-Za-z0-9][a-zA-Z0-9-]*)+/,

    arrow: (_) => choice("->", "//", "\u2192", ">"),

    description: (_) => /"[^"]*"/,

    amount: (_) => /-?[0-9][0-9,]*(\.[0-9]+)?/,

    commodity: (_) => token(prec(1, /[A-Z][A-Z]+/)),

    commodity_list: ($) => seq($.commodity, repeat(seq(",", $.commodity))),

    option_key: (_) => choice(/"[^"]*"/, /[a-z][a-z-]*/),

    option_value: (_) => choice(/"[^"]*"/, /[^\n]+/),

    alias_name: (_) => /[A-Za-z][a-zA-Z0-9-]*/,

    customer_name: (_) => /"[^"]*"/,
  },
});
