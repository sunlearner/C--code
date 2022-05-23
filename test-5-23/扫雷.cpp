#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include"game.h"

void mnue()
{
	printf("*******************************\n");
	printf("*********    1.Play   *********\n");
	printf("*********    2.exit   *********\n");
	printf("*******************************\n");
}
void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//初始化棋盘 
	/*Displayboard(mine,ROWS,COLS) ;*/
	Displayboard(show, ROWS, COLS);
	//打印棋盘 
	Setmine(mine, ROW, COL);
	//布置雷 
	//Displayboard(mine, ROWS, COLS);
	Findmine(mine, show, ROW, COL);

}
void test()
{
	int input;
	do
	{

		mnue();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1: game();
			break;
		case 2: printf("退出游戏！\n");
			break;
		default:printf("输入错误，请重新输入\n");
			break;
		}
	} while (input != 2);
}
int main()
{
	test();
	return 0;
}
