// https://github.com/lampepfl/dotty/blob/d871d35b91ea9a56341676921df14c60dee62ac7/docs/docs/internals/syntax.md

const block = (rule, $) => {
  return choice(
    seq('{', rule, '}'),
    seq($.indent, rule, $.outdent),
  )
}

const block_body = (rule, $) => {
  return choice(
    seq(optional($.nl), '{', rule, '}'),
    seq(':', $.indent, rule, $.outdent),
  )
}

module.exports = grammar({
  name: 'scala',

  inline: $ => [ $.type_param_bounds ],

  rules: {
    source_file: _ => 'hello',

    // Unicode escapes
    hex_digit: _ => /[0-9A-Fa-f]/,
    unicode_escape: $ => seq('\\', 'u', repeat('u'), $.hex_digit, $.hex_digit, $.hex_digit, $.hex_digit),

    // Lexical Syntax
    white_space: _ => choice( ' ', '\t', '\r', '\n'),
    upper: _ => /[A-Z$_]/, // TODO and Unicode category Lu
    lower: _ => /[a-z]/, // TODO and Unicode category Ll
    letter: $ => choice($.upper, $.lower, /* TODO and Unicode categories Lo, Lt, Lm, Nl */),
    digit: _ => /[0-9]/,
    paren: _ => choice('(', ')', '[', ']', '{', '}', "'(", "'[", "'{"),
    delim: _ => choice('`', "'", '"', '.', ';', ','),
    opchar: _ => choice(
      '!', '#', '%', '&', '*', '+', '-', '/', ':',
      '<', '=', '>', '?', '@', '\\', '^', '|', '~',
      // TODO and Unicode categories Sm, So
    ),
    printable_char: _ => /[a-zA-Z0-9 ]/, // TODO needs to be “all characters in [\u0020, \u007E] inclusive”
    char: _ => /[a-zA-Z0-9]/, // TODO no such rule in the grammar figure out whaut should it mean
    char_escape_seq: _ => seq('\\', choice('b', 't', 'n', 'f', 'r', '"', "'", '\\')),

    op: $ => seq($.opchar, repeat($.opchar)),
    varid: $ => seq(
      $.lower,
      seq(repeat(choice($.letter, $.digit)), optional(seq('_', $.op))), // idrest rule
    ),
    alphaid: $ => choice(
      seq(
        $.upper,
        seq(repeat(choice($.letter, $.digit)), optional(seq('_', $.op))), // idrest rule
      ),
      $.varid),
    plainid: $ => choice($.alphaid, $.op),
    id: $ => choice(
      $.plainid,
      seq(
        '`',
        repeat(choice(
          // $.char_no_back_quote_or_newline, // TODO. No such rule in the grammar
          $.unicode_escape,
          $.char_escape_seq)),
        '`')
    ),
    // idrest: $ =>  seq(repeat(choice($.letter, $.digit)), optional(seq('_', $.op))), Need to inline this rule
    // TODO think about moving this rule to a different object so it can match empty string
    quote_id: $ => seq("'", $.alphaid),

    integer_literal: $ => seq(choice($.decimal_numeral, $.hex_numeral), choice('L', 'l')),
    decimal_numeral: $ => choice(
      '0', 
      seq(
        $.non_zero_digit, 
        optional(seq(
            repeat(choice($.digit, '_')), 
            $.digit
        ))
      )
    ),
    hex_numeral: $ => seq(
      '0',
      choice('x', 'X'),
      $.hex_digit,
      optional(seq(
        repeat(choice($.hex_digit, '_')),
        $.hex_digit
      ))
    ),
    non_zero_digit: _ => /[1-9]/,

    floating_point_literal: $ => choice(
      seq(
        optional($.decimal_numeral),
        '.',
        $.digit,
        optional(seq(repeat(choice($.digit, '_')), $.digit)),
        optional($.exponent_part),
        optional($.float_type)
      ),
      seq($.decimal_numeral, $.exponent_part, optional($.float_type)),
      seq($.decimal_numeral, $.float_type)
    ),

    exponent_part: $ => seq(
      choice('E', 'e'), 
      optional(choice('+', '-')), 
      $.digit, 
      optional(seq(
        repeat(choice($.digit, '_')),
        $.digit
      ))
    ),
    float_type: _ => choice('F', 'f', 'D', 'd'),

    boolean_literal: _ => choice('true', 'false'),

    character_literal: $ => seq("'",  choice($.printable_char, $.char_escape_seq), "'"),

    string_literal: $ => choice(
      seq('"', repeat($.string_element)),
      seq('"""',
        seq(
          repeat(seq(optional('"'), optional('"'), $.char /* TODO needs to be char without '"' */)),
          repeat('"')
        ), // multi_line_chars rule
        '"""')
    ),
    string_element: $ => choice(
      $.printable_char, // TODO needs to be printable_char without '"' and without '\\'
      $.unicode_escape,
      $.char_escape_seq
    ),

    // This one is inline since it can match an empty string
    // multi_line_chars: $ => seq(
    //   repeat(seq(optional('"'), optional('"'), $.char /* TODO needs to be char without '"' */)),
    //   repeat('"')
    // ),

    processed_string_literal: $ => choice(
      seq(
        $.alphaid,
        '"',
        repeat(choice(
          seq(optional('\\'), $.processed_string_part),
          '\\\\',
          '\\"'
        )),
        '"'
      ),
      seq(
        $.alphaid,
        '"""',
        repeat(choice(
          seq(
            optional('"'),
            optional('"'),
            $.char, // TODO substitute (‘"’ | ‘$’)
          ),
          $.escape
        )),
        repeat('"'),
        '"""'
      )
    ),

    processed_string_part: $ => choice(
      $.printable_char, // TODO substitute (‘"’ | ‘$’ | ‘\’)
      $.escape
    ),
    escape: $ => choice(
      '$$',
      seq('$', $.letter, repeat(choice($.letter, $.digit))),
      seq(
        '{',
        seq(repeat(seq($.block_stat, $.semi)), optional($.block_result)), // block rule
        optional(seq(
          ';',
          $.white_space,
          repeat(
            seq(
              $.printable_char, // TODO substitute from printable_char (‘"’ | ‘}’ | ‘ ’ | ‘\t’ | ‘\n’)
            )
          ), // string_format rule
          $.white_space,
        )),
        '}',
      )
    ),

    // This one is inlined since it matches empty string
    // string_format: $ => repeat(
    //   seq(
    //     $.printable_char, // TODO substitute from printable_char (‘"’ | ‘}’ | ‘ ’ | ‘\t’ | ‘\n’)
    //   )
    // ),

    symbol_literal: $ => seq("'", $.plainid), // until 2.13

    comment: _ => choice(
      seq('/*', /* TODO any sequence of characters; nested comments are allowed ,*/ '*/'),
      seq('//', /.*/),
    ),


    nl: _ => choice('\n', '\r\n'),
    semi: $ => choice(';', seq($.nl, repeat($.nl))),

    // Context-free Syntax

    // Literals and Paths
    simple_literal: $ => choice(
      seq(optional('-'), $.integer_literal),
      seq(optional('-'), $.floating_point_literal),
      $.boolean_literal,
      $.character_literal,
      $.string_literal
    ),

    literal: $ => choice($.simple_literal, $.processed_string_literal, $.symbol_literal, 'null'),

    qual_id: $ => seq($.id, repeat(seq('.', $.id))),
    ids: $ => seq($.id, repeat(seq(',', $.id))),

    simple_ref: $ => choice(
      $.id,
      seq(optional(seq($.id, '.')), 'this'),
      seq(optional(seq($.id, '.')), 'super', optional($.class_qualifier), '.', $.id)
    ),

    class_qualifier: $ => seq('[', $.id, ']'),


    // Types
    type: $ => choice(
      $.fun_type,
      seq($.hk_type_param_clause, '=>>', $.type),
      seq($.fun_param_clause, '=>>', $.type),
      $.match_type,
      $.infix_type
    ),
    fun_type: $ => choice(
      seq($.fun_type_args, choice('=>', '?=>'), $.type),
      seq($.hk_type_param_clause, '=>', $.type)
    ),
    fun_type_args: $ => choice(
      $.infix_type,
      seq('(', optional($.fun_arg_types), ')'),
      $.fun_param_clause
    ),
    fun_param_clause: $ => seq('(', $.typed_fun_param, repeat(seq(',', $.typed_fun_param)), ')'),
    typed_fun_param: $ => seq($.id, ':', $.type),
    match_type: $ => seq($.infix_type, 'match', block($.type_case_clauses, $)),
    infix_type: $ => seq($.refined_type, repeat(seq($.id, optional($.nl), $.refined_type))),
    refined_type: $ => seq($.annot_type, repeat(seq(optional($.nl), $.refinement))),
    annot_type: $ => seq($.simple_type, repeat($.annotation)),

    simple_type: $ => choice(
      $.simple_literal,
      seq(
        '?', 
        seq(optional($.lower_bound), optional($.upper_bound)), // type_bounds rule
      ),
      $.simple_type1
    ),
    simple_type1: $ => choice(
      $.id,
      seq($.singleton, '.', $.id),
      seq($.singleton, '.', $.type),
      seq('(', $.types, ')'),
      $.refinement,
      seq('$', '{', 
        seq(repeat(seq($.block_stat, $.semi)), optional($.block_result)), // block rule
        '}'),
      seq('$', '{', $.pattern, '}'), // only inside quoted pattern
      seq($.simple_type1, $.type_args),
      seq($.simple_type1, '#', $.id)
    ),
    singleton: $ => choice(
      $.simple_ref,
      $.simple_literal,
      seq($.singleton, '.', $.id),
      seq($.singleton, repeat(seq(',', $.singleton)))
    ),
    singletons: $ => seq($.singleton, repeat(seq(',', $.singleton))),
    fun_arg_type: $ => choice($.type, seq('=>', $.type)),
    fun_arg_types: $ => seq($.fun_arg_type, repeat(seq(',', $.fun_arg_type))),
    param_type: $ => seq(optional('=>'), $.param_value_type),
    param_value_type: $ => seq($.type, optional('*')),
    type_args: $ => seq('[', $.types, ']'),
    refinement: $ => seq('{', optional($.refine_dcl), repeat(seq($.semi, optional($.refine_dcl))), '}'),
    // This rule is inlined since it matches empty string.
    // type_bounds: $ => seq(
    //   optional($.lower_bound),
    //   optional($.upper_bound),
    // ),

    // This rule is inlined since it matches empty string.
    // type_param_bounds: $ => seq(
    //   seq(optional($.lower_bound), optional($.upper_bound)), // type_bounds rule
    //   repeat($.contex_bound)
    // ),
    lower_bound: $ => seq('>:', $.type),
    upper_bound: $ => seq('<:', $.type),
    contex_bound: $ => seq(':', $.type),
    types: $ => seq($.type, repeat(seq(',', $.type))),

    // Expressions

    expr: $ => choice(
      seq($.fun_params, choice('=>', '?=>'), $.expr),
      seq($.hk_type_param_clause, '=>', $.expr),
      $.expr1
    ),
    block_result: $ => choice(
      seq(
        $.fun_params, 
        choice('=>', '?=>'), 
        seq(repeat(seq($.block_stat, $.semi)), optional($.block_result)), // block rule
      ),
      seq(
        $.hk_type_param_clause, 
        '=>', 
        seq(repeat(seq($.block_stat, $.semi)), optional($.block_result)), // block rule
      ),
      $.expr1
    ),
    fun_params: $ => choice($.bindings, $.id, '_'),

    expr1: $ => choice(
      seq(
        optional('inline'), 'if', '(', $.expr, ')', repeat($.nl), 
        $.expr, 
        optional(seq((optional($.semi), 'else', $.expr)))
      ),
      seq(optional('inline'), 'if',  $.expr, 'then',
        $.expr, 
        optional(seq(optional($.semi), 'else', $.expr))
      ),
      seq('while', '(', $.expr, ')', repeat($.nl), $.expr),
      seq('while', $.expr, 'do', $.expr),
      seq('try', $.expr, $.catches, optional(seq('finally', $.expr))),
      seq('try', $.expr, optional(seq('finally', $.expr))),
      seq('throw', $.expr),
      seq('return', optional($.expr)),
      seq($.for_expr),
      seq(optional(seq($.simple_expr, '.')), $.id, '=', $.expr),
      seq($.prefix_operator, $.simple_expr, '=', $.expr),
      seq($.simple_expr, $.argument_exprs, '=', $.expr),
      seq($.postfix_expr, optional($.ascription)),
      seq('inline', $.infix_expr, $.match_clause),
    ),

    ascription: $ => choice(
      seq(':', $.infix_type),
      seq(':', $.annotation, repeat($.annotation))
    ),
    catches: $ => seq('catch', choice($.expr, $.expr_case_clause)),

    postfix_expr: $ => seq($.infix_expr, optional($.id)),
    infix_expr: $ => choice(
      $.prefix_expr,
      seq($.infix_expr, $.id, optional($.nl), $.infix_expr),
      seq($.infix_expr, $.id, ':', $.indented_expr),
      seq($.infix_expr, $.match_clause),
    ),
    match_clause: $ => seq('match', block($.case_clauses, $)),
    prefix_expr: $ => seq(optional($.prefix_operator), $.simple_expr),
    prefix_operator: _ => choice('-', '+', '~', '!'),

    simple_expr: $ => choice(
      $.simple_ref,
      $.literal,
      '_',
      $.block_expr,
      seq('$', '{',
        seq(repeat(seq($.block_stat, $.semi)), optional($.block_result)), // block rule
        '}'), // TODO comment in grammar: unless inside quoted pattern
      seq('$', '{', $.pattern, '}'), // TODO comment in grammar: only inside quoted pattern
      seq($.quoted),
      seq($.quote_id), // TODO comment in grammar: only inside splices
      seq('new', $.constr_app, repeat(seq('with', $.constr_app)), optional($.template_body)),
      seq('new', $.template_body),
      seq($.simple_expr, '.', $.match_clause),
      seq($.simple_expr, $.type_args),
      seq($.simple_expr, $.argument_exprs),
      seq($.simple_expr, ':', $.indented_expr), // TODO under language.experimental.fewer_braces
      seq($.simple_expr, $.fun_params, choice('=>', '?>'), $.indented_expr), // TODO under language.experimental.fewer_braces
      seq($.simple_expr, '_'),
      $.xml_expr // TODO to be dropped
    ),
 
    indented_expr: $ => seq(
      $.indent, 
      choice(
        $.case_clauses, 
        seq(repeat(seq($.block_stat, $.semi)), optional($.block_result)), // block rule
      ),
      $.outdent
    ),
    quoted: $ => choice(
      seq("'", '{',
        seq(repeat(seq($.block_stat, $.semi)), optional($.block_result)), // block rule
        '}'),
      seq("'", '[', $.type, ']')
    ),
    exprs_in_parens: $ => seq($.expr_in_parens, repeat(seq(',', $.expr_in_parens))),
    expr_in_parens: $ => choice(
      seq($.postfix_expr, ':', $.type), // normal Expr allows only RefinedType here
      $.expr
    ),
    par_argument_exprs: $ => choice(
      seq('(', optional('using'), $.exprs_in_parens, ')'),
      seq('(', optional(seq($.exprs_in_parens, ',')), $.postfix_expr, '*', ')')
    ),
    argument_exprs: $ => choice($.par_argument_exprs, $.block_expr),

    block_expr: $ => block(choice(
        $.case_clauses,
        seq(repeat(seq($.block_stat, $.semi)), optional($.block_result)), // block rule
      ), $),

    // This rule is inlined since it matches empty string TODO seems that first block_stat is mandatory
    // block: $ => seq(repeat(seq($.block_stat, $.semi)), optional($.block_result)), // block rule
    block_stat: $ => choice(
      $.import,
      seq(repeat(seq($.annotation, optional($.nl))), repeat($.local_modifier), $.def),
      $.extension,
      $.expr1,
      $.end_marker
    ),
    for_expr: $ => choice(
      seq('for', '(', $.enumerators0, ')', repeat($.nl), optional(choice('do', 'yield')), $.expr),
      seq('for', '{', $.enumerators0, '}', repeat($.nl), optional(choice('do', 'yield')), $.expr),
      seq('for',      $.enumerators0,                             choice('do', 'yield'),  $.expr)
    ),
    enumerators0: $ => seq(repeat($.nl), $.enumerators, optional($.semi)),

    enumerators: $ => seq($.generator, repeat(choice(seq($.semi, $.enumerator), $.guard))),
    enumerator: $ => choice(
      $.generator,
      seq($.guard, repeat($.guard)),
      seq($.pattern1, '=', $.expr)
    ),
    generator: $ => seq(optional('case'), $.pattern1, '<-', $.expr),
    guard: $ => seq('if', $.postfix_expr),


    case_clauses: $ => seq($.case_clause, repeat($.case_clause)),
    case_clause: $ => seq(
      'case',
      $.pattern,
      optional($.guard),
      '=>',
      seq(repeat(seq($.block_stat, $.semi)), optional($.block_result)), // block rule
    ),
    expr_case_clause: $ => seq('case', $.pattern, optional($.guard), '=>', $.expr),
    type_case_clauses: $ => seq($.type_case_clause, repeat($.type_case_clause)),
    type_case_clause: $ => seq('case', choice($.infix_type, '_'), '=>', $.type, optional($.semi)),
    pattern: $ => seq($.pattern1, repeat(seq('|', $.pattern1))),
    pattern1: $ => seq($.pattern2, optional(seq(':', $.refined_type))),
    pattern2: $ => seq(optional(seq($.id, '@')), $.infix_pattern),
    infix_pattern: $ => seq($.simple_pattern, repeat(seq($.id, optional($.nl), $.simple_pattern))),

    simple_pattern: $ => choice(
      $.pat_var,
      $.literal,
      seq('(', optional($.patterns), ')'),
      $.quoted,
      $.xml_pattern, // to be dropped
      seq($.simple_pattern1, optional($.type_args), optional($.argument_patterns)),
      seq('given', $.refined_type)
    ),
    simple_pattern1: $ => choice($.simple_ref, seq($.simple_pattern1, '.', $.id)),

    pat_var: $ => choice($.varid, '_'),
    patterns: $ => seq($.pattern, repeat(seq(',', $.pattern))),

    argument_patterns: $ => choice(
      seq('(', optional($.patterns), ')'),
      seq('(', optional(seq($.patterns, ',')), $.pat_var, ':', '_', '*', ')')
    ),

    // Type and Value Parameters

    cls_type_param_clause: $ => seq('[', $.cls_type_param, repeat(seq(',', $.cls_type_param)), ']'),
    cls_type_param: $ => seq(
      repeat($.annotation),
      optional(choice('+', '-')),
      $.id,
      optional($.hk_type_param_clause),
      seq(
        seq(optional($.lower_bound), optional($.upper_bound)), // type_bounds rule
        repeat($.contex_bound)
      ) // type_param_bounds rule
    ),

    def_type_param_clause: $ => seq('[', $.def_type_param, repeat(seq(',', $.def_type_param)), ']'),
    def_type_param: $ => seq(
      repeat($.annotation),
      $.id,
      optional($.hk_type_param_clause),
      seq(
        seq(optional($.lower_bound), optional($.upper_bound)), // type_bounds rule
        repeat($.contex_bound)
      ) // type_param_bounds rule
    ),

    typ_type_param_clause: $ => seq('[', $.typ_type_param, repeat(seq(',', $.typ_type_param)), ']'),
    typ_type_param: $ => seq(
      repeat($.annotation),
      $.id,
      optional($.hk_type_param_clause),
      seq(optional($.lower_bound), optional($.upper_bound)), // type_bounds rule
    ),

    hk_type_param_clause: $ => seq('[', $.hk_type_param, repeat(seq(',', $.hk_type_param)), ']'),

    hk_type_param: $ => seq(
      repeat($.annotation),
      optional(choice('+', '-')),
      choice(seq($.id, optional($.hk_type_param_clause)),'_') ,
      seq(optional($.lower_bound), optional($.upper_bound)), // type_bounds rule
    ),

    cls_param_clauses: $ => seq(
      repeat($.cls_param_clause),
      opnional(seq(optional($.nl), '(', optional('implicit'), $.cls_params, ')'))
    ),
    cls_param_clause: $ => choice(
      seq(optional($.nl), '(', $.cls_params, ')'),
      seq(optional($.nl), '(', 'using', choice($.cls_params, $.fun_arg_types), ')')
    ),

    cls_params: $ => seq($.cls_param, repeat(seq(',', $.cls_param))),
    cls_param: $ => seq(
      repeat($.annotation),
      optional(choice(
        seq(repeat($.modifier), choice('val', 'var')),
        'inline'
      )),
      $.param
    ),

    param: $ => seq($.id, ':', $.param_type, optional(seq('=', $.expr))),


    def_param_clauses: $ => seq(
      repeat($.def_param_clause), 
      optional(seq(optional($.nl), '(', optional('implicit'), $.def_params, ')'))
    ),
    def_param_clause: $ => choise(
      seq(optional($.nl), '(', $.def_params, ')'),
      $.using_param_clause
    ),
    using_param_clause: $ => seq(optional($.nl), '(', 'using', choise($.def_params, $.fun_arg_types), ')'),

    def_param_clause: $ => choice(
      seq(
        optional($.nl),
        optional('erased'),
        '(',
        optional($.def_params),
        ')'
      ),
      $.given_param_clause),
    given_param_clause: $ => seq(
      'given',
      optional('erased'),
      choice(seq('(', $.def_params, ')'), $.given_types)
    ),
    def_params: $ => seq($.def_param, repeat(seq(',', $.def_param))),

    def_param: $ => seq(repeat($.annotation), optional('inline'), $.param),

    given_types: $ => seq($.annot_type, repeat(seq(',', $.annot_type))),

    //Bindings, Imports, and Exports

    bindings: $ => seq('(', optional(seq($.binding, repeat(seq(',', $.binding)))), ')'),
    binding: $ => seq(choice($.id, '_'), optional(seq(':', $.type))),

    modifier: $ => choice($.local_modifier, $.access_modifier, 'override', 'opaque'),

    local_modifier: _ => choice(
      'abstract',
      'final',
      'sealed',
      'open',
      'implicit',
      'lazy',
      'inline',
    ),

    access_modifier: $ => seq(choice('private', 'protected'), optional($.access_qualifier)),
    access_qualifier: $ => seq('[', $.id, ']'),

    annotation: $ => seq('@', $.simple_type1, repeat($.par_argument_exprs)),

    import: $ => seq('import', $.import_expr, repeat(seq(',', $.import_expr))),
    export: $ => seq('export', $.import_expr, repeat(seq(',', $.import_expr))),
    import_expr: $ => choice(
      seq($.simple_ref, repeat(seq('.', $.id)), '.', $.import_spec),
      seq($.simple_ref, 'as', $.id)
    ),
    import_spec: $ => choice(
      $.named_selector,
      $.wildcard_selector,
      seq('{', $.import_selectors, '}')
    ),
    named_selector: $ => seq($.id, optional(seq('as', choice($.id, '_')))),
    wildcard_selector: $ => choice('*', seq('given', optional($.infix_type))),
    import_selectors: $ => choice(
      seq($.named_selector, optional(seq(',', $.import_selectors))),
      seq($.wildcard_selector, repeat(seq(',', $.wildcard_selector)))
    ),
    end_marker: $ => seq('end', $.end_marker_tag), // TODO when followed by EOL
    end_marker_tag: _ => choice(
      'id', 'if', 'while', 'for', 'match', 'try', 
      'new', 'this', 'given', 'extension', 'val'),

    // Declarations and Definitions
 
    refine_dcl: $ => choice(
      seq('val', $.val_dcl),
      seq('def', $.def_dcl),
      seq('type', repeat($.nl), $.type_dcl)
    ),
 
    dcl: $ => choice($.refine_dcl, seq('var', $.var_dcl)),
    val_dcl: $ => seq($.ids, ':', $.type),
    var_dcl: $ => seq($.ids, ':', $.type),
    def_dcl: $ => seq($.def_sig, ':', $.type),
    def_sig: $ => seq($.id, optional($.def_type_param_clause), $.def_param_clauses),
    type_dcl: $ => seq(
      $.id,
      optional($.type_param_clause),
      repeat($.fun_param_clause),
      seq(optional($.lower_bound), optional($.upper_bound)), // type_bounds rule
      optional(seq('=', $.type))
    ),
    def: $ => choice(
      seq('val', $.pat_def),
      seq('var', $.pat_def),
      seq('def', $.def_def),
      seq('type', repeat($.nl), $.type_dcl),

      seq($.tmpl_def)
    ),
    pat_def: $ => choice(
      seq($.ids, optional(seq(':', $.type)), '=', $.expr),
      seq($.pattern2, optional(seq(':', $.type)), '=', $.expr,)
    ),
    def_def: $ => choice(
      seq($.def_sig, optional(seq(':', $.type)), '=', $.expr),
      seq('this', $.def_param_clause, $.def_param_clauses, '=', $.constr_expr)
    ),
    tmpl_def: $ => choice(
      seq(choice(seq(optional('case'), 'class'), 'trait'), $.class_def),
      seq(optional('case'), 'object', $.object_def),
      seq('enum', $.enum_def),
      seq('given', $.given_def),
    ),

    class_def: $ => seq(
      $.id, 
      $.class_constr, 
      optional(seq(
        seq(
          optional(seq('extends', $.constr_apps)), 
          optional(seq('derives', $.qual_id, repeat(seq(',', $.qual_id)))),
        ), // inherit_clauses rule
        optional($.template_body)
      )), // optional(template) rule
    ),
    class_constr: $ => seq(
      optional($.cls_type_param_clause), 
      optional(seq(repeat($.annotation), optional($.access_modifier))), // optional(constr_mods) rule
      $.cls_param_clauses
    ),
    // This rule is inlined since it matches an empty string
    // constr_mods: $ => seq(repeat($.annotation), optional($.access_modifier)),
    object_def: $ => seq(
      $.id, 
      optional(seq(
        seq(
          optional(seq('extends', $.constr_apps)), 
          optional(seq('derives', $.qual_id, repeat(seq(',', $.qual_id)))),
        ), // inherit_clauses rule
        optional($.template_body)
      )), // optional(template) rule
    ),
    enum_def: $ => seq(
      $.id, 
      $.class_constr, 
      seq(
        optional(seq('extends', $.constr_apps)), 
        optional(seq('derives', $.qual_id, repeat(seq(',', $.qual_id)))),
      ), // inherit_clauses rule
      $.enum_body),
    given_def: $ => seq(
      optional($.given_sig), 
      choice(seq($.annot_type, optional(seq('=', $.expr))), $.structural_instance)
    ),
    given_sig: $ => seq(optional($.id), optional($.def_type_param_clause), repeat($.using_param_clause), ':'),
    structural_instance: $ => seq(
      $.constr_app,
      repeat(seq('with', $.constr_app)),
      optional(seq('with', $.template_body))
    ),
    extension: $ => seq(
      'extension',
      optional($.def_type_param_clause),
      repeat($.using_param_clause),
      '(', $.def_param, ')',
      repeat($.using_param_clause),
      $.ext_methods
    ),
    ext_methods: $ => choice(
      $.ext_method, 
      seq(optional($.nl), block(seq($.ext_method, repeat(seq($.semi, $.ext_method))), $))
    ),
    ext_method: $ => seq(repeat(seq($.annotation, optional($.nl))), repeat($.modifier), 'def', $.def_def),
    // This rule is inlined since it matches an empty string
    // template: $ => seq(
    //   seq(
    //     optional(seq('extends', $.constr_apps)), 
    //     optional(seq('derives', $.qual_id, repeat(seq(',', $.qual_id)))),
    //   ), // inherit_clauses rule
    //   optional($.template_body)
    // ),
    // This rule is inlined since it matches an emtpy string
    // inherit_clauses: $ => seq(
    //   optional(seq('extends', $.constr_apps)), 
    //   optional(seq('derives', $.qual_id, repeat(seq(',', $.qual_id)))),
    // ),
    constr_apps: $ => seq(
      $.constr_app, 
      choice(repeat(seq(',', $.constr_app)), repeat(seq('with', $.constr_app)))
    ),
    constr_app: $ => seq($.simple_type1, repeat($.annotation), repeat($.par_argument_exprs)),
    constr_expr: $ => choice(
      $.self_invocation,
      block(seq($.self_invocation, repeat(seq($.semi, $.block_stat))), $)
    ),
    self_invocation: $ => seq('this', $.argument_exprs, repeat($.argument_exprs)),

    template_body: $ => block_body(seq(
      optional($.self_type), 
      $.template_stat, 
      repeat(seq($.semi, $.template_stat))
    ), $),
      
    template_stat: $ => choice(
      $.import,
      $.export,
      seq(repeat(seq($.annotation, optional($.nl))), repeat($.modifier), $.def),
      seq(repeat(seq($.annotation, optional($.nl))), repeat($.modifier), $.dcl),
      $.extension,
      $.expr1,
      $.end_marker
    ),
    self_type: $ => choice(
      seq($.id, optional(seq(':', $.infix_type)), '=>'),
      seq('this', ':', $.infix_type, '=>')
    ),

    enum_body: $ => block_body(seq(
      optional($.self_type), $.enum_stat, repeat(seq($.semi, $.enum_stat)),
    ), $),
    enum_stat: $ => choice(
      $.template_stat,
      seq(repeat(seq($.annotation, optional($.nl))), repeat($.modifier), $.enum_case),
    ),
    enum_case: $ => seq(
      'case', 
      choice(
        seq($.id, $.class_constr, optional(seq('extends', $.constr_apps))), 
        $.ids
      )
    ),

    top_stats: $ => seq($.top_stat, repeat(seq($.semi, $.top_stat))),
    top_stat: $ => choice(
      $.import,
      $.export,
      seq(repeat(seq($.annotation, optional($.nl))), repeat($.modifier), $.def),
      $.extension,
      $.packaging,
      $.package_object,
      $.end_marker,
    ),

    packaging: $ => seq('package', $.qual_id, block_body($.top_stats, $)), 
    package_object: $ => seq('package', 'object', $.object_def),

    compilation_unit: $ => seq(repeat(seq('package', $.qual_id, $.semi)), $.top_stats),



    // FIXME(daddy) This rules will be later in the grammar.
    refine_dcl: _ => 'refine_dcl',
    xml_pattern: _ => 'xml',
    xml_expr: _ => 'xml',
    constr_app: _ => 'constr_app',
    quoted_id: _ => 'quoted_id',
    postfix_expr: _ => 'postfx',
    modifier: _ => 'mod',
    def_param_clauses: _ => 'aaaa',
    type_param_clause: _ => 'aaaa',
    fun_param_clause: _ => 'aaaa',
    using_param_clause: _ => 'aaaa',
    cls_param_clauses: _ => 'aaaa',
    def_param_clauses: _ => 'aaaa',
    indent: _ => 'aaaa',
    outdent: _ => 'aaaa',
    def_param_clauses: _ => 'aaaa',
    end_marker: _ => 'aaaa',
    def_param_clauses: _ => 'aaaa',
    path: _ => 'aaa',
    stable_id: _ => 'aaa',


  }
});

