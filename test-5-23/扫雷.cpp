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
	//��ʼ������ 
	/*Displayboard(mine,ROWS,COLS) ;*/
	Displayboard(show, ROWS, COLS);
	//��ӡ���� 
	Setmine(mine, ROW, COL);
	//������ 
	//Displayboard(mine, ROWS, COLS);
	Findmine(mine, show, ROW, COL);

}
void test()
{
	int input;
	do
	{

		mnue();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1: game();
			break;
		case 2: printf("�˳���Ϸ��\n");
			break;
		default:printf("�����������������\n");
			break;
		}
	} while (input != 2);
}
int main()
{
	test();
	return 0;
}
