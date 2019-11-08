#
# Makefile
#
# CS50 AP
# Sudoku
#

sudoku: Makefile sudoku.c sudoku.h
	gcc -ggdb -std=c99 -Wall -Werror -Wno-unused-but-set-variable -o sudoku sudoku.c -lncurses

clean:
	rm -f *.o a.out core log.txt sudoku
