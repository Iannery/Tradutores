/***********************
 *  Ian Nery Bandeira  *
 *  170144739          *
 ***********************/
#ifndef S_TABLE_H
#define S_TABLE_H

#define     BRED "\e[1;31m"
#define     BMAG "\e[1;35m"
#define     reset "\e[0m"

/**
 * The symbol table is a vector of the structure defined below.
 * 
 * Currently, the only attribute not shown in the symbol 
 * table display is the s_params, as i haven't tought of a way to
 * "capture" it, but it will indeed be useful to determine the
 * function scopes, since the parameters declared in it are also
 * part of its context. 
 * 
 * Probably will lead to a shit ton of grammar changes, and 
 * i'm psychologically preparing myself for such. 
 * 
 * The attributes s_line, s_column, and s_title are also being
 * used to emulate the token structure defined in the .y %union.
 * As for the reason, it also leads to a metric ton of issues 
 * when using those in files other than the .y and .l .
 * 
 * I'm trying my best here, please bear with me and my workarounds.
 **/ 

typedef struct Symbol {
    char    s_type[11];
    char    s_funcvar[11];
    int     s_line;
    int     s_column;
    int     s_scope;
    char    s_title[101];
    char    s_params[100][31]; //currently not being used
} Symbol;
Symbol symbolTable[10000];

extern void initTable(Symbol *s);
extern int findEmpty(Symbol *s);
extern Symbol* emulateToken(char* title, int line, int column);
extern void insertSymbol(Symbol* s, 
                        char* title, 
                        char* type, 
                        int funcvar, 
                        int line, 
                        int column,
                        int context);
extern void freeSymbol(Symbol* s);
extern void printTable(Symbol* s);

#endif