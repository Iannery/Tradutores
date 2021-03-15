%option noinput nounput
%option noyywrap
%{
    #include "global_vars.h"
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #define BRED "\e[1;31m"
    #define BMAG "\e[1;35m"
    #define reset "\e[0m"
%}



DIGIT   [0-9]

ID      [a-zA-Z_][a-z0-9A-Z]*

EMPTY   EMPTY

KEYWORD if|else|for|forall|return|in|is_set|add|remove|exists

SUM_OP  [+-]{1}

MUL_OP  [*/]{1}

BIN_LOGICAL_OP      [&]{2}|[|]{2}

UN_LOGICAL_OP       [!]{1}

RELATIONAL_OP   [=]{2}|(!=)|(>=)|(<=)|[>]|[<]

ASSIGN_OP       [=]{1}

INLINE_COMMENT  [/]{2}.*

STRING  \"(\\.|[^"\\])*\"

CHAR    \'(\\.|[^"\\])?\'

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

"main()" {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Main function:"BMAG" %s\n"reset, yytext);
    column += yyleng;
    return MAIN;
}

"-"?{DIGIT}+ {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Int number:"BMAG" %s\n"reset, yytext);
    column += yyleng;
    return INT;
}

"-"?{DIGIT}+"."{DIGIT}+ {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Float number:"BMAG" %s\n"reset, yytext);
    column += yyleng;
    return FLOAT;
}

{EMPTY} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Empty const:"BMAG" %s\n"reset, yytext);
    column += yyleng;
    return EMPTY;
}

{KEYWORD} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Keyword:"BMAG" %s\n"reset, yytext);
    column += yyleng;
    if(!strcmp(yytext, "if")){
        return IF_KW;
    }
    else if(!strcmp(yytext, "else")){
        return ELSE_KW;
    }
    else if(!strcmp(yytext, "for")){
        return FOR_KW;
    }
    else if(!strcmp(yytext, "forall")){
        return FORALL_KW;
    }
    else if(!strcmp(yytext, "return")){
        return RETURN_KW;
    }
    else if(!strcmp(yytext, "in")){
        return IN_KW;
    }
    else if(!strcmp(yytext, "is_set")){
        return ISSET_KW;
    }
    else if(!strcmp(yytext, "add")){
        return ADD_KW;
    }
    else if(!strcmp(yytext, "remove")){
        return REMOVE_KW;
    }
    else if(!strcmp(yytext, "exists")){
        return EXISTS_KW;
    }
}


{OUT} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Write:"BMAG" %s\n"reset, yytext);
    column += yyleng;
    return OUT;
}

{IN} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Read:"BMAG" %s\n"reset, yytext);
    column += yyleng;
    return IN;
}

{TYPE} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Type:"BMAG" %s\n"reset, yytext);
    column += yyleng;
    return TYPE;
}

{ID} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Identifier:"BMAG" %s\n"reset, yytext);
    column += yyleng;
    return ID;
}

{SUM_OP} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Sum Operator:"BMAG" %s\n"reset, yytext);
    column += yyleng;
    return SUM_OP;
}

{MUL_OP} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Multiply Operator:"BMAG" %s\n"reset, yytext);
    column += yyleng;
    return MUL_OP;
}

{BIN_LOGICAL_OP} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Binary Logical Operator:"BMAG" %s\n"reset, yytext);
    column += yyleng;
    return BIN_LOG_OP;
}

{UN_LOGICAL_OP} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Unary Logical Operator:"BMAG" %s\n"reset, yytext);
    column += yyleng;
    return UN_LOG_OP;
}

{RELATIONAL_OP} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Relational Operator:"BMAG" %s\n"reset, yytext);
    column += yyleng;
    return REL_OP;
}

{ASSIGN_OP} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Assignment Operator:"BMAG" %s\n"reset, yytext);
    column += yyleng;
    return ASS_OP;
}

{INLINE_COMMENT} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Inline comment block:"BMAG" %s\n"reset, yytext);
    return COMMENT;
}

{STRING} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("String expression:"BMAG" %s\n"reset, yytext);
    column += yyleng;
    return STRING;
}

{CHAR} {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Char expression:"BMAG" %s\n"reset, yytext);
    column += yyleng;
    return CHAR;
}


"{" {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Opened curly braces:"BMAG" %s\n"reset, yytext);
    column += yyleng;
    return '{';
}

"}" {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Closed curly braces:"BMAG" %s\n"reset, yytext);
    column += yyleng;
    return '}';
}


"(" {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Opened parenthesis:"BMAG" %s\n"reset, yytext);
    column += yyleng;
    return '(';
}

")" {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Closed parenthesis:"BMAG" %s\n"reset, yytext);
    column += yyleng;
    return ')';
}

";" {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Semi-colon:"BMAG" %s\n"reset, yytext);
    column += yyleng;
    return ';';
}

"," {
    printf("| line: %d\t| column: %d\t| ", line, column);
    printf("Comma:"BMAG" %s\n"reset, yytext);
    column += yyleng;
    return ',';
}

. {
    errors++;
    printf(BRED"| line: %d\t| column: %d\t| ", line, column);
    printf("ERROR\t--> "reset);
    printf("Character not expected:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

%%