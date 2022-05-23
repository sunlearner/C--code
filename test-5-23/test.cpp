#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
#include<stdio.h> 
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void Displayboard(char board[ROWS][COLS], int rows, int cols)
{
	int i, j;
	printf(" ");
	for (i = 0; i < rows - 1; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i < rows - 1; i++)
	{
		printf(" %d", i);

		for (j = 1; j < cols - 1; j++)
		{

			printf("|%c", board[i][j]);

		}

		printf("\n");
	}
}
void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int count;
	int i, j;
	int q = 0;
	int z = 0;
	while (1)
	{

		printf("ÇëÊäÈë×ø±ê£º");
		scanf("%d%d", &i, &j);

		if (i > 0 && i <= row && j > 0 && j <= col)
		{
			if (mine[i][j] == '1')
			{
				printf("Äã±»Õ¨ËÀÁË£¬ÓÎÏ·½áÊø£¡\n");
				Displayboard(mine, ROWS, COLS);
				break;
			}
			else
			{
				count = Minecount(mine, ROWS, COLS, i, j);
				show[i][j] = count + '0';
				z = Recursion(mine, show, i, j);
				q = z + q;
				if (show[i][j] == '0')
				{
					show[i][j] = ' ';
				}
				Displayboard(show, ROWS, COLS);
				if (q == row * col - EASY_COUNT)
					break;
			}

		}
		else {
			printf("ÊäÈë´íÎó,ÇëÖØÐÂÊäÈë£¡\n");
			Findmine(mine, show, ROW, COL);
		}
	}
	if (q == (row * col) - EASY_COUNT)
	{
		printf("¹§Ï²Äã£¬ÄãÓ®ÁË£¡\n");
	}
}
int Minecount(char mine[ROWS][COLS], int rows, int cols, int x, int y)
{
	int count = 0;
	int sount = 0;
	int i, j;
	for (i = -1; i < 2; i++)
	{
		for (j = -1; j < 2; j++)
		{

			count = mine[x + i][y + j] - '0' + count;

		}
	}
	return count;
}
int Recursion(char mine[ROWS][COLS], char show[ROWS][COLS], int i, int j)

{
	int p, q, count = 0;
	int z = 0;
	if (show[i][j] != '0')
		return 1;
	else {
		for (p = -1; p < 2; p++)
		{
			for (q = -1; q < 2; q++)
			{
				count = Minecount(mine, ROWS, COLS, i + p, j + q);
				show[i + p][j + q] = count + '0';
				z++;
				if (show[i + p][j + q] == '0')
				{
					show[i + p][j + q] = ' ';
				}

			}
		}
		return z;
	}
}