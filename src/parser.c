#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 185
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_recipe_token1 = 1,
  anon_sym_GT_GT = 2,
  anon_sym_COLON = 3,
  anon_sym_DASH = 4,
  aux_sym_comment_token1 = 5,
  anon_sym_LBRACK_DASH = 6,
  aux_sym_block_comment_token1 = 7,
  anon_sym_RBRACK = 8,
  anon_sym_AT = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_POUND = 12,
  anon_sym_TILDE = 13,
  anon_sym_PERCENT = 14,
  anon_sym_SLASH = 15,
  anon_sym_DOT = 16,
  sym__non_zero_digit = 17,
  sym__zero = 18,
  aux_sym__alphabetic_token1 = 19,
  aux_sym__alphabetic_token2 = 20,
  aux_sym__whitespace_token1 = 21,
  aux_sym__whitespace_token2 = 22,
  aux_sym__punctuation_token1 = 23,
  aux_sym__unreserved_symbol_token1 = 24,
  sym__newline = 25,
  sym_recipe = 26,
  sym__line = 27,
  sym_metadata = 28,
  sym_step = 29,
  sym_comment = 30,
  sym_block_comment = 31,
  sym_ingredient = 32,
  sym_cookware = 33,
  sym_timer = 34,
  sym_amount = 35,
  sym_quantity = 36,
  sym_units = 37,
  sym__multiword = 38,
  aux_sym__word = 39,
  aux_sym__text_item = 40,
  sym__number = 41,
  sym__fractional = 42,
  sym__decimal = 43,
  sym__integer = 44,
  sym__digit = 45,
  sym__alphabetic = 46,
  sym__whitespace = 47,
  sym__punctuation = 48,
  sym__unreserved_symbol = 49,
  sym__symbol = 50,
  aux_sym_recipe_repeat1 = 51,
  aux_sym_step_repeat1 = 52,
  aux_sym_ingredient_repeat1 = 53,
  aux_sym__multiword_repeat1 = 54,
  aux_sym__integer_repeat1 = 55,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_recipe_token1] = "recipe_token1",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH] = "-",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_LBRACK_DASH] = "[-",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_POUND] = "#",
  [anon_sym_TILDE] = "~",
  [anon_sym_PERCENT] = "%",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOT] = ".",
  [sym__non_zero_digit] = "_non_zero_digit",
  [sym__zero] = "_zero",
  [aux_sym__alphabetic_token1] = "_alphabetic_token1",
  [aux_sym__alphabetic_token2] = "_alphabetic_token2",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [aux_sym__whitespace_token2] = "_whitespace_token2",
  [aux_sym__punctuation_token1] = "_punctuation_token1",
  [aux_sym__unreserved_symbol_token1] = "_unreserved_symbol_token1",
  [sym__newline] = "_newline",
  [sym_recipe] = "recipe",
  [sym__line] = "_line",
  [sym_metadata] = "metadata",
  [sym_step] = "step",
  [sym_comment] = "comment",
  [sym_block_comment] = "block_comment",
  [sym_ingredient] = "ingredient",
  [sym_cookware] = "cookware",
  [sym_timer] = "timer",
  [sym_amount] = "amount",
  [sym_quantity] = "quantity",
  [sym_units] = "units",
  [sym__multiword] = "_multiword",
  [aux_sym__word] = "_word",
  [aux_sym__text_item] = "_text_item",
  [sym__number] = "_number",
  [sym__fractional] = "_fractional",
  [sym__decimal] = "_decimal",
  [sym__integer] = "_integer",
  [sym__digit] = "_digit",
  [sym__alphabetic] = "_alphabetic",
  [sym__whitespace] = "_whitespace",
  [sym__punctuation] = "_punctuation",
  [sym__unreserved_symbol] = "_unreserved_symbol",
  [sym__symbol] = "_symbol",
  [aux_sym_recipe_repeat1] = "recipe_repeat1",
  [aux_sym_step_repeat1] = "step_repeat1",
  [aux_sym_ingredient_repeat1] = "ingredient_repeat1",
  [aux_sym__multiword_repeat1] = "_multiword_repeat1",
  [aux_sym__integer_repeat1] = "_integer_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_recipe_token1] = aux_sym_recipe_token1,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_LBRACK_DASH] = anon_sym_LBRACK_DASH,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__non_zero_digit] = sym__non_zero_digit,
  [sym__zero] = sym__zero,
  [aux_sym__alphabetic_token1] = aux_sym__alphabetic_token1,
  [aux_sym__alphabetic_token2] = aux_sym__alphabetic_token2,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [aux_sym__whitespace_token2] = aux_sym__whitespace_token2,
  [aux_sym__punctuation_token1] = aux_sym__punctuation_token1,
  [aux_sym__unreserved_symbol_token1] = aux_sym__unreserved_symbol_token1,
  [sym__newline] = sym__newline,
  [sym_recipe] = sym_recipe,
  [sym__line] = sym__line,
  [sym_metadata] = sym_metadata,
  [sym_step] = sym_step,
  [sym_comment] = sym_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_ingredient] = sym_ingredient,
  [sym_cookware] = sym_cookware,
  [sym_timer] = sym_timer,
  [sym_amount] = sym_amount,
  [sym_quantity] = sym_quantity,
  [sym_units] = sym_units,
  [sym__multiword] = sym__multiword,
  [aux_sym__word] = aux_sym__word,
  [aux_sym__text_item] = aux_sym__text_item,
  [sym__number] = sym__number,
  [sym__fractional] = sym__fractional,
  [sym__decimal] = sym__decimal,
  [sym__integer] = sym__integer,
  [sym__digit] = sym__digit,
  [sym__alphabetic] = sym__alphabetic,
  [sym__whitespace] = sym__whitespace,
  [sym__punctuation] = sym__punctuation,
  [sym__unreserved_symbol] = sym__unreserved_symbol,
  [sym__symbol] = sym__symbol,
  [aux_sym_recipe_repeat1] = aux_sym_recipe_repeat1,
  [aux_sym_step_repeat1] = aux_sym_step_repeat1,
  [aux_sym_ingredient_repeat1] = aux_sym_ingredient_repeat1,
  [aux_sym__multiword_repeat1] = aux_sym__multiword_repeat1,
  [aux_sym__integer_repeat1] = aux_sym__integer_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_recipe_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__non_zero_digit] = {
    .visible = false,
    .named = true,
  },
  [sym__zero] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__alphabetic_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__alphabetic_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__whitespace_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__punctuation_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__unreserved_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_recipe] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_step] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_ingredient] = {
    .visible = true,
    .named = true,
  },
  [sym_cookware] = {
    .visible = true,
    .named = true,
  },
  [sym_timer] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_units] = {
    .visible = true,
    .named = true,
  },
  [sym__multiword] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__word] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_item] = {
    .visible = false,
    .named = false,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym__fractional] = {
    .visible = false,
    .named = true,
  },
  [sym__decimal] = {
    .visible = false,
    .named = true,
  },
  [sym__integer] = {
    .visible = false,
    .named = true,
  },
  [sym__digit] = {
    .visible = false,
    .named = true,
  },
  [sym__alphabetic] = {
    .visible = false,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__punctuation] = {
    .visible = false,
    .named = true,
  },
  [sym__unreserved_symbol] = {
    .visible = false,
    .named = true,
  },
  [sym__symbol] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_recipe_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_step_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ingredient_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiword_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__integer_repeat1] = {
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

static inline bool aux_sym__alphabetic_token1_character_set_1(int32_t c) {
  return (c < 6512
    ? (c < 3086
      ? (c < 2575
        ? (c < 1994
          ? (c < 1329
            ? (c < 890
              ? (c < 181
                ? (c < 170
                  ? (c >= 'A' && c <= 'z')
                  : c <= 170)
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 887)))
              : (c <= 895 || (c < 910
                ? (c < 908
                  ? (c >= 902 && c <= 906)
                  : c <= 908)
                : (c <= 929 || (c >= 931 && c <= 1327)))))
            : (c <= 1366 || (c < 1646
              ? (c < 1519
                ? (c < 1488
                  ? (c >= 1369 && c <= 1416)
                  : c <= 1514)
                : (c <= 1522 || (c >= 1568 && c <= 1610)))
              : (c <= 1749 || (c < 1808
                ? (c < 1786
                  ? (c >= 1765 && c <= 1775)
                  : c <= 1791)
                : (c <= 1839 || (c >= 1869 && c <= 1969)))))))
          : (c <= 2042 || (c < 2474
            ? (c < 2308
              ? (c < 2144
                ? (c < 2112
                  ? (c >= 2048 && c <= 2088)
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))
              : (c <= 2401 || (c < 2447
                ? (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)
                : (c <= 2448 || (c >= 2451 && c <= 2472)))))
            : (c <= 2480 || (c < 2524
              ? (c < 2493
                ? (c < 2486
                  ? c == 2482
                  : c <= 2489)
                : (c <= 2493 || c == 2510))
              : (c <= 2525 || (c < 2556
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)
                : (c <= 2556 || (c >= 2565 && c <= 2570)))))))))
        : (c <= 2576 || (c < 2835
          ? (c < 2707
            ? (c < 2649
              ? (c < 2610
                ? (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)
                : (c <= 2611 || (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)))
              : (c <= 2652 || (c < 2693
                ? (c < 2674
                  ? c == 2654
                  : c <= 2676)
                : (c <= 2701 || (c >= 2703 && c <= 2705)))))
            : (c <= 2728 || (c < 2768
              ? (c < 2741
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)
                : (c <= 2745 || c == 2749))
              : (c <= 2768 || (c < 2821
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : c <= 2809)
                : (c <= 2828 || (c >= 2831 && c <= 2832)))))))
          : (c <= 2856 || (c < 2958
            ? (c < 2908
              ? (c < 2869
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)
                : (c <= 2873 || c == 2877))
              : (c <= 2909 || (c < 2947
                ? (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)
                : (c <= 2947 || (c >= 2949 && c <= 2954)))))
            : (c <= 2960 || (c < 2979
              ? (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c >= 2974 && c <= 2975)))
              : (c <= 2980 || (c < 3024
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : c <= 3001)
                : (c <= 3024 || (c >= 3077 && c <= 3084)))))))))))
      : (c <= 3088 || (c < 3976
        ? (c < 3450
          ? (c < 3261
            ? (c < 3200
              ? (c < 3133
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)
                : (c <= 3133 || (c < 3168
                  ? (c >= 3160 && c <= 3162)
                  : c <= 3169)))
              : (c <= 3212 || (c < 3242
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)
                : (c <= 3251 || (c >= 3253 && c <= 3257)))))
            : (c <= 3261 || (c < 3342
              ? (c < 3313
                ? (c < 3296
                  ? c == 3294
                  : c <= 3297)
                : (c <= 3314 || (c >= 3332 && c <= 3340)))
              : (c <= 3344 || (c < 3412
                ? (c < 3406
                  ? (c >= 3346 && c <= 3389)
                  : c <= 3406)
                : (c <= 3414 || (c >= 3423 && c <= 3425)))))))
          : (c <= 3455 || (c < 3718
            ? (c < 3520
              ? (c < 3507
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)
                : (c <= 3515 || c == 3517))
              : (c <= 3526 || (c < 3713
                ? (c < 3648
                  ? (c >= 3585 && c <= 3635)
                  : c <= 3654)
                : (c <= 3714 || c == 3716))))
            : (c <= 3722 || (c < 3782
              ? (c < 3751
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)
                : (c <= 3773 || (c >= 3776 && c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c >= 3913 && c <= 3948)))))))))
        : (c <= 3980 || (c < 4888
          ? (c < 4704
            ? (c < 4304
              ? (c < 4256
                ? (c < 4176
                  ? (c >= 4096 && c <= 4159)
                  : c <= 4238)
                : (c <= 4293 || (c < 4301
                  ? c == 4295
                  : c <= 4301)))
              : (c <= 4680 || (c < 4696
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)
                : (c <= 4696 || (c >= 4698 && c <= 4701)))))
            : (c <= 4744 || (c < 4800
              ? (c < 4786
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)
                : (c <= 4789 || (c >= 4792 && c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c >= 4882 && c <= 4885)))))))
          : (c <= 4954 || (c < 5920
            ? (c < 5761
              ? (c < 5112
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)
                : (c <= 5117 || (c >= 5121 && c <= 5759)))
              : (c <= 5786 || (c < 5888
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : c <= 5880)
                : (c <= 5900 || (c >= 5902 && c <= 5905)))))
            : (c <= 5937 || (c < 6176
              ? (c < 5998
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)
                : (c <= 6000 || (c >= 6016 && c <= 6108)))
              : (c <= 6264 || (c < 6400
                ? (c < 6320
                  ? (c >= 6272 && c <= 6314)
                  : c <= 6389)
                : (c <= 6430 || (c >= 6480 && c <= 6509)))))))))))))
    : (c <= 6516 || (c < 43514
      ? (c < 11559
        ? (c < 8025
          ? (c < 7258
            ? (c < 6917
              ? (c < 6656
                ? (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)
                : (c <= 6678 || (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : c <= 6823)))
              : (c <= 6987 || (c < 7168
                ? (c < 7098
                  ? (c >= 7043 && c <= 7087)
                  : c <= 7141)
                : (c <= 7203 || (c >= 7245 && c <= 7247)))))
            : (c <= 7304 || (c < 7680
              ? (c < 7401
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)
                : (c <= 7418 || (c >= 7424 && c <= 7615)))
              : (c <= 7957 || (c < 8008
                ? (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)
                : (c <= 8013 || (c >= 8016 && c <= 8023)))))))
          : (c <= 8025 || (c < 8182
            ? (c < 8118
              ? (c < 8031
                ? (c < 8029
                  ? c == 8027
                  : c <= 8029)
                : (c <= 8061 || (c >= 8064 && c <= 8116)))
              : (c <= 8132 || (c < 8160
                ? (c < 8150
                  ? (c >= 8134 && c <= 8147)
                  : c <= 8155)
                : (c <= 8172 || (c >= 8178 && c <= 8180)))))
            : (c <= 8188 || (c < 8579
              ? (c < 8336
                ? (c < 8319
                  ? c == 8305
                  : c <= 8319)
                : (c <= 8348 || (c >= 8450 && c <= 8526)))
              : (c <= 8580 || (c < 11360
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : c <= 11358)
                : (c <= 11507 || (c >= 11520 && c <= 11557)))))))))
        : (c <= 11559 || (c < 12704
          ? (c < 11728
            ? (c < 11688
              ? (c < 11631
                ? (c < 11568
                  ? c == 11565
                  : c <= 11623)
                : (c <= 11631 || (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : c <= 11686)))
              : (c <= 11694 || (c < 11712
                ? (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)
                : (c <= 11718 || (c >= 11720 && c <= 11726)))))
            : (c <= 11734 || (c < 12347
              ? (c < 12293
                ? (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)
                : (c <= 12294 || (c >= 12337 && c <= 12341)))
              : (c <= 12348 || (c < 12549
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12543)
                : (c <= 12591 || (c >= 12593 && c <= 12686)))))))
          : (c <= 12735 || (c < 42946
            ? (c < 40960
              ? (c < 19903
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)
                : (c <= 19968 || c == 40956))
              : (c <= 42124 || (c < 42560
                ? (c < 42538
                  ? (c >= 42192 && c <= 42527)
                  : c <= 42539)
                : (c <= 42725 || (c >= 42775 && c <= 42943)))))
            : (c <= 42954 || (c < 43274
              ? (c < 43138
                ? (c < 43072
                  ? (c >= 42997 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c >= 43250 && c <= 43262)))
              : (c <= 43334 || (c < 43471
                ? (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)
                : (c <= 43471 || (c >= 43488 && c <= 43503)))))))))))
      : (c <= 43518 || (c < 65599
        ? (c < 64312
          ? (c < 43888
            ? (c < 43785
              ? (c < 43616
                ? (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43595)
                : (c <= 43714 || (c < 43777
                  ? (c >= 43739 && c <= 43764)
                  : c <= 43782)))
              : (c <= 43790 || (c < 43816
                ? (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)
                : (c <= 43822 || (c >= 43824 && c <= 43881)))))
            : (c <= 44002 || (c < 63744
              ? (c < 55216
                ? (c < 55203
                  ? c == 44032
                  : c <= 55203)
                : (c <= 55238 || (c >= 55243 && c <= 55291)))
              : (c <= 64109 || (c < 64275
                ? (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : c <= 64262)
                : (c <= 64279 || (c >= 64285 && c <= 64310)))))))
          : (c <= 64316 || (c < 65142
            ? (c < 64467
              ? (c < 64323
                ? (c < 64320
                  ? c == 64318
                  : c <= 64321)
                : (c <= 64324 || (c >= 64326 && c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c >= 65136 && c <= 65140)))))
            : (c <= 65276 || (c < 65498
              ? (c < 65482
                ? (c < 65474
                  ? (c >= 65313 && c <= 65470)
                  : c <= 65479)
                : (c <= 65487 || (c >= 65490 && c <= 65495)))
              : (c <= 65500 || (c < 65576
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : c <= 65574)
                : (c <= 65594 || (c >= 65596 && c <= 65597)))))))))
        : (c <= 65613 || (c < 67592
          ? (c < 66504
            ? (c < 66349
              ? (c < 66176
                ? (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)
                : (c <= 66204 || (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : c <= 66335)))
              : (c <= 66368 || (c < 66432
                ? (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)
                : (c <= 66461 || (c >= 66464 && c <= 66499)))))
            : (c <= 66511 || (c < 66864
              ? (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c >= 66816 && c <= 66855)))
              : (c <= 66915 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
                : (c <= 67431 || (c >= 67584 && c <= 67589)))))))
          : (c <= 67592 || (c < 67872
            ? (c < 67680
              ? (c < 67644
                ? (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : c <= 67640)
                : (c <= 67644 || (c >= 67647 && c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c >= 67840 && c <= 67861)))))
            : (c <= 67897 || (c < 68117
              ? (c < 68096
                ? (c < 68030
                  ? (c >= 67968 && c <= 68023)
                  : c <= 68031)
                : (c <= 68096 || (c >= 68112 && c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c >= 68288 && c <= 68309)))))))))))))));
}

