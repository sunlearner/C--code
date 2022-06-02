#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"list.h"
void mnue()
{
	printf("*********************************\n");
	printf("******1.添加       2.删除********\n");
	printf("******3.查找       4.修改********\n");
	printf("******5.显示       6.排列********\n");
	printf("************0.退出***************\n");
}
int main()
{
	struct list con;
	int input = 0;
	//初始化通讯录
	Initialization(&con);
	do
	{
		mnue();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:Add_list(&con);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			Show_list(&con);
			break;
		case 6:

			break;
		case 0:
			printf("退出通讯录!");
			break;
		default:
			printf("输入错误！");
			break;
		}
	} while (input);
	return 0;
}