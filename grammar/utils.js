const block = (rule, $) => {
  return choice(
    seq('{', rule, '}'),
    seq($.indent, rule, $.outdent),
  )
}

module.exports = {
  block: block,
}
