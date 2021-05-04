%option noinput nounput
%option noyywrap
%{
    // I'm afraid to comment inside this file, but it will be done eventually.
    // Hopefully without breaking everything and making me regret all the
    // life choices I made in the last 23 years for about 3 hours.
    #include    "clang_syntax.tab.h"
    #include    "stack.h"
    #include    "tree.h"
    #include    "symbol_table.h"
    #include    <stdio.h>
    #include    <stdlib.h>
    #include    <string.h>
    #define     BRED "\e[1;31m"
    #define     BMAG "\e[1;35m"
    #define     reset "\e[0m"
    // The external variables along with the other files are working,
    // but as to what is external and what is not, it was purely done
    // by trial and error. The important part is that it works.  
    // I should refactor it eventually, I know. But again, it works.
    int     line    = 1;
    int     column  = 1;
    int     errors  = 0;
    int     context = 0;
    extern Stack scope;
    extern Symbol symbolTable[1000];
%}



DIGIT   [0-9]

ID      [a-zA-Z_][_a-z0-9A-Z]*

EMPTY   EMPTY

KEYWORD if|else|for|forall|return|in|is_set|add|remove|exists

SUM_OP  [+-]{1}

MUL_OP  [*/]{1}

BIN_LOGICAL_OP  [&]{2}|[|]{2}

UN_LOGICAL_OP   [!]{1}

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
    // 
    column += yyleng;
}


\n {
    line++;
    column = 1;
}

{DIGIT}+ {
    yylval.token.t_line = line;
    yylval.token.t_column = column;
    strcpy(yylval.token.t_title, yytext);
    column += yyleng;
    return INT;
}

{DIGIT}+"."{DIGIT}+ {
    yylval.token.t_line = line;
    yylval.token.t_column = column;
    strcpy(yylval.token.t_title, yytext);
    column += yyleng;
    return FLOAT;
}

{EMPTY} {
    yylval.token.t_line = line;
    yylval.token.t_column = column;
    strcpy(yylval.token.t_title, yytext);
    column += yyleng;
    return EMPTY;
}

{KEYWORD} {
    yylval.token.t_line = line;
    yylval.token.t_column = column;
    strcpy(yylval.token.t_title, yytext);
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
    yylval.token.t_line = line;
    yylval.token.t_column = column;
    strcpy(yylval.token.t_title, yytext);
    column += yyleng;
    return OUT;
}

{IN} {
    yylval.token.t_line = line;
    yylval.token.t_column = column;
    strcpy(yylval.token.t_title, yytext);
    column += yyleng;
    return IN;
}

{TYPE} {
    yylval.token.t_line = line;
    yylval.token.t_column = column;
    strcpy(yylval.token.t_title, yytext);
    column += yyleng;
    return TYPE;
}

{ID} {
    yylval.token.t_context = seeTop(&scope);
    yylval.token.t_line = line;
    yylval.token.t_column = column;
    strcpy(yylval.token.t_title, yytext);
    column += yyleng;
    return ID;
}

{SUM_OP} {
    yylval.token.t_line = line;
    yylval.token.t_column = column;
    strcpy(yylval.token.t_title, yytext);
    column += yyleng;
    return SUM_OP;
}

{MUL_OP} {
    yylval.token.t_line = line;
    yylval.token.t_column = column;
    strcpy(yylval.token.t_title, yytext);
    column += yyleng;
    return MUL_OP;
}

{BIN_LOGICAL_OP} {
    yylval.token.t_line = line;
    yylval.token.t_column = column;
    strcpy(yylval.token.t_title, yytext);
    column += yyleng;
    return BIN_LOG_OP;
}

{UN_LOGICAL_OP} {
    yylval.token.t_line = line;
    yylval.token.t_column = column;
    strcpy(yylval.token.t_title, yytext);
    column += yyleng;
    return UN_LOG_OP;
}

{RELATIONAL_OP} {
    yylval.token.t_line = line;
    yylval.token.t_column = column;
    strcpy(yylval.token.t_title, yytext);
    column += yyleng;
    return REL_OP;
}

{ASSIGN_OP} {
    yylval.token.t_line = line;
    yylval.token.t_column = column;
    strcpy(yylval.token.t_title, yytext);
    column += yyleng;
    return ASS_OP;
}

{INLINE_COMMENT} {
//FAZ NADA
}

{STRING} {
    yylval.token.t_line = line;
    yylval.token.t_column = column;
    strcpy(yylval.token.t_title, yytext);
    column += yyleng;
    return STRING;
}

{CHAR} {
    yylval.token.t_line = line;
    yylval.token.t_column = column;
    strcpy(yylval.token.t_title, yytext);
    column += yyleng;
    return CHAR;
}


"{" {
    yylval.token.t_line = line;
    yylval.token.t_column = column;
    strcpy(yylval.token.t_title, yytext);
    context++;
    pushStack(&scope, context);
    column += yyleng;
    return '{';
}

"}" {
    yylval.token.t_line = line;
    yylval.token.t_column = column;
    strcpy(yylval.token.t_title, yytext);
    popStack(&scope);
    column += yyleng;
    return '}';
}


"(" {
    yylval.token.t_line = line;
    yylval.token.t_column = column;
    strcpy(yylval.token.t_title, yytext);
    column += yyleng;
    return '(';
}

")" {
    yylval.token.t_line = line;
    yylval.token.t_column = column;
    strcpy(yylval.token.t_title, yytext);
    column += yyleng;
    return ')';
}

";" {
    yylval.token.t_line = line;
    yylval.token.t_column = column;
    strcpy(yylval.token.t_title, yytext);
    column += yyleng;
    return ';';
}

"," {
    yylval.token.t_line = line;
    yylval.token.t_column = column;
    strcpy(yylval.token.t_title, yytext);
    column += yyleng;
    return ',';
}
. {
    errors++;
    printf(BRED"[%03d:%03d] ", line, column);
    printf("LEXICAL  ERROR --> ");
    printf("Character not expected:"BMAG" %s\n"reset, yytext);
    column += yyleng;
}

%%
