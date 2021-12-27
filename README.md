# Cooklang Tree-Sitter Grammar

This is a [Tree-Sitter](https://tree-sitter.github.io/) grammar for [Cooklang](https://cooklang.org/).

## TODO

* [ ] Syntax highlighting
* [ ] Properly handle `unreserved_symbol`s.

## Notable Differences

* It appears that the Cooklang BNF doesn't actually allow for punctuation (eg. `-`) in `word`s (like ingredient names), but the compiler allows for it. I explicitly put it in this grammar since it seems useful. This is hacky.
* Newline and whitespace characters are handled slightly differently due to the way Tree-Sitter views them.

## References

* [Cooklang EBNF](https://github.com/cooklang/spec/blob/main/EBNF.md)
* [Python Tree-Sitter Grammar (Good for looking at newline stuff.)](https://github.com/tree-sitter/tree-sitter-python/blob/master/grammar.js)
