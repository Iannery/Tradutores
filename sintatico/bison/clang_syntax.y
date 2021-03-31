%debug
%define parse.error verbose
%define lr.type canonical-lr
%{
    #include "symbol_table.h"
    #include "stack.h"
    #include "tree.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    extern int yylex();
    extern int yylex_destroy();
    extern void yyerror(const char* a);
    extern int line;
    extern int column;
    extern int errors;
    extern FILE *yyin;
%}
%union{
    struct Token {
        int     t_line;
        int     t_column;
        char    t_title[101];
        int     t_context;
    } token;
    struct Node* node;
}

%token <token> INT FLOAT EMPTY
%token <token> IF_KW ELSE_KW FOR_KW FORALL_KW RETURN_KW
%token <token> IN_KW ISSET_KW ADD_KW REMOVE_KW EXISTS_KW
%token <token> OUT IN
%token <token> TYPE ID
%left  <token> SUM_OP MUL_OP
%left  <token> BIN_LOG_OP
%right <token> UN_LOG_OP
%right THEN ELSE_KW
%token <token> REL_OP ASS_OP
%token <token> STRING CHAR
%token <token> '{' '}' '(' ')' ';' ','

%type <node> program
%type <node> declarationList
%type <node> declaration
%type <node> varDeclaration
%type <node> funcDeclaration
%type <node> params
%type <node> param
%type <node> simpleVDeclaration
%type <node> simpleFDeclaration
%type <node> compoundStmt
%type <node> stmtList
%type <node> primitiveStmt
%type <node> exprStmt
%type <node> condStmt
%type <node> iterStmt
%type <node> returnStmt
%type <node> setStmt
%type <node> pertOP
%type <node> setReturner
%type <node> typeOP
%type <node> addOP
%type <node> remOP
%type <node> selectOP
%type <node> forallOP
%type <node> expression
%type <node> assignExp
%type <node> simpleExp
%type <node> constOP
%type <node> inOP
%type <node> outOP
%type <node> outConst
%type <node> binLogicalExp
%type <node> unLogicalExp
%type <node> relationalExp
%type <node> sumExp
%type <node> mulExp
%type <node> factor
%type <node> functionCall
%type <node> callParams



%%
program: 
    declarationList {
        tree = $$;
    }
;

declarationList:
    declarationList declaration {
        $$ = createNode("declaration list");
        $$->node1 = $1;
        $$->node2 = $2;
    }
    | declaration {
        $$ = $1;
    }
;

declaration:
    varDeclaration {
        $$ = $1;
    }
    | funcDeclaration {
        $$ = $1;
    }
;

varDeclaration:
    simpleVDeclaration ';' {
        $$ = $1;
    }
;

funcDeclaration:
    simpleFDeclaration '(' params ')' compoundStmt {
        $$ = createNode("function declaration");
        $$->node1 = $1;
        $$->node2 = $3;
        $$->node3 = $5;
    }
    | simpleFDeclaration '(' ')' compoundStmt {
        $$ = createNode("function declaration");
        $$->node1 = $1;
        $$->node2 = $4;
    }
;

params:
    params ',' param {
        $$ = createNode("parameters");
        $$->node1 = $1;
        $$->node2 = $3;
    }
    | param {
        $$ = $1;
    }
;

param:
    simpleVDeclaration {
        $$ = $1;
    }
;

simpleVDeclaration:
    TYPE ID {
        $$ = createNode("variable ID");
        $$->s_token = createSymbol($2.t_title, $2.t_line, $2.t_column);
        insertSymbol(symbolTable, 
                    $2.t_title, 
                    $1.t_title, 
                    0,
                    $2.t_line, 
                    $2.t_column,
                    $2.t_context);
    }
;

simpleFDeclaration:
    TYPE ID {
        $$ = createNode("function ID");
        $$->s_token = createSymbol($2.t_title, $2.t_line, $2.t_column);
        insertSymbol(symbolTable, 
                    $2.t_title, 
                    $1.t_title, 
                    1, 
                    $2.t_line, 
                    $2.t_column,
                    $2.t_context);
    }
;
compoundStmt:
    '{' stmtList '}' {
        $$ = $2;
    }
;

