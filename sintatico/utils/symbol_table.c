/***********************
 *  Ian Nery Bandeira  *
 *  170144739          *
 ***********************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbol_table.h"
#include "stack.h"

/**
 * Initializes the symbol table with -1 as their value, 
 * since the lines always start at zero.
 **/
extern void initTable(Symbol* s){
    for(int i = 0; i < 10000; i++){
        s[i].s_line = -1;
    }
}

// Returns the first non-occupied position in the symbol table vector.
extern int findEmpty(Symbol* s){
    for(int i = 0; i < 10000; i++){
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
extern Symbol* emulateToken(char* title, int line, int column){
    Symbol* s = (Symbol*) malloc(sizeof(Symbol));  
    
    s->s_line = line;                   
    s->s_column = column;
    strcpy(s->s_title,title);
    return s;
}

/**
 * This function "creates" a symbol, using the attributes
 * passed as parameters to this function, into the symbol table 
 * vector. 
 * 
 * Might need refactoring in the future, but it works.
 **/
extern void insertSymbol(Symbol* s, 
                        char* title, 
                        char* type, 
                        int funcvar, 
                        int line, 
                        int column,
                        int context){
    int pos = findEmpty(s);
    strcpy(s[pos].s_title, title);
    strcpy(s[pos].s_type, type);
    if(funcvar){
        strcpy(s[pos].s_funcvar, "Function");
    }
    else{
        strcpy(s[pos].s_funcvar, "Variable");
    }
    s[pos].s_line = line;
    s[pos].s_column = column;
    s[pos].s_scope = context;
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
    for(int i = 0; i < 75; i++){
        printf("-");
    }
    printf("\n");
    printf("| %-8s | %-20s | %-10s | %-6s | %-6s | %-6s |\n", 
        "TYPE", 
        "TITLE", 
        "VAR/FUNC",
        "SCOPE",
        "LINE", 
        "COLUMN");
    for(int i = 0; i < 75; i++){
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
        printf("| %-8s | %-20s | %-10s | %-6d | %-6d | %-6d |\n", 
            s[i].s_type, 
            s[i].s_title, 
            s[i].s_funcvar,
            s[i].s_scope,
            s[i].s_line, 
            s[i].s_column);
    }
    for(int i = 0; i < 75; i++){
        printf("-");
    }
    /******************* END BLOCK *******************/
    printf("\n");
}