static inline bool aux_sym__alphabetic_token1_character_set_2(int32_t c) {
  return (c < 6512
    ? (c < 3077
      ? (c < 2565
        ? (c < 1994
          ? (c < 1329
            ? (c < 890
              ? (c < 181
                ? (c < 170
                  ? (c >= 'A' && c <= 'z')
                  : c <= 170)
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 887)))
              : (c <= 895 || (c < 910
                ? (c < 908
                  ? (c >= 902 && c <= 906)
                  : c <= 908)
                : (c <= 929 || (c >= 931 && c <= 1327)))))
            : (c <= 1366 || (c < 1646
              ? (c < 1519
                ? (c < 1488
                  ? (c >= 1369 && c <= 1416)
                  : c <= 1514)
                : (c <= 1522 || (c >= 1568 && c <= 1610)))
              : (c <= 1749 || (c < 1808
                ? (c < 1786
                  ? (c >= 1765 && c <= 1775)
                  : c <= 1791)
                : (c <= 1839 || (c >= 1869 && c <= 1969)))))))
          : (c <= 2042 || (c < 2451
            ? (c < 2230
              ? (c < 2144
                ? (c < 2112
                  ? (c >= 2048 && c <= 2088)
                  : c <= 2136)
                : (c <= 2154 || (c >= 2208 && c <= 2228)))
              : (c <= 2247 || (c < 2437
                ? (c < 2417
                  ? (c >= 2308 && c <= 2401)
                  : c <= 2432)
                : (c <= 2444 || (c >= 2447 && c <= 2448)))))
            : (c <= 2472 || (c < 2510
              ? (c < 2486
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : c <= 2482)
                : (c <= 2489 || c == 2493))
              : (c <= 2510 || (c < 2544
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)
                : (c <= 2545 || c == 2556))))))))
        : (c <= 2570 || (c < 2831
          ? (c < 2703
            ? (c < 2616
              ? (c < 2602
                ? (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c >= 2693 && c <= 2701)))))
            : (c <= 2705 || (c < 2749
              ? (c < 2738
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : c <= 2736)
                : (c <= 2739 || (c >= 2741 && c <= 2745)))
              : (c <= 2749 || (c < 2809
                ? (c < 2784
                  ? c == 2768
                  : c <= 2785)
                : (c <= 2809 || (c >= 2821 && c <= 2828)))))))
          : (c <= 2832 || (c < 2949
            ? (c < 2877
              ? (c < 2866
                ? (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)
                : (c <= 2867 || (c >= 2869 && c <= 2873)))
              : (c <= 2877 || (c < 2929
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)
                : (c <= 2929 || c == 2947))))
            : (c <= 2954 || (c < 2974
              ? (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || c == 2972))
              : (c <= 2975 || (c < 2990
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)
                : (c <= 3001 || c == 3024))))))))))
      : (c <= 3084 || (c < 3913
        ? (c < 3423
          ? (c < 3253
            ? (c < 3168
              ? (c < 3114
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)
                : (c <= 3129 || (c < 3160
                  ? c == 3133
                  : c <= 3162)))
              : (c <= 3169 || (c < 3218
                ? (c < 3214
                  ? (c >= 3200 && c <= 3212)
                  : c <= 3216)
                : (c <= 3240 || (c >= 3242 && c <= 3251)))))
            : (c <= 3257 || (c < 3332
              ? (c < 3296
                ? (c < 3294
                  ? c == 3261
                  : c <= 3294)
                : (c <= 3297 || (c >= 3313 && c <= 3314)))
              : (c <= 3340 || (c < 3406
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3389)
                : (c <= 3406 || (c >= 3412 && c <= 3414)))))))
          : (c <= 3425 || (c < 3716
            ? (c < 3517
              ? (c < 3482
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : c <= 3478)
                : (c <= 3505 || (c >= 3507 && c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : c <= 3635)
                : (c <= 3654 || (c >= 3713 && c <= 3714)))))
            : (c <= 3716 || (c < 3776
              ? (c < 3749
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)
                : (c <= 3749 || (c >= 3751 && c <= 3773)))
              : (c <= 3780 || (c < 3840
                ? (c < 3804
                  ? c == 3782
                  : c <= 3807)
                : (c <= 3840 || (c >= 3904 && c <= 3911)))))))))
        : (c <= 3948 || (c < 4882
          ? (c < 4698
            ? (c < 4301
              ? (c < 4176
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4159)
                : (c <= 4238 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))
              : (c <= 4301 || (c < 4688
                ? (c < 4682
                  ? (c >= 4304 && c <= 4680)
                  : c <= 4685)
                : (c <= 4694 || c == 4696))))
            : (c <= 4701 || (c < 4792
              ? (c < 4752
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : c <= 4749)
                : (c <= 4784 || (c >= 4786 && c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c >= 4824 && c <= 4880)))))))
          : (c <= 4885 || (c < 5920
            ? (c < 5121
              ? (c < 5024
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : c <= 5007)
                : (c <= 5109 || (c >= 5112 && c <= 5117)))
              : (c <= 5786 || (c < 5888
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : c <= 5880)
                : (c <= 5900 || (c >= 5902 && c <= 5905)))))
            : (c <= 5937 || (c < 6176
              ? (c < 5998
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)
                : (c <= 6000 || (c >= 6016 && c <= 6108)))
              : (c <= 6264 || (c < 6400
                ? (c < 6320
                  ? (c >= 6272 && c <= 6314)
                  : c <= 6389)
                : (c <= 6430 || (c >= 6480 && c <= 6509)))))))))))))
    : (c <= 6516 || (c < 43514
      ? (c < 11559
        ? (c < 8025
          ? (c < 7258
            ? (c < 6917
              ? (c < 6656
                ? (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)
                : (c <= 6678 || (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : c <= 6823)))
              : (c <= 6987 || (c < 7168
                ? (c < 7098
                  ? (c >= 7043 && c <= 7087)
                  : c <= 7141)
                : (c <= 7203 || (c >= 7245 && c <= 7247)))))
            : (c <= 7304 || (c < 7680
              ? (c < 7401
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)
                : (c <= 7418 || (c >= 7424 && c <= 7615)))
              : (c <= 7957 || (c < 8008
                ? (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)
                : (c <= 8013 || (c >= 8016 && c <= 8023)))))))
          : (c <= 8025 || (c < 8182
            ? (c < 8118
              ? (c < 8031
                ? (c < 8029
                  ? c == 8027
                  : c <= 8029)
                : (c <= 8061 || (c >= 8064 && c <= 8116)))
              : (c <= 8132 || (c < 8160
                ? (c < 8150
                  ? (c >= 8134 && c <= 8147)
                  : c <= 8155)
                : (c <= 8172 || (c >= 8178 && c <= 8180)))))
            : (c <= 8188 || (c < 8579
              ? (c < 8336
                ? (c < 8319
                  ? c == 8305
                  : c <= 8319)
                : (c <= 8348 || (c >= 8450 && c <= 8526)))
              : (c <= 8580 || (c < 11360
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : c <= 11358)
                : (c <= 11507 || (c >= 11520 && c <= 11557)))))))))
        : (c <= 11559 || (c < 12704
          ? (c < 11728
            ? (c < 11688
              ? (c < 11631
                ? (c < 11568
                  ? c == 11565
                  : c <= 11623)
                : (c <= 11631 || (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : c <= 11686)))
              : (c <= 11694 || (c < 11712
                ? (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)
                : (c <= 11718 || (c >= 11720 && c <= 11726)))))
            : (c <= 11734 || (c < 12347
              ? (c < 12293
                ? (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)
                : (c <= 12294 || (c >= 12337 && c <= 12341)))
              : (c <= 12348 || (c < 12549
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12543)
                : (c <= 12591 || (c >= 12593 && c <= 12686)))))))
          : (c <= 12735 || (c < 42946
            ? (c < 40960
              ? (c < 19903
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)
                : (c <= 19968 || c == 40956))
              : (c <= 42124 || (c < 42560
                ? (c < 42538
                  ? (c >= 42192 && c <= 42527)
                  : c <= 42539)
                : (c <= 42725 || (c >= 42775 && c <= 42943)))))
            : (c <= 42954 || (c < 43274
              ? (c < 43138
                ? (c < 43072
                  ? (c >= 42997 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c >= 43250 && c <= 43262)))
              : (c <= 43334 || (c < 43471
                ? (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)
                : (c <= 43471 || (c >= 43488 && c <= 43503)))))))))))
      : (c <= 43518 || (c < 65599
        ? (c < 64312
          ? (c < 43888
            ? (c < 43785
              ? (c < 43616
                ? (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43595)
                : (c <= 43714 || (c < 43777
                  ? (c >= 43739 && c <= 43764)
                  : c <= 43782)))
              : (c <= 43790 || (c < 43816
                ? (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)
                : (c <= 43822 || (c >= 43824 && c <= 43881)))))
            : (c <= 44002 || (c < 63744
              ? (c < 55216
                ? (c < 55203
                  ? c == 44032
                  : c <= 55203)
                : (c <= 55238 || (c >= 55243 && c <= 55291)))
              : (c <= 64109 || (c < 64275
                ? (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : c <= 64262)
                : (c <= 64279 || (c >= 64285 && c <= 64310)))))))
          : (c <= 64316 || (c < 65142
            ? (c < 64467
              ? (c < 64323
                ? (c < 64320
                  ? c == 64318
                  : c <= 64321)
                : (c <= 64324 || (c >= 64326 && c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c >= 65136 && c <= 65140)))))
            : (c <= 65276 || (c < 65498
              ? (c < 65482
                ? (c < 65474
                  ? (c >= 65313 && c <= 65470)
                  : c <= 65479)
                : (c <= 65487 || (c >= 65490 && c <= 65495)))
              : (c <= 65500 || (c < 65576
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : c <= 65574)
                : (c <= 65594 || (c >= 65596 && c <= 65597)))))))))
        : (c <= 65613 || (c < 67592
          ? (c < 66504
            ? (c < 66349
              ? (c < 66176
                ? (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)
                : (c <= 66204 || (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : c <= 66335)))
              : (c <= 66368 || (c < 66432
                ? (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)
                : (c <= 66461 || (c >= 66464 && c <= 66499)))))
            : (c <= 66511 || (c < 66864
              ? (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c >= 66816 && c <= 66855)))
              : (c <= 66915 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
                : (c <= 67431 || (c >= 67584 && c <= 67589)))))))
          : (c <= 67592 || (c < 67872
            ? (c < 67680
              ? (c < 67644
                ? (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : c <= 67640)
                : (c <= 67644 || (c >= 67647 && c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c >= 67840 && c <= 67861)))))
            : (c <= 67897 || (c < 68117
              ? (c < 68096
                ? (c < 68030
                  ? (c >= 67968 && c <= 68023)
                  : c <= 68031)
                : (c <= 68096 || (c >= 68112 && c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c >= 68288 && c <= 68309)))))))))))))));
}

static inline bool aux_sym__alphabetic_token1_character_set_3(int32_t c) {
  return (c < 6528
    ? (c < 3077
      ? (c < 2527
        ? (c < 1765
          ? (c < 908
            ? (c < 192
              ? (c < 170
                ? (c < 'a'
                  ? (c >= 'A' && c <= 'Z')
                  : c <= 'z')
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 887 || (c < 902
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)
                : (c <= 902 || (c >= 904 && c <= 906)))))
            : (c <= 908 || (c < 1488
              ? (c < 1329
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))
              : (c <= 1514 || (c < 1646
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : c <= 1610)
                : (c <= 1747 || c == 1749))))))
          : (c <= 1775 || (c < 2308
            ? (c < 2048
              ? (c < 1869
                ? (c < 1808
                  ? (c >= 1786 && c <= 1791)
                  : c <= 1839)
                : (c <= 1969 || (c < 2042
                  ? (c >= 1994 && c <= 2037)
                  : c <= 2042)))
              : (c <= 2088 || (c < 2208
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2228 || (c >= 2230 && c <= 2247)))))
            : (c <= 2401 || (c < 2482
              ? (c < 2447
                ? (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2510
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : c <= 2493)
                : (c <= 2510 || (c >= 2524 && c <= 2525)))))))))
        : (c <= 2529 || (c < 2809
          ? (c < 2654
            ? (c < 2602
              ? (c < 2565
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : c <= 2556)
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c >= 2649 && c <= 2652)))))
            : (c <= 2654 || (c < 2738
              ? (c < 2703
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : c <= 2736)))
              : (c <= 2739 || (c < 2768
                ? (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)
                : (c <= 2768 || (c >= 2784 && c <= 2785)))))))
          : (c <= 2809 || (c < 2947
            ? (c < 2869
              ? (c < 2835
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))
              : (c <= 2873 || (c < 2911
                ? (c < 2908
                  ? c == 2877
                  : c <= 2909)
                : (c <= 2913 || c == 2929))))
            : (c <= 2947 || (c < 2974
              ? (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))
              : (c <= 2975 || (c < 2990
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)
                : (c <= 3001 || c == 3024))))))))))
      : (c <= 3084 || (c < 4096
        ? (c < 3423
          ? (c < 3242
            ? (c < 3168
              ? (c < 3114
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)
                : (c <= 3129 || (c < 3160
                  ? c == 3133
                  : c <= 3162)))
              : (c <= 3169 || (c < 3214
                ? (c < 3205
                  ? c == 3200
                  : c <= 3212)
                : (c <= 3216 || (c >= 3218 && c <= 3240)))))
            : (c <= 3251 || (c < 3332
              ? (c < 3294
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3406
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3389)
                : (c <= 3406 || (c >= 3412 && c <= 3414)))))))
          : (c <= 3425 || (c < 3718
            ? (c < 3520
              ? (c < 3482
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : c <= 3478)
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3648
                  ? (c >= 3585 && c <= 3635)
                  : c <= 3654)
                : (c <= 3714 || c == 3716))))
            : (c <= 3722 || (c < 3804
              ? (c < 3751
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c >= 3976 && c <= 3980)))))))))
        : (c <= 4159 || (c < 4992
          ? (c < 4704
            ? (c < 4348
              ? (c < 4295
                ? (c < 4256
                  ? (c >= 4176 && c <= 4238)
                  : c <= 4293)
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))
              : (c <= 4680 || (c < 4696
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)
                : (c <= 4696 || (c >= 4698 && c <= 4701)))))
            : (c <= 4744 || (c < 4802
              ? (c < 4786
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))
              : (c <= 4805 || (c < 4882
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)
                : (c <= 4885 || (c >= 4888 && c <= 4954)))))))
          : (c <= 5007 || (c < 5984
            ? (c < 5873
              ? (c < 5121
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : c <= 5117)
                : (c <= 5740 || (c < 5792
                  ? (c >= 5743 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5920
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : c <= 5905)
                : (c <= 5937 || (c >= 5952 && c <= 5969)))))
            : (c <= 5996 || (c < 6272
              ? (c < 6103
                ? (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)
                : (c <= 6103 || (c < 6176
                  ? c == 6108
                  : c <= 6264)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c >= 6512 && c <= 6516)))))))))))))
    : (c <= 6571 || (c < 43471
      ? (c < 11631
        ? (c < 8027
          ? (c < 7296
            ? (c < 7043
              ? (c < 6688
                ? (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)
                : (c <= 6740 || (c < 6917
                  ? c == 6823
                  : c <= 6987)))
              : (c <= 7087 || (c < 7245
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : c <= 7203)
                : (c <= 7247 || (c >= 7258 && c <= 7293)))))
            : (c <= 7304 || (c < 7960
              ? (c < 7401
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8016
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : c <= 8013)
                : (c <= 8023 || c == 8025))))))
          : (c <= 8027 || (c < 8319
            ? (c < 8150
              ? (c < 8064
                ? (c < 8031
                  ? c == 8029
                  : c <= 8061)
                : (c <= 8116 || (c < 8134
                  ? (c >= 8118 && c <= 8132)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8182
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : c <= 8180)
                : (c <= 8188 || c == 8305))))
            : (c <= 8319 || (c < 11360
              ? (c < 8579
                ? (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8526)
                : (c <= 8580 || (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : c <= 11358)))
              : (c <= 11507 || (c < 11565
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)
                : (c <= 11565 || (c >= 11568 && c <= 11623)))))))))
        : (c <= 11631 || (c < 13312
          ? (c < 12293
            ? (c < 11712
              ? (c < 11688
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : c <= 11686)
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))
              : (c <= 11718 || (c < 11736
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)
                : (c <= 11742 || c == 11823))))
            : (c <= 12294 || (c < 12540
              ? (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))
              : (c <= 12543 || (c < 12704
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)
                : (c <= 12735 || (c >= 12784 && c <= 12799)))))))
          : (c <= 13312 || (c < 42946
            ? (c < 42512
              ? (c < 40960
                ? (c < 40956
                  ? (c >= 19903 && c <= 19968)
                  : c <= 40956)
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))
              : (c <= 42527 || (c < 42623
                ? (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)
                : (c <= 42725 || (c >= 42775 && c <= 42943)))))
            : (c <= 42954 || (c < 43261
              ? (c < 43138
                ? (c < 43072
                  ? (c >= 42997 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))
              : (c <= 43262 || (c < 43360
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : c <= 43334)
                : (c <= 43388 || (c >= 43396 && c <= 43442)))))))))))
      : (c <= 43471 || (c < 65549
        ? (c < 64256
          ? (c < 43793
            ? (c < 43739
              ? (c < 43520
                ? (c < 43514
                  ? (c >= 43488 && c <= 43503)
                  : c <= 43518)
                : (c <= 43560 || (c < 43616
                  ? (c >= 43584 && c <= 43595)
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c >= 43785 && c <= 43790)))))
            : (c <= 43798 || (c < 55203
              ? (c < 43824
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : c <= 43822)
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 63744
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : c <= 55291)
                : (c <= 64109 || (c >= 64112 && c <= 64217)))))))
          : (c <= 64262 || (c < 65008
            ? (c < 64323
              ? (c < 64312
                ? (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64310)
                : (c <= 64316 || (c < 64320
                  ? c == 64318
                  : c <= 64321)))
              : (c <= 64324 || (c < 64848
                ? (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)
                : (c <= 64911 || (c >= 64914 && c <= 64967)))))
            : (c <= 65019 || (c < 65474
              ? (c < 65313
                ? (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)
                : (c <= 65338 || (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : c <= 65470)))
              : (c <= 65479 || (c < 65498
                ? (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)
                : (c <= 65500 || (c >= 65536 && c <= 65547)))))))))
        : (c <= 65574 || (c < 67424
          ? (c < 66384
            ? (c < 66176
              ? (c < 65599
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : c <= 65597)
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))
              : (c <= 66204 || (c < 66349
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : c <= 66335)
                : (c <= 66368 || (c >= 66370 && c <= 66377)))))
            : (c <= 66421 || (c < 66776
              ? (c < 66504
                ? (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)
                : (c <= 66511 || (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)))
              : (c <= 66811 || (c < 67072
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)
                : (c <= 67382 || (c >= 67392 && c <= 67413)))))))
          : (c <= 67431 || (c < 67840
            ? (c < 67647
              ? (c < 67594
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67808
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : c <= 67742)
                : (c <= 67826 || (c >= 67828 && c <= 67829)))))
            : (c <= 67861 || (c < 68117
              ? (c < 68030
                ? (c < 67968
                  ? (c >= 67872 && c <= 67897)
                  : c <= 68023)
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c >= 68288 && c <= 68309)))))))))))))));
}

static inline bool aux_sym__alphabetic_token1_character_set_4(int32_t c) {
  return (c < 6528
    ? (c < 3086
      ? (c < 2544
        ? (c < 1786
          ? (c < 910
            ? (c < 192
              ? (c < 170
                ? (c < 'a'
                  ? (c >= 'A' && c <= 'Z')
                  : c <= 'z')
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 887 || (c < 902
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))))
            : (c <= 929 || (c < 1519
              ? (c < 1369
                ? (c < 1329
                  ? (c >= 931 && c <= 1327)
                  : c <= 1366)
                : (c <= 1369 || (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : c <= 1514)))
              : (c <= 1522 || (c < 1749
                ? (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1747)
                : (c <= 1749 || (c >= 1765 && c <= 1775)))))))
          : (c <= 1791 || (c < 2417
            ? (c < 2112
              ? (c < 1994
                ? (c < 1869
                  ? (c >= 1808 && c <= 1839)
                  : c <= 1969)
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2088)))
              : (c <= 2136 || (c < 2230
                ? (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)
                : (c <= 2247 || (c >= 2308 && c <= 2401)))))
            : (c <= 2432 || (c < 2486
              ? (c < 2451
                ? (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : c <= 2482)))
              : (c <= 2489 || (c < 2524
                ? (c < 2510
                  ? c == 2493
                  : c <= 2510)
                : (c <= 2525 || (c >= 2527 && c <= 2529)))))))))
        : (c <= 2545 || (c < 2821
          ? (c < 2674
            ? (c < 2610
              ? (c < 2575
                ? (c < 2565
                  ? c == 2556
                  : c <= 2570)
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || c == 2654))))
            : (c <= 2676 || (c < 2741
              ? (c < 2707
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))
              : (c <= 2745 || (c < 2784
                ? (c < 2768
                  ? c == 2749
                  : c <= 2768)
                : (c <= 2785 || c == 2809))))))
          : (c <= 2828 || (c < 2949
            ? (c < 2877
              ? (c < 2858
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))
              : (c <= 2877 || (c < 2929
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)
                : (c <= 2929 || c == 2947))))
            : (c <= 2954 || (c < 2979
              ? (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))
              : (c <= 2980 || (c < 3024
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : c <= 3001)
                : (c <= 3024 || (c >= 3077 && c <= 3084)))))))))))
      : (c <= 3088 || (c < 4176
        ? (c < 3450
          ? (c < 3253
            ? (c < 3200
              ? (c < 3133
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)
                : (c <= 3133 || (c < 3168
                  ? (c >= 3160 && c <= 3162)
                  : c <= 3169)))
              : (c <= 3200 || (c < 3218
                ? (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)
                : (c <= 3240 || (c >= 3242 && c <= 3251)))))
            : (c <= 3257 || (c < 3342
              ? (c < 3296
                ? (c < 3294
                  ? c == 3261
                  : c <= 3294)
                : (c <= 3297 || (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)))
              : (c <= 3344 || (c < 3412
                ? (c < 3406
                  ? (c >= 3346 && c <= 3389)
                  : c <= 3406)
                : (c <= 3414 || (c >= 3423 && c <= 3425)))))))
          : (c <= 3455 || (c < 3724
            ? (c < 3585
              ? (c < 3507
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3635 || (c < 3716
                ? (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : c <= 3714)
                : (c <= 3716 || (c >= 3718 && c <= 3722)))))
            : (c <= 3747 || (c < 3840
              ? (c < 3776
                ? (c < 3751
                  ? c == 3749
                  : c <= 3773)
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c >= 4096 && c <= 4159)))))))))
        : (c <= 4238 || (c < 5024
          ? (c < 4746
            ? (c < 4682
              ? (c < 4301
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))
              : (c <= 4685 || (c < 4698
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)
                : (c <= 4701 || (c >= 4704 && c <= 4744)))))
            : (c <= 4749 || (c < 4808
              ? (c < 4792
                ? (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))
              : (c <= 4822 || (c < 4888
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)
                : (c <= 4954 || (c >= 4992 && c <= 5007)))))))
          : (c <= 5109 || (c < 5984
            ? (c < 5873
              ? (c < 5743
                ? (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : c <= 5740)
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5920
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : c <= 5905)
                : (c <= 5937 || (c >= 5952 && c <= 5969)))))
            : (c <= 5996 || (c < 6272
              ? (c < 6103
                ? (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)
                : (c <= 6103 || (c < 6176
                  ? c == 6108
                  : c <= 6264)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c >= 6512 && c <= 6516)))))))))))))
    : (c <= 6571 || (c < 43471
      ? (c < 11631
        ? (c < 8027
          ? (c < 7296
            ? (c < 7043
              ? (c < 6688
                ? (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)
                : (c <= 6740 || (c < 6917
                  ? c == 6823
                  : c <= 6987)))
              : (c <= 7087 || (c < 7245
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : c <= 7203)
                : (c <= 7247 || (c >= 7258 && c <= 7293)))))
            : (c <= 7304 || (c < 7960
              ? (c < 7401
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8016
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : c <= 8013)
                : (c <= 8023 || c == 8025))))))
          : (c <= 8027 || (c < 8319
            ? (c < 8150
              ? (c < 8064
                ? (c < 8031
                  ? c == 8029
                  : c <= 8061)
                : (c <= 8116 || (c < 8134
                  ? (c >= 8118 && c <= 8132)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8182
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : c <= 8180)
                : (c <= 8188 || c == 8305))))
            : (c <= 8319 || (c < 11360
              ? (c < 8579
                ? (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8526)
                : (c <= 8580 || (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : c <= 11358)))
              : (c <= 11507 || (c < 11565
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)
                : (c <= 11565 || (c >= 11568 && c <= 11623)))))))))
        : (c <= 11631 || (c < 13312
          ? (c < 12293
            ? (c < 11712
              ? (c < 11688
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : c <= 11686)
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))
              : (c <= 11718 || (c < 11736
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)
                : (c <= 11742 || c == 11823))))
            : (c <= 12294 || (c < 12540
              ? (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))
              : (c <= 12543 || (c < 12704
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)
                : (c <= 12735 || (c >= 12784 && c <= 12799)))))))
          : (c <= 13312 || (c < 42946
            ? (c < 42512
              ? (c < 40960
                ? (c < 40956
                  ? (c >= 19903 && c <= 19968)
                  : c <= 40956)
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))
              : (c <= 42527 || (c < 42623
                ? (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)
                : (c <= 42725 || (c >= 42775 && c <= 42943)))))
            : (c <= 42954 || (c < 43261
              ? (c < 43138
                ? (c < 43072
                  ? (c >= 42997 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))
              : (c <= 43262 || (c < 43360
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : c <= 43334)
                : (c <= 43388 || (c >= 43396 && c <= 43442)))))))))))
      : (c <= 43471 || (c < 65549
        ? (c < 64256
          ? (c < 43793
            ? (c < 43739
              ? (c < 43520
                ? (c < 43514
                  ? (c >= 43488 && c <= 43503)
                  : c <= 43518)
                : (c <= 43560 || (c < 43616
                  ? (c >= 43584 && c <= 43595)
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c >= 43785 && c <= 43790)))))
            : (c <= 43798 || (c < 55203
              ? (c < 43824
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : c <= 43822)
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 63744
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : c <= 55291)
                : (c <= 64109 || (c >= 64112 && c <= 64217)))))))
          : (c <= 64262 || (c < 65008
            ? (c < 64323
              ? (c < 64312
                ? (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64310)
                : (c <= 64316 || (c < 64320
                  ? c == 64318
                  : c <= 64321)))
              : (c <= 64324 || (c < 64848
                ? (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)
                : (c <= 64911 || (c >= 64914 && c <= 64967)))))
            : (c <= 65019 || (c < 65474
              ? (c < 65313
                ? (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)
                : (c <= 65338 || (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : c <= 65470)))
              : (c <= 65479 || (c < 65498
                ? (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)
                : (c <= 65500 || (c >= 65536 && c <= 65547)))))))))
        : (c <= 65574 || (c < 67424
          ? (c < 66384
            ? (c < 66176
              ? (c < 65599
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : c <= 65597)
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))
              : (c <= 66204 || (c < 66349
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : c <= 66335)
                : (c <= 66368 || (c >= 66370 && c <= 66377)))))
            : (c <= 66421 || (c < 66776
              ? (c < 66504
                ? (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)
                : (c <= 66511 || (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)))
              : (c <= 66811 || (c < 67072
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)
                : (c <= 67382 || (c >= 67392 && c <= 67413)))))))
          : (c <= 67431 || (c < 67840
            ? (c < 67647
              ? (c < 67594
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67808
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : c <= 67742)
                : (c <= 67826 || (c >= 67828 && c <= 67829)))))
            : (c <= 67861 || (c < 68117
              ? (c < 68030
                ? (c < 67968
                  ? (c >= 67872 && c <= 67897)
                  : c <= 68023)
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c >= 68288 && c <= 68309)))))))))))))));
}

