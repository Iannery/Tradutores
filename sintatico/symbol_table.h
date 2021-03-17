typedef struct symbol {
    int  s_line;
    int  s_column;
    char s_context[51];
    char s_title[101];
} symbol;

extern void fillTable(symbol *s);
extern int findEmpty(symbol *s);
