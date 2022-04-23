#include<stdio.h>

//输入并打印四个同学的数学、语、英语、科学的成绩(二位数组)
//int main()
//{
//	int student[4][5], i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &student[i][j]);
//		}
//	}
//	printf("     数学 语文 英语 科学 平均\n");
//	for (i = 0; i < 3; i++)
//	{
//		student[i][4] = (student[i][0] + student[i][1] + student[i][2] + student[i][3]) / 4;
//	}
//	for (i = 0; i < 4; i++)
//	{
//		student[3][i] = (student[0][i] + student[1][i] + student[2][i]) / 3;
//	}
//	student[3][4] = (student[0][4] + student[1][4] + student[2][4]) * 4;
//	for (i = 0; i < 4; i++)
//	{
//		switch (i)
//		{
//		case 0:printf("小明："); break;
//		case 1:printf("小敏："); break;
//		case 2:printf("小悯："); break;
//		case 3:printf("平均："); break;
//		}
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d   ", student[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include<string.h>
//9*9乘法表
//int main()
//{
//	int a, b, c;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			c = a * b;
//			printf("%d*%d=%-3d", a, b, c);
//		}printf("\n");
//	}
//	return 0;
//}
//用1、2、3、4组成每位都不同的三位数
//int main()
//{
//	int a, b, c, count = 0;
//	for (a = 1; a <= 4; a++)
//		for (b = 1; b <= 4; b++)
//			for (c = 1; c <= 4; c++)
//				if (a != b && b != c && a != c)
//				{
//					printf("%d%d%d  ", a, b, c);
//					count++;
//				}
//	printf("\n");
//	printf("%d", count);
//	return 0;
//}
//int is_prime(int n)
//{
//    int j = 0;
//    for (j = 2; j < n; j++)
//    {
//        if (n % j == 0)
//            break;
//    }
//    if (j >= n)
//    {
//        return 1;
//    }
//    return 0;
//
//}
////用函数求100到200之间的质素
//int main()
//{
//    int i, n = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        if (is_prime(i) == 1)
//        {
//            printf("%d ", i);
//            n++;
//        }
//    }
//    printf("\n%d", n);
//    return 0;
//}
//求100到200之间的质素
//int main()
//{
//    int i, j, n = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        for (j = 2; j <= i; j++)
//        {
//            if (i % j == 0)
//                break;
//        }
//        if (j >= i / 2)
//        {
//            printf("%d  ", i);
//            n++;
//            if (n % 8 == 0)
//            {
//                printf("\n%d", n);
//            }
//        }        
//    }
//    printf("\n100到200之间的质素为：%d", n);
//    return 0;
//}
//用指针比较两个数的大小
//int main()
//{
//	int x, y;
//	printf("请输入两个整数：");
//	scanf("%d%d", &x, &y);
//	int* a = &x;
//	int* b = &y;
//	if (x < y)
//	{
//		int* c = a; a = b; b = c;
//	}
//	printf("最大的整数是：%d", *a);
//	return 0;
//}
//循环比较两个数的大小
int main()
{
	int i, j;
	printf("请输入两个数值：");
	scanf("%d%d", &i, &j);
	printf("最大值为：");
	if (i < j)
		printf("%d", j);
	else if (i >= j)
		printf("%d", i);
	return 0;
}