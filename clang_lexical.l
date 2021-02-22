%option noinput nounput
%option noyywrap
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

KEYWORD if|else|for|forall|return|in|add|remove|exists

ARITHMETIC_OP   [+*/-]

LOGICAL_OP      [&]{2}|[|]{2}|[!]

RELATIONAL_OP   [=]{2}|(!=)|(>=)|(<=)|[>]|[<]

ASSIGN_OP       [=]{1}

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
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Int number:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

{DIGIT}+"."{DIGIT}+ {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Float number:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

{EMPTY} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Empty const:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

{KEYWORD} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Keyword:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

{OUT} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Write:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

{IN} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Read:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

{TYPE} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Type:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

{ID} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Identifier:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

{ARITHMETIC_OP} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Arithmetic Operator:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

{LOGICAL_OP} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Logical Operator:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

{RELATIONAL_OP} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Relational Operator:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

{ASSIGN_OP} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Assignment Operator:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

{INLINE_COMMENT} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Inline comment block:"BMAG" %s\n"reset, yytext);
}

"["|"]" {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Bracket:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

"{"|"}" {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Curly braces:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

"("|")" {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Parenthesis:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

"\""|"\'" {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("String/Char delimiter:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

";" {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Semi-colon:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

"," {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Comma:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

. {
    errors++;
    printf(BRED"| line: %d\t| column: %d\t| ", line, column);
    printf("ERROR\t--> "reset);
    printf("Character not expected:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

%%

int main(int argc, char **argv){
    FILE *fp = fopen(argv[1], "r");
    if(argc > 1){
        if(fp){
            yyin = fp;
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
    fclose(yyin);
    yylex_destroy();
    return 0;
}
