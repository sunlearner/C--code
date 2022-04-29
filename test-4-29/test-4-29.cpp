#include<stdio.h>
//给定两个整形变量的值，将两个值的内容进行交换。
//不允许创建临时变量，交换两个数的内容
//int main()
//{
//	int i,j;
//	printf("请输入i、j的值:");
//	scanf("%d%d", &i,&j);
//	//i = i - j;      //通过加减法来进行转换
//	//j = i + j;
//	//i = j - i;
//	printf("交换后i为：%d\n交换后j为：%d", i, j);
//	return 0;
//}
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//int main()
//{
//	int A[] = { 1,2,3,4,5 };
//	int B[] = { 6,7,8,9,10 };
//	int c,d;
//	int sz = sizeof(A) / sizeof(A[0]);
//	printf("交换后A数组为：");
//	for (c = 0; c < sz; c++)
//	{
//		d = A[c];
//		A[c] = B[c];
//		B[c] = d;
//		printf("%d ", A[c] );//先打印A数组
//	}
//	printf("\n交换后B数组为：");
//	for (c = 0; c < sz; c++)
//	{
//		printf("%d ", B[c]);//在打印B数组，他们不能同时打印
//	}
//	return 0;
//}
// 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
//int main()
//{
//	int i;
//	float num1 = 0;
//	float num2 = 0;
//	for (i = 1; i < 100; i+=2)
//	{
//		num1 = 1 / i + num1;
//	}
//	for (i = 2; i <= 100; i += 2)
//	{
//		num2 = 1 / i + num2;
//	}
//	printf("%lf", num1-num2);
//	return 0;
//}
//编写程序数一下 1到 100 的所有整数中出现多少个数字9。
int main()
{
	int i, j=0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9 || i / 10 == 9)
		{
			j++;
			printf("%-2d ", i);
			if (i % 10 == 9 && i / 10 == 9)
			{
				j++;
			}
		}
	}
	printf("\n1到 100 的所有整数中共出现了：%d", j);
	return 0;
}
