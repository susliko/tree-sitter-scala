#!/bin/bash
tree-sitter generate grammar/literalGrammar.js
tree-sitter test -f "[literal]"

tree-sitter generate grammar/typeGrammar.js
tree-sitter test -f "[type]"
