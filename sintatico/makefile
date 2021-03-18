compile:
	bison -d clang_syntax.y
	flex clang_lexical.l
	gcc -c stack.c 
	gcc -c symbol_table.c 
	gcc -c tree.c 
	gcc clang_syntax.tab.c lex.yy.c stack.o symbol_table.o tree.o -Wall

run:
	./a.out tests/t_correct01.c
	
debug:
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes ./a.out tests/t_correct01.c

clean:
	rm -f symbol_table.o stack.o logfile.out tree.o clang_syntax.output
