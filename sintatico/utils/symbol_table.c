#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbol_table.h"
#include "stack.h"

extern void initTable(Symbol* s){
    for(int i = 0; i < 10000; i++){
        s[i].s_line = -1;
    }
}
extern int findEmpty(Symbol* s){
    for(int i = 0; i < 10000; i++){
        if(s[i].s_line == -1){
            return i;
        }
    }
    return -1;
}

extern Symbol* createSymbol(char* title, int line, int column){
    Symbol* s = (Symbol*) malloc(sizeof(Symbol));  
    
    s->s_line = line;                   
    s->s_column = column;
    strcpy(s->s_title,title);
    return s;
}
extern void insertSymbol(Symbol* s, 
                        char* title, 
                        char* type, 
                        int funcvar, 
                        int line, 
                        int column){
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
    s[pos].s_scope = seeTop(&scope);
}
extern void freeSymbol(Symbol* s){
    // int pos = findEmpty(s);
    // for(int i = 0; i < pos; i++){
    //     free
    // }
}
extern void printTable(Symbol* s){
    int pos = findEmpty(s);
    for(int i = 0; i < 66; i++){
        printf("-");
    }
    printf("\n");
    printf("| %-8s | %-20s | %-10s | %-6s | %-6s |\n", "TYPE", "TITLE", "VAR/FUNC", "LINE", "COLUMN");
    for(int i = 0; i < 66; i++){
        printf("-");
    }
    printf("\n");
    for(int i = 0; i < pos; i++){
        printf("| %-8s | %-20s | %-10s | %-6d | %-6d |\n", s[i].s_type, s[i].s_title, s[i].s_funcvar, s[i].s_line, s[i].s_column);
    }
    for(int i = 0; i < 66; i++){
        printf("-");
    }
    printf("\n");
}