static inline bool aux_sym__alphabetic_token2_character_set_1(int32_t c) {
  return (c < 3864
    ? (c < 2763
      ? (c < 2366
        ? (c < 1840
          ? (c < 1648
            ? (c < 1425
              ? (c < 1155
                ? (c >= 768 && c <= 879)
                : c <= 1161)
              : (c <= 1479 || (c < 1611
                ? (c >= 1552 && c <= 1562)
                : c <= 1631)))
            : (c <= 1648 || (c < 1767
              ? (c < 1759
                ? (c >= 1750 && c <= 1756)
                : c <= 1764)
              : (c <= 1768 || (c < 1809
                ? (c >= 1770 && c <= 1773)
                : c <= 1809)))))
          : (c <= 1866 || (c < 2085
            ? (c < 2045
              ? (c < 2027
                ? (c >= 1958 && c <= 1968)
                : c <= 2035)
              : (c <= 2045 || (c < 2075
                ? (c >= 2070 && c <= 2073)
                : c <= 2083)))
            : (c <= 2087 || (c < 2259
              ? (c < 2137
                ? (c >= 2089 && c <= 2093)
                : c <= 2139)
              : (c <= 2273 || (c < 2362
                ? (c >= 2275 && c <= 2307)
                : c <= 2364)))))))
        : (c <= 2383 || (c < 2620
          ? (c < 2503
            ? (c < 2433
              ? (c < 2402
                ? (c >= 2385 && c <= 2391)
                : c <= 2403)
              : (c <= 2435 || (c < 2494
                ? c == 2492
                : c <= 2500)))
            : (c <= 2504 || (c < 2530
              ? (c < 2519
                ? (c >= 2507 && c <= 2509)
                : c <= 2519)
              : (c <= 2531 || (c < 2561
                ? c == 2558
                : c <= 2563)))))
          : (c <= 2620 || (c < 2677
            ? (c < 2635
              ? (c < 2631
                ? (c >= 2622 && c <= 2626)
                : c <= 2632)
              : (c <= 2637 || (c < 2672
                ? c == 2641
                : c <= 2673)))
            : (c <= 2677 || (c < 2750
              ? (c < 2748
                ? (c >= 2689 && c <= 2691)
                : c <= 2748)
              : (c <= 2757 || (c >= 2759 && c <= 2761)))))))))
      : (c <= 2765 || (c < 3270
        ? (c < 3014
          ? (c < 2887
            ? (c < 2817
              ? (c < 2810
                ? (c >= 2786 && c <= 2787)
                : c <= 2815)
              : (c <= 2819 || (c < 2878
                ? c == 2876
                : c <= 2884)))
            : (c <= 2888 || (c < 2914
              ? (c < 2901
                ? (c >= 2891 && c <= 2893)
                : c <= 2903)
              : (c <= 2915 || (c < 3006
                ? c == 2946
                : c <= 3010)))))
          : (c <= 3016 || (c < 3146
            ? (c < 3072
              ? (c < 3031
                ? (c >= 3018 && c <= 3021)
                : c <= 3031)
              : (c <= 3076 || (c < 3142
                ? (c >= 3134 && c <= 3140)
                : c <= 3144)))
            : (c <= 3149 || (c < 3201
              ? (c < 3170
                ? (c >= 3157 && c <= 3158)
                : c <= 3171)
              : (c <= 3203 || (c < 3262
                ? c == 3260
                : c <= 3268)))))))
        : (c <= 3272 || (c < 3530
          ? (c < 3390
            ? (c < 3298
              ? (c < 3285
                ? (c >= 3274 && c <= 3277)
                : c <= 3286)
              : (c <= 3299 || (c < 3387
                ? (c >= 3328 && c <= 3331)
                : c <= 3388)))
            : (c <= 3396 || (c < 3415
              ? (c < 3402
                ? (c >= 3398 && c <= 3400)
                : c <= 3405)
              : (c <= 3415 || (c < 3457
                ? (c >= 3426 && c <= 3427)
                : c <= 3459)))))
          : (c <= 3530 || (c < 3636
            ? (c < 3544
              ? (c < 3542
                ? (c >= 3535 && c <= 3540)
                : c <= 3542)
              : (c <= 3551 || (c < 3633
                ? (c >= 3570 && c <= 3571)
                : c <= 3633)))
            : (c <= 3642 || (c < 3764
              ? (c < 3761
                ? (c >= 3655 && c <= 3662)
                : c <= 3761)
              : (c <= 3772 || (c >= 3784 && c <= 3789)))))))))))
    : (c <= 3865 || (c < 8400
      ? (c < 6155
        ? (c < 4199
          ? (c < 3993
            ? (c < 3897
              ? (c < 3895
                ? c == 3893
                : c <= 3895)
              : (c <= 3903 || (c < 3981
                ? (c >= 3953 && c <= 3975)
                : c <= 3991)))
            : (c <= 4028 || (c < 4182
              ? (c < 4139
                ? c == 4038
                : c <= 4158)
              : (c <= 4185 || (c < 4194
                ? (c >= 4190 && c <= 4192)
                : c <= 4196)))))
          : (c <= 4205 || (c < 5906
            ? (c < 4239
              ? (c < 4226
                ? (c >= 4209 && c <= 4212)
                : c <= 4237)
              : (c <= 4239 || (c < 4957
                ? (c >= 4250 && c <= 4253)
                : c <= 4959)))
            : (c <= 5908 || (c < 6002
              ? (c < 5970
                ? (c >= 5938 && c <= 5940)
                : c <= 5971)
              : (c <= 6003 || (c < 6109
                ? (c >= 6068 && c <= 6099)
                : c <= 6109)))))))
        : (c <= 6157 || (c < 7019
          ? (c < 6741
            ? (c < 6432
              ? (c < 6313
                ? (c >= 6277 && c <= 6278)
                : c <= 6313)
              : (c <= 6443 || (c < 6679
                ? (c >= 6448 && c <= 6459)
                : c <= 6683)))
            : (c <= 6750 || (c < 6832
              ? (c < 6783
                ? (c >= 6752 && c <= 6780)
                : c <= 6783)
              : (c <= 6848 || (c < 6964
                ? (c >= 6912 && c <= 6916)
                : c <= 6980)))))
          : (c <= 7027 || (c < 7405
            ? (c < 7142
              ? (c < 7073
                ? (c >= 7040 && c <= 7042)
                : c <= 7085)
              : (c <= 7155 || (c < 7376
                ? (c >= 7204 && c <= 7223)
                : c <= 7400)))
            : (c <= 7405 || (c < 7616
              ? (c < 7415
                ? c == 7412
                : c <= 7417)
              : (c <= 7673 || (c >= 7675 && c <= 7679)))))))))
      : (c <= 8432 || (c < 43561
        ? (c < 43043
          ? (c < 42607
            ? (c < 11744
              ? (c < 11647
                ? (c >= 11503 && c <= 11505)
                : c <= 11647)
              : (c <= 11775 || (c < 12441
                ? (c >= 12330 && c <= 12335)
                : c <= 12442)))
            : (c <= 42621 || (c < 43010
              ? (c < 42736
                ? (c >= 42654 && c <= 42655)
                : c <= 42737)
              : (c <= 43010 || (c < 43019
                ? c == 43014
                : c <= 43019)))))
          : (c <= 43047 || (c < 43302
            ? (c < 43188
              ? (c < 43136
                ? c == 43052
                : c <= 43137)
              : (c <= 43205 || (c < 43263
                ? (c >= 43232 && c <= 43249)
                : c <= 43263)))
            : (c <= 43309 || (c < 43443
              ? (c < 43392
                ? (c >= 43335 && c <= 43347)
                : c <= 43395)
              : (c <= 43456 || c == 43493))))))
        : (c <= 43574 || (c < 64286
          ? (c < 43703
            ? (c < 43643
              ? (c < 43596
                ? c == 43587
                : c <= 43597)
              : (c <= 43645 || (c < 43698
                ? c == 43696
                : c <= 43700)))
            : (c <= 43704 || (c < 43755
              ? (c < 43713
                ? (c >= 43710 && c <= 43711)
                : c <= 43713)
              : (c <= 43759 || (c < 44003
                ? (c >= 43765 && c <= 43766)
                : c <= 44013)))))
          : (c <= 64286 || (c < 68097
            ? (c < 66045
              ? (c < 65056
                ? (c >= 65024 && c <= 65039)
                : c <= 65071)
              : (c <= 66045 || (c < 66422
                ? c == 66272
                : c <= 66426)))
            : (c <= 68099 || (c < 68152
              ? (c < 68108
                ? (c >= 68101 && c <= 68102)
                : c <= 68111)
              : (c <= 68154 || c == 68159))))))))))));
}

static inline bool aux_sym__alphabetic_token2_character_set_2(int32_t c) {
  return (c < 3864
    ? (c < 2750
      ? (c < 2259
        ? (c < 1767
          ? (c < 1479
            ? (c < 1471
              ? (c < 1155
                ? (c >= 768 && c <= 879)
                : (c <= 1161 || (c >= 1425 && c <= 1469)))
              : (c <= 1471 || (c < 1476
                ? (c >= 1473 && c <= 1474)
                : c <= 1477)))
            : (c <= 1479 || (c < 1648
              ? (c < 1611
                ? (c >= 1552 && c <= 1562)
                : c <= 1631)
              : (c <= 1648 || (c < 1759
                ? (c >= 1750 && c <= 1756)
                : c <= 1764)))))
          : (c <= 1768 || (c < 2045
            ? (c < 1840
              ? (c < 1809
                ? (c >= 1770 && c <= 1773)
                : c <= 1809)
              : (c <= 1866 || (c < 2027
                ? (c >= 1958 && c <= 1968)
                : c <= 2035)))
            : (c <= 2045 || (c < 2085
              ? (c < 2075
                ? (c >= 2070 && c <= 2073)
                : c <= 2083)
              : (c <= 2087 || (c < 2137
                ? (c >= 2089 && c <= 2093)
                : c <= 2139)))))))
        : (c <= 2273 || (c < 2530
          ? (c < 2433
            ? (c < 2366
              ? (c < 2362
                ? (c >= 2275 && c <= 2307)
                : c <= 2364)
              : (c <= 2383 || (c < 2402
                ? (c >= 2385 && c <= 2391)
                : c <= 2403)))
            : (c <= 2435 || (c < 2503
              ? (c < 2494
                ? c == 2492
                : c <= 2500)
              : (c <= 2504 || (c < 2519
                ? (c >= 2507 && c <= 2509)
                : c <= 2519)))))
          : (c <= 2531 || (c < 2635
            ? (c < 2620
              ? (c < 2561
                ? c == 2558
                : c <= 2563)
              : (c <= 2620 || (c < 2631
                ? (c >= 2622 && c <= 2626)
                : c <= 2632)))
            : (c <= 2637 || (c < 2677
              ? (c < 2672
                ? c == 2641
                : c <= 2673)
              : (c <= 2677 || (c < 2748
                ? (c >= 2689 && c <= 2691)
                : c <= 2748)))))))))
      : (c <= 2757 || (c < 3262
        ? (c < 3006
          ? (c < 2878
            ? (c < 2810
              ? (c < 2763
                ? (c >= 2759 && c <= 2761)
                : (c <= 2765 || (c >= 2786 && c <= 2787)))
              : (c <= 2815 || (c < 2876
                ? (c >= 2817 && c <= 2819)
                : c <= 2876)))
            : (c <= 2884 || (c < 2901
              ? (c < 2891
                ? (c >= 2887 && c <= 2888)
                : c <= 2893)
              : (c <= 2903 || (c < 2946
                ? (c >= 2914 && c <= 2915)
                : c <= 2946)))))
          : (c <= 3010 || (c < 3142
            ? (c < 3031
              ? (c < 3018
                ? (c >= 3014 && c <= 3016)
                : c <= 3021)
              : (c <= 3031 || (c < 3134
                ? (c >= 3072 && c <= 3076)
                : c <= 3140)))
            : (c <= 3144 || (c < 3170
              ? (c < 3157
                ? (c >= 3146 && c <= 3149)
                : c <= 3158)
              : (c <= 3171 || (c < 3260
                ? (c >= 3201 && c <= 3203)
                : c <= 3260)))))))
        : (c <= 3268 || (c < 3457
          ? (c < 3387
            ? (c < 3285
              ? (c < 3274
                ? (c >= 3270 && c <= 3272)
                : c <= 3277)
              : (c <= 3286 || (c < 3328
                ? (c >= 3298 && c <= 3299)
                : c <= 3331)))
            : (c <= 3388 || (c < 3402
              ? (c < 3398
                ? (c >= 3390 && c <= 3396)
                : c <= 3400)
              : (c <= 3405 || (c < 3426
                ? c == 3415
                : c <= 3427)))))
          : (c <= 3459 || (c < 3633
            ? (c < 3542
              ? (c < 3535
                ? c == 3530
                : c <= 3540)
              : (c <= 3542 || (c < 3570
                ? (c >= 3544 && c <= 3551)
                : c <= 3571)))
            : (c <= 3633 || (c < 3761
              ? (c < 3655
                ? (c >= 3636 && c <= 3642)
                : c <= 3662)
              : (c <= 3761 || (c < 3784
                ? (c >= 3764 && c <= 3772)
                : c <= 3789)))))))))))
    : (c <= 3865 || (c < 7675
      ? (c < 6109
        ? (c < 4194
          ? (c < 3981
            ? (c < 3902
              ? (c < 3895
                ? c == 3893
                : (c <= 3895 || c == 3897))
              : (c <= 3903 || (c < 3974
                ? (c >= 3953 && c <= 3972)
                : c <= 3975)))
            : (c <= 3991 || (c < 4139
              ? (c < 4038
                ? (c >= 3993 && c <= 4028)
                : c <= 4038)
              : (c <= 4158 || (c < 4190
                ? (c >= 4182 && c <= 4185)
                : c <= 4192)))))
          : (c <= 4196 || (c < 4957
            ? (c < 4226
              ? (c < 4209
                ? (c >= 4199 && c <= 4205)
                : c <= 4212)
              : (c <= 4237 || (c < 4250
                ? c == 4239
                : c <= 4253)))
            : (c <= 4959 || (c < 5970
              ? (c < 5938
                ? (c >= 5906 && c <= 5908)
                : c <= 5940)
              : (c <= 5971 || (c < 6068
                ? (c >= 6002 && c <= 6003)
                : c <= 6099)))))))
        : (c <= 6109 || (c < 6964
          ? (c < 6679
            ? (c < 6313
              ? (c < 6277
                ? (c >= 6155 && c <= 6157)
                : c <= 6278)
              : (c <= 6313 || (c < 6448
                ? (c >= 6432 && c <= 6443)
                : c <= 6459)))
            : (c <= 6683 || (c < 6783
              ? (c < 6752
                ? (c >= 6741 && c <= 6750)
                : c <= 6780)
              : (c <= 6783 || (c < 6912
                ? (c >= 6832 && c <= 6848)
                : c <= 6916)))))
          : (c <= 6980 || (c < 7376
            ? (c < 7073
              ? (c < 7040
                ? (c >= 7019 && c <= 7027)
                : c <= 7042)
              : (c <= 7085 || (c < 7204
                ? (c >= 7142 && c <= 7155)
                : c <= 7223)))
            : (c <= 7378 || (c < 7412
              ? (c < 7405
                ? (c >= 7380 && c <= 7400)
                : c <= 7405)
              : (c <= 7412 || (c < 7616
                ? (c >= 7415 && c <= 7417)
                : c <= 7673)))))))))
      : (c <= 7679 || (c < 43561
        ? (c < 43019
          ? (c < 42607
            ? (c < 11744
              ? (c < 11503
                ? (c >= 8400 && c <= 8432)
                : (c <= 11505 || c == 11647))
              : (c <= 11775 || (c < 12441
                ? (c >= 12330 && c <= 12335)
                : c <= 12442)))
            : (c <= 42610 || (c < 42736
              ? (c < 42654
                ? (c >= 42612 && c <= 42621)
                : c <= 42655)
              : (c <= 42737 || (c < 43014
                ? c == 43010
                : c <= 43014)))))
          : (c <= 43019 || (c < 43263
            ? (c < 43136
              ? (c < 43052
                ? (c >= 43043 && c <= 43047)
                : c <= 43052)
              : (c <= 43137 || (c < 43232
                ? (c >= 43188 && c <= 43205)
                : c <= 43249)))
            : (c <= 43263 || (c < 43392
              ? (c < 43335
                ? (c >= 43302 && c <= 43309)
                : c <= 43347)
              : (c <= 43395 || (c < 43493
                ? (c >= 43443 && c <= 43456)
                : c <= 43493)))))))
        : (c <= 43574 || (c < 44012
          ? (c < 43703
            ? (c < 43643
              ? (c < 43596
                ? c == 43587
                : c <= 43597)
              : (c <= 43645 || (c < 43698
                ? c == 43696
                : c <= 43700)))
            : (c <= 43704 || (c < 43755
              ? (c < 43713
                ? (c >= 43710 && c <= 43711)
                : c <= 43713)
              : (c <= 43759 || (c < 44003
                ? (c >= 43765 && c <= 43766)
                : c <= 44010)))))
          : (c <= 44013 || (c < 66422
            ? (c < 65056
              ? (c < 65024
                ? c == 64286
                : c <= 65039)
              : (c <= 65071 || (c < 66272
                ? c == 66045
                : c <= 66272)))
            : (c <= 66426 || (c < 68108
              ? (c < 68101
                ? (c >= 68097 && c <= 68099)
                : c <= 68102)
              : (c <= 68111 || (c < 68159
                ? (c >= 68152 && c <= 68154)
                : c <= 68159)))))))))))));
}

