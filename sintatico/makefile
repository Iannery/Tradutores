all:
	bison -d clang_syntax.y -Wcounterexamples
	flex clang_lexical.l
	gcc -c stack.c 
	gcc -c symbol_table.c
	gcc -c tree.c
	gcc clang_syntax.tab.c lex.yy.c stack.o symbol_table.o tree.o -o test

clean:
	rm -f symbol_table.o stack.o