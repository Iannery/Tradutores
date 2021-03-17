%debug
%define parse.error verbose
%define lr.type canonical-lr
%{
    #include "global_vars.h"
    #include "global_methods.h"
    #include "symbol_table.h"
    // symbol symbolTable[1000];
%}
%union{
    struct Token {
        int t_line;
        int t_column;
        char* t_title;
    } token;
}

%token <token> INT FLOAT EMPTY
%token <token> IF_KW ELSE_KW FOR_KW FORALL_KW RETURN_KW
%token <token> IN_KW ISSET_KW ADD_KW REMOVE_KW EXISTS_KW
%token <token> OUT IN
%token <token> TYPE ID
%left  <token> SUM_OP MUL_OP
%left  <token> BIN_LOG_OP
%right <token> UN_LOG_OP
%token <token> REL_OP ASS_OP
%token <token> COMMENT STRING CHAR
%token <token> '{' '}' '(' ')' ';' ','

%%
program: 
    declarationList {}
    | errors {}
;

declarationList:
    declarationList declaration {}
    | declaration {}
    | errors {}
;

declaration:
    varDeclaration {}
    | funcDeclaration {}
    | comment {}
    | errors {}
;

comment:
    COMMENT {}
    | errors {}
;

varDeclaration:
    simpleDeclaration ';' {}
    | errors {}
;

funcDeclaration:
    simpleDeclaration '(' params ')' compoundStmt {}
    | simpleDeclaration '(' ')' compoundStmt {}
    | errors {}
;

params:
    params ',' param {}
    | param {}
    | errors {}
;

param:
    simpleDeclaration {}
    | errors {}
;

simpleDeclaration:
    TYPE ID {}
    | errors {}
;

compoundStmt:
    '{' localDeclarations stmtList '}' {}
    | '{' stmtList '}' {}
    | errors {}
;

localDeclarations:
    localDeclarations varDeclaration {}
    | varDeclaration {}
    | errors {}
;

stmtList:
    stmtList primitiveStmt {}
    | {}
    | errors {}
;

primitiveStmt:
    exprStmt {}
    | compoundStmt {}
    | condStmt {}
    | iterStmt {}
    | returnStmt {}
    | setStmt {}
    | errors {}
;

exprStmt:
    expression ';' {}
    | errors {}
;

condStmt:
    IF_KW '(' simpleExp ')' compoundStmt {}
    | IF_KW '(' simpleExp ')' compoundStmt ELSE_KW compoundStmt {}
    | errors {}
;

iterStmt:
    FOR_KW '(' assignExp ';' simpleExp ';' assignExp ')' compoundStmt {}
    | errors {}
;

returnStmt:
    RETURN_KW expression ';' {}
    | errors {}
;

setStmt:
    pertOP {}
    | typeOP ';' {}
    | addOP ';' {}
    | remOP ';' {}
    | selectOP ';' {}
    | forallOP {}
    | errors {}
;

pertOP:
    simpleExp IN_KW ID {}
    | errors {}
;

typeOP:
    ISSET_KW '(' ID ')' {}
    | errors {}
;

addOP:
    ADD_KW '(' pertOP ')' {}
    | errors {}
;

remOP:
    REMOVE_KW '(' pertOP ')' {}
    | errors {}
;

selectOP:
    EXISTS_KW '(' pertOP ')' {}
    | EXISTS_KW '(' ID ',' ID ')' {}
    | errors {}
;

forallOP:
    FORALL_KW '(' pertOP ')' compoundStmt {}
    | errors {}
;

expression:
    assignExp {}
    | simpleExp {}
    | inOP {}
    | outOP {}
    | errors {}
;

assignExp:
    ID ASS_OP expression {}
    | errors {}
;

simpleExp:
    binLogicalExp {}
    | errors {}
;

constOP:
    INT {}
    | FLOAT {}
    | EMPTY {}
    | errors {}
;

inOP:
    IN '(' ID ')' {}
    | errors {}
;

outOP:
    OUT '(' outConst ')' {}
    | errors {}
;

outConst:
    STRING {}
    | CHAR {}
    | simpleExp {}
    | errors {}
;

binLogicalExp:
    binLogicalExp BIN_LOG_OP unLogicalExp {}
    | unLogicalExp {}
    | errors {}
;

unLogicalExp:
    UN_LOG_OP unLogicalExp {}
    | relationalExp {}
    | errors {}
;

relationalExp:
    relationalExp REL_OP sumExp {}
    | sumExp {}
    | errors {}
;

sumExp:
    sumExp SUM_OP mulExp {}
    | mulExp {}
    | errors {}
;

mulExp:
    mulExp MUL_OP factor {}
    | factor {}
    | errors {}
;

factor:
    ID {}
    | functionCall {}
    | '(' simpleExp ')' {}
    | constOP {}
    | errors {}
;

functionCall:
    ID '(' callParams ')' {}
    | errors {}
;

callParams: 
    callParams ',' ID {}
    | ID {}
    | callParams ',' functionCall {}
    | functionCall {}
    | errors {}

errors:
   error {yyerror(yymsg);}
;

%%



int main(int argc, char **argv){
    FILE *fp = fopen(argv[1], "r");
    //fillTable(symbolTable);
    if(argc > 1){
        if(fp){
            yyin = fp;
            // yylex();
            yyparse();
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