static inline bool aux_sym__punctuation_token1_character_set_1(int32_t c) {
  return (c < 8240
    ? (c < 2678
      ? (c < 1472
        ? (c < 171
          ? (c < '\\'
            ? (c < ','
              ? (c < '&'
                ? (c >= '!' && c <= '"')
                : c <= '*')
              : (c <= ';' || c == '?'))
            : (c <= '\\' || (c < 161
              ? c == '_'
              : (c <= 161 || c == 167))))
          : (c <= 171 || (c < 903
            ? (c < 191
              ? (c < 187
                ? (c >= 182 && c <= 183)
                : c <= 187)
              : (c <= 191 || c == 894))
            : (c <= 903 || (c < 1417
              ? (c >= 1370 && c <= 1375)
              : (c <= 1418 || c == 1470))))))
        : (c <= 1472 || (c < 1748
          ? (c < 1548
            ? (c < 1523
              ? (c < 1478
                ? c == 1475
                : c <= 1478)
              : (c <= 1524 || (c >= 1545 && c <= 1546)))
            : (c <= 1549 || (c < 1566
              ? c == 1563
              : (c <= 1567 || (c >= 1642 && c <= 1645)))))
          : (c <= 1748 || (c < 2142
            ? (c < 2039
              ? (c >= 1792 && c <= 1805)
              : (c <= 2041 || (c >= 2096 && c <= 2110)))
            : (c <= 2142 || (c < 2416
              ? (c >= 2404 && c <= 2405)
              : (c <= 2416 || c == 2557))))))))
      : (c <= 2678 || (c < 5787
        ? (c < 3898
          ? (c < 3663
            ? (c < 3204
              ? (c < 3191
                ? c == 2800
                : c <= 3191)
              : (c <= 3204 || c == 3572))
            : (c <= 3663 || (c < 3844
              ? (c >= 3674 && c <= 3675)
              : (c <= 3858 || c == 3860))))
          : (c <= 3901 || (c < 4347
            ? (c < 4057
              ? (c < 4048
                ? c == 3973
                : c <= 4052)
              : (c <= 4058 || (c >= 4170 && c <= 4175)))
            : (c <= 4347 || (c < 5120
              ? (c >= 4960 && c <= 4968)
              : (c <= 5120 || c == 5742))))))
        : (c <= 5788 || (c < 6824
          ? (c < 6144
            ? (c < 6100
              ? (c < 5941
                ? (c >= 5867 && c <= 5869)
                : c <= 5942)
              : (c <= 6102 || (c >= 6104 && c <= 6106)))
            : (c <= 6154 || (c < 6686
              ? (c >= 6468 && c <= 6469)
              : (c <= 6687 || (c >= 6816 && c <= 6822)))))
          : (c <= 6829 || (c < 7294
            ? (c < 7164
              ? (c >= 7002 && c <= 7008)
              : (c <= 7167 || (c >= 7227 && c <= 7231)))
            : (c <= 7295 || (c < 7379
              ? (c >= 7360 && c <= 7367)
              : (c <= 7379 || (c >= 8208 && c <= 8231)))))))))))
    : (c <= 8259 || (c < 43310
      ? (c < 11858
        ? (c < 10214
          ? (c < 8968
            ? (c < 8317
              ? (c < 8275
                ? (c >= 8261 && c <= 8273)
                : c <= 8286)
              : (c <= 8318 || (c >= 8333 && c <= 8334)))
            : (c <= 8971 || (c < 10088
              ? (c >= 9001 && c <= 9002)
              : (c <= 10101 || (c >= 10181 && c <= 10182)))))
          : (c <= 10223 || (c < 11518
            ? (c < 10748
              ? (c < 10712
                ? (c >= 10627 && c <= 10648)
                : c <= 10715)
              : (c <= 10749 || (c >= 11513 && c <= 11516)))
            : (c <= 11519 || (c < 11776
              ? c == 11632
              : (c <= 11822 || (c >= 11824 && c <= 11855)))))))
        : (c <= 11858 || (c < 42509
          ? (c < 12349
            ? (c < 12308
              ? (c < 12296
                ? (c >= 12289 && c <= 12291)
                : c <= 12305)
              : (c <= 12319 || c == 12336))
            : (c <= 12349 || (c < 12539
              ? c == 12448
              : (c <= 12539 || (c >= 42238 && c <= 42239)))))
          : (c <= 42511 || (c < 43124
            ? (c < 42622
              ? c == 42611
              : (c <= 42622 || (c >= 42738 && c <= 42743)))
            : (c <= 43127 || (c < 43256
              ? (c >= 43214 && c <= 43215)
              : (c <= 43258 || c == 43260))))))))
      : (c <= 43311 || (c < 65292
        ? (c < 65040
          ? (c < 43742
            ? (c < 43486
              ? (c < 43457
                ? c == 43359
                : c <= 43469)
              : (c <= 43487 || (c >= 43612 && c <= 43615)))
            : (c <= 43743 || (c < 44011
              ? (c >= 43760 && c <= 43761)
              : (c <= 44011 || (c >= 64830 && c <= 64831)))))
          : (c <= 65049 || (c < 65128
            ? (c < 65108
              ? (c >= 65072 && c <= 65106)
              : (c <= 65121 || c == 65123))
            : (c <= 65128 || (c < 65281
              ? (c >= 65130 && c <= 65131)
              : (c <= 65283 || (c >= 65285 && c <= 65290)))))))
        : (c <= 65295 || (c < 66463
          ? (c < 65371
            ? (c < 65339
              ? (c < 65311
                ? (c >= 65306 && c <= 65307)
                : c <= 65312)
              : (c <= 65341 || c == 65343))
            : (c <= 65371 || (c < 65375
              ? c == 65373
              : (c <= 65381 || (c >= 65792 && c <= 65794)))))
          : (c <= 66463 || (c < 67871
            ? (c < 66927
              ? c == 66512
              : (c <= 66927 || c == 67671))
            : (c <= 67871 || (c < 68176
              ? c == 67903
              : (c <= 68184 || c == 68223))))))))))));
}

static inline bool aux_sym__punctuation_token1_character_set_2(int32_t c) {
  return (c < 8208
    ? (c < 2557
      ? (c < 1417
        ? (c < 161
          ? (c < '\\'
            ? (c < ','
              ? (c < '%'
                ? (c >= '!' && c <= '"')
                : c <= '*')
              : (c <= ';' || c == '?'))
            : (c <= ']' || (c < '{'
              ? c == '_'
              : (c <= '{' || c == '}'))))
          : (c <= 161 || (c < 191
            ? (c < 182
              ? (c < 171
                ? c == 167
                : c <= 171)
              : (c <= 183 || c == 187))
            : (c <= 191 || (c < 903
              ? c == 894
              : (c <= 903 || (c >= 1370 && c <= 1375)))))))
        : (c <= 1418 || (c < 1566
          ? (c < 1523
            ? (c < 1475
              ? (c < 1472
                ? c == 1470
                : c <= 1472)
              : (c <= 1475 || c == 1478))
            : (c <= 1524 || (c < 1548
              ? (c >= 1545 && c <= 1546)
              : (c <= 1549 || c == 1563))))
          : (c <= 1567 || (c < 2096
            ? (c < 1792
              ? (c < 1748
                ? (c >= 1642 && c <= 1645)
                : c <= 1748)
              : (c <= 1805 || (c >= 2039 && c <= 2041)))
            : (c <= 2110 || (c < 2404
              ? c == 2142
              : (c <= 2405 || c == 2416))))))))
      : (c <= 2557 || (c < 5742
        ? (c < 3860
          ? (c < 3572
            ? (c < 3191
              ? (c < 2800
                ? c == 2678
                : c <= 2800)
              : (c <= 3191 || c == 3204))
            : (c <= 3572 || (c < 3674
              ? c == 3663
              : (c <= 3675 || (c >= 3844 && c <= 3858)))))
          : (c <= 3860 || (c < 4170
            ? (c < 4048
              ? (c < 3973
                ? (c >= 3898 && c <= 3901)
                : c <= 3973)
              : (c <= 4052 || (c >= 4057 && c <= 4058)))
            : (c <= 4175 || (c < 4960
              ? c == 4347
              : (c <= 4968 || c == 5120))))))
        : (c <= 5742 || (c < 6816
          ? (c < 6104
            ? (c < 5941
              ? (c < 5867
                ? (c >= 5787 && c <= 5788)
                : c <= 5869)
              : (c <= 5942 || (c >= 6100 && c <= 6102)))
            : (c <= 6106 || (c < 6468
              ? (c >= 6144 && c <= 6154)
              : (c <= 6469 || (c >= 6686 && c <= 6687)))))
          : (c <= 6822 || (c < 7227
            ? (c < 7002
              ? (c >= 6824 && c <= 6829)
              : (c <= 7008 || (c >= 7164 && c <= 7167)))
            : (c <= 7231 || (c < 7360
              ? (c >= 7294 && c <= 7295)
              : (c <= 7367 || c == 7379))))))))))
    : (c <= 8231 || (c < 43260
      ? (c < 11824
        ? (c < 10181
          ? (c < 8333
            ? (c < 8275
              ? (c < 8261
                ? (c >= 8240 && c <= 8259)
                : c <= 8273)
              : (c <= 8286 || (c >= 8317 && c <= 8318)))
            : (c <= 8334 || (c < 9001
              ? (c >= 8968 && c <= 8971)
              : (c <= 9002 || (c >= 10088 && c <= 10101)))))
          : (c <= 10182 || (c < 11513
            ? (c < 10712
              ? (c < 10627
                ? (c >= 10214 && c <= 10223)
                : c <= 10648)
              : (c <= 10715 || (c >= 10748 && c <= 10749)))
            : (c <= 11516 || (c < 11632
              ? (c >= 11518 && c <= 11519)
              : (c <= 11632 || (c >= 11776 && c <= 11822)))))))
        : (c <= 11855 || (c < 42238
          ? (c < 12336
            ? (c < 12296
              ? (c < 12289
                ? c == 11858
                : c <= 12291)
              : (c <= 12305 || (c >= 12308 && c <= 12319)))
            : (c <= 12336 || (c < 12448
              ? c == 12349
              : (c <= 12448 || c == 12539))))
          : (c <= 42239 || (c < 42738
            ? (c < 42611
              ? (c >= 42509 && c <= 42511)
              : (c <= 42611 || c == 42622))
            : (c <= 42743 || (c < 43214
              ? (c >= 43124 && c <= 43127)
              : (c <= 43215 || (c >= 43256 && c <= 43258)))))))))
      : (c <= 43260 || (c < 65292
        ? (c < 64830
          ? (c < 43612
            ? (c < 43457
              ? (c < 43359
                ? (c >= 43310 && c <= 43311)
                : c <= 43359)
              : (c <= 43469 || (c >= 43486 && c <= 43487)))
            : (c <= 43615 || (c < 43760
              ? (c >= 43742 && c <= 43743)
              : (c <= 43761 || c == 44011))))
          : (c <= 64831 || (c < 65128
            ? (c < 65108
              ? (c < 65072
                ? (c >= 65040 && c <= 65049)
                : c <= 65106)
              : (c <= 65121 || c == 65123))
            : (c <= 65128 || (c < 65281
              ? (c >= 65130 && c <= 65131)
              : (c <= 65283 || (c >= 65285 && c <= 65290)))))))
        : (c <= 65295 || (c < 66463
          ? (c < 65371
            ? (c < 65339
              ? (c < 65311
                ? (c >= 65306 && c <= 65307)
                : c <= 65312)
              : (c <= 65341 || c == 65343))
            : (c <= 65371 || (c < 65375
              ? c == 65373
              : (c <= 65381 || (c >= 65792 && c <= 65794)))))
          : (c <= 66463 || (c < 67871
            ? (c < 66927
              ? c == 66512
              : (c <= 66927 || c == 67671))
            : (c <= 67871 || (c < 68176
              ? c == 67903
              : (c <= 68184 || c == 68223))))))))))));
}

static inline bool aux_sym__punctuation_token1_character_set_3(int32_t c) {
  return (c < 8208
    ? (c < 2557
      ? (c < 1417
        ? (c < 161
          ? (c < '['
            ? (c < ','
              ? (c < '%'
                ? (c >= '!' && c <= '"')
                : c <= '*')
              : (c <= ';' || c == '?'))
            : (c <= ']' || (c < '{'
              ? c == '_'
              : (c <= '{' || c == '}'))))
          : (c <= 161 || (c < 191
            ? (c < 182
              ? (c < 171
                ? c == 167
                : c <= 171)
              : (c <= 183 || c == 187))
            : (c <= 191 || (c < 903
              ? c == 894
              : (c <= 903 || (c >= 1370 && c <= 1375)))))))
        : (c <= 1418 || (c < 1566
          ? (c < 1523
            ? (c < 1475
              ? (c < 1472
                ? c == 1470
                : c <= 1472)
              : (c <= 1475 || c == 1478))
            : (c <= 1524 || (c < 1548
              ? (c >= 1545 && c <= 1546)
              : (c <= 1549 || c == 1563))))
          : (c <= 1567 || (c < 2096
            ? (c < 1792
              ? (c < 1748
                ? (c >= 1642 && c <= 1645)
                : c <= 1748)
              : (c <= 1805 || (c >= 2039 && c <= 2041)))
            : (c <= 2110 || (c < 2404
              ? c == 2142
              : (c <= 2405 || c == 2416))))))))
      : (c <= 2557 || (c < 5742
        ? (c < 3860
          ? (c < 3572
            ? (c < 3191
              ? (c < 2800
                ? c == 2678
                : c <= 2800)
              : (c <= 3191 || c == 3204))
            : (c <= 3572 || (c < 3674
              ? c == 3663
              : (c <= 3675 || (c >= 3844 && c <= 3858)))))
          : (c <= 3860 || (c < 4170
            ? (c < 4048
              ? (c < 3973
                ? (c >= 3898 && c <= 3901)
                : c <= 3973)
              : (c <= 4052 || (c >= 4057 && c <= 4058)))
            : (c <= 4175 || (c < 4960
              ? c == 4347
              : (c <= 4968 || c == 5120))))))
        : (c <= 5742 || (c < 6816
          ? (c < 6104
            ? (c < 5941
              ? (c < 5867
                ? (c >= 5787 && c <= 5788)
                : c <= 5869)
              : (c <= 5942 || (c >= 6100 && c <= 6102)))
            : (c <= 6106 || (c < 6468
              ? (c >= 6144 && c <= 6154)
              : (c <= 6469 || (c >= 6686 && c <= 6687)))))
          : (c <= 6822 || (c < 7227
            ? (c < 7002
              ? (c >= 6824 && c <= 6829)
              : (c <= 7008 || (c >= 7164 && c <= 7167)))
            : (c <= 7231 || (c < 7360
              ? (c >= 7294 && c <= 7295)
              : (c <= 7367 || c == 7379))))))))))
    : (c <= 8231 || (c < 43260
      ? (c < 11824
        ? (c < 10181
          ? (c < 8333
            ? (c < 8275
              ? (c < 8261
                ? (c >= 8240 && c <= 8259)
                : c <= 8273)
              : (c <= 8286 || (c >= 8317 && c <= 8318)))
            : (c <= 8334 || (c < 9001
              ? (c >= 8968 && c <= 8971)
              : (c <= 9002 || (c >= 10088 && c <= 10101)))))
          : (c <= 10182 || (c < 11513
            ? (c < 10712
              ? (c < 10627
                ? (c >= 10214 && c <= 10223)
                : c <= 10648)
              : (c <= 10715 || (c >= 10748 && c <= 10749)))
            : (c <= 11516 || (c < 11632
              ? (c >= 11518 && c <= 11519)
              : (c <= 11632 || (c >= 11776 && c <= 11822)))))))
        : (c <= 11855 || (c < 42238
          ? (c < 12336
            ? (c < 12296
              ? (c < 12289
                ? c == 11858
                : c <= 12291)
              : (c <= 12305 || (c >= 12308 && c <= 12319)))
            : (c <= 12336 || (c < 12448
              ? c == 12349
              : (c <= 12448 || c == 12539))))
          : (c <= 42239 || (c < 42738
            ? (c < 42611
              ? (c >= 42509 && c <= 42511)
              : (c <= 42611 || c == 42622))
            : (c <= 42743 || (c < 43214
              ? (c >= 43124 && c <= 43127)
              : (c <= 43215 || (c >= 43256 && c <= 43258)))))))))
      : (c <= 43260 || (c < 65292
        ? (c < 64830
          ? (c < 43612
            ? (c < 43457
              ? (c < 43359
                ? (c >= 43310 && c <= 43311)
                : c <= 43359)
              : (c <= 43469 || (c >= 43486 && c <= 43487)))
            : (c <= 43615 || (c < 43760
              ? (c >= 43742 && c <= 43743)
              : (c <= 43761 || c == 44011))))
          : (c <= 64831 || (c < 65128
            ? (c < 65108
              ? (c < 65072
                ? (c >= 65040 && c <= 65049)
                : c <= 65106)
              : (c <= 65121 || c == 65123))
            : (c <= 65128 || (c < 65281
              ? (c >= 65130 && c <= 65131)
              : (c <= 65283 || (c >= 65285 && c <= 65290)))))))
        : (c <= 65295 || (c < 66463
          ? (c < 65371
            ? (c < 65339
              ? (c < 65311
                ? (c >= 65306 && c <= 65307)
                : c <= 65312)
              : (c <= 65341 || c == 65343))
            : (c <= 65371 || (c < 65375
              ? c == 65373
              : (c <= 65381 || (c >= 65792 && c <= 65794)))))
          : (c <= 66463 || (c < 67871
            ? (c < 66927
              ? c == 66512
              : (c <= 66927 || c == 67671))
            : (c <= 67871 || (c < 68176
              ? c == 67903
              : (c <= 68184 || c == 68223))))))))))));
}

static inline bool aux_sym__punctuation_token1_character_set_4(int32_t c) {
  return (c < 8208
    ? (c < 2557
      ? (c < 1417
        ? (c < 161
          ? (c < '['
            ? (c < ','
              ? (c < '&'
                ? (c >= '!' && c <= '#')
                : c <= '*')
              : (c <= ';' || (c >= '?' && c <= '@')))
            : (c <= ']' || (c < '{'
              ? c == '_'
              : (c <= '{' || c == '}'))))
          : (c <= 161 || (c < 191
            ? (c < 182
              ? (c < 171
                ? c == 167
                : c <= 171)
              : (c <= 183 || c == 187))
            : (c <= 191 || (c < 903
              ? c == 894
              : (c <= 903 || (c >= 1370 && c <= 1375)))))))
        : (c <= 1418 || (c < 1566
          ? (c < 1523
            ? (c < 1475
              ? (c < 1472
                ? c == 1470
                : c <= 1472)
              : (c <= 1475 || c == 1478))
            : (c <= 1524 || (c < 1548
              ? (c >= 1545 && c <= 1546)
              : (c <= 1549 || c == 1563))))
          : (c <= 1567 || (c < 2096
            ? (c < 1792
              ? (c < 1748
                ? (c >= 1642 && c <= 1645)
                : c <= 1748)
              : (c <= 1805 || (c >= 2039 && c <= 2041)))
            : (c <= 2110 || (c < 2404
              ? c == 2142
              : (c <= 2405 || c == 2416))))))))
      : (c <= 2557 || (c < 5742
        ? (c < 3860
          ? (c < 3572
            ? (c < 3191
              ? (c < 2800
                ? c == 2678
                : c <= 2800)
              : (c <= 3191 || c == 3204))
            : (c <= 3572 || (c < 3674
              ? c == 3663
              : (c <= 3675 || (c >= 3844 && c <= 3858)))))
          : (c <= 3860 || (c < 4170
            ? (c < 4048
              ? (c < 3973
                ? (c >= 3898 && c <= 3901)
                : c <= 3973)
              : (c <= 4052 || (c >= 4057 && c <= 4058)))
            : (c <= 4175 || (c < 4960
              ? c == 4347
              : (c <= 4968 || c == 5120))))))
        : (c <= 5742 || (c < 6816
          ? (c < 6104
            ? (c < 5941
              ? (c < 5867
                ? (c >= 5787 && c <= 5788)
                : c <= 5869)
              : (c <= 5942 || (c >= 6100 && c <= 6102)))
            : (c <= 6106 || (c < 6468
              ? (c >= 6144 && c <= 6154)
              : (c <= 6469 || (c >= 6686 && c <= 6687)))))
          : (c <= 6822 || (c < 7227
            ? (c < 7002
              ? (c >= 6824 && c <= 6829)
              : (c <= 7008 || (c >= 7164 && c <= 7167)))
            : (c <= 7231 || (c < 7360
              ? (c >= 7294 && c <= 7295)
              : (c <= 7367 || c == 7379))))))))))
    : (c <= 8231 || (c < 43260
      ? (c < 11824
        ? (c < 10181
          ? (c < 8333
            ? (c < 8275
              ? (c < 8261
                ? (c >= 8240 && c <= 8259)
                : c <= 8273)
              : (c <= 8286 || (c >= 8317 && c <= 8318)))
            : (c <= 8334 || (c < 9001
              ? (c >= 8968 && c <= 8971)
              : (c <= 9002 || (c >= 10088 && c <= 10101)))))
          : (c <= 10182 || (c < 11513
            ? (c < 10712
              ? (c < 10627
                ? (c >= 10214 && c <= 10223)
                : c <= 10648)
              : (c <= 10715 || (c >= 10748 && c <= 10749)))
            : (c <= 11516 || (c < 11632
              ? (c >= 11518 && c <= 11519)
              : (c <= 11632 || (c >= 11776 && c <= 11822)))))))
        : (c <= 11855 || (c < 42238
          ? (c < 12336
            ? (c < 12296
              ? (c < 12289
                ? c == 11858
                : c <= 12291)
              : (c <= 12305 || (c >= 12308 && c <= 12319)))
            : (c <= 12336 || (c < 12448
              ? c == 12349
              : (c <= 12448 || c == 12539))))
          : (c <= 42239 || (c < 42738
            ? (c < 42611
              ? (c >= 42509 && c <= 42511)
              : (c <= 42611 || c == 42622))
            : (c <= 42743 || (c < 43214
              ? (c >= 43124 && c <= 43127)
              : (c <= 43215 || (c >= 43256 && c <= 43258)))))))))
      : (c <= 43260 || (c < 65292
        ? (c < 64830
          ? (c < 43612
            ? (c < 43457
              ? (c < 43359
                ? (c >= 43310 && c <= 43311)
                : c <= 43359)
              : (c <= 43469 || (c >= 43486 && c <= 43487)))
            : (c <= 43615 || (c < 43760
              ? (c >= 43742 && c <= 43743)
              : (c <= 43761 || c == 44011))))
          : (c <= 64831 || (c < 65128
            ? (c < 65108
              ? (c < 65072
                ? (c >= 65040 && c <= 65049)
                : c <= 65106)
              : (c <= 65121 || c == 65123))
            : (c <= 65128 || (c < 65281
              ? (c >= 65130 && c <= 65131)
              : (c <= 65283 || (c >= 65285 && c <= 65290)))))))
        : (c <= 65295 || (c < 66463
          ? (c < 65371
            ? (c < 65339
              ? (c < 65311
                ? (c >= 65306 && c <= 65307)
                : c <= 65312)
              : (c <= 65341 || c == 65343))
            : (c <= 65371 || (c < 65375
              ? c == 65373
              : (c <= 65381 || (c >= 65792 && c <= 65794)))))
          : (c <= 66463 || (c < 67871
            ? (c < 66927
              ? c == 66512
              : (c <= 66927 || c == 67671))
            : (c <= 67871 || (c < 68176
              ? c == 67903
              : (c <= 68184 || c == 68223))))))))))));
}

