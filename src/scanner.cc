#include "tree_sitter/parser.h"
namespace {

enum TokenType {
    NEWLINE
};

// Ref: https://github.com/tree-sitter/tree-sitter-python/blob/master/src/scanner.cc
struct Scanner {
    Scanner() {}

    void advance(TSLexer *lexer) {
        lexer->advance(lexer, false);
    }

    void skip(TSLexer *lexer) {
        lexer->advance(lexer, true);
    }

    void mark_end(TSLexer *lexer) {
        lexer->mark_end(lexer);
    }

    bool scan(TSLexer *lexer, const bool *valid_symbols) {
        if (!valid_symbols[NEWLINE]) { return false; }

        mark_end(lexer);
        bool found_end_of_line = false;
        for (;;) {
            if (lexer->lookahead == '\n') {
                found_end_of_line = true;
                skip(lexer);
            } else if (lexer->lookahead == '\0')
                break;
            else
                break;
        }

        lexer->result_symbol = NEWLINE;
        return found_end_of_line;
    }
};
}

extern "C" {

void *tree_sitter_cooklang_external_scanner_create() {
    return new Scanner();
}

bool tree_sitter_cooklang_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_cooklang_external_scanner_serialize(void *payload, char *buffer) {
  return 0;
}

void tree_sitter_cooklang_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
}

void tree_sitter_cooklang_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
