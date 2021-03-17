#include    <stdio.h>
extern int yylex();
extern int yylex_destroy();
extern void yyerror(const char* a) {
    fprintf(stderr, "| line: %d\t| column: %d\t| %s\n", yylval.token.t_line, yylval.token.t_column, a);
}