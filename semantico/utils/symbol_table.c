/***********************
 *  Ian Nery Bandeira  *
 *  170144739          *
 ***********************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "clang_syntax.tab.h"
#include "symbol_table.h"
#include "stack.h"

extern void populateParams(Symbol *s){
    int pos = findEmpty(s);
    int funcpos = -1;
    for(int i = 0; i < pos; i++){
        if(!strcmp(s[i].s_funcvar,"Function")){
            funcpos = i;
            s[i].s_numParams = 0;
            for(int j = 0; j < 100; j++){
                strcpy(s[i].s_typeParams[j],"\0");
            }
        }
        else if(!strcmp(s[i].s_funcvar,"Parameter")){
            s[funcpos].s_numParams++;
            for(int j = 0; j < 100; j++){
                if(!strcmp(s[funcpos].s_typeParams[j],"\0")){
                    strcpy(s[funcpos].s_typeParams[j],s[i].s_type);
                    break;
                }
            }
        }
    }
}

extern int findArgs(Symbol *s, char* title){
    int pos = findEmpty(s);
    for(int i = 0; i < pos; i++){
        if(s[i].s_scope == 0){
            if(!strcmp(s[i].s_funcvar, "Function")){
                if(!strcmp(title, s[i].s_title)){
                    return s[i].s_numParams;
                }
            }
        }
    }
    return -1;
}

extern int findMain(Symbol *s){
    int pos = findEmpty(s);
    int found = 0;
    for(int i = 0; i < pos; i++){
        if(!strcmp("main", s[i].s_title) && !strcmp("Function", s[i].s_funcvar)){
            found = 1;
        }
    }
    if(!found){
        printf(BRED"[x:x] ");
        printf("SEMANTIC ERROR --> Undefined reference to 'main'\n"reset);
        return 1;
    }
    return 0;
}

extern int searchVarContext(Symbol *s, char* title, int context){
    int pos = findEmpty(s);
    for(int i = 0; i < pos; i++){
        if(!strcmp(title, s[i].s_title) && context == s[i].s_scope){
            return i;
        }
    }
    return -1;
}


/**
 * Initializes the symbol table with -1 as their value, 
 * since the lines always start at zero.
 **/
extern void initTable(Symbol* s){
    for(int i = 0; i < 1000; i++){
        s[i].s_line = -1;
    }
}

// Returns the first non-occupied position in the symbol table vector.
extern int findEmpty(Symbol* s){
    for(int i = 0; i < 1000; i++){
        if(s[i].s_line == -1){
            return i;
        }
    }
    return -1;
}
/**
 * Self explanatory function. It emulates a token, and returns it 
 * to the node.
 * 
 * As to why a method like this even exists, see the block comment 
 * at the symbol table header file.
 **/
extern Symbol* emulateToken(char* title, int line, int column, char* type){
    Symbol* s = (Symbol*) malloc(sizeof(Symbol));
    
    s->s_line = line;
    s->s_column = column;
    strcpy(s->s_title,title);
    if(type){
        strcpy(s->s_type,type);
    }
    return s;
}

/**
 * This function "creates" a symbol, using the attributes
 * passed as parameters to this function, into the symbol table 
 * vector. 
 * 
 * Might need refactoring in the future, but it works.
 **/
extern int insertSymbol(Symbol* s, 
                        char* title, 
                        char* type, 
                        int funcvar, 
                        int line, 
                        int column,
                        int context){
    int pos = findEmpty(s);
    char auxstr[10];
    int duplicatedSymbol = 0;
    for(int i = 0; i < pos; i++){
        if(s[i].s_scope == context && !strcmp(s[i].s_title, title)){
            duplicatedSymbol = 1;
        }
    }
    switch(funcvar){
        case 0:
            strcpy(auxstr, "Variable");
            break;
        case 1:
            strcpy(auxstr, "Function");
            break;
        case 2:
            strcpy(auxstr, "Parameter");
            break;
    }
    if(!duplicatedSymbol){
        strcpy(s[pos].s_title, title);
        strcpy(s[pos].s_type, type);
        strcpy(s[pos].s_funcvar, auxstr);
        s[pos].s_line = line;
        s[pos].s_column = column;
        s[pos].s_scope = context;
        return 0;
    }
    else{
        printf(BRED"[%d:%d] ", line, column);
        printf("SEMANTIC ERROR --> Redefinition of %s: %s\n"reset, auxstr, title);
        return 1;
    }
}

// Might be needed in the future, but not now.
extern void freeSymbol(Symbol* s){
    // int pos = findEmpty(s);
    // for(int i = 0; i < pos; i++){
    //     free
    // }
}

// Prints an aesthetically pleasing symbol table.
// (as much as possible, since it's into a terminal, obviously)
extern void printTable(Symbol* s){
    int pos = findEmpty(s);

    /************* HEADER PRINTING BLOCK *************/
    for(int i = 0; i < 84; i++){
        printf("-");
    }
    printf("\n");
    printf("| %-8s | %-20s | %-10s | %-6s | %-6s | %-6s | %-6s |\n", 
        "TYPE", 
        "TITLE", 
        "VAR/FUNC",
        "SCOPE",
        "LINE", 
        "COLUMN",
        "PARAMS");
    for(int i = 0; i < 84; i++){
        printf("-");
    }
    printf("\n");
    /******************* END BLOCK *******************/

    /************* ELEMENT PRINTING BLOCK *************/
    for(int i = 0; i < pos; i++){
        // big titles handler, so the table stays formatted.
        // it adds an ellipsis in the end of a string, basically.
        if(strlen(s[i].s_title) > 20){
            s[i].s_title[16] = '\0';
            strcat(s[i].s_title, " ...\0");
        }
        if(!strcmp(s[i].s_funcvar,"Function")){
            printf("| %-8s | %-20s | %-10s | %-6d | %-6d | %-6d | %-6d |\n", 
                s[i].s_type, 
                s[i].s_title, 
                s[i].s_funcvar,
                s[i].s_scope,
                s[i].s_line, 
                s[i].s_column,
                s[i].s_numParams);
        }
        else{
            printf("| %-8s | %-20s | %-10s | %-6d | %-6d | %-6d | %-6s |\n", 
                s[i].s_type, 
                s[i].s_title, 
                s[i].s_funcvar,
                s[i].s_scope,
                s[i].s_line, 
                s[i].s_column,
                "------");
        }
    }
    for(int i = 0; i < 84; i++){
        printf("-");
    }
    /******************* END BLOCK *******************/
    printf("\n");
}