stmtList:
    stmtList primitiveStmt {
        $$ = createNode("statement list");
        $$->node1 = $1;
        $$->node2 = $2;
    }
    | stmtList error {
        // printf("DEU PAU\n");
    }
    | primitiveStmt {
        $$ = $1;
    }
;

primitiveStmt:
    exprStmt {
        $$ = $1;
    }
    | compoundStmt {
        $$ = $1;
    }
    | condStmt {
        $$ = $1;
    }
    | iterStmt {
        $$ = $1;
    }
    | returnStmt {
        $$ = $1;
    }
    | setStmt {
        $$ = $1;
    }
    | inOP {
        $$ = $1;
    }
    | outOP {
        $$ = $1;
    }
    | varDeclaration {
        $$ = $1;
    }
;

exprStmt:
    expression ';' {
        $$ = $1;
    }
;

condStmt:
    IF_KW '(' simpleExp ')' primitiveStmt %prec THEN {
        $$ = createNode("if statement");
        $$->node1 = $3;
        $$->node2 = $5;
    }
    | IF_KW '(' simpleExp ')' primitiveStmt ELSE_KW primitiveStmt {
        $$ = createNode("if else statement");
        $$->node1 = $3;
        $$->node2 = $5;
        $$->node3 = $7;
    }
;

iterStmt:
    FOR_KW '(' assignExp ';' simpleExp ';' assignExp ')' primitiveStmt {
        $$ = createNode("for statement");
        $$->node1 = $3;
        $$->node2 = $5;
        $$->node3 = $7;
        $$->node4 = $9;
    }
;

returnStmt:
    RETURN_KW expression ';' {
        $$ = createNode("return statement");
        $$->node1 = $2;
    }
;

setStmt:
    forallOP {
        $$ = $1;
    }
;

pertOP:
    simpleExp IN_KW ID{
        $$ = createNode("in operator");
        $$ = $1;
    }
    | simpleExp IN_KW setReturner {
        $$ = createNode("in operator");
        $$->node1 = $1;
        $$->node2 = $3;
    }
;

setReturner:
    addOP {
        $$ = $1;
    }
    | remOP {
        $$ = $1;
    }
;

typeOP:
    ISSET_KW '(' ID ')' {
        $$ = createNode("is_set operator");
        $$->s_token = createSymbol($3.t_title, $3.t_line, $3.t_column);
    }
;

addOP:
    ADD_KW '(' pertOP ')' {
        $$ = createNode("add operator");
        $$->node1 = $3;
    }
;

remOP:
    REMOVE_KW '(' pertOP ')' {
        $$ = createNode("remove operator");
        $$->node1 = $3;
    }
;

selectOP:
    EXISTS_KW '(' pertOP ')' {
        $$ = createNode("exists operator");
        $$->node1 = $3;
    }
;

forallOP:
    FORALL_KW '(' pertOP ')' primitiveStmt {
        $$ = createNode("forall statement");
        $$->node1 = $3;
        $$->node2 = $5;
    }
;

expression:
    assignExp {
        $$ = $1;
    }
    | simpleExp {
        $$ = $1;
    }
    | setReturner {
        $$ = $1;
    }
;

assignExp:
    ID ASS_OP expression {
        $$ = createNode("assignment opertator");
        $$->s_token = createSymbol($1.t_title, $1.t_line, $1.t_column);
        $$->node1 = $3;
    }
;

simpleExp:
    binLogicalExp {
        $$ = $1;
    }
    | pertOP {
        $$ = $1;
    }
    | selectOP {
        $$ = $1;
    }
    | typeOP {
        $$ = $1;
    }
;

constOP:
    INT {
        $$ = createNode("CONST INT");
        $$->s_token = createSymbol($1.t_title, $1.t_line, $1.t_column);
    }
    | FLOAT {
        $$ = createNode("CONST FLOAT");
        $$->s_token = createSymbol($1.t_title, $1.t_line, $1.t_column);
    }
    | EMPTY {
        $$ = createNode("CONST EMPTY");
        $$->s_token = createSymbol($1.t_title, $1.t_line, $1.t_column);
    }
;

inOP:
    IN '(' ID ')' ';' {
        $$ = createNode("read");
        $$->s_token = createSymbol($3.t_title, $3.t_line, $3.t_column);
    }
;

