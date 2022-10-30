#include<stdio.h>
#include"game.h"
#define ROW   3
#define COL   3
void menu()
{
	printf("***************************\n");
	printf("***** 1.play 0.exit *******\n");
	printf("***************************\n");
}
void game()
{   
	char ret; 
   	char board[ROW][COL] = {0};
	initboarad(board,ROW,COL);
   //初始化棋盘
   DisplayBoard(board,ROW,COL);
   //打印棋盘  
   while(1)
   {
   	  //玩家下棋
		Playermove(board,ROW,COL) ;
		DisplayBoard(board,ROW,COL);
		//判断玩家输赢
		ret=IsWin(board,ROW,COL);
		if(ret=='*')
		{
			printf("玩家赢!\n");
			break; 
		}
		 if(ret=='+')
		{
			printf("游戏继续!\n"); 
		}
		else if(ret=='=')
		{
			printf("平局！\n");
			break;
		}
		Displayermove(board,ROW,COL);
		//电脑下棋
		DisplayBoard(board,ROW,COL);
		ret =IsWin(board,ROW,COL);
		if(ret=='#')
		{
			printf("电脑赢!\n");
			break; 
		}
		 if(ret=='+')
		{
			printf("游戏继续!\n"); 
		}
		else if(ret=='=')
		{
			printf("平局！\n");
			break;
		}
   }
} 
void test()
{
	srand((unsigned int)time(NULL));
	int input ; 
	do{ 
		menu();
		printf("请选择：>");
		scanf("%d",&input);
		switch(input)
		{
			case 1: game()  ;
				break;
			case 0: printf("退出游戏。\n"); 
			    break; 	
			default : printf("输入错误，请重新输入。\n");
				break;
				
		 } 
	}
	while(input);
}
main()
{  
    test();	
	return 0;
 } 

