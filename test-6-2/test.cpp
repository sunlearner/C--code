#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"list.h"
void mnue()
{
	printf("*********************************\n");
	printf("******1.���       2.ɾ��********\n");
	printf("******3.����       4.�޸�********\n");
	printf("******5.��ʾ       6.����********\n");
	printf("************0.�˳�***************\n");
}
int main()
{
	struct list con;
	int input = 0;
	//��ʼ��ͨѶ¼
	Initialization(&con);
	do
	{
		mnue();
		printf("��ѡ��:>");
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
			printf("�˳�ͨѶ¼!");
			break;
		default:
			printf("�������");
			break;
		}
	} while (input);
	return 0;
}