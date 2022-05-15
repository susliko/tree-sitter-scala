const literalGrammar = require('./literalGrammar')
const typeGrammar = require('./typeGrammar')

module.exports = grammar(typeGrammar, {
  name: 'scala',

  rules: {
    source_file: $ => $.expr,
    expr: $ => seq('expr', choice($._simple_literal, $.type))
  }
})
