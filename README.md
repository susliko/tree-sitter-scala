# Archivation note
Archived due to the rebirth of the old [tree-sitter-scala](https://github.com/tree-sitter/tree-sitter-scala/)

# tree-sitter-scala
This is a work-in-progress over [Scala 3 ebnf](https://github.com/lampepfl/dotty/blob/main/docs/_docs/internals/syntax.md)

## Roadmap
- [X] Literals with Unicode support
- [-] Types
- [ ] Expressions: inside braces, with sensitive indentation
- [ ] Type and Value Parameters
- [ ] Bindings and Imports
- [ ] Declarations and Definitions
- [ ] Unit tests
- [ ] Corpus tests
- [ ] Highlight queries
- [ ] Local queries
- [ ] Tags queries

## Dev
### Tests
In order for tests to be more simple the grammar is split into multiple parts and each part is tested separetely.
To run tests for `grammar/literalGrammar.js`:
```bash
tree-sitter generate grammar/literalGrammar.js
tree-sitter test -f "[literal]"
```
