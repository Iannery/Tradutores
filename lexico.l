%{
    #include<stdio.h>
    #include<stdlib.h>
    #define BRED "\e[1;31m"
    #define BMAG "\e[1;35m"
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
    printf("Int number:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

{DIGIT}+"."{DIGIT}+ {
    printf("Float number:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

{EMPTY} {
    printf("Empty const:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

{KEYWORD} {
    printf("Keyword:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

{OUT} {
    printf("Write:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

{IN} {
    printf("Read:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

{TYPE} {
    printf("Type:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

{ID} {
    printf("Identifier:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

{ARITHMETIC_OP} {
    printf("Arithmetic Operator:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

{LOGICAL_OP} {
    printf("Logical Operator:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

{RELATIONAL_OP} {
    printf("Relational Operator:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

{ASSIGN_OP} {
    printf("Assignment Operator:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

{INLINE_COMMENT} {
    printf("Inline comment block:"BMAG" %s\n"reset, yytext);
}

"["|"]" {
    printf("Bracket:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

"{"|"}" {
    printf("Curly bracket:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

"("|")" {
    printf("Parenthesis:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

"\""|"\'" {
    printf("String/Char delimiter:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

";" {
    printf("Semi-colon:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

"," {
    printf("Comma:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

. {
    errors++;
    printf(BRED"ERROR\t--> "reset);
    printf("line %d | column %d\tcharacter not expected:"BMAG" %s\n"reset, line, column, yytext);
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
