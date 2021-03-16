#include    <stdio.h>
extern int yylex();
extern int yylex_destroy();
extern void yyerror(const char* a) {
    fprintf(stderr, "%s\n", a);
}