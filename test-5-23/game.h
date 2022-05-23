#define _CRT_SECURE_NO_WARNINGS
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#include<stdio.h>
#define EASY_COUNT 10
#include<time.h>
#include<stdlib.h>
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void Displayboard(char board[ROWS][COLS], int rows, int cols);
void Setmine(char board[ROWS][COLS], int row, int col);
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int Minecount(char mine[ROWS][COLS], int rows, int cols, int x, int y);
int Recursion(char mine[ROWS][COLS], char show[ROWS][COLS], int i, int j);