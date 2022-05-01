#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	int a, b;
//	printf("请输入a的值：");
//	scanf("%d", &a);
//	b = 5 * a + 4 * a * 10 + 3 * a * 100 + 2 * a * 1000 + 1 * a * 10000;
//	printf("Sn =a + aa + aaa + aaaa + aaaaa = %d",b );
//	return 0;
//}
//完成猜数字游戏。
//void menu()
//{
//	printf("****************************\n");
//	printf("********   1 .PLAY   *******\n");
//	printf("********   2 .EXIT   *******\n");
//	printf("****************************\n");
//}
//void game()
//{
//	int count;
//	int i, j=0;
//	count = rand()% 100 ;
//	while (1)
//	{
//		printf("请输入你所猜的数：");
//		scanf("%d", &i);
//		if (i > count)
//		{
//			printf("猜大了！\n");
//			j++;
//		}
//		else if (i < count)
//		{
//			printf("猜小了！\n");
//			j++;
//		}
//		else
//		{
//			j++;
//			printf("恭喜你猜对了！\n你一共猜了%d次。\n",j);
//			break;
//		}
//	}
//}
//int main()
//{
//
//	int i = 0, j;
//	menu();//打印菜单
//	srand((unsigned)time(NULL));
//	while (i!=2)  //判断是进行还是结束游戏
//	{
//		printf("请选择:>");
//		scanf("%d", &i);
//		switch (i)
//		{
//		case 1:
//			game();  
//			break;
//		case 2:
//			printf("退出游戏！\n");
//			break;
//		default :
//			printf("输入错误，请重新选择！\n");
//			break;
//		}
//	}
//	return 0;
//}
//写代码可以在整型有序数组中查找想要的数字，找到了返回下标，找不到返回 - 1.（折半查找）
//void Find_count(int arr[], int sz,int i)
//{
//	int left = 0;
//	int right = sz;
//	int mid;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > i)
//		{
//			right = mid-1;  //注意一定要是mid-1，如果是mid那就会陷入死循环中
//		}
//		else if (arr[mid] < i)//如果是mid，能找到不会出错，但是找不到就会陷入死循环
//		{
//			left = mid+1;  //注意一定要是mid+1，如果是mid那就会陷入死循环中
//		}
//		else {
//			printf("找到了！\n下标为:%d \n", mid);
//				return;
//		}
//
//	}
//	printf("没有找到！");
//}
//int main()
//{       
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12 }; //创建整型有序数组
//	int i ;  //想要查找的数字
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("arr[] = ");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n请输入要查找的数值：");
//	scanf("%d", &i);
//	Find_count(arr, sz,i);
//	return 0;
//}
//编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//int main()
//{
//	int pw = 123456;
//	int possword = 0;
//	int ai = 0, b;
//	for (b = 1; b < 4; b++)
//	{
//		ai = 1;
//		printf("请输入密码:>");
//		scanf("%d", &possword);
//		while (possword != pw)
//		{
//			printf("密码错误，请重新输入!\n");
//			printf("请输入密码:>");
//			scanf("%d", &possword);
//			ai++;
//			if (ai == 3)
//			{
//				printf("退出程序！");
//				return 0;
//			}
//		}
//	}
//	printf("密码正确，登录成功！");
//	return 0;
//}
//编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch > 64 && ch < 91)
		{
			putchar(ch + 32);
			printf("\n");
			getchar();
		}
		else if (ch > 96 && ch < 123)
		{
			putchar(ch - 32);
			printf("\n");
			getchar();
		}
		else
		{
			getchar();
			printf("\n");
		}
	}
	return 0;
}