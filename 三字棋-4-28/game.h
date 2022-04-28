#pragma once
#include<stdlib.h>
#include<time.h>
#define ROW   3
#define COL   3
void initboarad(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void Playermove(char board[ROW][COL], int row, int col);
void Displayermove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);