static inline bool aux_sym__punctuation_token1_character_set_5(int32_t c) {
  return (c < 8208
    ? (c < 2557
      ? (c < 1417
        ? (c < 161
          ? (c < '['
            ? (c < ','
              ? (c < '%'
                ? (c >= '!' && c <= '#')
                : c <= '*')
              : (c <= ';' || (c >= '?' && c <= '@')))
            : (c <= ']' || (c < '{'
              ? c == '_'
              : (c <= '{' || c == '}'))))
          : (c <= 161 || (c < 191
            ? (c < 182
              ? (c < 171
                ? c == 167
                : c <= 171)
              : (c <= 183 || c == 187))
            : (c <= 191 || (c < 903
              ? c == 894
              : (c <= 903 || (c >= 1370 && c <= 1375)))))))
        : (c <= 1418 || (c < 1566
          ? (c < 1523
            ? (c < 1475
              ? (c < 1472
                ? c == 1470
                : c <= 1472)
              : (c <= 1475 || c == 1478))
            : (c <= 1524 || (c < 1548
              ? (c >= 1545 && c <= 1546)
              : (c <= 1549 || c == 1563))))
          : (c <= 1567 || (c < 2096
            ? (c < 1792
              ? (c < 1748
                ? (c >= 1642 && c <= 1645)
                : c <= 1748)
              : (c <= 1805 || (c >= 2039 && c <= 2041)))
            : (c <= 2110 || (c < 2404
              ? c == 2142
              : (c <= 2405 || c == 2416))))))))
      : (c <= 2557 || (c < 5742
        ? (c < 3860
          ? (c < 3572
            ? (c < 3191
              ? (c < 2800
                ? c == 2678
                : c <= 2800)
              : (c <= 3191 || c == 3204))
            : (c <= 3572 || (c < 3674
              ? c == 3663
              : (c <= 3675 || (c >= 3844 && c <= 3858)))))
          : (c <= 3860 || (c < 4170
            ? (c < 4048
              ? (c < 3973
                ? (c >= 3898 && c <= 3901)
                : c <= 3973)
              : (c <= 4052 || (c >= 4057 && c <= 4058)))
            : (c <= 4175 || (c < 4960
              ? c == 4347
              : (c <= 4968 || c == 5120))))))
        : (c <= 5742 || (c < 6816
          ? (c < 6104
            ? (c < 5941
              ? (c < 5867
                ? (c >= 5787 && c <= 5788)
                : c <= 5869)
              : (c <= 5942 || (c >= 6100 && c <= 6102)))
            : (c <= 6106 || (c < 6468
              ? (c >= 6144 && c <= 6154)
              : (c <= 6469 || (c >= 6686 && c <= 6687)))))
          : (c <= 6822 || (c < 7227
            ? (c < 7002
              ? (c >= 6824 && c <= 6829)
              : (c <= 7008 || (c >= 7164 && c <= 7167)))
            : (c <= 7231 || (c < 7360
              ? (c >= 7294 && c <= 7295)
              : (c <= 7367 || c == 7379))))))))))
    : (c <= 8231 || (c < 43260
      ? (c < 11824
        ? (c < 10181
          ? (c < 8333
            ? (c < 8275
              ? (c < 8261
                ? (c >= 8240 && c <= 8259)
                : c <= 8273)
              : (c <= 8286 || (c >= 8317 && c <= 8318)))
            : (c <= 8334 || (c < 9001
              ? (c >= 8968 && c <= 8971)
              : (c <= 9002 || (c >= 10088 && c <= 10101)))))
          : (c <= 10182 || (c < 11513
            ? (c < 10712
              ? (c < 10627
                ? (c >= 10214 && c <= 10223)
                : c <= 10648)
              : (c <= 10715 || (c >= 10748 && c <= 10749)))
            : (c <= 11516 || (c < 11632
              ? (c >= 11518 && c <= 11519)
              : (c <= 11632 || (c >= 11776 && c <= 11822)))))))
        : (c <= 11855 || (c < 42238
          ? (c < 12336
            ? (c < 12296
              ? (c < 12289
                ? c == 11858
                : c <= 12291)
              : (c <= 12305 || (c >= 12308 && c <= 12319)))
            : (c <= 12336 || (c < 12448
              ? c == 12349
              : (c <= 12448 || c == 12539))))
          : (c <= 42239 || (c < 42738
            ? (c < 42611
              ? (c >= 42509 && c <= 42511)
              : (c <= 42611 || c == 42622))
            : (c <= 42743 || (c < 43214
              ? (c >= 43124 && c <= 43127)
              : (c <= 43215 || (c >= 43256 && c <= 43258)))))))))
      : (c <= 43260 || (c < 65292
        ? (c < 64830
          ? (c < 43612
            ? (c < 43457
              ? (c < 43359
                ? (c >= 43310 && c <= 43311)
                : c <= 43359)
              : (c <= 43469 || (c >= 43486 && c <= 43487)))
            : (c <= 43615 || (c < 43760
              ? (c >= 43742 && c <= 43743)
              : (c <= 43761 || c == 44011))))
          : (c <= 64831 || (c < 65128
            ? (c < 65108
              ? (c < 65072
                ? (c >= 65040 && c <= 65049)
                : c <= 65106)
              : (c <= 65121 || c == 65123))
            : (c <= 65128 || (c < 65281
              ? (c >= 65130 && c <= 65131)
              : (c <= 65283 || (c >= 65285 && c <= 65290)))))))
        : (c <= 65295 || (c < 66463
          ? (c < 65371
            ? (c < 65339
              ? (c < 65311
                ? (c >= 65306 && c <= 65307)
                : c <= 65312)
              : (c <= 65341 || c == 65343))
            : (c <= 65371 || (c < 65375
              ? c == 65373
              : (c <= 65381 || (c >= 65792 && c <= 65794)))))
          : (c <= 66463 || (c < 67871
            ? (c < 66927
              ? c == 66512
              : (c <= 66927 || c == 67671))
            : (c <= 67871 || (c < 68176
              ? c == 67903
              : (c <= 68184 || c == 68223))))))))))));
}

static inline bool aux_sym__unreserved_symbol_token1_character_set_1(int32_t c) {
  return (c < 8489
    ? (c < 3407
      ? (c < 900
        ? (c < 215
          ? (c < 172
            ? (c < '|'
              ? (c < '^'
                ? (c >= '$' && c <= '=')
                : c <= '`')
              : (c <= '|' || (c >= 162 && c <= 169)))
            : (c <= 172 || (c < 180
              ? (c >= 174 && c <= 177)
              : (c <= 180 || c == 184))))
          : (c <= 215 || (c < 741
            ? (c < 706
              ? c == 247
              : (c <= 709 || (c >= 722 && c <= 735)))
            : (c <= 747 || (c < 751
              ? c == 749
              : (c <= 767 || c == 885))))))
        : (c <= 901 || (c < 2038
          ? (c < 1542
            ? (c < 1154
              ? c == 1014
              : (c <= 1154 || (c >= 1421 && c <= 1423)))
            : (c <= 1551 || (c < 1769
              ? c == 1758
              : (c <= 1769 || (c >= 1789 && c <= 1790)))))
          : (c <= 2038 || (c < 2801
            ? (c < 2546
              ? (c >= 2046 && c <= 2047)
              : (c <= 2547 || (c >= 2554 && c <= 2555)))
            : (c <= 2801 || (c < 3059
              ? c == 2928
              : (c <= 3066 || c == 3199))))))))
      : (c <= 3407 || (c < 8141
        ? (c < 5008
          ? (c < 3892
            ? (c < 3647
              ? c == 3449
              : (c <= 3647 || (c >= 3841 && c <= 3871)))
            : (c <= 3896 || (c < 4046
              ? (c >= 4030 && c <= 4044)
              : (c <= 4056 || (c >= 4254 && c <= 4255)))))
          : (c <= 5017 || (c < 6622
            ? (c < 6107
              ? c == 5741
              : (c <= 6107 || c == 6464))
            : (c <= 6655 || (c < 8125
              ? (c >= 7009 && c <= 7036)
              : (c <= 8125 || (c >= 8127 && c <= 8129)))))))
        : (c <= 8143 || (c < 8448
          ? (c < 8260
            ? (c < 8173
              ? (c >= 8157 && c <= 8159)
              : (c <= 8175 || (c >= 8189 && c <= 8190)))
            : (c <= 8274 || (c < 8330
              ? (c >= 8314 && c <= 8316)
              : (c <= 8332 || (c >= 8352 && c <= 8383)))))
          : (c <= 8449 || (c < 8470
            ? (c < 8456
              ? (c >= 8451 && c <= 8454)
              : (c <= 8457 || c == 8468))
            : (c <= 8472 || (c < 8485
              ? (c >= 8478 && c <= 8483)
              : (c <= 8485 || c == 8487))))))))))
    : (c <= 8489 || (c < 12938
      ? (c < 11904
        ? (c < 9280
          ? (c < 8522
            ? (c < 8506
              ? c == 8494
              : (c <= 8507 || (c >= 8512 && c <= 8516)))
            : (c <= 8525 || (c < 8586
              ? c == 8527
              : (c <= 8587 || (c >= 8592 && c <= 9254)))))
          : (c <= 9290 || (c < 11126
            ? (c < 9472
              ? (c >= 9372 && c <= 9449)
              : (c <= 10087 || (c >= 10132 && c <= 11123)))
            : (c <= 11157 || (c < 11493
              ? (c >= 11159 && c <= 11263)
              : (c <= 11498 || (c >= 11856 && c <= 11857)))))))
        : (c <= 11929 || (c < 12443
          ? (c < 12292
            ? (c < 12032
              ? (c >= 11931 && c <= 12019)
              : (c <= 12245 || (c >= 12272 && c <= 12283)))
            : (c <= 12292 || (c < 12342
              ? (c >= 12306 && c <= 12320)
              : (c <= 12343 || (c >= 12350 && c <= 12351)))))
          : (c <= 12444 || (c < 12800
            ? (c < 12694
              ? (c >= 12688 && c <= 12689)
              : (c <= 12703 || (c >= 12736 && c <= 12771)))
            : (c <= 12830 || (c < 12880
              ? (c >= 12842 && c <= 12871)
              : (c <= 12880 || (c >= 12896 && c <= 12927)))))))))
      : (c <= 12976 || (c < 65129
        ? (c < 43062
          ? (c < 42752
            ? (c < 19904
              ? (c >= 12992 && c <= 13311)
              : (c <= 19967 || (c >= 42128 && c <= 42182)))
            : (c <= 42774 || (c < 42889
              ? (c >= 42784 && c <= 42785)
              : (c <= 42890 || (c >= 43048 && c <= 43051)))))
          : (c <= 43065 || (c < 64297
            ? (c < 43867
              ? (c >= 43639 && c <= 43641)
              : (c <= 43867 || (c >= 43882 && c <= 43883)))
            : (c <= 64297 || (c < 65020
              ? (c >= 64434 && c <= 64449)
              : (c <= 65021 || (c >= 65122 && c <= 65126)))))))
        : (c <= 65129 || (c < 65847
          ? (c < 65372
            ? (c < 65308
              ? (c >= 65284 && c <= 65291)
              : (c <= 65310 || (c >= 65342 && c <= 65344)))
            : (c <= 65374 || (c < 65512
              ? (c >= 65504 && c <= 65510)
              : (c <= 65518 || (c >= 65532 && c <= 65533)))))
          : (c <= 65855 || (c < 65952
            ? (c < 65932
              ? (c >= 65913 && c <= 65929)
              : (c <= 65934 || (c >= 65936 && c <= 65948)))
            : (c <= 65952 || (c < 67703
              ? (c >= 66000 && c <= 66044)
              : (c <= 67704 || c == 68296))))))))))));
}

static inline bool aux_sym__unreserved_symbol_token1_character_set_2(int32_t c) {
  return (c < 8489
    ? (c < 3407
      ? (c < 900
        ? (c < 215
          ? (c < 172
            ? (c < '|'
              ? (c < '^'
                ? (c >= '$' && c <= '>')
                : c <= '`')
              : (c <= '|' || (c >= 162 && c <= 169)))
            : (c <= 172 || (c < 180
              ? (c >= 174 && c <= 177)
              : (c <= 180 || c == 184))))
          : (c <= 215 || (c < 741
            ? (c < 706
              ? c == 247
              : (c <= 709 || (c >= 722 && c <= 735)))
            : (c <= 747 || (c < 751
              ? c == 749
              : (c <= 767 || c == 885))))))
        : (c <= 901 || (c < 2038
          ? (c < 1542
            ? (c < 1154
              ? c == 1014
              : (c <= 1154 || (c >= 1421 && c <= 1423)))
            : (c <= 1551 || (c < 1769
              ? c == 1758
              : (c <= 1769 || (c >= 1789 && c <= 1790)))))
          : (c <= 2038 || (c < 2801
            ? (c < 2546
              ? (c >= 2046 && c <= 2047)
              : (c <= 2547 || (c >= 2554 && c <= 2555)))
            : (c <= 2801 || (c < 3059
              ? c == 2928
              : (c <= 3066 || c == 3199))))))))
      : (c <= 3407 || (c < 8141
        ? (c < 5008
          ? (c < 3892
            ? (c < 3647
              ? c == 3449
              : (c <= 3647 || (c >= 3841 && c <= 3871)))
            : (c <= 3896 || (c < 4046
              ? (c >= 4030 && c <= 4044)
              : (c <= 4056 || (c >= 4254 && c <= 4255)))))
          : (c <= 5017 || (c < 6622
            ? (c < 6107
              ? c == 5741
              : (c <= 6107 || c == 6464))
            : (c <= 6655 || (c < 8125
              ? (c >= 7009 && c <= 7036)
              : (c <= 8125 || (c >= 8127 && c <= 8129)))))))
        : (c <= 8143 || (c < 8448
          ? (c < 8260
            ? (c < 8173
              ? (c >= 8157 && c <= 8159)
              : (c <= 8175 || (c >= 8189 && c <= 8190)))
            : (c <= 8274 || (c < 8330
              ? (c >= 8314 && c <= 8316)
              : (c <= 8332 || (c >= 8352 && c <= 8383)))))
          : (c <= 8449 || (c < 8470
            ? (c < 8456
              ? (c >= 8451 && c <= 8454)
              : (c <= 8457 || c == 8468))
            : (c <= 8472 || (c < 8485
              ? (c >= 8478 && c <= 8483)
              : (c <= 8485 || c == 8487))))))))))
    : (c <= 8489 || (c < 12938
      ? (c < 11904
        ? (c < 9280
          ? (c < 8522
            ? (c < 8506
              ? c == 8494
              : (c <= 8507 || (c >= 8512 && c <= 8516)))
            : (c <= 8525 || (c < 8586
              ? c == 8527
              : (c <= 8587 || (c >= 8592 && c <= 9254)))))
          : (c <= 9290 || (c < 11126
            ? (c < 9472
              ? (c >= 9372 && c <= 9449)
              : (c <= 10087 || (c >= 10132 && c <= 11123)))
            : (c <= 11157 || (c < 11493
              ? (c >= 11159 && c <= 11263)
              : (c <= 11498 || (c >= 11856 && c <= 11857)))))))
        : (c <= 11929 || (c < 12443
          ? (c < 12292
            ? (c < 12032
              ? (c >= 11931 && c <= 12019)
              : (c <= 12245 || (c >= 12272 && c <= 12283)))
            : (c <= 12292 || (c < 12342
              ? (c >= 12306 && c <= 12320)
              : (c <= 12343 || (c >= 12350 && c <= 12351)))))
          : (c <= 12444 || (c < 12800
            ? (c < 12694
              ? (c >= 12688 && c <= 12689)
              : (c <= 12703 || (c >= 12736 && c <= 12771)))
            : (c <= 12830 || (c < 12880
              ? (c >= 12842 && c <= 12871)
              : (c <= 12880 || (c >= 12896 && c <= 12927)))))))))
      : (c <= 12976 || (c < 65129
        ? (c < 43062
          ? (c < 42752
            ? (c < 19904
              ? (c >= 12992 && c <= 13311)
              : (c <= 19967 || (c >= 42128 && c <= 42182)))
            : (c <= 42774 || (c < 42889
              ? (c >= 42784 && c <= 42785)
              : (c <= 42890 || (c >= 43048 && c <= 43051)))))
          : (c <= 43065 || (c < 64297
            ? (c < 43867
              ? (c >= 43639 && c <= 43641)
              : (c <= 43867 || (c >= 43882 && c <= 43883)))
            : (c <= 64297 || (c < 65020
              ? (c >= 64434 && c <= 64449)
              : (c <= 65021 || (c >= 65122 && c <= 65126)))))))
        : (c <= 65129 || (c < 65847
          ? (c < 65372
            ? (c < 65308
              ? (c >= 65284 && c <= 65291)
              : (c <= 65310 || (c >= 65342 && c <= 65344)))
            : (c <= 65374 || (c < 65512
              ? (c >= 65504 && c <= 65510)
              : (c <= 65518 || (c >= 65532 && c <= 65533)))))
          : (c <= 65855 || (c < 65952
            ? (c < 65932
              ? (c >= 65913 && c <= 65929)
              : (c <= 65934 || (c >= 65936 && c <= 65948)))
            : (c <= 65952 || (c < 67703
              ? (c >= 66000 && c <= 66044)
              : (c <= 67704 || c == 68296))))))))))));
}

static inline bool aux_sym__unreserved_symbol_token1_character_set_3(int32_t c) {
  return (c < 8494
    ? (c < 3199
      ? (c < 751
        ? (c < 174
          ? (c < '`'
            ? (c < '<'
              ? (c < '+'
                ? c == '$'
                : c <= '+')
              : (c <= '>' || c == '^'))
            : (c <= '`' || (c < 168
              ? (c < 162
                ? (c >= '|' && c <= '~')
                : c <= 166)
              : (c <= 169 || c == 172))))
          : (c <= 177 || (c < 706
            ? (c < 215
              ? (c < 184
                ? c == 180
                : c <= 184)
              : (c <= 215 || c == 247))
            : (c <= 709 || (c < 741
              ? (c >= 722 && c <= 735)
              : (c <= 747 || c == 749))))))
        : (c <= 767 || (c < 1769
          ? (c < 1421
            ? (c < 1014
              ? (c < 900
                ? c == 885
                : c <= 901)
              : (c <= 1014 || c == 1154))
            : (c <= 1423 || (c < 1550
              ? (c < 1547
                ? (c >= 1542 && c <= 1544)
                : c <= 1547)
              : (c <= 1551 || c == 1758))))
          : (c <= 1769 || (c < 2554
            ? (c < 2046
              ? (c < 2038
                ? (c >= 1789 && c <= 1790)
                : c <= 2038)
              : (c <= 2047 || (c >= 2546 && c <= 2547)))
            : (c <= 2555 || (c < 2928
              ? c == 2801
              : (c <= 2928 || (c >= 3059 && c <= 3066)))))))))
      : (c <= 3199 || (c < 8127
        ? (c < 4053
          ? (c < 3859
            ? (c < 3647
              ? (c < 3449
                ? c == 3407
                : c <= 3449)
              : (c <= 3647 || (c >= 3841 && c <= 3843)))
            : (c <= 3859 || (c < 4030
              ? (c < 3892
                ? (c >= 3861 && c <= 3871)
                : c <= 3896)
              : (c <= 4044 || (c >= 4046 && c <= 4047)))))
          : (c <= 4056 || (c < 6464
            ? (c < 5741
              ? (c < 5008
                ? (c >= 4254 && c <= 4255)
                : c <= 5017)
              : (c <= 5741 || c == 6107))
            : (c <= 6464 || (c < 7009
              ? (c >= 6622 && c <= 6655)
              : (c <= 7036 || c == 8125))))))
        : (c <= 8129 || (c < 8448
          ? (c < 8260
            ? (c < 8173
              ? (c < 8157
                ? (c >= 8141 && c <= 8143)
                : c <= 8159)
              : (c <= 8175 || (c >= 8189 && c <= 8190)))
            : (c <= 8260 || (c < 8330
              ? (c < 8314
                ? c == 8274
                : c <= 8316)
              : (c <= 8332 || (c >= 8352 && c <= 8383)))))
          : (c <= 8449 || (c < 8478
            ? (c < 8468
              ? (c < 8456
                ? (c >= 8451 && c <= 8454)
                : c <= 8457)
              : (c <= 8468 || (c >= 8470 && c <= 8472)))
            : (c <= 8483 || (c < 8487
              ? c == 8485
              : (c <= 8487 || c == 8489))))))))))
    : (c <= 8494 || (c < 12896
      ? (c < 11159
        ? (c < 9372
          ? (c < 8586
            ? (c < 8522
              ? (c < 8512
                ? (c >= 8506 && c <= 8507)
                : c <= 8516)
              : (c <= 8525 || c == 8527))
            : (c <= 8587 || (c < 9003
              ? (c < 8972
                ? (c >= 8592 && c <= 8967)
                : c <= 9000)
              : (c <= 9254 || (c >= 9280 && c <= 9290)))))
          : (c <= 9449 || (c < 10649
            ? (c < 10183
              ? (c < 10132
                ? (c >= 9472 && c <= 10087)
                : c <= 10180)
              : (c <= 10213 || (c >= 10224 && c <= 10626)))
            : (c <= 10711 || (c < 10750
              ? (c >= 10716 && c <= 10747)
              : (c <= 11123 || (c >= 11126 && c <= 11157)))))))
        : (c <= 11263 || (c < 12342
          ? (c < 12032
            ? (c < 11904
              ? (c < 11856
                ? (c >= 11493 && c <= 11498)
                : c <= 11857)
              : (c <= 11929 || (c >= 11931 && c <= 12019)))
            : (c <= 12245 || (c < 12306
              ? (c < 12292
                ? (c >= 12272 && c <= 12283)
                : c <= 12292)
              : (c <= 12307 || c == 12320))))
          : (c <= 12343 || (c < 12736
            ? (c < 12688
              ? (c < 12443
                ? (c >= 12350 && c <= 12351)
                : c <= 12444)
              : (c <= 12689 || (c >= 12694 && c <= 12703)))
            : (c <= 12771 || (c < 12842
              ? (c >= 12800 && c <= 12830)
              : (c <= 12871 || c == 12880))))))))
      : (c <= 12927 || (c < 65284
        ? (c < 43639
          ? (c < 42752
            ? (c < 19904
              ? (c < 12992
                ? (c >= 12938 && c <= 12976)
                : c <= 13311)
              : (c <= 19967 || (c >= 42128 && c <= 42182)))
            : (c <= 42774 || (c < 43048
              ? (c < 42889
                ? (c >= 42784 && c <= 42785)
                : c <= 42890)
              : (c <= 43051 || (c >= 43062 && c <= 43065)))))
          : (c <= 43641 || (c < 65020
            ? (c < 64297
              ? (c < 43882
                ? c == 43867
                : c <= 43883)
              : (c <= 64297 || (c >= 64434 && c <= 64449)))
            : (c <= 65021 || (c < 65124
              ? c == 65122
              : (c <= 65126 || c == 65129))))))
        : (c <= 65284 || (c < 65532
          ? (c < 65372
            ? (c < 65342
              ? (c < 65308
                ? c == 65291
                : c <= 65310)
              : (c <= 65342 || c == 65344))
            : (c <= 65372 || (c < 65504
              ? c == 65374
              : (c <= 65510 || (c >= 65512 && c <= 65518)))))
          : (c <= 65533 || (c < 65952
            ? (c < 65932
              ? (c < 65913
                ? (c >= 65847 && c <= 65855)
                : c <= 65929)
              : (c <= 65934 || (c >= 65936 && c <= 65948)))
            : (c <= 65952 || (c < 67703
              ? (c >= 66000 && c <= 66044)
              : (c <= 67704 || c == 68296))))))))))));
}

