module.exports = grammar({
  name: 'scala',

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
    quoteId: $ => seq("'", $.alphaid),
      
    integer_literal: $ => seq(choice($.decimal_numeral, $.hex_numeral), choice('L', 'l')),
    decimal_numeral: $ => seq('0', $.non_zero_digit, repeat($.digit)),
    hex_numeral: $ => seq('0', choice('x', 'X'), $.hex_digit, repeat($.hex_digit)),
    digit: $ => choice('0', $.non_zero_digit),
    non_zero_digit: _ => /[1-9]/,

    floating_point_literal: $ => choice(
      seq($.digit, repeat($.digit), '.', repeat($.digit), optional($.exponent_part), optional($.float_type)),
      seq('.', $.digit, repeat($.digit), optional($.exponent_part), optional($.float_type)),
      seq($.digit, repeat($.digit), $.exponent_part, optional($.float_type)),
      seq($.digit, repeat($.digit), optional($.exponent_part), $.float_type),
    ),
    exponent_part: $ => seq(choice('E', 'e'), optional(choice('+', '-')), $.digit, repeat($.digit)),
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
        $.block, 
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
      
    comment: _ => choice(
      seq('/*', /* TODO any sequence of characters; nested comments are allowed ,*/ '*/'),
      seq('//', /.*/),
    ),


    nl: _ => choice('\n', '\r\n'),
    semi: $ => choice(';', seq($.nl, repeat($.nl))),

    block: _ => 'block', // FIXME I'm later in the grammar

    }
});


