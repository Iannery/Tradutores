typedef struct symbol {
    int s_line;
    int s_column;
    char *s_title;
} symbol;

extern void fillTable(symbol *s){
    for(int i = 0; i < 1000; i ++){
        s[i].s_line = -1;
    }
}