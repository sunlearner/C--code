#define ROW   3
#define COL   3
#include"game.h"
#include<stdio.h>
void initboarad(char board[ROW][COL],int row,int col)
{
	int i,j;
  	for(i=0;i<row;i++)
  	{
  		for(j=0;j<col;j++)
  		{
  			board[i][j]=' ';
		  }
	  }
}
void DisplayBoard(char board[ROW][COL],int row,int col)
{
	int i,j;
  	for(i=0;i<row;i++)
  	{
  		for(j=0;j<col;j++)
  		{
  			printf(" %c ",board[i][j]);
  			if(j<col-1)
  			{
  				printf("|");
			  }
		  }printf("\n");
		  if(i<row-1)
		  {
		  	for(j=0;j<col;j++)
		  	{
			  	printf("---");
		  		if(j<col-1)
		  		{
		  		printf("|");
			  		}
			  }
			  printf("\n");
		  }
	  }	
}
void Playermove(char board[ROW][COL],int row,int col)
{
	int i,j,boardd[ROW][COL];
	printf("玩家走:>\n");
	printf("请输入要走位置的坐标：");
	scanf("%d%d",&i,&j);
	if(i>0&&i<=row && j>0 && j<=col)
	{	
	     if(board[i-1][j-1]!=' ')
		{	
			printf("该坐标已被占用，请重新输入！\n"); 
			Playermove(board,row,col); 
			}	
		if (board[i-1][j-1]==' ')
		{
			board[i-1][j-1]='*';
		}	
	}
	else
	{
		printf("坐标非法，请重新输入！\n"); 
		Playermove(board,row,col); 
	}	
}
void Displayermove(char board[ROW][COL],int row,int col)
{
	int i,j;
	printf("电脑走:>\n");
	while(1)
	{ 
		i=rand() % row;
		j=rand() % col;
		if(board[i][j]==' ')
		{
			board[i][j]='#';
			printf("\n");
			break;
		}
	}
	
}
int IsFull(char board[ROW][COL],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
		{
			if(board[i][j]==' ')
			 return 0;
		}
	return 1;	
}
char IsWin(char board[ROW][COL],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		if(board[i][0]==board[i][1] && board[i][0]==board[i][2]&&board[i][1]==board[i][2]!=' ')
		return board[i][0];
	}
	for(j=0;j<col;j++)
	{
		if(board[0][j]==board[1][j] && board[0][j]==board[2][j]&&board[1][j]==board[2][j]!=' ')
		return board[0][j];
	}
	if(board[0][0]==board[1][1] && board[0][0]==board[2][2]&&board[1][1]==board[2][2]!=' ')
	  	return board[0][0];
	if(board[0][2]==board[1][1] && board[0][2]==board[2][0]&&board[1][1]==board[2][0]!=' ') 
		 return board[0][0];
	else if(1==IsFull(board,row,col))
		return '=';	
	return '+';
			 
 } 
