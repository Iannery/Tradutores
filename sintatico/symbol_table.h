#ifndef S_TABLE_H
#define S_TABLE_H

#define     BRED "\e[1;31m"
#define     BMAG "\e[1;35m"
#define     reset "\e[0m"

typedef struct Symbol {
    char    s_type[11];
    char    s_funcvar[11];
    int     s_line;
    int     s_column;
    int     s_scope;
    char    s_title[101];
    char    s_params[100][31];   
} Symbol;

Symbol symbolTable[10000];
extern void initTable(Symbol *s);
extern int findEmpty(Symbol *s);
extern Symbol* createSymbol(char* title, int line, int column);
extern void insertSymbol(Symbol* s, 
                        char* title, 
                        char* type, 
                        char* funcvar, 
                        int line, 
                        int column);
extern void freeSymbol(Symbol* s);
extern void printTable(Symbol* s);

#endif