static inline bool aux_sym__unreserved_symbol_token1_character_set_4(int32_t c) {
  return (c < 8489
    ? (c < 3407
      ? (c < 900
        ? (c < 215
          ? (c < 172
            ? (c < '|'
              ? (c < '^'
                ? (c >= '$' && c <= '>')
                : c <= '`')
              : (c <= '~' || (c >= 162 && c <= 169)))
            : (c <= 172 || (c < 180
              ? (c >= 174 && c <= 177)
              : (c <= 180 || c == 184))))
          : (c <= 215 || (c < 741
            ? (c < 706
              ? c == 247
              : (c <= 709 || (c >= 722 && c <= 735)))
            : (c <= 747 || (c < 751
              ? c == 749
              : (c <= 767 || c == 885))))))
        : (c <= 901 || (c < 2038
          ? (c < 1542
            ? (c < 1154
              ? c == 1014
              : (c <= 1154 || (c >= 1421 && c <= 1423)))
            : (c <= 1551 || (c < 1769
              ? c == 1758
              : (c <= 1769 || (c >= 1789 && c <= 1790)))))
          : (c <= 2038 || (c < 2801
            ? (c < 2546
              ? (c >= 2046 && c <= 2047)
              : (c <= 2547 || (c >= 2554 && c <= 2555)))
            : (c <= 2801 || (c < 3059
              ? c == 2928
              : (c <= 3066 || c == 3199))))))))
      : (c <= 3407 || (c < 8141
        ? (c < 5008
          ? (c < 3892
            ? (c < 3647
              ? c == 3449
              : (c <= 3647 || (c >= 3841 && c <= 3871)))
            : (c <= 3896 || (c < 4046
              ? (c >= 4030 && c <= 4044)
              : (c <= 4056 || (c >= 4254 && c <= 4255)))))
          : (c <= 5017 || (c < 6622
            ? (c < 6107
              ? c == 5741
              : (c <= 6107 || c == 6464))
            : (c <= 6655 || (c < 8125
              ? (c >= 7009 && c <= 7036)
              : (c <= 8125 || (c >= 8127 && c <= 8129)))))))
        : (c <= 8143 || (c < 8448
          ? (c < 8260
            ? (c < 8173
              ? (c >= 8157 && c <= 8159)
              : (c <= 8175 || (c >= 8189 && c <= 8190)))
            : (c <= 8274 || (c < 8330
              ? (c >= 8314 && c <= 8316)
              : (c <= 8332 || (c >= 8352 && c <= 8383)))))
          : (c <= 8449 || (c < 8470
            ? (c < 8456
              ? (c >= 8451 && c <= 8454)
              : (c <= 8457 || c == 8468))
            : (c <= 8472 || (c < 8485
              ? (c >= 8478 && c <= 8483)
              : (c <= 8485 || c == 8487))))))))))
    : (c <= 8489 || (c < 12938
      ? (c < 11904
        ? (c < 9280
          ? (c < 8522
            ? (c < 8506
              ? c == 8494
              : (c <= 8507 || (c >= 8512 && c <= 8516)))
            : (c <= 8525 || (c < 8586
              ? c == 8527
              : (c <= 8587 || (c >= 8592 && c <= 9254)))))
          : (c <= 9290 || (c < 11126
            ? (c < 9472
              ? (c >= 9372 && c <= 9449)
              : (c <= 10087 || (c >= 10132 && c <= 11123)))
            : (c <= 11157 || (c < 11493
              ? (c >= 11159 && c <= 11263)
              : (c <= 11498 || (c >= 11856 && c <= 11857)))))))
        : (c <= 11929 || (c < 12443
          ? (c < 12292
            ? (c < 12032
              ? (c >= 11931 && c <= 12019)
              : (c <= 12245 || (c >= 12272 && c <= 12283)))
            : (c <= 12292 || (c < 12342
              ? (c >= 12306 && c <= 12320)
              : (c <= 12343 || (c >= 12350 && c <= 12351)))))
          : (c <= 12444 || (c < 12800
            ? (c < 12694
              ? (c >= 12688 && c <= 12689)
              : (c <= 12703 || (c >= 12736 && c <= 12771)))
            : (c <= 12830 || (c < 12880
              ? (c >= 12842 && c <= 12871)
              : (c <= 12880 || (c >= 12896 && c <= 12927)))))))))
      : (c <= 12976 || (c < 65129
        ? (c < 43062
          ? (c < 42752
            ? (c < 19904
              ? (c >= 12992 && c <= 13311)
              : (c <= 19967 || (c >= 42128 && c <= 42182)))
            : (c <= 42774 || (c < 42889
              ? (c >= 42784 && c <= 42785)
              : (c <= 42890 || (c >= 43048 && c <= 43051)))))
          : (c <= 43065 || (c < 64297
            ? (c < 43867
              ? (c >= 43639 && c <= 43641)
              : (c <= 43867 || (c >= 43882 && c <= 43883)))
            : (c <= 64297 || (c < 65020
              ? (c >= 64434 && c <= 64449)
              : (c <= 65021 || (c >= 65122 && c <= 65126)))))))
        : (c <= 65129 || (c < 65847
          ? (c < 65372
            ? (c < 65308
              ? (c >= 65284 && c <= 65291)
              : (c <= 65310 || (c >= 65342 && c <= 65344)))
            : (c <= 65374 || (c < 65512
              ? (c >= 65504 && c <= 65510)
              : (c <= 65518 || (c >= 65532 && c <= 65533)))))
          : (c <= 65855 || (c < 65952
            ? (c < 65932
              ? (c >= 65913 && c <= 65929)
              : (c <= 65934 || (c >= 65936 && c <= 65948)))
            : (c <= 65952 || (c < 67703
              ? (c >= 66000 && c <= 66044)
              : (c <= 67704 || c == 68296))))))))))));
}

static inline bool aux_sym__unreserved_symbol_token1_character_set_5(int32_t c) {
  return (c < 8489
    ? (c < 3059
      ? (c < 749
        ? (c < 172
          ? (c < '`'
            ? (c < '<'
              ? (c < '+'
                ? c == '$'
                : c <= '+')
              : (c <= '>' || c == '^'))
            : (c <= '`' || (c < 162
              ? (c < '~'
                ? c == '|'
                : c <= '~')
              : (c <= 166 || (c >= 168 && c <= 169)))))
          : (c <= 172 || (c < 247
            ? (c < 184
              ? (c < 180
                ? (c >= 174 && c <= 177)
                : c <= 180)
              : (c <= 184 || c == 215))
            : (c <= 247 || (c < 722
              ? (c >= 706 && c <= 709)
              : (c <= 735 || (c >= 741 && c <= 747)))))))
        : (c <= 749 || (c < 1758
          ? (c < 1154
            ? (c < 900
              ? (c < 885
                ? (c >= 751 && c <= 767)
                : c <= 885)
              : (c <= 901 || c == 1014))
            : (c <= 1154 || (c < 1547
              ? (c < 1542
                ? (c >= 1421 && c <= 1423)
                : c <= 1544)
              : (c <= 1547 || (c >= 1550 && c <= 1551)))))
          : (c <= 1758 || (c < 2546
            ? (c < 2038
              ? (c < 1789
                ? c == 1769
                : c <= 1790)
              : (c <= 2038 || (c >= 2046 && c <= 2047)))
            : (c <= 2547 || (c < 2801
              ? (c >= 2554 && c <= 2555)
              : (c <= 2801 || c == 2928))))))))
      : (c <= 3066 || (c < 8125
        ? (c < 4046
          ? (c < 3841
            ? (c < 3449
              ? (c < 3407
                ? c == 3199
                : c <= 3407)
              : (c <= 3449 || c == 3647))
            : (c <= 3843 || (c < 3892
              ? (c < 3861
                ? c == 3859
                : c <= 3871)
              : (c <= 3896 || (c >= 4030 && c <= 4044)))))
          : (c <= 4047 || (c < 6107
            ? (c < 5008
              ? (c < 4254
                ? (c >= 4053 && c <= 4056)
                : c <= 4255)
              : (c <= 5017 || c == 5741))
            : (c <= 6107 || (c < 6622
              ? c == 6464
              : (c <= 6655 || (c >= 7009 && c <= 7036)))))))
        : (c <= 8125 || (c < 8352
          ? (c < 8189
            ? (c < 8157
              ? (c < 8141
                ? (c >= 8127 && c <= 8129)
                : c <= 8143)
              : (c <= 8159 || (c >= 8173 && c <= 8175)))
            : (c <= 8190 || (c < 8314
              ? (c < 8274
                ? c == 8260
                : c <= 8274)
              : (c <= 8316 || (c >= 8330 && c <= 8332)))))
          : (c <= 8383 || (c < 8470
            ? (c < 8456
              ? (c < 8451
                ? (c >= 8448 && c <= 8449)
                : c <= 8454)
              : (c <= 8457 || c == 8468))
            : (c <= 8472 || (c < 8485
              ? (c >= 8478 && c <= 8483)
              : (c <= 8485 || c == 8487))))))))))
    : (c <= 8489 || (c < 12880
      ? (c < 11126
        ? (c < 9280
          ? (c < 8527
            ? (c < 8512
              ? (c < 8506
                ? c == 8494
                : c <= 8507)
              : (c <= 8516 || (c >= 8522 && c <= 8525)))
            : (c <= 8527 || (c < 8972
              ? (c < 8592
                ? (c >= 8586 && c <= 8587)
                : c <= 8967)
              : (c <= 9000 || (c >= 9003 && c <= 9254)))))
          : (c <= 9290 || (c < 10224
            ? (c < 10132
              ? (c < 9472
                ? (c >= 9372 && c <= 9449)
                : c <= 10087)
              : (c <= 10180 || (c >= 10183 && c <= 10213)))
            : (c <= 10626 || (c < 10716
              ? (c >= 10649 && c <= 10711)
              : (c <= 10747 || (c >= 10750 && c <= 11123)))))))
        : (c <= 11157 || (c < 12320
          ? (c < 11931
            ? (c < 11856
              ? (c < 11493
                ? (c >= 11159 && c <= 11263)
                : c <= 11498)
              : (c <= 11857 || (c >= 11904 && c <= 11929)))
            : (c <= 12019 || (c < 12292
              ? (c < 12272
                ? (c >= 12032 && c <= 12245)
                : c <= 12283)
              : (c <= 12292 || (c >= 12306 && c <= 12307)))))
          : (c <= 12320 || (c < 12694
            ? (c < 12443
              ? (c < 12350
                ? (c >= 12342 && c <= 12343)
                : c <= 12351)
              : (c <= 12444 || (c >= 12688 && c <= 12689)))
            : (c <= 12703 || (c < 12800
              ? (c >= 12736 && c <= 12771)
              : (c <= 12830 || (c >= 12842 && c <= 12871)))))))))
      : (c <= 12880 || (c < 65129
        ? (c < 43062
          ? (c < 42128
            ? (c < 12992
              ? (c < 12938
                ? (c >= 12896 && c <= 12927)
                : c <= 12976)
              : (c <= 13311 || (c >= 19904 && c <= 19967)))
            : (c <= 42182 || (c < 42889
              ? (c < 42784
                ? (c >= 42752 && c <= 42774)
                : c <= 42785)
              : (c <= 42890 || (c >= 43048 && c <= 43051)))))
          : (c <= 43065 || (c < 64434
            ? (c < 43882
              ? (c < 43867
                ? (c >= 43639 && c <= 43641)
                : c <= 43867)
              : (c <= 43883 || c == 64297))
            : (c <= 64449 || (c < 65122
              ? (c >= 65020 && c <= 65021)
              : (c <= 65122 || (c >= 65124 && c <= 65126)))))))
        : (c <= 65129 || (c < 65532
          ? (c < 65344
            ? (c < 65308
              ? (c < 65291
                ? c == 65284
                : c <= 65291)
              : (c <= 65310 || c == 65342))
            : (c <= 65344 || (c < 65504
              ? (c < 65374
                ? c == 65372
                : c <= 65374)
              : (c <= 65510 || (c >= 65512 && c <= 65518)))))
          : (c <= 65533 || (c < 65952
            ? (c < 65932
              ? (c < 65913
                ? (c >= 65847 && c <= 65855)
                : c <= 65929)
              : (c <= 65934 || (c >= 65936 && c <= 65948)))
            : (c <= 65952 || (c < 67703
              ? (c >= 66000 && c <= 66044)
              : (c <= 67704 || c == 68296))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == 0) ADVANCE(10);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '%') ADVANCE(24);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(18);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '~') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (aux_sym__punctuation_token1_character_set_1(lookahead)) ADVANCE(34);
      if (aux_sym__alphabetic_token2_character_set_1(lookahead)) ADVANCE(30);
      if (aux_sym__unreserved_symbol_token1_character_set_1(lookahead)) ADVANCE(36);
      if (aux_sym__alphabetic_token1_character_set_1(lookahead)) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (eof) ADVANCE(9);
      if (lookahead == 0) ADVANCE(10);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == '~') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(31);
      if (aux_sym__punctuation_token1_character_set_2(lookahead)) ADVANCE(34);
      if (aux_sym__alphabetic_token2_character_set_1(lookahead)) ADVANCE(30);
      if (aux_sym__unreserved_symbol_token1_character_set_1(lookahead)) ADVANCE(36);
      if (aux_sym__alphabetic_token1_character_set_2(lookahead)) ADVANCE(29);
      END_STATE();
    case 4:
      if (eof) ADVANCE(9);
      if (lookahead == 0) ADVANCE(10);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '~') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(31);
      if (aux_sym__punctuation_token1_character_set_3(lookahead)) ADVANCE(34);
      if (aux_sym__alphabetic_token2_character_set_1(lookahead)) ADVANCE(30);
      if (aux_sym__unreserved_symbol_token1_character_set_2(lookahead)) ADVANCE(36);
      if (aux_sym__alphabetic_token1_character_set_2(lookahead)) ADVANCE(29);
      END_STATE();
    case 5:
      if (eof) ADVANCE(9);
      if (lookahead == 0) ADVANCE(10);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '%') ADVANCE(24);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(31);
      if (aux_sym__alphabetic_token2_character_set_2(lookahead)) ADVANCE(30);
      if (aux_sym__unreserved_symbol_token1_character_set_3(lookahead)) ADVANCE(36);
      if (aux_sym__alphabetic_token1_character_set_3(lookahead)) ADVANCE(29);
      END_STATE();
    case 6:
      if (eof) ADVANCE(9);
      if (lookahead == 0) ADVANCE(10);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '%') ADVANCE(24);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(31);
      if (aux_sym__punctuation_token1_character_set_4(lookahead)) ADVANCE(34);
      if (aux_sym__alphabetic_token2_character_set_1(lookahead)) ADVANCE(30);
      if (aux_sym__unreserved_symbol_token1_character_set_4(lookahead)) ADVANCE(36);
      if (aux_sym__alphabetic_token1_character_set_2(lookahead)) ADVANCE(29);
      END_STATE();
    case 7:
      if (eof) ADVANCE(9);
      if (lookahead == 0) ADVANCE(10);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(31);
      if (aux_sym__punctuation_token1_character_set_5(lookahead)) ADVANCE(34);
      if (aux_sym__alphabetic_token2_character_set_1(lookahead)) ADVANCE(30);
      if (aux_sym__unreserved_symbol_token1_character_set_4(lookahead)) ADVANCE(36);
      if (aux_sym__alphabetic_token1_character_set_2(lookahead)) ADVANCE(29);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == 0) ADVANCE(10);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == ']') ADVANCE(18);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (aux_sym__alphabetic_token2_character_set_2(lookahead)) ADVANCE(30);
      if (aux_sym__unreserved_symbol_token1_character_set_5(lookahead)) ADVANCE(36);
      if (aux_sym__alphabetic_token1_character_set_4(lookahead)) ADVANCE(29);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_recipe_token1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACK_DASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(2);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__non_zero_digit);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__zero);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__alphabetic_token1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym__alphabetic_token2);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__whitespace_token2);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__punctuation_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__punctuation_token1);
      if (lookahead == '-') ADVANCE(16);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__unreserved_symbol_token1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__unreserved_symbol_token1);
      if (lookahead == '>') ADVANCE(11);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 4, .external_lex_state = 1},
  [6] = {.lex_state = 4, .external_lex_state = 1},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 4, .external_lex_state = 1},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7, .external_lex_state = 1},
  [34] = {.lex_state = 5, .external_lex_state = 1},
  [35] = {.lex_state = 7, .external_lex_state = 1},
  [36] = {.lex_state = 6, .external_lex_state = 1},
  [37] = {.lex_state = 7, .external_lex_state = 1},
  [38] = {.lex_state = 5, .external_lex_state = 1},
  [39] = {.lex_state = 5, .external_lex_state = 1},
  [40] = {.lex_state = 7, .external_lex_state = 1},
  [41] = {.lex_state = 5, .external_lex_state = 1},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 4, .external_lex_state = 1},
  [46] = {.lex_state = 6, .external_lex_state = 1},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 4, .external_lex_state = 1},
  [50] = {.lex_state = 4, .external_lex_state = 1},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 4, .external_lex_state = 1},
  [54] = {.lex_state = 4, .external_lex_state = 1},
  [55] = {.lex_state = 4, .external_lex_state = 1},
  [56] = {.lex_state = 4, .external_lex_state = 1},
  [57] = {.lex_state = 4, .external_lex_state = 1},
  [58] = {.lex_state = 4, .external_lex_state = 1},
  [59] = {.lex_state = 4, .external_lex_state = 1},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 4, .external_lex_state = 1},
  [62] = {.lex_state = 7, .external_lex_state = 1},
  [63] = {.lex_state = 4, .external_lex_state = 1},
  [64] = {.lex_state = 4, .external_lex_state = 1},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 4, .external_lex_state = 1},
  [67] = {.lex_state = 4, .external_lex_state = 1},
  [68] = {.lex_state = 4, .external_lex_state = 1},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 8, .external_lex_state = 1},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 8, .external_lex_state = 1},
  [76] = {.lex_state = 5, .external_lex_state = 1},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5, .external_lex_state = 1},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 7, .external_lex_state = 1},
  [84] = {.lex_state = 7, .external_lex_state = 1},
  [85] = {.lex_state = 7, .external_lex_state = 1},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 7, .external_lex_state = 1},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 5, .external_lex_state = 1},
  [91] = {.lex_state = 5, .external_lex_state = 1},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 5, .external_lex_state = 1},
  [107] = {.lex_state = 5, .external_lex_state = 1},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 5, .external_lex_state = 1},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 5, .external_lex_state = 1},
  [122] = {.lex_state = 5, .external_lex_state = 1},
  [123] = {.lex_state = 5, .external_lex_state = 1},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5, .external_lex_state = 1},
  [126] = {.lex_state = 5, .external_lex_state = 1},
  [127] = {.lex_state = 5, .external_lex_state = 1},
  [128] = {.lex_state = 5, .external_lex_state = 1},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 0, .external_lex_state = 1},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 0, .external_lex_state = 1},
  [161] = {.lex_state = 0, .external_lex_state = 1},
  [162] = {.lex_state = 0, .external_lex_state = 1},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 0, .external_lex_state = 1},
  [167] = {.lex_state = 0, .external_lex_state = 1},
  [168] = {.lex_state = 0, .external_lex_state = 1},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0, .external_lex_state = 1},
  [173] = {.lex_state = 0, .external_lex_state = 1},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 0, .external_lex_state = 1},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 14},
};

