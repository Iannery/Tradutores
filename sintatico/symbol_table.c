#include "symbol_table.h"
#include <stdio.h>
extern void fillTable(symbol* s){
    for(int i = 0; i < 1000; i++){
        s[i].s_line = -1;
    }
}
extern int findEmpty(symbol* s){
    for(int i = 0; i < 1000; i++){
        if(s[i].s_line == -1){
            return i;
        }
    }
    return -1;
}
extern int insertSymbol(symbol* s, char* title, int line, int column){
    int pos = findEmpty(s);
    strcpy(s[pos].s_title, title);

}