outOP:
    OUT '(' outConst ')' ';' {
        $$ = createNode("write/writeln");
        $$->s_token = createSymbol($1.t_title, $1.t_line, $1.t_column);
        $$->node1 = $3;
    }
;

outConst:
    STRING {
        $$ = createNode("CONST STRING");
        $$->s_token = createSymbol($1.t_title, $1.t_line, $1.t_column);
    }
    | CHAR {
        $$ = createNode("CONST CHAR");
        $$->s_token = createSymbol($1.t_title, $1.t_line, $1.t_column);
    }
    | simpleExp {
        $$ = $1;
    }
;

binLogicalExp:
    binLogicalExp BIN_LOG_OP unLogicalExp {
        $$ = createNode("binary expression");
        $$->s_token = createSymbol($2.t_title, $2.t_line, $2.t_column);
        $$->node1 = $1;
        $$->node2 = $3;
    }
    | unLogicalExp {
        $$ = $1;
    }
;

unLogicalExp:
    UN_LOG_OP unLogicalExp {
        $$ = createNode("unary expression");
        $$->s_token = createSymbol($1.t_title, $1.t_line, $1.t_column);
        $$->node1 = $2;
    }
    | relationalExp {
        $$ = $1;
    }
;

relationalExp:
    relationalExp REL_OP sumExp {
        $$ = createNode("relational expression");
        $$->s_token = createSymbol($2.t_title, $2.t_line, $2.t_column);
        $$->node1 = $1;
        $$->node2 = $3;
    }
    | sumExp {
        $$ = $1;
    }
;

sumExp:
    sumExp SUM_OP mulExp {
        $$ = createNode("+/- operation");
        $$->s_token = createSymbol($2.t_title, $2.t_line, $2.t_column);
        $$->node1 = $1;
        $$->node2 = $3;
    }
    | mulExp {
        $$ = $1;
    }
;

mulExp:
    mulExp MUL_OP factor {
        $$ = createNode("*/÷ operation");
        $$->s_token = createSymbol($2.t_title, $2.t_line, $2.t_column);
        $$->node1 = $1;
        $$->node2 = $3;
    }
    | factor {
        $$ = $1;
    }
    | SUM_OP factor {
        $$ = createNode("signed factor");
        $$->s_token = createSymbol($1.t_title, $1.t_line, $1.t_column);
        $$->node1 = $2;
    }
;

factor:
    ID {
        $$ = createNode("ID");
        $$->s_token = createSymbol($1.t_title, $1.t_line, $1.t_column);
    }
    | functionCall {
        $$ = $1;
    }
    | '(' simpleExp ')' {
        $$ = $2;
    }
    | constOP {
        $$ = $1;
    }
;

functionCall:
    ID '(' callParams ')' {
        $$ = createNode("function call");
        $$->s_token = createSymbol($1.t_title, $1.t_line, $1.t_column);
        $$->node1 = $3;
    }
    | ID '(' ')' {
        $$ = createNode("function call");
        $$->s_token = createSymbol($1.t_title, $1.t_line, $1.t_column);
    }
;

callParams: 
    callParams ',' simpleExp{
        $$ = createNode("call parameters");
        $$->node1 = $1;
        $$->node2 = $3;
    }
    | simpleExp {
        $$ = $1;
    }
;

%%
extern void yyerror(const char* a) {
    printf(BRED"[%d:%d] ", line, column);
    printf("SYNTAX ERROR - ");
    printf("%s\n"reset, a);
    errors++;
}


int main(int argc, char **argv){
    FILE *fp = fopen(argv[1], "r");
    initTable(symbolTable);
    initStack(&scope);
    pushStack(&scope, 0);
    if(argc > 1){
        if(fp){
            yyin = fp;
            yyparse();
            printf("\nAnalysis completed with %d error(s)\n", errors);

        }
        else{
            printf("Input File Path does not exist.\n");
        }
    }
    else{
        printf("No Input Files.\n");
    }
    fclose(yyin);
    if(!errors){
        printf("Correct program.\n");
        printTree(tree, 0);
    }
    else{
        printf(BRED"The Abstract Syntax Tree will not be shown if there are errors.\n");
        printf(reset);
    }
    printTable(symbolTable);
    freeTree(tree);
    yylex_destroy();
    return 0;
}