enum {
  ts_external_token__newline = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_recipe_token1] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LBRACK_DASH] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__non_zero_digit] = ACTIONS(1),
    [sym__zero] = ACTIONS(1),
    [aux_sym__alphabetic_token1] = ACTIONS(1),
    [aux_sym__alphabetic_token2] = ACTIONS(1),
    [aux_sym__punctuation_token1] = ACTIONS(1),
    [aux_sym__unreserved_symbol_token1] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_recipe] = STATE(183),
    [sym__line] = STATE(160),
    [sym_metadata] = STATE(160),
    [sym_step] = STATE(160),
    [sym_comment] = STATE(160),
    [sym_block_comment] = STATE(160),
    [sym_ingredient] = STATE(6),
    [sym_cookware] = STATE(6),
    [sym_timer] = STATE(6),
    [aux_sym__text_item] = STATE(6),
    [sym__digit] = STATE(6),
    [sym__alphabetic] = STATE(6),
    [sym__whitespace] = STATE(6),
    [sym__punctuation] = STATE(6),
    [sym__symbol] = STATE(6),
    [aux_sym_recipe_repeat1] = STATE(3),
    [aux_sym_step_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_recipe_token1] = ACTIONS(5),
    [anon_sym_GT_GT] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_LBRACK_DASH] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [sym__non_zero_digit] = ACTIONS(19),
    [sym__zero] = ACTIONS(19),
    [aux_sym__alphabetic_token1] = ACTIONS(19),
    [aux_sym__alphabetic_token2] = ACTIONS(19),
    [aux_sym__whitespace_token1] = ACTIONS(19),
    [aux_sym__whitespace_token2] = ACTIONS(19),
    [aux_sym__punctuation_token1] = ACTIONS(19),
    [aux_sym__unreserved_symbol_token1] = ACTIONS(19),
  },
  [2] = {
    [sym__line] = STATE(176),
    [sym_metadata] = STATE(176),
    [sym_step] = STATE(176),
    [sym_comment] = STATE(176),
    [sym_block_comment] = STATE(176),
    [sym_ingredient] = STATE(6),
    [sym_cookware] = STATE(6),
    [sym_timer] = STATE(6),
    [aux_sym__text_item] = STATE(6),
    [sym__digit] = STATE(6),
    [sym__alphabetic] = STATE(6),
    [sym__whitespace] = STATE(6),
    [sym__punctuation] = STATE(6),
    [sym__symbol] = STATE(6),
    [aux_sym_recipe_repeat1] = STATE(2),
    [aux_sym_step_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(21),
    [aux_sym_recipe_token1] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(28),
    [anon_sym_LBRACK_DASH] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(34),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(40),
    [sym__non_zero_digit] = ACTIONS(43),
    [sym__zero] = ACTIONS(43),
    [aux_sym__alphabetic_token1] = ACTIONS(43),
    [aux_sym__alphabetic_token2] = ACTIONS(43),
    [aux_sym__whitespace_token1] = ACTIONS(43),
    [aux_sym__whitespace_token2] = ACTIONS(43),
    [aux_sym__punctuation_token1] = ACTIONS(43),
    [aux_sym__unreserved_symbol_token1] = ACTIONS(43),
  },
  [3] = {
    [sym__line] = STATE(167),
    [sym_metadata] = STATE(167),
    [sym_step] = STATE(167),
    [sym_comment] = STATE(167),
    [sym_block_comment] = STATE(167),
    [sym_ingredient] = STATE(6),
    [sym_cookware] = STATE(6),
    [sym_timer] = STATE(6),
    [aux_sym__text_item] = STATE(6),
    [sym__digit] = STATE(6),
    [sym__alphabetic] = STATE(6),
    [sym__whitespace] = STATE(6),
    [sym__punctuation] = STATE(6),
    [sym__symbol] = STATE(6),
    [aux_sym_recipe_repeat1] = STATE(2),
    [aux_sym_step_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(46),
    [aux_sym_recipe_token1] = ACTIONS(48),
    [anon_sym_GT_GT] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_LBRACK_DASH] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [sym__non_zero_digit] = ACTIONS(19),
    [sym__zero] = ACTIONS(19),
    [aux_sym__alphabetic_token1] = ACTIONS(19),
    [aux_sym__alphabetic_token2] = ACTIONS(19),
    [aux_sym__whitespace_token1] = ACTIONS(19),
    [aux_sym__whitespace_token2] = ACTIONS(19),
    [aux_sym__punctuation_token1] = ACTIONS(19),
    [aux_sym__unreserved_symbol_token1] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(52), 1,
      sym__non_zero_digit,
    ACTIONS(54), 1,
      sym__zero,
    ACTIONS(58), 1,
      aux_sym__unreserved_symbol_token1,
    STATE(38), 1,
      aux_sym__multiword_repeat1,
    STATE(106), 1,
      sym__integer,
    STATE(110), 1,
      sym_quantity,
    STATE(126), 1,
      sym__multiword,
    STATE(161), 1,
      sym_amount,
    STATE(74), 2,
      aux_sym__word,
      sym__unreserved_symbol,
    STATE(85), 2,
      sym__digit,
      sym__alphabetic,
    ACTIONS(50), 3,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
    ACTIONS(56), 3,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
    STATE(121), 3,
      sym__number,
      sym__fractional,
      sym__decimal,
    STATE(33), 4,
      aux_sym__text_item,
      sym__whitespace,
      sym__punctuation,
      sym__symbol,
  [54] = 7,
    ACTIONS(62), 1,
      aux_sym_recipe_token1,
    ACTIONS(67), 1,
      anon_sym_AT,
    ACTIONS(70), 1,
      anon_sym_POUND,
    ACTIONS(73), 1,
      anon_sym_TILDE,
    ACTIONS(60), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(64), 9,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
    STATE(5), 10,
      sym_ingredient,
      sym_cookware,
      sym_timer,
      aux_sym__text_item,
      sym__digit,
      sym__alphabetic,
      sym__whitespace,
      sym__punctuation,
      sym__symbol,
      aux_sym_step_repeat1,
  [94] = 7,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      aux_sym_recipe_token1,
    ACTIONS(76), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(80), 9,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
    STATE(5), 10,
      sym_ingredient,
      sym_cookware,
      sym_timer,
      aux_sym__text_item,
      sym__digit,
      sym__alphabetic,
      sym__whitespace,
      sym__punctuation,
      sym__symbol,
      aux_sym_step_repeat1,
  [134] = 14,
    ACTIONS(52), 1,
      sym__non_zero_digit,
    ACTIONS(54), 1,
      sym__zero,
    ACTIONS(58), 1,
      aux_sym__unreserved_symbol_token1,
    STATE(38), 1,
      aux_sym__multiword_repeat1,
    STATE(106), 1,
      sym__integer,
    STATE(126), 1,
      sym__multiword,
    STATE(128), 1,
      sym_quantity,
    STATE(161), 1,
      sym_amount,
    STATE(74), 2,
      aux_sym__word,
      sym__unreserved_symbol,
    STATE(85), 2,
      sym__digit,
      sym__alphabetic,
    ACTIONS(50), 3,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
    ACTIONS(56), 3,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
    STATE(121), 3,
      sym__number,
      sym__fractional,
      sym__decimal,
    STATE(33), 4,
      aux_sym__text_item,
      sym__whitespace,
      sym__punctuation,
      sym__symbol,
  [188] = 12,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      sym__non_zero_digit,
    ACTIONS(88), 1,
      sym__zero,
    STATE(51), 1,
      aux_sym__multiword_repeat1,
    STATE(111), 1,
      sym__integer,
    STATE(124), 1,
      sym_quantity,
    STATE(130), 1,
      sym_amount,
    ACTIONS(90), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(101), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(82), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    STATE(73), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    STATE(156), 4,
      sym__multiword,
      sym__number,
      sym__fractional,
      sym__decimal,
  [236] = 12,
    ACTIONS(86), 1,
      sym__non_zero_digit,
    ACTIONS(88), 1,
      sym__zero,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym__multiword_repeat1,
    STATE(111), 1,
      sym__integer,
    STATE(124), 1,
      sym_quantity,
    STATE(146), 1,
      sym_amount,
    ACTIONS(94), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(100), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(82), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    STATE(73), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    STATE(156), 4,
      sym__multiword,
      sym__number,
      sym__fractional,
      sym__decimal,
  [284] = 12,
    ACTIONS(86), 1,
      sym__non_zero_digit,
    ACTIONS(88), 1,
      sym__zero,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym__multiword_repeat1,
    STATE(111), 1,
      sym__integer,
    STATE(124), 1,
      sym_quantity,
    STATE(148), 1,
      sym_amount,
    ACTIONS(98), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(17), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(82), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    STATE(73), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    STATE(156), 4,
      sym__multiword,
      sym__number,
      sym__fractional,
      sym__decimal,
  [332] = 12,
    ACTIONS(86), 1,
      sym__non_zero_digit,
    ACTIONS(88), 1,
      sym__zero,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym__multiword_repeat1,
    STATE(111), 1,
      sym__integer,
    STATE(124), 1,
      sym_quantity,
    STATE(135), 1,
      sym_amount,
    ACTIONS(102), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(103), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(82), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    STATE(73), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    STATE(156), 4,
      sym__multiword,
      sym__number,
      sym__fractional,
      sym__decimal,
  [380] = 12,
    ACTIONS(86), 1,
      sym__non_zero_digit,
    ACTIONS(88), 1,
      sym__zero,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym__multiword_repeat1,
    STATE(111), 1,
      sym__integer,
    STATE(124), 1,
      sym_quantity,
    STATE(135), 1,
      sym_amount,
    ACTIONS(104), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(9), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(82), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    STATE(73), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    STATE(156), 4,
      sym__multiword,
      sym__number,
      sym__fractional,
      sym__decimal,
  [428] = 12,
    ACTIONS(86), 1,
      sym__non_zero_digit,
    ACTIONS(88), 1,
      sym__zero,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym__multiword_repeat1,
    STATE(111), 1,
      sym__integer,
    STATE(124), 1,
      sym_quantity,
    STATE(139), 1,
      sym_amount,
    ACTIONS(108), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(18), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(82), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    STATE(73), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    STATE(156), 4,
      sym__multiword,
      sym__number,
      sym__fractional,
      sym__decimal,
  [476] = 12,
    ACTIONS(86), 1,
      sym__non_zero_digit,
    ACTIONS(88), 1,
      sym__zero,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym__multiword_repeat1,
    STATE(111), 1,
      sym__integer,
    STATE(124), 1,
      sym_quantity,
    STATE(142), 1,
      sym_amount,
    ACTIONS(112), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(93), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(82), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    STATE(73), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    STATE(156), 4,
      sym__multiword,
      sym__number,
      sym__fractional,
      sym__decimal,
  [524] = 12,
    ACTIONS(86), 1,
      sym__non_zero_digit,
    ACTIONS(88), 1,
      sym__zero,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym__multiword_repeat1,
    STATE(111), 1,
      sym__integer,
    STATE(124), 1,
      sym_quantity,
    STATE(142), 1,
      sym_amount,
    ACTIONS(114), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(8), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(82), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    STATE(73), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    STATE(156), 4,
      sym__multiword,
      sym__number,
      sym__fractional,
      sym__decimal,
  [572] = 12,
    ACTIONS(86), 1,
      sym__non_zero_digit,
    ACTIONS(88), 1,
      sym__zero,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym__multiword_repeat1,
    STATE(111), 1,
      sym__integer,
    STATE(124), 1,
      sym_quantity,
    STATE(133), 1,
      sym_amount,
    ACTIONS(118), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(14), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(82), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    STATE(73), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    STATE(156), 4,
      sym__multiword,
      sym__number,
      sym__fractional,
      sym__decimal,
  [620] = 12,
    ACTIONS(86), 1,
      sym__non_zero_digit,
    ACTIONS(88), 1,
      sym__zero,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym__multiword_repeat1,
    STATE(111), 1,
      sym__integer,
    STATE(124), 1,
      sym_quantity,
    STATE(143), 1,
      sym_amount,
    ACTIONS(122), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(99), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(82), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    STATE(73), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    STATE(156), 4,
      sym__multiword,
      sym__number,
      sym__fractional,
      sym__decimal,
  [668] = 12,
    ACTIONS(86), 1,
      sym__non_zero_digit,
    ACTIONS(88), 1,
      sym__zero,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym__multiword_repeat1,
    STATE(111), 1,
      sym__integer,
    STATE(124), 1,
      sym_quantity,
    STATE(148), 1,
      sym_amount,
    ACTIONS(124), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(102), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(82), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    STATE(73), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    STATE(156), 4,
      sym__multiword,
      sym__number,
      sym__fractional,
      sym__decimal,
  [716] = 12,
    ACTIONS(86), 1,
      sym__non_zero_digit,
    ACTIONS(88), 1,
      sym__zero,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym__multiword_repeat1,
    STATE(111), 1,
      sym__integer,
    STATE(124), 1,
      sym_quantity,
    STATE(137), 1,
      sym_amount,
    ACTIONS(128), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(11), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(82), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    STATE(73), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    STATE(156), 4,
      sym__multiword,
      sym__number,
      sym__fractional,
      sym__decimal,
  [764] = 4,
    ACTIONS(130), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(132), 4,
      aux_sym_recipe_token1,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
    STATE(20), 6,
      aux_sym__text_item,
      sym__digit,
      sym__alphabetic,
      sym__whitespace,
      sym__punctuation,
      sym__symbol,
    ACTIONS(134), 9,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [794] = 8,
    ACTIONS(141), 1,
      aux_sym__punctuation_token1,
    STATE(51), 1,
      aux_sym__multiword_repeat1,
    STATE(159), 1,
      sym_units,
    ACTIONS(139), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(29), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(164), 2,
      sym__multiword,
      sym__punctuation,
    STATE(52), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(137), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [830] = 8,
    ACTIONS(147), 1,
      aux_sym__punctuation_token1,
    STATE(75), 1,
      aux_sym__multiword_repeat1,
    STATE(172), 1,
      sym_units,
    ACTIONS(145), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(98), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(173), 2,
      sym__multiword,
      sym__punctuation,
    STATE(37), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(143), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [866] = 8,
    ACTIONS(147), 1,
      aux_sym__punctuation_token1,
    STATE(75), 1,
      aux_sym__multiword_repeat1,
    STATE(168), 1,
      sym_units,
    ACTIONS(145), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(98), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(173), 2,
      sym__multiword,
      sym__punctuation,
    STATE(37), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(143), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [902] = 8,
    ACTIONS(147), 1,
      aux_sym__punctuation_token1,
    STATE(75), 1,
      aux_sym__multiword_repeat1,
    STATE(172), 1,
      sym_units,
    ACTIONS(149), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(23), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(173), 2,
      sym__multiword,
      sym__punctuation,
    STATE(37), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(143), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [938] = 8,
    ACTIONS(141), 1,
      aux_sym__punctuation_token1,
    STATE(51), 1,
      aux_sym__multiword_repeat1,
    STATE(165), 1,
      sym_units,
    ACTIONS(145), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(98), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(164), 2,
      sym__multiword,
      sym__punctuation,
    STATE(52), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(137), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [974] = 8,
    ACTIONS(147), 1,
      aux_sym__punctuation_token1,
    STATE(75), 1,
      aux_sym__multiword_repeat1,
    STATE(172), 1,
      sym_units,
    ACTIONS(145), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(98), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(173), 2,
      sym__multiword,
      sym__punctuation,
    STATE(37), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(143), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1010] = 8,
    ACTIONS(141), 1,
      aux_sym__punctuation_token1,
    STATE(51), 1,
      aux_sym__multiword_repeat1,
    STATE(157), 1,
      sym_units,
    ACTIONS(151), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(25), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(164), 2,
      sym__multiword,
      sym__punctuation,
    STATE(52), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(137), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1046] = 8,
    ACTIONS(147), 1,
      aux_sym__punctuation_token1,
    STATE(75), 1,
      aux_sym__multiword_repeat1,
    STATE(158), 1,
      sym_units,
    ACTIONS(153), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(26), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(173), 2,
      sym__multiword,
      sym__punctuation,
    STATE(37), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(143), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1082] = 8,
    ACTIONS(141), 1,
      aux_sym__punctuation_token1,
    STATE(51), 1,
      aux_sym__multiword_repeat1,
    STATE(157), 1,
      sym_units,
    ACTIONS(145), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(98), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(164), 2,
      sym__multiword,
      sym__punctuation,
    STATE(52), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(137), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1118] = 8,
    ACTIONS(147), 1,
      aux_sym__punctuation_token1,
    STATE(75), 1,
      aux_sym__multiword_repeat1,
    STATE(158), 1,
      sym_units,
    ACTIONS(155), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(22), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(173), 2,
      sym__multiword,
      sym__punctuation,
    STATE(37), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(143), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1154] = 8,
    ACTIONS(147), 1,
      aux_sym__punctuation_token1,
    STATE(75), 1,
      aux_sym__multiword_repeat1,
    STATE(168), 1,
      sym_units,
    ACTIONS(145), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(98), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(173), 2,
      sym__multiword,
      sym__punctuation,
    STATE(37), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(143), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1190] = 8,
    ACTIONS(147), 1,
      aux_sym__punctuation_token1,
    STATE(75), 1,
      aux_sym__multiword_repeat1,
    STATE(172), 1,
      sym_units,
    ACTIONS(157), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(31), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(173), 2,
      sym__multiword,
      sym__punctuation,
    STATE(37), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(143), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1226] = 4,
    ACTIONS(161), 1,
      aux_sym_recipe_token1,
    ACTIONS(159), 2,
      sym__newline,
      ts_builtin_sym_end,
    STATE(35), 6,
      aux_sym__text_item,
      sym__digit,
      sym__alphabetic,
      sym__whitespace,
      sym__punctuation,
      sym__symbol,
    ACTIONS(163), 9,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1253] = 6,
    ACTIONS(165), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(167), 2,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
    ACTIONS(171), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(79), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(41), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(169), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1284] = 4,
    ACTIONS(132), 1,
      aux_sym_recipe_token1,
    ACTIONS(130), 2,
      sym__newline,
      ts_builtin_sym_end,
    STATE(35), 6,
      aux_sym__text_item,
      sym__digit,
      sym__alphabetic,
      sym__whitespace,
      sym__punctuation,
      sym__symbol,
    ACTIONS(173), 9,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1311] = 6,
    ACTIONS(176), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(186), 2,
      sym__non_zero_digit,
      sym__zero,
    STATE(90), 2,
      sym__digit,
      aux_sym__integer_repeat1,
    ACTIONS(179), 3,
      aux_sym_recipe_token1,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    ACTIONS(184), 3,
      anon_sym_PERCENT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(182), 5,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1341] = 6,
    ACTIONS(191), 1,
      aux_sym_recipe_token1,
    ACTIONS(189), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(195), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(84), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(62), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(193), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1371] = 5,
    STATE(39), 1,
      aux_sym__multiword_repeat1,
    ACTIONS(197), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(199), 4,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(34), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(201), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1399] = 5,
    STATE(39), 1,
      aux_sym__multiword_repeat1,
    ACTIONS(203), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(205), 4,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(74), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(207), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1427] = 6,
    ACTIONS(167), 1,
      aux_sym_recipe_token1,
    ACTIONS(165), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(195), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(84), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(62), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(193), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1457] = 4,
    ACTIONS(210), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(212), 4,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(41), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(214), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1482] = 5,
    ACTIONS(167), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
    ACTIONS(219), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(86), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(47), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(217), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1509] = 2,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 15,
      aux_sym_recipe_token1,
      anon_sym_GT_GT,
      anon_sym_DASH,
      anon_sym_LBRACK_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1530] = 5,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(221), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(97), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(47), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(217), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1556] = 2,
    ACTIONS(223), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(225), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1576] = 4,
    ACTIONS(176), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(179), 3,
      aux_sym_recipe_token1,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    ACTIONS(184), 3,
      anon_sym_PERCENT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(182), 7,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1600] = 3,
    STATE(47), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(212), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    ACTIONS(227), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1622] = 5,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    ACTIONS(221), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(97), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(47), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(217), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1648] = 2,
    ACTIONS(232), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(234), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1668] = 2,
    ACTIONS(236), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(238), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1688] = 4,
    STATE(65), 1,
      aux_sym__multiword_repeat1,
    ACTIONS(199), 4,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(42), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(240), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1712] = 5,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(86), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(47), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(217), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1738] = 2,
    ACTIONS(242), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(244), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1758] = 2,
    ACTIONS(246), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(248), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1778] = 2,
    ACTIONS(250), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(252), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1798] = 2,
    ACTIONS(254), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(256), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1818] = 2,
    ACTIONS(258), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(260), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1838] = 2,
    ACTIONS(262), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(264), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1858] = 2,
    ACTIONS(266), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(268), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1878] = 5,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(221), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(97), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(47), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(217), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1904] = 2,
    ACTIONS(272), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(274), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1924] = 4,
    ACTIONS(210), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(212), 3,
      aux_sym_recipe_token1,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(62), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(276), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1948] = 2,
    ACTIONS(279), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(281), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1968] = 3,
    ACTIONS(287), 1,
      anon_sym_DASH,
    ACTIONS(283), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(285), 12,
      aux_sym_recipe_token1,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1990] = 4,
    STATE(65), 1,
      aux_sym__multiword_repeat1,
    ACTIONS(205), 4,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(73), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(290), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2014] = 2,
    ACTIONS(293), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(295), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [2034] = 2,
    ACTIONS(297), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(299), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [2054] = 2,
    ACTIONS(301), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(303), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [2074] = 5,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    ACTIONS(221), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(97), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(47), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(217), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2100] = 4,
    ACTIONS(221), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(97), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(47), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(217), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2123] = 3,
    ACTIONS(309), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(307), 10,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      anon_sym_SLASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2144] = 4,
    STATE(72), 1,
      aux_sym__multiword_repeat1,
    ACTIONS(203), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_recipe_token1,
    STATE(77), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(312), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2167] = 4,
    ACTIONS(219), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(86), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(47), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(217), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2190] = 4,
    ACTIONS(171), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(79), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(47), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(217), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2213] = 4,
    STATE(72), 1,
      aux_sym__multiword_repeat1,
    ACTIONS(197), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_recipe_token1,
    STATE(40), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(315), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2236] = 4,
    ACTIONS(317), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(319), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(76), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(307), 8,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_PERCENT,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2259] = 4,
    ACTIONS(195), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(84), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(47), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(217), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2282] = 5,
    ACTIONS(179), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    ACTIONS(322), 2,
      sym__non_zero_digit,
      sym__zero,
    STATE(104), 2,
      sym__digit,
      aux_sym__integer_repeat1,
    ACTIONS(182), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    ACTIONS(184), 4,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      anon_sym_SLASH,
      anon_sym_DOT,
  [2307] = 3,
    ACTIONS(203), 2,
      sym__newline,
      ts_builtin_sym_end,
    STATE(76), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(205), 10,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_PERCENT,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__unreserved_symbol_token1,
  [2328] = 5,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      aux_sym__multiword_repeat1,
    STATE(180), 1,
      sym__multiword,
    STATE(60), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(325), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2352] = 5,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      aux_sym__multiword_repeat1,
    STATE(181), 1,
      sym__multiword,
    STATE(48), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(329), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2376] = 5,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      aux_sym__multiword_repeat1,
    STATE(175), 1,
      sym__multiword,
    STATE(69), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(333), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2400] = 4,
    ACTIONS(317), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(337), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(83), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(307), 7,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2422] = 4,
    ACTIONS(203), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(340), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(83), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(205), 7,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2444] = 3,
    ACTIONS(342), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(344), 2,
      aux_sym_recipe_token1,
      aux_sym__punctuation_token1,
    ACTIONS(346), 8,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__unreserved_symbol_token1,
  [2463] = 2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(205), 10,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__unreserved_symbol_token1,
  [2480] = 3,
    ACTIONS(349), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(351), 2,
      aux_sym_recipe_token1,
      aux_sym__punctuation_token1,
    ACTIONS(353), 8,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__unreserved_symbol_token1,
  [2499] = 3,
    ACTIONS(179), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    ACTIONS(184), 4,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(182), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2518] = 4,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      aux_sym__multiword_repeat1,
    STATE(70), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(356), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2539] = 4,
    ACTIONS(359), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(363), 2,
      sym__non_zero_digit,
      sym__zero,
    STATE(91), 2,
      sym__digit,
      aux_sym__integer_repeat1,
    ACTIONS(361), 6,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
      anon_sym_SLASH,
      anon_sym_DOT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [2560] = 4,
    ACTIONS(365), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(369), 2,
      sym__non_zero_digit,
      sym__zero,
    STATE(91), 2,
      sym__digit,
      aux_sym__integer_repeat1,
    ACTIONS(367), 6,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
      anon_sym_SLASH,
      anon_sym_DOT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [2581] = 4,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      aux_sym__multiword_repeat1,
    STATE(44), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(372), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2602] = 4,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(309), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(307), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2622] = 3,
    ACTIONS(210), 1,
      anon_sym_COLON,
    STATE(94), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(374), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2640] = 3,
    ACTIONS(377), 1,
      anon_sym_COLON,
    STATE(94), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(379), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2658] = 3,
    ACTIONS(381), 1,
      anon_sym_COLON,
    STATE(94), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(379), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2676] = 3,
    ACTIONS(383), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(205), 7,
      anon_sym_DASH,
      anon_sym_LBRACE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2694] = 3,
    ACTIONS(385), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(98), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(307), 7,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [2712] = 4,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    ACTIONS(309), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(307), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2732] = 4,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    ACTIONS(309), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(307), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2752] = 4,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    ACTIONS(309), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(307), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2772] = 4,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    ACTIONS(309), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(307), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2792] = 4,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(309), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(307), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2812] = 3,
    ACTIONS(394), 2,
      sym__non_zero_digit,
      sym__zero,
    STATE(108), 2,
      sym__digit,
      aux_sym__integer_repeat1,
    ACTIONS(361), 6,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      anon_sym_SLASH,
      anon_sym_DOT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [2829] = 2,
    STATE(96), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(396), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2844] = 6,
    ACTIONS(402), 1,
      anon_sym_SLASH,
    ACTIONS(404), 1,
      anon_sym_DOT,
    ACTIONS(398), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(400), 2,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
    ACTIONS(406), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(144), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [2867] = 4,
    ACTIONS(409), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(411), 2,
      sym__non_zero_digit,
      sym__zero,
    STATE(90), 2,
      sym__digit,
      aux_sym__integer_repeat1,
    ACTIONS(184), 4,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [2886] = 3,
    ACTIONS(413), 2,
      sym__non_zero_digit,
      sym__zero,
    STATE(108), 2,
      sym__digit,
      aux_sym__integer_repeat1,
    ACTIONS(367), 6,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      anon_sym_SLASH,
      anon_sym_DOT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [2903] = 2,
    STATE(95), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(416), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2918] = 5,
    ACTIONS(420), 1,
      aux_sym_recipe_token1,
    ACTIONS(422), 1,
      anon_sym_PERCENT,
    ACTIONS(418), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(424), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(134), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [2937] = 5,
    ACTIONS(426), 1,
      anon_sym_SLASH,
    ACTIONS(428), 1,
      anon_sym_DOT,
    ACTIONS(400), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
    ACTIONS(430), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(151), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [2956] = 3,
    ACTIONS(433), 2,
      sym__non_zero_digit,
      sym__zero,
    STATE(104), 2,
      sym__digit,
      aux_sym__integer_repeat1,
    ACTIONS(184), 4,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [2971] = 5,
    ACTIONS(435), 1,
      sym__non_zero_digit,
    ACTIONS(437), 1,
      sym__zero,
    STATE(123), 1,
      sym__integer,
    ACTIONS(439), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(118), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [2989] = 5,
    ACTIONS(441), 1,
      sym__non_zero_digit,
    ACTIONS(443), 1,
      sym__zero,
    STATE(153), 1,
      sym__integer,
    ACTIONS(445), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(117), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3007] = 5,
    ACTIONS(435), 1,
      sym__non_zero_digit,
    ACTIONS(447), 1,
      sym__zero,
    STATE(122), 1,
      sym__integer,
    ACTIONS(449), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(119), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3025] = 5,
    ACTIONS(441), 1,
      sym__non_zero_digit,
    ACTIONS(451), 1,
      sym__zero,
    STATE(154), 1,
      sym__integer,
    ACTIONS(383), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3043] = 5,
    ACTIONS(441), 1,
      sym__non_zero_digit,
    ACTIONS(453), 1,
      sym__zero,
    STATE(155), 1,
      sym__integer,
    ACTIONS(383), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3061] = 5,
    ACTIONS(435), 1,
      sym__non_zero_digit,
    ACTIONS(455), 1,
      sym__zero,
    STATE(125), 1,
      sym__integer,
    ACTIONS(383), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3079] = 5,
    ACTIONS(435), 1,
      sym__non_zero_digit,
    ACTIONS(437), 1,
      sym__zero,
    STATE(123), 1,
      sym__integer,
    ACTIONS(383), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3097] = 5,
    ACTIONS(441), 1,
      sym__non_zero_digit,
    ACTIONS(453), 1,
      sym__zero,
    STATE(155), 1,
      sym__integer,
    ACTIONS(457), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(116), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3115] = 2,
    ACTIONS(459), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(461), 4,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3126] = 2,
    ACTIONS(463), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(465), 4,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3137] = 2,
    ACTIONS(467), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(469), 4,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3148] = 3,
    ACTIONS(471), 1,
      anon_sym_PERCENT,
    STATE(141), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(420), 3,
      anon_sym_RBRACE,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3161] = 2,
    ACTIONS(473), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(475), 4,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3172] = 2,
    ACTIONS(459), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(461), 4,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3183] = 2,
    ACTIONS(477), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(479), 4,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3194] = 4,
    ACTIONS(418), 1,
      sym__newline,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(150), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3209] = 3,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    ACTIONS(383), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3221] = 3,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    ACTIONS(485), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(136), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3233] = 3,
    ACTIONS(487), 1,
      anon_sym_RBRACE,
    ACTIONS(383), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3245] = 3,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    ACTIONS(383), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3257] = 3,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    ACTIONS(491), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(140), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3269] = 3,
    ACTIONS(493), 1,
      anon_sym_PERCENT,
    ACTIONS(383), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3281] = 3,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(495), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(147), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3293] = 3,
    ACTIONS(497), 1,
      anon_sym_RBRACE,
    ACTIONS(383), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3305] = 3,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(499), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(138), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3317] = 3,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(383), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3329] = 3,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(501), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(129), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3341] = 3,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(383), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3353] = 3,
    ACTIONS(503), 1,
      anon_sym_PERCENT,
    ACTIONS(383), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3365] = 3,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(505), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(149), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3377] = 3,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    ACTIONS(507), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(132), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3389] = 3,
    ACTIONS(509), 1,
      anon_sym_SLASH,
    ACTIONS(383), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3401] = 3,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    ACTIONS(383), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3413] = 3,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    ACTIONS(511), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(131), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3425] = 3,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    ACTIONS(383), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3437] = 3,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    ACTIONS(513), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(145), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3449] = 3,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    ACTIONS(383), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3461] = 3,
    ACTIONS(515), 1,
      anon_sym_PERCENT,
    ACTIONS(383), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3473] = 3,
    ACTIONS(517), 1,
      anon_sym_SLASH,
    ACTIONS(383), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(71), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3485] = 1,
    ACTIONS(479), 4,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3492] = 1,
    ACTIONS(465), 4,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3499] = 1,
    ACTIONS(475), 4,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3506] = 1,
    ACTIONS(469), 4,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3513] = 1,
    ACTIONS(461), 4,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3520] = 1,
    ACTIONS(519), 3,
      anon_sym_RBRACE,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3526] = 1,
    ACTIONS(521), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_recipe_token1,
  [3532] = 1,
    ACTIONS(523), 3,
      anon_sym_RBRACE,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3538] = 3,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(525), 1,
      aux_sym_recipe_token1,
    ACTIONS(527), 1,
      sym__newline,
  [3548] = 1,
    ACTIONS(159), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_recipe_token1,
  [3554] = 1,
    ACTIONS(529), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_recipe_token1,
  [3560] = 2,
    STATE(4), 1,
      sym__whitespace,
    ACTIONS(531), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3568] = 1,
    ACTIONS(191), 3,
      anon_sym_RBRACE,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3574] = 1,
    ACTIONS(533), 3,
      anon_sym_RBRACE,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3580] = 1,
    ACTIONS(535), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_recipe_token1,
  [3586] = 3,
    ACTIONS(527), 1,
      sym__newline,
    ACTIONS(537), 1,
      ts_builtin_sym_end,
    ACTIONS(539), 1,
      aux_sym_recipe_token1,
  [3596] = 1,
    ACTIONS(541), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_recipe_token1,
  [3602] = 2,
    STATE(7), 1,
      sym__whitespace,
    ACTIONS(543), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3610] = 3,
    ACTIONS(545), 1,
      sym__non_zero_digit,
    ACTIONS(547), 1,
      sym__zero,
    STATE(152), 1,
      sym__integer,
  [3620] = 3,
    ACTIONS(549), 1,
      sym__non_zero_digit,
    ACTIONS(551), 1,
      sym__zero,
    STATE(127), 1,
      sym__integer,
  [3630] = 1,
    ACTIONS(553), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_recipe_token1,
  [3636] = 1,
    ACTIONS(189), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_recipe_token1,
  [3642] = 1,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
  [3646] = 1,
    ACTIONS(555), 1,
      anon_sym_LBRACE,
  [3650] = 1,
    ACTIONS(527), 1,
      sym__newline,
  [3654] = 1,
    ACTIONS(557), 1,
      ts_builtin_sym_end,
  [3658] = 1,
    ACTIONS(559), 1,
      aux_sym_block_comment_token1,
  [3662] = 1,
    ACTIONS(537), 1,
      ts_builtin_sym_end,
  [3666] = 1,
    ACTIONS(561), 1,
      anon_sym_LBRACE,
  [3670] = 1,
    ACTIONS(563), 1,
      anon_sym_LBRACE,
  [3674] = 1,
    ACTIONS(565), 1,
      anon_sym_RBRACK,
  [3678] = 1,
    ACTIONS(567), 1,
      ts_builtin_sym_end,
  [3682] = 1,
    ACTIONS(569), 1,
      aux_sym_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 134,
  [SMALL_STATE(8)] = 188,
  [SMALL_STATE(9)] = 236,
  [SMALL_STATE(10)] = 284,
  [SMALL_STATE(11)] = 332,
  [SMALL_STATE(12)] = 380,
  [SMALL_STATE(13)] = 428,
  [SMALL_STATE(14)] = 476,
  [SMALL_STATE(15)] = 524,
  [SMALL_STATE(16)] = 572,
  [SMALL_STATE(17)] = 620,
  [SMALL_STATE(18)] = 668,
  [SMALL_STATE(19)] = 716,
  [SMALL_STATE(20)] = 764,
  [SMALL_STATE(21)] = 794,
  [SMALL_STATE(22)] = 830,
  [SMALL_STATE(23)] = 866,
  [SMALL_STATE(24)] = 902,
  [SMALL_STATE(25)] = 938,
  [SMALL_STATE(26)] = 974,
  [SMALL_STATE(27)] = 1010,
  [SMALL_STATE(28)] = 1046,
  [SMALL_STATE(29)] = 1082,
  [SMALL_STATE(30)] = 1118,
  [SMALL_STATE(31)] = 1154,
  [SMALL_STATE(32)] = 1190,
  [SMALL_STATE(33)] = 1226,
  [SMALL_STATE(34)] = 1253,
  [SMALL_STATE(35)] = 1284,
  [SMALL_STATE(36)] = 1311,
  [SMALL_STATE(37)] = 1341,
  [SMALL_STATE(38)] = 1371,
  [SMALL_STATE(39)] = 1399,
  [SMALL_STATE(40)] = 1427,
  [SMALL_STATE(41)] = 1457,
  [SMALL_STATE(42)] = 1482,
  [SMALL_STATE(43)] = 1509,
  [SMALL_STATE(44)] = 1530,
  [SMALL_STATE(45)] = 1556,
  [SMALL_STATE(46)] = 1576,
  [SMALL_STATE(47)] = 1600,
  [SMALL_STATE(48)] = 1622,
  [SMALL_STATE(49)] = 1648,
  [SMALL_STATE(50)] = 1668,
  [SMALL_STATE(51)] = 1688,
  [SMALL_STATE(52)] = 1712,
  [SMALL_STATE(53)] = 1738,
  [SMALL_STATE(54)] = 1758,
  [SMALL_STATE(55)] = 1778,
  [SMALL_STATE(56)] = 1798,
  [SMALL_STATE(57)] = 1818,
  [SMALL_STATE(58)] = 1838,
  [SMALL_STATE(59)] = 1858,
  [SMALL_STATE(60)] = 1878,
  [SMALL_STATE(61)] = 1904,
  [SMALL_STATE(62)] = 1924,
  [SMALL_STATE(63)] = 1948,
  [SMALL_STATE(64)] = 1968,
  [SMALL_STATE(65)] = 1990,
  [SMALL_STATE(66)] = 2014,
  [SMALL_STATE(67)] = 2034,
  [SMALL_STATE(68)] = 2054,
  [SMALL_STATE(69)] = 2074,
  [SMALL_STATE(70)] = 2100,
  [SMALL_STATE(71)] = 2123,
  [SMALL_STATE(72)] = 2144,
  [SMALL_STATE(73)] = 2167,
  [SMALL_STATE(74)] = 2190,
  [SMALL_STATE(75)] = 2213,
  [SMALL_STATE(76)] = 2236,
  [SMALL_STATE(77)] = 2259,
  [SMALL_STATE(78)] = 2282,
  [SMALL_STATE(79)] = 2307,
  [SMALL_STATE(80)] = 2328,
  [SMALL_STATE(81)] = 2352,
  [SMALL_STATE(82)] = 2376,
  [SMALL_STATE(83)] = 2400,
  [SMALL_STATE(84)] = 2422,
  [SMALL_STATE(85)] = 2444,
  [SMALL_STATE(86)] = 2463,
  [SMALL_STATE(87)] = 2480,
  [SMALL_STATE(88)] = 2499,
  [SMALL_STATE(89)] = 2518,
  [SMALL_STATE(90)] = 2539,
  [SMALL_STATE(91)] = 2560,
  [SMALL_STATE(92)] = 2581,
  [SMALL_STATE(93)] = 2602,
  [SMALL_STATE(94)] = 2622,
  [SMALL_STATE(95)] = 2640,
  [SMALL_STATE(96)] = 2658,
  [SMALL_STATE(97)] = 2676,
  [SMALL_STATE(98)] = 2694,
  [SMALL_STATE(99)] = 2712,
  [SMALL_STATE(100)] = 2732,
  [SMALL_STATE(101)] = 2752,
  [SMALL_STATE(102)] = 2772,
  [SMALL_STATE(103)] = 2792,
  [SMALL_STATE(104)] = 2812,
  [SMALL_STATE(105)] = 2829,
  [SMALL_STATE(106)] = 2844,
  [SMALL_STATE(107)] = 2867,
  [SMALL_STATE(108)] = 2886,
  [SMALL_STATE(109)] = 2903,
  [SMALL_STATE(110)] = 2918,
  [SMALL_STATE(111)] = 2937,
  [SMALL_STATE(112)] = 2956,
  [SMALL_STATE(113)] = 2971,
  [SMALL_STATE(114)] = 2989,
  [SMALL_STATE(115)] = 3007,
  [SMALL_STATE(116)] = 3025,
  [SMALL_STATE(117)] = 3043,
  [SMALL_STATE(118)] = 3061,
  [SMALL_STATE(119)] = 3079,
  [SMALL_STATE(120)] = 3097,
  [SMALL_STATE(121)] = 3115,
  [SMALL_STATE(122)] = 3126,
  [SMALL_STATE(123)] = 3137,
  [SMALL_STATE(124)] = 3148,
  [SMALL_STATE(125)] = 3161,
  [SMALL_STATE(126)] = 3172,
  [SMALL_STATE(127)] = 3183,
  [SMALL_STATE(128)] = 3194,
  [SMALL_STATE(129)] = 3209,
  [SMALL_STATE(130)] = 3221,
  [SMALL_STATE(131)] = 3233,
  [SMALL_STATE(132)] = 3245,
  [SMALL_STATE(133)] = 3257,
  [SMALL_STATE(134)] = 3269,
  [SMALL_STATE(135)] = 3281,
  [SMALL_STATE(136)] = 3293,
  [SMALL_STATE(137)] = 3305,
  [SMALL_STATE(138)] = 3317,
  [SMALL_STATE(139)] = 3329,
  [SMALL_STATE(140)] = 3341,
  [SMALL_STATE(141)] = 3353,
  [SMALL_STATE(142)] = 3365,
  [SMALL_STATE(143)] = 3377,
  [SMALL_STATE(144)] = 3389,
  [SMALL_STATE(145)] = 3401,
  [SMALL_STATE(146)] = 3413,
  [SMALL_STATE(147)] = 3425,
  [SMALL_STATE(148)] = 3437,
  [SMALL_STATE(149)] = 3449,
  [SMALL_STATE(150)] = 3461,
  [SMALL_STATE(151)] = 3473,
  [SMALL_STATE(152)] = 3485,
  [SMALL_STATE(153)] = 3492,
  [SMALL_STATE(154)] = 3499,
  [SMALL_STATE(155)] = 3506,
  [SMALL_STATE(156)] = 3513,
  [SMALL_STATE(157)] = 3520,
  [SMALL_STATE(158)] = 3526,
  [SMALL_STATE(159)] = 3532,
  [SMALL_STATE(160)] = 3538,
  [SMALL_STATE(161)] = 3548,
  [SMALL_STATE(162)] = 3554,
  [SMALL_STATE(163)] = 3560,
  [SMALL_STATE(164)] = 3568,
  [SMALL_STATE(165)] = 3574,
  [SMALL_STATE(166)] = 3580,
  [SMALL_STATE(167)] = 3586,
  [SMALL_STATE(168)] = 3596,
  [SMALL_STATE(169)] = 3602,
  [SMALL_STATE(170)] = 3610,
  [SMALL_STATE(171)] = 3620,
  [SMALL_STATE(172)] = 3630,
  [SMALL_STATE(173)] = 3636,
  [SMALL_STATE(174)] = 3642,
  [SMALL_STATE(175)] = 3646,
  [SMALL_STATE(176)] = 3650,
  [SMALL_STATE(177)] = 3654,
  [SMALL_STATE(178)] = 3658,
  [SMALL_STATE(179)] = 3662,
  [SMALL_STATE(180)] = 3666,
  [SMALL_STATE(181)] = 3670,
  [SMALL_STATE(182)] = 3674,
  [SMALL_STATE(183)] = 3678,
  [SMALL_STATE(184)] = 3682,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(109),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(64),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(178),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(82),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(80),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(81),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(6),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_step_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_repeat1, 2), SHIFT_REPEAT(5),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_repeat1, 2), SHIFT_REPEAT(82),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_repeat1, 2), SHIFT_REPEAT(80),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_repeat1, 2), SHIFT_REPEAT(81),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_item, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_item, 2),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_item, 2), SHIFT_REPEAT(20),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 5),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata, 5),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiword, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiword, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_item, 2), SHIFT_REPEAT(35),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__integer, 1), REDUCE(sym__digit, 1),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__integer, 1), REDUCE(sym__digit, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__digit, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 1),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__digit, 1), SHIFT(90),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_units, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiword, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiword, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiword_repeat1, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multiword_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiword_repeat1, 2), SHIFT_REPEAT(74),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__word, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__word, 2),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__word, 2), SHIFT_REPEAT(41),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookware, 4),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookware, 4),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__word, 2), SHIFT_REPEAT(47),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 5),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 5),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 7),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timer, 7),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 4),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timer, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookware, 5),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookware, 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookware, 7),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookware, 7),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 7),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 7),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 6),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timer, 6),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookware, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookware, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timer, 3),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__word, 2), SHIFT_REPEAT(62),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookware, 6),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookware, 6),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alphabetic, 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alphabetic, 1),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__alphabetic, 1), SHIFT(184),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiword_repeat1, 2), SHIFT_REPEAT(73),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 4),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 5),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timer, 5),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 6),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 6),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ingredient_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ingredient_repeat1, 2), SHIFT_REPEAT(71),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multiword_repeat1, 2), SHIFT_REPEAT(77),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ingredient_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ingredient_repeat1, 2), SHIFT_REPEAT(76),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__digit, 1), SHIFT(104),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ingredient_repeat1, 2), SHIFT_REPEAT(83),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_item, 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_item, 1),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__word, 1), REDUCE(aux_sym__text_item, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol, 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__symbol, 1),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__unreserved_symbol, 1), REDUCE(sym__symbol, 1),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multiword_repeat1, 2), SHIFT_REPEAT(70),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 2),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__integer_repeat1, 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__integer_repeat1, 2),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__integer_repeat1, 2), SHIFT_REPEAT(91),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__word, 2), SHIFT_REPEAT(94),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ingredient_repeat1, 2), SHIFT_REPEAT(98),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number, 1),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__number, 1), SHIFT(144),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__integer_repeat1, 2), SHIFT_REPEAT(108),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 1),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__number, 1), SHIFT(151),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fractional, 3),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fractional, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fractional, 4),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fractional, 4),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fractional, 5),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fractional, 5),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 3),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 4),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 5),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 2),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 5),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 4),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [567] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_cooklang_external_scanner_create(void);
void tree_sitter_cooklang_external_scanner_destroy(void *);
bool tree_sitter_cooklang_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_cooklang_external_scanner_serialize(void *, char *);
void tree_sitter_cooklang_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cooklang(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_cooklang_external_scanner_create,
      tree_sitter_cooklang_external_scanner_destroy,
      tree_sitter_cooklang_external_scanner_scan,
      tree_sitter_cooklang_external_scanner_serialize,
      tree_sitter_cooklang_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
