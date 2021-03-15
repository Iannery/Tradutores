%define parse.error verbose
%debug
%locations
%define lr.type canonical-lr
%{
    #include "global_vars.h"
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>

    extern int yylex();
    extern FILE *yyin;
    extern int yylex_destroy();
    void yyerror(const char* msg) {
        fprintf(stderr, "%s\n", msg);
    }

%}

%token MAIN
%token INT
%token FLOAT
%token EMPTY
%token IF_KW
%token ELSE_KW
%token FOR_KW
%token FORALL_KW
%token RETURN_KW
%token IN_KW
%token ISSET_KW
%token ADD_KW
%token REMOVE_KW
%token EXISTS_KW
%token OUT
%token IN
%token TYPE
%token ID
%token SUM_OP
%token MUL_OP
%token BIN_LOG_OP
%token UN_LOG_OP
%token REL_OP
%token ASS_OP
%token COMMENT
%token STRING
%token CHAR
%token '{'
%token '}'
%token '('
%token ')'
%token ';'
%token ','

%%
program: 
    declarationList MAIN compoundStmt {printf("%d %d %d", $1, $2, $3);}
;

declarationList:
    declarationList declaration {printf("%d %d", $1, $2);}
    | declaration {printf("%d", $1);}
;

declaration:
    varDeclaration {printf("%d", $1);}
    | funcDeclaration {printf("%d", $1);}
    | comment {printf("%d", $1);}
;

comment:
    COMMENT {printf("%d", $1);}
;

varDeclaration:
    simpleDeclaration ';' {printf("%d %d", $1, $2);}
;

funcDeclaration:
    simpleDeclaration '(' params ')' compoundStmt {printf("%d %d %d %d %d", $1, $2, $3, $4, $5);}
;

params:
    params ',' param {printf("%d %d %d", $1, $2, $3);}
    | param {printf("%d", $1);}
    | {}
;

param:
    simpleDeclaration {printf("%d", $1);}
;

simpleDeclaration:
    TYPE ID {printf("%d %d", $1, $2);}
;

compoundStmt:
    '{' localDeclarations stmtList '}' {printf("%d %d %d %d", $1, $2, $3, $4);}
    | '{' stmtList '}' {printf("%d %d %d", $1, $2, $3);}
;

localDeclarations:
    localDeclarations varDeclaration {printf("%d %d", $1, $2);}
    | varDeclaration {printf("%d", $1);}
;

stmtList:
    stmtList primitiveStmt {printf("%d %d", $1, $2);}
    | {}
;

primitiveStmt:
    exprStmt {printf("%d", $1);}
    | compoundStmt {printf("%d", $1);}
    | condStmt {printf("%d", $1);}
    | iterStmt {printf("%d", $1);}
    | returnStmt {printf("%d", $1);}
    | setStmt {printf("%d", $1);}
;

exprStmt:
    expression ';' {printf("%d %d", $1, $2);}
;

condStmt:
    IF_KW '(' simpleExp ')' compoundStmt {printf("%d %d %d", $1, $3, $5);}
    | IF_KW '(' simpleExp ')' compoundStmt ELSE_KW compoundStmt {printf("%d %d %d %d %d", $1, $3, $5, $6, $7);}
;

iterStmt:
    FOR_KW '(' assignExp ';' simpleExp ';' assignExp ')' compoundStmt {printf("%d %d %d %d %d", $1, $3, $5, $7, $9);}
;

returnStmt:
    RETURN_KW expression ';' {printf("%d %d %d", $1, $2, $3);}
;

setStmt:
    pertOP {printf("%d", $1);}
    | typeOP ';' {printf("%d %d", $1, $2);}
    | addOP ';' {printf("%d %d", $1, $2);}
    | remOP ';' {printf("%d %d", $1, $2);}
    | selectOP ';' {printf("%d %d", $1, $2);}
    | forallOP {printf("%d", $1);}
;

pertOP:
    expression IN_KW ID {printf("%d %d %d", $1, $2, $3);}
;

typeOP:
    ISSET_KW '(' ID ')' {printf("%d %d %d %d", $1, $2, $3, $4);}
;

addOP:
    ADD_KW '(' pertOP ')' {printf("%d %d %d %d", $1, $2, $3, $4);}
;

remOP:
    REMOVE_KW '(' pertOP ')' {printf("%d %d %d %d", $1, $2, $3, $4);}
;

selectOP:
    EXISTS_KW '(' pertOP ')' {printf("%d %d %d %d", $1, $2, $3, $4);}
    | EXISTS_KW '(' ID ',' ID ')' {printf("%d %d %d %d %d %d", $1, $2, $3, $4, $5, $6);}
;

forallOP:
    FORALL_KW '(' pertOP ')' compoundStmt {printf("%d %d %d %d %d", $1, $2, $3, $4, $5);}
;

expression:
    assignExp {printf("%d", $1);}
    | simpleExp {printf("%d", $1);}
    | constOP {printf("%d", $1);}
    | inOP {printf("%d", $1);}
    | outOP {printf("%d", $1);}
;

assignExp:
    ID ASS_OP expression {printf("%d %d %d", $1, $2, $3);}
;

simpleExp:
    logicalExp {printf("%d", $1);}
    | relationalExp {printf("%d", $1);}
;

constOP:
    INT {printf("%d", $1);}
    | FLOAT {printf("%d", $1);}
    | EMPTY {printf("%d", $1);}
;

inOP:
    IN '(' ID ')' {printf("%d %d %d %d", $1, $2, $3, $4);}
;

outOP:
    OUT '(' outConst ')' {printf("%d %d %d %d", $1, $2, $3, $4);}
;

outConst:
    STRING {printf("%d", $1);}
    | CHAR {printf("%d", $1);}
;

logicalExp:
    simpleExp BIN_LOG_OP simpleExp {printf("%d %d %d", $1, $2, $3);}
    | UN_LOG_OP simpleExp {printf("%d %d", $1, $2);}
;

relationalExp:
    simpleExp REL_OP sumExp {printf("%d %d %d", $1, $2, $3);}
    | sumExp {printf("%d", $1);}
;

sumExp:
    sumExp SUM_OP mulExp {printf("%d %d %d", $1, $2, $3);}
    | mulExp {printf("%d", $1);}
;

mulExp:
    mulExp MUL_OP factor {printf("%d %d %d", $1, $2, $3);}
    | factor {printf("%d", $1);}
;

factor:
    ID {printf("%d", $1);}
    | functionCall {printf("%d", $1);}
    | '(' simpleExp ')' {printf("%d %d %d", $1, $2, $3);}
    | constOP {printf("%d", $1);}
;

functionCall:
    ID '(' params ')' {printf("%d %d %d", $1, $2, $3);}
;


%%

int main(int argc, char **argv){
    line = 1;
    column = 1;
    errors = 0;
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
