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
   //��ʼ������
   DisplayBoard(board,ROW,COL);
   //��ӡ����  
   while(1)
   {
   	  //�������
		Playermove(board,ROW,COL) ;
		DisplayBoard(board,ROW,COL);
		//�ж������Ӯ
		ret=IsWin(board,ROW,COL);
		if(ret=='*')
		{
			printf("���Ӯ!\n");
			break; 
		}
		 if(ret=='+')
		{
			printf("��Ϸ����!\n"); 
		}
		else if(ret=='=')
		{
			printf("ƽ�֣�\n");
			break;
		}
		Displayermove(board,ROW,COL);
		//��������
		DisplayBoard(board,ROW,COL);
		ret =IsWin(board,ROW,COL);
		if(ret=='#')
		{
			printf("����Ӯ!\n");
			break; 
		}
		 if(ret=='+')
		{
			printf("��Ϸ����!\n"); 
		}
		else if(ret=='=')
		{
			printf("ƽ�֣�\n");
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
		printf("��ѡ��>");
		scanf("%d",&input);
		switch(input)
		{
			case 1: game()  ;
				break;
			case 0: printf("�˳���Ϸ��\n"); 
			    break; 	
			default : printf("����������������롣\n");
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

