/**
 * sudoku.h
 *
 * CS50 AP
 * Sudoku
 *
 * Compile-time options for the game of Sudoku.
 */

// game's author
#define AUTHOR "Sally Student"

// game's title
#define TITLE "Sudoku"

// banner's colors
#define FG_BANNER COLOR_RED
#define BG_BANNER COLOR_BLACK

// grid's colors
#define FG_GRID COLOR_RED
#define BG_GRID COLOR_BLACK

// border's colors
#define FG_BORDER COLOR_WHITE
#define BG_BORDER COLOR_RED

// logo's colors
#define FG_LOGO COLOR_WHITE
#define BG_LOGO COLOR_BLACK

// digits's colors
#define FG_DIGITS COLOR_YELLOW
#define BG_DIGITS COLOR_BLACK

// nicknames for pairs of colors
enum { PAIR_BANNER = 1, PAIR_GRID, PAIR_BORDER, PAIR_LOGO, PAIR_DIGITS };
