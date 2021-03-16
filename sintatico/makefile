all:
	bison -d clang_syntax.y -Wcounterexamples
	flex clang_lexical.l
	gcc clang_syntax.tab.c lex.yy.c -o test