/*

The following descriptions of Scala tokens uses literal characters `‘c’` when
referring to the ASCII fragment `\u0000` – `\u007F`.

_Unicode escapes_ are used to represent the Unicode character with the given
hexadecimal code:

```ebnf
UnicodeEscape ::= ‘\’ ‘u’ {‘u’} hexDigit hexDigit hexDigit hexDigit
hexDigit      ::= ‘0’ | … | ‘9’ | ‘A’ | … | ‘F’ | ‘a’ | … | ‘f’
```

Informal descriptions are typeset as `“some comment”`.

### Lexical Syntax
The lexical syntax of Scala is given by the following grammar in EBNF
form.

```ebnf
whiteSpace       ::=  ‘\u0020’ | ‘\u0009’ | ‘\u000D’ | ‘\u000A’
upper            ::=  ‘A’ | … | ‘Z’ | ‘\$’ | ‘_’  “… and Unicode category Lu”
lower            ::=  ‘a’ | … | ‘z’ “… and Unicode category Ll”
letter           ::=  upper | lower “… and Unicode categories Lo, Lt, Lm, Nl”
digit            ::=  ‘0’ | … | ‘9’
paren            ::=  ‘(’ | ‘)’ | ‘[’ | ‘]’ | ‘{’ | ‘}’ | ‘'(’ | ‘'[’ | ‘'{’
delim            ::=  ‘`’ | ‘'’ | ‘"’ | ‘.’ | ‘;’ | ‘,’
opchar           ::=  ‘!’ | ‘#’ | ‘%’ | ‘&’ | ‘*’ | ‘+’ | ‘-’ | ‘/’ | ‘:’ |
                      ‘<’ | ‘=’ | ‘>’ | ‘?’ | ‘@’ | ‘\’ | ‘^’ | ‘|’ | ‘~’
                      “… and Unicode categories Sm, So”
printableChar    ::=  “all characters in [\u0020, \u007E] inclusive”
charEscapeSeq    ::=  ‘\’ (‘b’ | ‘t’ | ‘n’ | ‘f’ | ‘r’ | ‘"’ | ‘'’ | ‘\’)

op               ::=  opchar {opchar}
varid            ::=  lower idrest
alphaid          ::=  upper idrest
                   |  varid
plainid          ::=  alphaid
                   |  op
id               ::=  plainid
                   |  ‘`’ { charNoBackQuoteOrNewline | UnicodeEscape | charEscapeSeq } ‘`’
idrest           ::=  {letter | digit} [‘_’ op]
quoteId          ::=  ‘'’ alphaid

integerLiteral   ::=  (decimalNumeral | hexNumeral) [‘L’ | ‘l’]
decimalNumeral   ::=  ‘0’ | nonZeroDigit {digit}
hexNumeral       ::=  ‘0’ (‘x’ | ‘X’) hexDigit {hexDigit}
digit            ::=  ‘0’ | nonZeroDigit
nonZeroDigit     ::=  ‘1’ | … | ‘9’

floatingPointLiteral
                 ::=  digit {digit} ‘.’ {digit} [exponentPart] [floatType]
                   |  ‘.’ digit {digit} [exponentPart] [floatType]
                   |  digit {digit} exponentPart [floatType]
                   |  digit {digit} [exponentPart] floatType
exponentPart     ::=  (‘E’ | ‘e’) [‘+’ | ‘-’] digit {digit}
floatType        ::=  ‘F’ | ‘f’ | ‘D’ | ‘d’

booleanLiteral   ::=  ‘true’ | ‘false’

characterLiteral ::=  ‘'’ (printableChar | charEscapeSeq) ‘'’

stringLiteral    ::=  ‘"’ {stringElement} ‘"’
                   |  ‘"""’ multiLineChars ‘"""’
stringElement    ::=  printableChar \ (‘"’ | ‘\’)
                   |  UnicodeEscape
                   |  charEscapeSeq
multiLineChars   ::=  {[‘"’] [‘"’] char \ ‘"’} {‘"’}
processedStringLiteral
                 ::=  alphaid ‘"’ {[‘\’] processedStringPart | ‘\\’ | ‘\"’} ‘"’
                   |  alphaid ‘"""’ {[‘"’] [‘"’] char \ (‘"’ | ‘$’) | escape} {‘"’} ‘"""’
processedStringPart
                 ::= printableChar \ (‘"’ | ‘$’ | ‘\’) | escape
escape           ::=  ‘$$’
                   |  ‘$’ letter { letter | digit }
                   |  ‘{’ Block  [‘;’ whiteSpace stringFormat whiteSpace] ‘}’
stringFormat     ::=  {printableChar \ (‘"’ | ‘}’ | ‘ ’ | ‘\t’ | ‘\n’)}

comment          ::=  ‘/*’ “any sequence of characters; nested comments are allowed” ‘*TODO/’
                   |  ‘//’ “any sequence of characters up to end of line”

nl               ::=  “new line character”
semi             ::=  ‘;’ |  nl {nl}
```

## Keywords

### Regular keywords

```
abstract  case      catch     class     def       do        else      enum
erased    extends   false     final     finally   for       given     if
implied   import    lazy      match     new       null      object    package
private   protected override  return    super     sealed    then      throw
trait     true      try       type      val       var       while     yield
:         =         <-        =>        <:        >:        #         @
```

### Soft keywords

```
derives   inline    opaque
*         |         &         +         -
```

## Context-free Syntax

The context-free syntax of Scala is given by the following EBNF
grammar:

### Literals and Paths
```ebnf
SimpleLiteral     ::=  [‘-’] integerLiteral
                    |  [‘-’] floatingPointLiteral
                    |  booleanLiteral
                    |  characterLiteral
                    |  stringLiteral
Literal           ::=  SimpleLiteral
                    |  processedStringLiteral
                    |  ‘null’

QualId            ::=  id {‘.’ id}
ids               ::=  id {‘,’ id}

Path              ::=  StableId
                    |  [id ‘.’] ‘this’
StableId          ::=  id
                    |  Path ‘.’ id
                    |  [id ‘.’] ‘super’ [ClassQualifier] ‘.’ id
ClassQualifier    ::=  ‘[’ id ‘]’
```

### Types
```ebnf
Type              ::=  { ‘erased’ | ‘given’} FunArgTypes ‘=>’ Type
                    |  HkTypeParamClause ‘=>’ Type
                    |  MatchType
                    |  InfixType
FunArgTypes       ::=  InfixType
                    |  ‘(’ [ FunArgType {‘,’ FunArgType } ] ‘)’
                    |  ‘(’ TypedFunParam {‘,’ TypedFunParam } ‘)’
TypedFunParam     ::=  id ‘:’ Type
MatchType         ::=  InfixType `match` TypeCaseClauses
InfixType         ::=  RefinedType {id [nl] RefinedType}
RefinedType       ::=  AnnotType {[nl] Refinement}
AnnotType         ::=  SimpleType {Annotation}
SimpleType        ::=  SimpleType TypeArgs
                    |  SimpleType ‘#’ id
                    |  StableId
                    |  Path ‘.’ ‘type’
                    |  ‘(’ ArgTypes ‘)’
                    |  ‘_’ SubtypeBounds
                    |  Refinement
                    |  SimpleLiteral
                    |  ‘$’ ‘{’ Block ‘}’
ArgTypes          ::=  Type {‘,’ Type}
FunArgType        ::=  Type
                    |  ‘=>’ Type
ParamType         ::=  [‘=>’] ParamValueType
ParamValueType    ::=  Type [‘*’]
TypeArgs          ::=  ‘[’ ArgTypes ‘]’
Refinement        ::=  ‘{’ [RefineDcl] {semi [RefineDcl]} ‘}’
SubtypeBounds     ::=  [‘>:’ Type] [‘<:’ Type]
TypeParamBounds   ::=  SubtypeBounds {‘:’ Type}
```

### Expressions
```ebnf
Expr              ::=  [‘given’] [‘erased’] FunParams ‘=>’ Expr
                    |  Expr1
FunParams         ::=  Bindings
                    |  id
                    |  ‘_’
Expr1             ::=  ‘if’ Expr ‘then’ Expr [[semi] ‘else’ Expr]
                    |  ‘while’ Expr ‘do’ Expr
                    |  ‘try’ Expr ‘catch’ Expr [‘finally’ Expr]
                    |  ‘try’ Expr ‘finally’ Expr
                    |  ‘throw’ Expr
                    |  ‘return’ [Expr]
                    |  ‘for’ Enumerators (‘do’ Expr | ‘yield’ Expr)
                    |  [SimpleExpr ‘.’] id ‘=’ Expr
                    |  SimpleExpr1 ArgumentExprs ‘=’ Expr
                    |  InfixExpr [Ascription]
                    |  [‘inline’] InfixExpr ‘match’ ‘{’ CaseClauses ‘}’
                    |  ‘implied’ ‘match’ ‘{’ ImpliedCaseClauses ‘}’
Ascription        ::=  ‘:’ InfixType
                    |  ‘:’ Annotation {Annotation}
InfixExpr         ::=  PrefixExpr
                    |  InfixExpr id [nl] InfixExpr
                    |  InfixExpr ‘given’ (InfixExpr | ParArgumentExprs)
PrefixExpr        ::=  [‘-’ | ‘+’ | ‘~’ | ‘!’] SimpleExpr
SimpleExpr        ::=  ‘new’ (ConstrApp [TemplateBody] | TemplateBody)
                    |  BlockExpr
                    |  ‘$’ ‘{’ Block ‘}’
                    |  Quoted
                    |  quoteId     // only inside splices
                    |  SimpleExpr1
SimpleExpr1       ::=  Literal
                    |  Path
                    |  ‘_’
                    |  ‘(’ ExprsInParens ‘)’
                    |  SimpleExpr ‘.’ id
                    |  SimpleExpr TypeArgs
                    |  SimpleExpr1 ArgumentExprs
                    |  XmlExpr
Quoted            ::=  ‘'’ ‘{’ Block ‘}’
                    |  ‘'’ ‘[’ Type ‘]’
ExprsInParens     ::=  ExprInParens {‘,’ ExprInParens}
ExprInParens      ::=  InfixExpr ‘:’ Type
                    |  Expr
ParArgumentExprs  ::=  ‘(’ ExprsInParens ‘)’
                    |  ‘(’ [ExprsInParens ‘,’] InfixExpr ‘:’ ‘_’ ‘*’ ‘)’
ArgumentExprs     ::=  ParArgumentExprs
                    |  [nl] BlockExpr
BlockExpr         ::=  ‘{’ CaseClauses | Block ‘}’
Block             ::=  {BlockStat semi} [Expr]
BlockStat         ::=  Import
                    |  {Annotation [nl]} {LocalModifier} Def
                    |  Expr1

Enumerators       ::=  Generator {semi Enumerator | Guard}
Enumerator        ::=  Generator
                    |  Guard
                    |  Pattern1 ‘=’ Expr
Generator         ::=  Pattern1 ‘<-’ Expr
Guard             ::=  ‘if’ PostfixExpr

CaseClauses       ::=  CaseClause { CaseClause }
CaseClause        ::=  ‘case’ Pattern [Guard] ‘=>’ Block
ImpliedCaseClauses::=  ImpliedCaseClause { ImpliedCaseClause }
ImpliedCaseClause ::=  ‘case’ PatVar [‘:’ RefinedType] [Guard] ‘=>’ Block
TypeCaseClauses   ::=  TypeCaseClause { TypeCaseClause }
TypeCaseClause    ::=  ‘case’ InfixType ‘=>’ Type [nl]

Pattern           ::=  Pattern1 { ‘|’ Pattern1 }
Pattern1          ::=  PatVar ‘:’ RefinedType
                    |  Pattern2
Pattern2          ::=  [id ‘@’] InfixPattern
InfixPattern      ::=  SimplePattern { id [nl] SimplePattern }
SimplePattern     ::=  PatVar
                    |  Literal
                    |  ‘(’ [Patterns] ‘)’
                    |  Quoted
                    |  XmlPattern
                    |  SimplePattern1 [TypeArgs] [ArgumentPatterns]
SimplePattern1    ::=  Path
                    |  SimplePattern1 ‘.’ id
PatVar            ::=  varid
                    |  ‘_’
Patterns          ::=  Pattern {‘,’ Pattern}
ArgumentPatterns  ::=  ‘(’ [Patterns] ‘)’
                    |  ‘(’ [Patterns ‘,’] Pattern2 ‘:’ ‘_’ ‘*’ ‘)’
```

### Type and Value Parameters
```ebnf
ClsTypeParamClause::=  ‘[’ ClsTypeParam {‘,’ ClsTypeParam} ‘]’
ClsTypeParam      ::=  {Annotation} [‘+’ | ‘-’] id [HkTypeParamClause] TypeParamBounds

DefTypeParamClause::=  ‘[’ DefTypeParam {‘,’ DefTypeParam} ‘]’
DefTypeParam      ::=  {Annotation} id [HkTypeParamClause] TypeParamBounds

TypTypeParamClause::=  ‘[’ TypTypeParam {‘,’ TypTypeParam} ‘]’
TypTypeParam      ::=  {Annotation} id [HkTypeParamClause] SubtypeBounds

HkTypeParamClause ::=  ‘[’ HkTypeParam {‘,’ HkTypeParam} ‘]’
HkTypeParam       ::=  {Annotation} [‘+’ | ‘-’] (Id[HkTypeParamClause] | ‘_’) SubtypeBounds

ClsParamClause    ::=  [nl] [‘erased’] ‘(’ [ClsParams] ‘)’
                    |  ‘given’ [‘erased’] (‘(’ ClsParams ‘)’ | GivenTypes)
ClsParams         ::=  ClsParam {‘,’ ClsParam}
ClsParam          ::=  {Annotation} [{Modifier} (‘val’ | ‘var’) | ‘inline’] Param
Param             ::=  id ‘:’ ParamType [‘=’ Expr]

DefParamClause    ::=  [nl] [‘erased’] ‘(’ [DefParams] ‘)’ | GivenParamClause
GivenParamClause  ::=  ‘given’ [‘erased’] (‘(’ DefParams ‘)’ | GivenTypes)
DefParams         ::=  DefParam {‘,’ DefParam}
DefParam          ::=  {Annotation} [‘inline’] Param
GivenTypes        ::=  AnnotType {‘,’ AnnotType}
```

### Bindings, Imports, and Exports
```ebnf
Bindings          ::=  ‘(’ Binding {‘,’ Binding} ‘)’
Binding           ::=  (id | ‘_’) [‘:’ Type]

Modifier          ::=  LocalModifier
                    |  AccessModifier
                    |  ‘override’
LocalModifier     ::=  ‘abstract’
                    |  ‘final’
                    |  ‘sealed’
                    |  ‘lazy’
                    |  ‘opaque’
                    |  ‘inline’
                    |  ‘erased’
AccessModifier    ::=  (‘private’ | ‘protected’) [AccessQualifier]
AccessQualifier   ::=  ‘[’ (id | ‘this’) ‘]’

Annotation        ::=  ‘@’ SimpleType {ParArgumentExprs}

Import            ::=  ‘import’ [‘implied’] ImportExpr {‘,’ ImportExpr}
ImportExpr        ::=  StableId ‘.’ (id | ‘_’ | ImportSelectors)
ImportSelectors   ::=  ‘{’ {ImportSelector ‘,’} (ImportSelector | ‘_’) ‘}’
ImportSelector    ::=  id [‘=>’ id | ‘=>’ ‘_’]
Export            ::=  ‘export’ [‘implied’] ImportExpr {‘,’ ImportExpr}
```

### Declarations and Definitions
```ebnf
RefineDcl         ::=  ‘val’ ValDcl
                    |  ‘def’ DefDcl
                    |  ‘type’ {nl} TypeDcl
Dcl               ::=  RefineDcl
                    |  ‘var’ ValDcl
ValDcl            ::=  ids ‘:’ Type
DefDcl            ::=  DefSig [‘:’ Type]
DefSig            ::=  ‘(’ DefParam ‘)’ [nl] id [DefTypeParamClause] {DefParamClause}
TypeDcl           ::=  id [TypeParamClause] (SubtypeBounds | ‘=’ Type)
                    |  id [TypeParamClause] <: Type = MatchType

Def               ::=  ‘val’ PatDef
                    |  ‘var’ VarDef
                    |  ‘def’ DefDef
                    |  ‘type’ {nl} TypeDcl
                    |  ([‘case’] ‘class’ | ‘trait’) ClassDef
                    |  [‘case’] ‘object’ ObjectDef
                    |  ‘enum’ EnumDef
                    |  ‘implied’ InstanceDef

PatDef            ::=  Pattern2 {‘,’ Pattern2} [‘:’ Type] ‘=’ Expr
VarDef            ::=  PatDef
                    |  ids ‘:’ Type ‘=’ ‘_’
DefDef            ::=  DefSig [(‘:’ | ‘<:’) Type] ‘=’ Expr
                    |  ‘this’ DefParamClause {DefParamClause} ‘=’ ConstrExpr
ClassDef          ::=  id ClassConstr [Template]=
ClassConstr       ::=  [ClsTypeParamClause] [ConstrMods] {ClsParamClause}
ConstrMods        ::=  {Annotation} [AccessModifier]
ObjectDef         ::=  id [Template]
EnumDef           ::=  id ClassConstr InheritClauses EnumBody
InstanceDef       ::=  [id] InstanceParams InstanceBody
InstanceParams    ::=  [DefTypeParamClause] {GivenParamClause}
InstanceBody      ::=  [‘for’ ConstrApp {‘,’ ConstrApp }] [TemplateBody]
                    |  ‘for’ Type ‘=’ Expr
Template          ::=  InheritClauses [TemplateBody]
InheritClauses    ::=  [‘extends’ ConstrApps] [‘derives’ QualId {‘,’ QualId}]
ConstrApps        ::=  ConstrApp {‘,’ ConstrApp}
ConstrApp         ::=  AnnotType {ArgumentExprs}
ConstrExpr        ::=  SelfInvocation
                    |  {’ SelfInvocation {semi BlockStat} ‘}’
SelfInvocation    ::=  ‘this’ ArgumentExprs {ArgumentExprs}

TemplateBody      ::=  [nl] ‘{’ [SelfType] TemplateStat {semi TemplateStat} ‘}’
TemplateStat      ::=  Import
                    |  Export
                    |  {Annotation [nl]} {Modifier} Def
                    |  {Annotation [nl]} {Modifier} Dcl
                    |  Expr1
                    |
SelfType          ::=  id [‘:’ InfixType] ‘=>’
                    |  ‘this’ ‘:’ InfixType ‘=>’

EnumBody          ::=  [nl] ‘{’ [SelfType] EnumStat {semi EnumStat} ‘}’
EnumStat          ::=  TemplateStat
                    |  {Annotation [nl]} {Modifier} EnumCase
EnumCase          ::=  ‘case’ (id ClassConstr [‘extends’ ConstrApps]] | ids)

TopStatSeq        ::=  TopStat {semi TopStat}
TopStat           ::=  Import
                    |  Export
                    |  {Annotation [nl]} {Modifier} Def
                    |  Packaging
                    |
Packaging         ::=  ‘package’ QualId [nl] ‘{’ TopStatSeq ‘}’

CompilationUnit   ::=  {‘package’ QualId semi} TopStatSeq
```
*/
