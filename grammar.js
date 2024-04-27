const PREC = {
  step: 2,
  modifier: 3,
  amount: 4,
  multiword: 10,
  quantity: 11,
}

module.exports = grammar({
  name: 'cooklang',

  externals: $ => [
    $._newline
  ],

  conflicts: $ => [
    [$._integer, $._digit],
    [$._fractional, $._number],
    [$._unreserved_symbol, $._symbol],
    [$.comment, $._alphabetic],
    [$.metadata, $.metadata], // TODO: is this really necessary?
  ],

  rules: {
    recipe: $ => seq(
      repeat(seq($._line, $._newline)),
      optional($._line),
      optional(/\u0000/), // Strange EOF thing
    ),

    _line: $ => choice(
      $.metadata,
      $.step,
      $.comment,
      $.block_comment,
    ),

    metadata:           $ => seq(">>", $._word, ":", $._whitespace, choice($._text_item, $._number, $.amount)),
    step:               $ => repeat1(prec.left(PREC.step, choice($._text_item, $.ingredient, $.cookware, $.timer))),
    comment:            $ => seq("-", "-", /.*/),
    block_comment:      $ => seq("[-", /[^-]*-+(?:[^]-][^-]*-+)*/, "]"),

    ingredient:         $ => prec.left(PREC.modifier, seq("@", optional($.name), "{", repeat($._whitespace), optional($.amount), repeat($._whitespace), "}")),
    cookware:           $ => prec.left(PREC.modifier, seq("#", optional($.name), "{", repeat($._whitespace), optional($.amount), repeat($._whitespace), "}")),
    timer:              $ => prec.left(PREC.modifier, seq("~", optional($.name), "{", repeat($._whitespace), optional($.amount), repeat($._whitespace), "}")),

    // "%" will soon be changed to "*".
    // Ref: https://github.com/cooklang/spec/blob/main/EBNF.md
    name:               $ => choice($._word, $._multiword),
    amount:             $ => prec.left(PREC.amount, choice($.quantity, seq($.quantity, repeat($._whitespace), "%", repeat($._whitespace), $.units))),
    quantity:           $ => prec(PREC.quantity, choice($._number, $._multiword)),
    units:              $ => choice($._word, $._multiword, $._punctuation),

    _multiword:         $ => seq(repeat1(prec.left(PREC.multiword, seq($._word, repeat1($._whitespace)))), optional($._word)),
    _word:              $ => repeat1(choice($._alphabetic, $._digit, $._unreserved_symbol)),
    _text_item:         $ => repeat1(choice($._alphabetic, $._digit, $._symbol, $._punctuation, $._whitespace)),

    _number:            $ => choice($._integer, $._fractional, $._decimal),
    _fractional:        $ => seq($._integer, repeat($._whitespace), "/", repeat($._whitespace), $._integer),
    _decimal:           $ => seq($._integer, ".", $._integer),
    _integer:           $ => choice($._zero, seq($._non_zero_digit, repeat($._digit))),
    _digit:             $ => choice($._zero, $._non_zero_digit),
    _non_zero_digit:    $ => /[1-9]/,
    _zero:              $ => "0",

    _alphabetic:        $ => choice(/\p{L}/, /\p{M}/, "-"), // NOTE: "-" is not in the official grammar.
    _whitespace:        $ => choice(/\p{Zs}/, /\u0009/),
    _punctuation:       $ => choice(/\p{P}/),
    _unreserved_symbol: $ => choice(/\p{S}/), // TODO: remove bad symbol
    _symbol:            $ => choice(/\p{S}/),
  }
});
