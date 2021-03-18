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
    extern int context;
    extern FILE *yyin;
%}
%union{
    struct Token {
        int     t_line;
        int     t_column;
        char    t_title[101];
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
%token <token> REL_OP ASS_OP
%token <token> COMMENT STRING CHAR
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
%type <node> localDeclarations
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
        $$ = createNode("program");
        $$->node1 = $1;
        tree = $$;
    }
;

declarationList:
    declarationList declaration {}
    | declaration {
        $$ = createNode("declarationList");
        $$->node1 = $1;
    }
;

declaration:
    varDeclaration {}
    | funcDeclaration {
        $$ = createNode("declaration");
        $$->node1 = $1;
    }
;

varDeclaration:
    simpleVDeclaration ';' {
        $$ = createNode("varDeclaration");
        $$->node1 = $1;
    }
;

funcDeclaration:
    simpleFDeclaration '(' params ')' compoundStmt {
        $$ = createNode("funcDeclaration");
        $$->node1 = $1;
        $$->node2 = $3;
        $$->node3 = $5;
    }
    | simpleFDeclaration '(' ')' compoundStmt {
        $$ = createNode("funcDeclaration");
        $$->node1 = $1;
        $$->node2 = $4;
    }
;

params:
    params ',' param {
        $$ = createNode("params");
        $$->node1 = $1;
        $$->node2 = $3;
    }
    | param {
        $$ = createNode("params");
        $$->node1 = $1;
    }
;

param:
    simpleVDeclaration {
        $$ = createNode("param");
        $$->node1 = $1;
    }
;

simpleVDeclaration:
    TYPE ID {
        $$ = createNode("simpleVDeclaration");
        $$->s_token = createSymbol($2.t_title, $2.t_line, $2.t_column);
        insertSymbol(symbolTable, 
                    $2.t_title, 
                    $1.t_title, 
                    "Function", 
                    $2.t_line, 
                    $2.t_column);
        
    }
;

simpleFDeclaration:
    TYPE ID {
        $$ = createNode("simpleFDeclaration");
        $$->s_token = createSymbol($2.t_title, $2.t_line, $2.t_column);
        insertSymbol(symbolTable, 
                    $2.t_title, 
                    $1.t_title, 
                    "Variable", 
                    $2.t_line, 
                    $2.t_column);
    }
;
compoundStmt:
    '{' localDeclarations stmtList '}' {
        $$ = createNode("CompoundStmt");
        $$->node1 = $2;
        $$->node2 = $3;
    }
    | '{' stmtList '}' {
        $$ = createNode("CompoundStmt");
        $$->node1 = $2;
    }
;

localDeclarations:
    localDeclarations varDeclaration {
        $$ = createNode("localDeclarations");
        $$->node1 = $1;
        $$->node2 = $2;
    }
    | localDeclarations error {
        $$ = createNode("localDeclarations");
        $$->node1 = $1;
    }
    | varDeclaration {
        $$ = createNode("localDeclarations");
        $$->node1 = $1;
    }
;

stmtList:
    stmtList primitiveStmt {
        $$ = createNode("stmtList");
        $$->node1 = $1;
        $$->node2 = $2;
    }
    | primitiveStmt {
        $$ = createNode("stmtList");
        $$->node1 = $1;
    }
;

primitiveStmt:
    exprStmt {
        $$ = createNode("PrimitiveStmt");
        $$->node1 = $1;
    }
    | compoundStmt {
        $$ = createNode("PrimitiveStmt");
        $$->node1 = $1;
    }
    | condStmt {
        $$ = createNode("PrimitiveStmt");
        $$->node1 = $1;
    }
    | iterStmt {
        $$ = createNode("PrimitiveStmt");
        $$->node1 = $1;
    }
    | returnStmt {
        $$ = createNode("PrimitiveStmt");
        $$->node1 = $1;
    }
    | setStmt {
        $$ = createNode("PrimitiveStmt");
        $$->node1 = $1;
    }
;

exprStmt:
    expression ';' {
        $$ = createNode("exprStmt");
        $$->node1 = $1;
    }
;

condStmt:
    IF_KW '(' simpleExp ')' compoundStmt {
        $$ = createNode("ifStmt");
        $$->node1 = $3;
        $$->node2 = $5;
    }
    | IF_KW '(' simpleExp ')' compoundStmt ELSE_KW compoundStmt {
        $$ = createNode("ifElseStmt");
        $$->node1 = $3;
        $$->node2 = $5;
        $$->node3 = $7;
    }
;

iterStmt:
    FOR_KW '(' assignExp ';' simpleExp ';' assignExp ')' compoundStmt {
        $$ = createNode("forStmt");
        $$->node1 = $3;
        $$->node2 = $5;
        $$->node3 = $7;
        $$->node4 = $9;
    }
;

returnStmt:
    RETURN_KW expression ';' {
        $$ = createNode("returnStmt");
        $$->node1 = $2;
    }
;

setStmt:
    typeOP ';' {
        $$ = createNode("setStmt");
        $$->node1 = $1;
    }
    | setReturner ';' {
        $$ = createNode("setStmt");
        $$->node1 = $1;
    }
    | forallOP {
        $$ = createNode("setStmt");
        $$->node1 = $1;
    }
;

pertOP:
    simpleExp IN_KW ID {
        $$ = createNode("inOP");
        $$->node1 = $1;
        $$->s_token = createSymbol($3.t_title, $3.t_line, $3.t_column);
    }
    | simpleExp IN_KW setReturner {
        $$ = createNode("inOP");
        $$->node1 = $1;
        $$->node2 = $3;
    }
;

setReturner:
    addOP {
        $$ = createNode("setReturner");
        $$->node1 = $1;
    }
    | remOP {
        $$ = createNode("setReturner");
        $$->node1 = $1;
    }
;

typeOP:
    ISSET_KW '(' ID ')' {
        $$ = createNode("issetOP");
        $$->s_token = createSymbol($3.t_title, $3.t_line, $3.t_column);
    }
;

addOP:
    ADD_KW '(' pertOP ')' {
        $$ = createNode("addOP");
        $$->node1 = $3;
    }
;

remOP:
    REMOVE_KW '(' pertOP ')' {
        $$ = createNode("removeOP");
        $$->node1 = $3;
    }
;

selectOP:
    EXISTS_KW '(' pertOP ')' {
        $$ = createNode("selectOP");
        $$->node1 = $3;
    }
;

forallOP:
    FORALL_KW '(' pertOP ')' compoundStmt {
        $$ = createNode("forallOP");
        $$->node1 = $3;
        $$->node2 = $5;
    }
;

expression:
    assignExp {
        $$ = createNode("expression");
        $$->node1 = $1;
    }
    | simpleExp {
        $$ = createNode("expression");
        $$->node1 = $1;
    }
    | inOP {
        $$ = createNode("expression");
        $$->node1 = $1;
    }
    | outOP {
        $$ = createNode("expression");
        $$->node1 = $1;
    }
;

assignExp:
    ID ASS_OP expression {
        $$ = createNode("assignExp");
        $$->s_token = createSymbol($1.t_title, $1.t_line, $1.t_column);
        $$->node1 = $3;
    }
;

simpleExp:
    binLogicalExp {
        $$ = createNode("simpleExp");
        $$->node1 = $1;
    }
    | pertOP {
        $$ = createNode("simpleExp");
        $$->node1 = $1;
    }
    | selectOP {
        $$ = createNode("simpleExp");
        $$->node1 = $1;
    }
;

constOP:
    INT {
        $$ = createNode("INT");
        $$->s_token = createSymbol($1.t_title, $1.t_line, $1.t_column);
    }
    | FLOAT {
        $$ = createNode("FLOAT");
        $$->s_token = createSymbol($1.t_title, $1.t_line, $1.t_column);
    }
    | EMPTY {
        $$ = createNode("EMPTY");
        $$->s_token = createSymbol($1.t_title, $1.t_line, $1.t_column);
    }
;

inOP:
    IN '(' ID ')' {
        $$ = createNode("read");
        $$->s_token = createSymbol($3.t_title, $3.t_line, $3.t_column);
    }
;

outOP:
    OUT '(' outConst ')' {
        $$ = createNode("OUT");
        $$->s_token = createSymbol($1.t_title, $1.t_line, $1.t_column);
        $$->node1 = $3;
    }
;

outConst:
    STRING {
        $$ = createNode("STRING");
        $$->s_token = createSymbol($1.t_title, $1.t_line, $1.t_column);
    }
    | CHAR {
        $$ = createNode("CHAR");
        $$->s_token = createSymbol($1.t_title, $1.t_line, $1.t_column);
    }
    | simpleExp {
        $$ = createNode("OutConst");
        $$->node1 = $1;
    }
;

binLogicalExp:
    binLogicalExp BIN_LOG_OP unLogicalExp {
        $$ = createNode("binLogicalExp");
        $$->s_token = createSymbol($2.t_title, $2.t_line, $2.t_column);
        $$->node1 = $1;
        $$->node2 = $3;
    }
    | unLogicalExp {
        $$ = createNode("binLogicalExp");
        $$->node1 = $1;
    }
;

unLogicalExp:
    UN_LOG_OP unLogicalExp {
        $$ = createNode("unLogicalExp");
        $$->s_token = createSymbol($1.t_title, $1.t_line, $1.t_column);
        $$->node1 = $2;
    }
    | relationalExp {
        $$ = createNode("unLogicalExp");
        $$->node1 = $1;
    }
;

relationalExp:
    relationalExp REL_OP sumExp {
        $$ = createNode("relationalExp");
        $$->s_token = createSymbol($2.t_title, $2.t_line, $2.t_column);
        $$->node1 = $1;
        $$->node2 = $3;
    }
    | sumExp {
        $$ = createNode("relationalExp");
        $$->node1 = $1;
    }
;

sumExp:
    sumExp SUM_OP mulExp {
        $$ = createNode("sumExp");
        $$->s_token = createSymbol($2.t_title, $2.t_line, $2.t_column);
        $$->node1 = $1;
        $$->node2 = $3;
    }
    | mulExp {
        $$ = createNode("sumExp");
        $$->node1 = $1;
    }
;

mulExp:
    mulExp MUL_OP factor {
        $$ = createNode("mulExp");
        $$->s_token = createSymbol($2.t_title, $2.t_line, $2.t_column);
        $$->node1 = $1;
        $$->node2 = $3;
    }
    | factor {
        $$ = createNode("mulExp");
        $$->node1 = $1;
    }
    | SUM_OP factor {
        $$ = createNode("mulExp");
        $$->s_token = createSymbol($1.t_title, $1.t_line, $1.t_column);
        $$->node1 = $2;
    }
;

factor:
    ID {}
    | functionCall {
        $$ = createNode("factor");
        $$->node1 = $1;
    }
    | '(' simpleExp ')' {
        $$ = createNode("factor");
        $$->node1 = $2;
    }
    | constOP {
        $$ = createNode("factor");
        $$->node1 = $1;
    }
;

functionCall:
    ID '(' callParams ')' {
        $$ = createNode("functionCall");
        $$->s_token = createSymbol($1.t_title, $1.t_line, $1.t_column);
        $$->node1 = $3;
    }
;

callParams: 
    callParams ',' simpleExp{
        $$ = createNode("callParams");
        $$->node1 = $1;
        $$->node2 = $3;
    }
    | simpleExp {
        $$ = createNode("callParams");
        $$->node1 = $1;
    }
;

%%
extern void yyerror(const char* a) {
    fprintf(stderr, "| line: %d\t| column: %d\t| %s\n", line, column, a);
}


int main(int argc, char **argv){
    FILE *fp = fopen(argv[1], "r");
    initTable(symbolTable);
    //initStack(&scope);
    //printf("%d\n", emptyStack(&scope));
    if(argc > 1){
        if(fp){
            yyin = fp;
            // yylex();
            yyparse();
            // printf("\nLexical analysis completed with %d error(s)\n", errors);
        }
        else{
            printf("Input File Path does not exist.\n");
        }
    }
    else{
        printf("No Input Files.\n");
    }
    fclose(yyin);
    printTable(symbolTable);
    printTree(tree, 0);
    freeTree(tree);
    yylex_destroy();
    return 0;
}
