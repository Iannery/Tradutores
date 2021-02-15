%{
    #include<stdio.h>
    #include<stdlib.h>
    #define BRED "\e[1;31m"
    #define reset "\e[0m"
    int line = 1;
    int column = 1;
    int errors = 0;
%}

DIGIT   [0-9]

ID      [a-zA-Z_][a-z0-9A-Z]*

EMPTY   EMPTY

KEYWORD if|else|for|forall|return

ARITHMETIC_OP   [+]{2}|[-]{2}|[+*/-]

LOGICAL_OP      [&]{2}|[|]{2}|[!]

RELATIONAL_OP   [=]{2}|(!=)|(>=)|(<=)|[>]|[<]

ASSIGN_OP       [+*/-]?[=]{1}

INLINE_COMMENT  [/]{2}.*

TYPE    int|float|set|elem

IN      read

OUT     write|writeln


%%


[ \t]+ {
    column += yyleng;
}


\n {
    line++;
    column = 1;
}

{DIGIT}+ {
    printf("Integer: %s\n", yytext);
    column += yyleng;
}

{DIGIT}+"."{DIGIT}+ {
    printf("Float: %s\n", yytext);
    column += yyleng;
}

{EMPTY} {
    printf("Empty const: %s\n", yytext);
    column += yyleng;
}

{KEYWORD} {
    printf("Keyword: %s\n", yytext);
    column += yyleng;
}

{OUT} {
    printf("Write: %s\n", yytext);
    column += yyleng;
}

{IN} {
    printf("Read: %s\n", yytext);
    column += yyleng;
}

{TYPE} {
    printf("Type: %s\n", yytext);
    column += yyleng;
}

{ID} {
    printf("Identifier: %s\n", yytext);
    column += yyleng;
}

{ARITHMETIC_OP} {
    printf("Arithmetic Operator: %s\n", yytext);
    column += yyleng;
}

{LOGICAL_OP} {
    printf("Logical Operator: %s\n", yytext);
    column += yyleng;
}

{RELATIONAL_OP} {
    printf("Relational Operator: %s\n", yytext);
    column += yyleng;
}

{ASSIGN_OP} {
    printf("Assignment Operator: %s\n", yytext);
    column += yyleng;
}

{INLINE_COMMENT} {
    printf("Inline comment block: %s\n", yytext);
}

"["|"]" {
    printf("Open/Close bracket: %s\n", yytext);
    column += yyleng;
}

"{"|"}" {
    printf("Open/Close curly bracket: %s\n", yytext);
    column += yyleng;
}

"("|")" {
    printf("Open/Close parenthesis: %s\n", yytext);
    column += yyleng;
}

"\""|"\'" {
    printf("String/Char delimiter: %s\n", yytext);
    column += yyleng;
}

";" {
    printf("Semi-colon: %s\n", yytext);
    column += yyleng;
}

"," {
    printf("Comma: %s\n", yytext);
    column += yyleng;
}

. {
    errors++;
    printf(BRED "ERROR\t--> " reset);
    printf("line %d | column %d\tcharacter not expected: %s\n", line, column, yytext);
}

%%

int main(int argc, char **argv){
    if(argc > 1){
        if(yyin = fopen(argv[1], "r")){
            yylex();
            printf("\nLexical analysis completed with %d error(s)\n", errors);
        }
        else{
            printf("Input File Path does not exist.\n");
        }
    }
    else{
        printf("No Input Files.\n");
    }
    
    return 0;
}
