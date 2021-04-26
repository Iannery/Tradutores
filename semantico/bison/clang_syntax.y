%debug
%define parse.error verbose
%define lr.type canonical-lr
%{

    /**
    * IMPORTANT DISCLAIMER
    * 
    * This file, along with all files that have been documented
    * contains a lot of self-deprecating, sincere and (maybe?) 
    * funny comments that I really hope brings you a little laugh
    * while reading and correcting it. It was really tough making 
    * this project alone, and it would not be possible without José's
    * and all my colleagues' help. 
    *
    * I believe this should be a group project.
    * 
    * All the jokes are means of relieving a little bit of the sanity
    * I lost while making this. If this and all the comments are unappreciated,
    * I'm sincerely sorry for those, but I won't remove any of them.
    * 
    * I hope you have a good one, whoever you might be,
    * 
    * Ian Nery Bandeira
    **/

    // I'm afraid to comment inside this file, but it will be done eventually.
    // Hopefully without breaking everything and making me regret all the
    // life choices I made in the last 23 years for about 3 hours.
    #include "symbol_table.h"
    #include "stack.h"
    #include "tree.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    // All things are extern and global, since there was a
    // metric ton of scope issues, and could not be solved without those.
    extern int yylex();
    extern int yylex_destroy();
    extern void yyerror(const char* a);
    extern char* scopeHandler(char* title, int line, int column);
    extern int qtdHandler(char* title, int line, int column);
    extern int line;
    extern int column;
    extern int errors;
    extern int context;
    int errors_sem;
    int qtdParams;
    char lastFType[6]; 
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
%type <node> iterAssign
%type <node> iterExp
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
%type <node> signedFactor
%type <node> factor
%type <node> functionCall
%type <node> callParams
%type <node> setParams 


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
    simpleFDeclaration '(' {
        context++;
        pushScopeStack(&scope, context);
    } 
    params ')' {
        populateParams(symbolTable);
    } compoundStmt {
        $$ = createNode("function declaration");
        $$->node1 = $1;
        $$->node2 = $4;
        $$->node3 = $7;
        popScopeStack(&scope);
    }
    | simpleFDeclaration '(' ')' compoundStmt {
        $$ = createNode("function declaration");
        $$->node1 = $1;
        $$->node2 = $4;
    }
    | simpleFDeclaration '(' ')' '{' '}' {
        $$ = createNode("function declaration");
        $$->node1 = $1;
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
    TYPE ID {
        char auxstr[100];
        strcpy(auxstr, BMAG);
        strcat(auxstr, $1.t_title);
        strcat(auxstr, reset);
        $$ = createNode(strcat(auxstr," parameter ID"));
        $$->s_token = emulateToken($2.t_title, $2.t_line, $2.t_column, $1.t_title);
        errors_sem += insertSymbol(symbolTable, 
                        $2.t_title, 
                        $1.t_title, 
                        2,
                        $2.t_line, 
                        $2.t_column,
                        $2.t_context);
    }
;

simpleVDeclaration:
    TYPE ID {
        char auxstr[100];
        strcpy(auxstr, BMAG);
        strcat(auxstr, $1.t_title);
        strcat(auxstr, reset);
        $$ = createNode(strcat(auxstr," variable ID"));
        $$->s_token = emulateToken($2.t_title, $2.t_line, $2.t_column, $1.t_title);
        errors_sem += insertSymbol(symbolTable, 
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
        char auxstr[100];
        strcpy(auxstr, BMAG);
        strcat(auxstr, $1.t_title);
        strcat(auxstr, reset);
        $$ = createNode(strcat(auxstr," function ID"));
        $$->s_token = emulateToken($2.t_title, $2.t_line, $2.t_column, $1.t_title);
        errors_sem += insertSymbol(symbolTable, 
                        $2.t_title, 
                        $1.t_title, 
                        1, 
                        $2.t_line, 
                        $2.t_column,
                        $2.t_context);
        strcpy(lastFType, $1.t_title);
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
    | funcDeclaration {
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
    | IF_KW '(' simpleExp ')' '{' '}'  %prec THEN {
        $$ = createNode("if else statement");
        $$->node1 = $3;
    }
    | IF_KW '(' simpleExp ')' primitiveStmt ELSE_KW primitiveStmt {
        $$ = createNode("if else statement");
        $$->node1 = $3;
        $$->node2 = $5;
        $$->node3 = $7;
    }
    | IF_KW '(' simpleExp ')' '{' '}'  ELSE_KW primitiveStmt {
        $$ = createNode("if else statement");
        $$->node1 = $3;
        $$->node3 = $8;
    }
    | IF_KW '(' simpleExp ')' primitiveStmt ELSE_KW '{' '}' {
        $$ = createNode("if else statement");
        $$->node1 = $3;
        $$->node2 = $5;
    }
    | IF_KW '(' simpleExp ')' '{' '}' ELSE_KW '{' '}' {
        $$ = createNode("if else statement");
        $$->node1 = $3;
    }
    
;

iterStmt:
    FOR_KW '(' iterAssign ';' iterExp ';' iterAssign ')' primitiveStmt {
        $$ = createNode("for statement");
        $$->node1 = $3;
        $$->node2 = $5;
        $$->node3 = $7;
        $$->node4 = $9;
    }
    | FOR_KW '(' iterAssign ';' iterExp ';' iterAssign ')' '{' '}' {
        $$ = createNode("for statement");
        $$->node1 = $3;
        $$->node2 = $5;
        $$->node3 = $7;
    }
;
iterAssign:
    assignExp {
        $$ = $1;
    } | {$$ = NULL;}
;

iterExp:
    simpleExp {
        $$ = $1;
    } | {$$ = NULL;}
;

returnStmt:
    RETURN_KW expression ';' {
        $$ = createNode("return statement");
        $$->node1 = $2;
        typeHandler($$, $1.t_line, $1.t_column);
    }
;

setStmt:
    forallOP {
        $$ = $1;
    }
;

pertOP:
    simpleExp IN_KW factor {
        $$ = createNode("in operator");
        $$->node1 = $1;
        $$->node2 = $3;
        typeHandler($$, $2.t_line, $2.t_column);
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
    ISSET_KW '(' setParams ')' {
        $$ = createNode("is_set operator");
        $$->node1 = $3;
        strcpy($$->n_type, "int");
    }
;

setParams: 
    ID {
        char typestr[6];
        strcpy(typestr,scopeHandler($1.t_title, $1.t_line, $1.t_column));
        $$ = createNode("is_set parameter");
        $$->s_token = emulateToken($1.t_title, $1.t_line, $1.t_column, typestr);
    }
    | pertOP {
        $$ = $1;
    }
    | setReturner {
        $$ = $1;
    }
    | constOP {
        $$ = $1;
    }

;

addOP:
    ADD_KW '(' pertOP ')' {
        $$ = createNode("add operator");
        $$->node1 = $3;
        strcpy($$->n_type, "set");
    }
;

remOP:
    REMOVE_KW '(' pertOP ')' {
        $$ = createNode("remove operator");
        $$->node1 = $3;
        strcpy($$->n_type, "set");
    }
;

selectOP:
    EXISTS_KW '(' ID IN_KW factor ')' {
        char typestr[6];
        strcpy(typestr,scopeHandler($3.t_title, $3.t_line, $3.t_column));
        $$ = createNode("exists operator");
        $$->node1 = $5;
        $$->s_token = emulateToken($3.t_title, $3.t_line, $3.t_column, typestr);
        strcpy($$->n_type, "int");
    }
;

forallOP:
    FORALL_KW '(' pertOP ')' primitiveStmt {
        $$ = createNode("forall statement");
        $$->node1 = $3;
        $$->node2 = $5;
    }
    |FORALL_KW '(' pertOP ')' '{' '}' {
        $$ = createNode("forall statement");
        $$->node1 = $3;
    } 
;

expression:
    assignExp {
        $$ = $1;
    }
    | simpleExp {
        $$ = $1;
        expTypeHandler($$);
    }
;

assignExp:
    ID ASS_OP expression {
        char typestr[6];
        strcpy(typestr,scopeHandler($1.t_title, $1.t_line, $1.t_column));
        $$ = createNode("assignment operator");
        $$->s_token = emulateToken($1.t_title, $1.t_line, $1.t_column, typestr);
        $$->node1 = $3;
        typeHandler($$, $1.t_line, $1.t_column);
    }
;

simpleExp:
    binLogicalExp {
        $$ = $1;
    }
    | pertOP {
        $$ = $1;
    }
    
;

constOP:
    INT {
        $$ = createNode("CONST");
        $$->s_token = emulateToken($1.t_title, $1.t_line, $1.t_column, "int");
    }
    | FLOAT {
        $$ = createNode("CONST");
        $$->s_token = emulateToken($1.t_title, $1.t_line, $1.t_column, "float");
    }
    | EMPTY {
        $$ = createNode("CONST");
        $$->s_token = emulateToken($1.t_title, $1.t_line, $1.t_column, "set");
    }
;

inOP:
    IN '(' ID ')' ';' {
        char typestr[6];
        strcpy(typestr,scopeHandler($3.t_title, $3.t_line, $3.t_column));
        $$ = createNode("read");
        $$->s_token = emulateToken($3.t_title, $3.t_line, $3.t_column, NULL);
    }
;

outOP:
    OUT '(' outConst ')' ';' {
        $$ = createNode("write/writeln");
        $$->s_token = emulateToken($1.t_title, $1.t_line, $1.t_column, NULL);
        $$->node1 = $3;
    }
;

outConst:
    STRING {
        $$ = createNode("CONST STRING");
        $$->s_token = emulateToken($1.t_title, $1.t_line, $1.t_column, NULL);
    }
    | CHAR {
        $$ = createNode("CONST CHAR");
        $$->s_token = emulateToken($1.t_title, $1.t_line, $1.t_column, NULL);
    }
    | simpleExp {
        $$ = $1;
    }
;

binLogicalExp:
    binLogicalExp BIN_LOG_OP unLogicalExp {
        $$ = createNode("binary expression");
        // $$->s_token = emulateToken($2.t_title, $2.t_line, $2.t_column, NULL);
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
        // $$->s_token = emulateToken($1.t_title, $1.t_line, $1.t_column, NULL);
        $$->node1 = $2;
    }
    | relationalExp {
        $$ = $1;
    }
;

relationalExp:
    relationalExp REL_OP sumExp {
        $$ = createNode("relational expression");
        // $$->s_token = emulateToken($2.t_title, $2.t_line, $2.t_column, NULL);
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
        // $$->s_token = emulateToken($2.t_title, $2.t_line, $2.t_column, NULL);
        $$->node1 = $1;
        $$->node2 = $3;
    }
    | mulExp {
        $$ = $1;
    }
;

mulExp:
    mulExp MUL_OP signedFactor {
        $$ = createNode("*/÷ operation");
        // $$->s_token = emulateToken($2.t_title, $2.t_line, $2.t_column, NULL);
        $$->node1 = $1;
        $$->node2 = $3;
    }
    | signedFactor {
        $$ = $1;
    }
;

signedFactor:
    factor {
        $$ = $1;
    }
    | SUM_OP signedFactor {
        char auxstr[100];
        strcpy(auxstr, "signed factor ");
        
        $$ = createNode(strcat(auxstr, $1.t_title));
        $$->node1 = $2;
    }
;

factor:
    ID {
        char typestr[6];
        strcpy(typestr,scopeHandler($1.t_title, $1.t_line, $1.t_column));
        $$ = createNode("ID");

        $$->s_token = emulateToken($1.t_title, $1.t_line, $1.t_column, typestr);
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
    | selectOP {
        $$ = $1;
    }
    | typeOP {
        $$ = $1;
    }
    | setReturner {
        $$ = $1;
    }
;

functionCall:
    ID '(' {
        qtdParams = 0;
    } 
    callParams ')' {
        char typestr[6];
        strcpy(typestr,scopeHandler($1.t_title, $1.t_line, $1.t_column));
        $$ = createNode("function call");
        $$->s_token = emulateToken($1.t_title, $1.t_line, $1.t_column, typestr);
        $$->node1 = $4;
        if(qtdHandler($1.t_title, $1.t_line, $1.t_column)){
            paramsHandler(symbolTable, $1.t_title, $1.t_line, $1.t_column, $4, qtdParams);
        }
    }
    | ID '(' ')' {
        qtdParams = 0;
        char typestr[6];
        strcpy(typestr,scopeHandler($1.t_title, $1.t_line, $1.t_column));
        $$ = createNode("function call");
        $$->s_token = emulateToken($1.t_title, $1.t_line, $1.t_column, typestr);
        qtdHandler($1.t_title, $1.t_line, $1.t_column);
    }
;

callParams: 
    callParams ',' simpleExp{
        qtdParams++;
        $$ = createNode("call parameters");
        $$->node1 = $1;
        $$->node2 = $3;
        expTypeHandler($3);
    }
    | simpleExp {
        qtdParams++;
        $$ = $1;
        expTypeHandler($$);
    }
;

%%
extern void yyerror(const char* a) {
    printf(BRED"[%03d:%03d] ", line, column);
    printf("SYNTAX   ERROR --> ");
    printf("%s\n"reset, a);
    errors++;
}

extern int qtdHandler(char* title, int line, int column){
    int qtdArgs = findArgs(symbolTable, title);
    if(qtdArgs != qtdParams){
        errors_sem++;
        printf(BRED"[%03d:%03d] ", line, column);
        printf("SEMANTIC ERROR --> Wrong number of arguments in function call: %s\n"reset, title);
        printf(BRED"\t\t\t     EXPECTED: %d\n"reset, qtdArgs);
        printf(BRED"\t\t\t          GOT: %d\n"reset, qtdParams);
        return 0;
    }
    return 1;
}

extern char* scopeHandler(char* title, int line, int column){
    int idx = searchScopeStack(&scope);
    int inContext = 0;
    int st_pos = 0;
    for(int i = idx - 1 ; i >= 0; i--){
        st_pos = searchVarContext(symbolTable, title, scope.stack[i]);
        if(st_pos >= 0){
            // printf("S TYPE DO SCOPE HANDLER ACHOU ISSO AQUI OW %s\n", symbolTable[st_pos].s_type);
            return symbolTable[st_pos].s_type;
        }
    }
    if(!inContext){
        errors_sem++;
        printf(BRED"[%03d:%03d] ", line, column);
        printf("SEMANTIC ERROR --> Undeclared variable in context: %s\n"reset, title);
    }
    return "";
}

int main(int argc, char **argv){
    errors_sem = 0;
    FILE *fp = fopen(argv[1], "r");
    initTable(symbolTable);
    initScopeStack(&scope);
    pushScopeStack(&scope, 0);
    if(argc > 1){
        if(fp){
            yyin = fp;
            yyparse();
        }
        else{
            printf("Input File Path does not exist.\n");
        }
    }
    else{
        printf("No Input Files.\n");
    }
    fclose(yyin);
    
    errors_sem += findMain(symbolTable);

    printf("\nAnalysis completed with %d error(s)\n", errors+errors_sem);
    if(!errors && !errors_sem){
        printf("Correct program.\n");
        printf("\n--------AST--------\n");
        printf("\nTypecasting caption: \n");
        printf("\t<type> \n");
        printf("\t(cast) \n\n");
        printTree(tree, 0);
    }
    else if(errors){
        printf(BRED"The Abstract Syntax Tree will not be shown if there are syntactic or lexical errors.\n");
        printf(reset);
    }
    else{
        printf("\n--------AST--------\n");
        printf("\nTypecasting caption: \n");
        printf("\t<type> \n");
        printf("\t(cast) \n\n");
        printTree(tree, 0);
    }
    printf("\n--------Symbol Table--------\n");
    printTable(symbolTable);
    freeTree();
    yylex_destroy();
    return 0;
}
