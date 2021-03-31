compile:
	bison -o bison/clang_syntax.tab.c -d bison/clang_syntax.y -Wcounterexamples
	flex -o flex/lex.yy.c flex/clang_lexical.l
	gcc -c utils/stack.c -o ./obj/stack.o -g
	gcc -c utils/symbol_table.c -o obj/symbol_table.o -g
	gcc -c utils/tree.c -o obj/tree.o -g
	gcc bison/clang_syntax.tab.c flex/lex.yy.c obj/stack.o obj/symbol_table.o obj/tree.o -I utils -I bison -I flex -Wall -g

run:
	./a.out tests/t_correct02.c
	
debug:
	valgrind -v --tool=memcheck --leak-check=full --log-file="logfile.out" --show-leak-kinds=all --track-origins=yes ./a.out tests/t_correct01.c

clean:
	rm -f logfile.out ./bison/clang_syntax.output
