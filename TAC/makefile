compile:
	bison -o bison/clang_syntax.tab.c -d bison/clang_syntax.y -Wcounterexamples -g
	flex -o flex/lex.yy.c flex/clang_lexical.l
	gcc -g -c utils/stack.c -o ./obj/stack.o
	gcc -g -c utils/symbol_table.c -o obj/symbol_table.o -I bison
	gcc -g -c utils/tree.c -o obj/tree.o -I bison
	gcc -g -c utils/tac.c -o obj/tac.o -I bison
	gcc -g bison/clang_syntax.tab.c flex/lex.yy.c obj/stack.o obj/symbol_table.o obj/tree.o obj/tac.o -I utils -I bison -I flex -Wall

run:
	./a.out tests/t_correct01.c
	
debug:
	valgrind -v --tool=memcheck --leak-check=full --log-file="logfile.out" --show-leak-kinds=all --track-origins=yes ./a.out tests/t_correct01.c

clean:
	rm -f logfile.out ./bison/clang_syntax.output
