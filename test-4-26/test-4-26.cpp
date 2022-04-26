#include<stdio.h>
//求两个数的最大公约数
//int Max_con_count(int x, int y)
//{
//	int i, j=1;
//	if (x > y)
//	{
//		if (x % y == 0)
//			return y;
//		for (i = 2; i <= y; i++)
//		{
//			if (y % i == 0 && x % i == 0)
//			{
//				y = y / i;
//				x = x / i;
//				j *= i;
//			}
//		}
//		return j;
//	}
//	else if (x < y)
//	{
//		if (y % x == 0)
//			return x;
//		for (i = 2; i <= y; i++)
//		{
//			if (y % i == 0 && x % i == 0)
//			{
//				y = y / i;
//				x = x / i;
//				j *= i;
//			}
//		}
//		return j;
//	}
//	else return 1;
//	 
//}
//int main()
//{
//	int x, y;
//	printf("请给x、y定值：");
//	scanf("%d%d", &x, &y);
//	int n = Max_con_count(x, y);
//	printf("%d", n);
//	return 0;
//}
// int Min_mul_count(int x, int y)
//{
//	int i,c=1;
//		c = x;
//	if (x > y)
//	{
//		if (x % y == 0)//x可以整除y
//			return x;
//		for (i = 2; i <= y; i++)
//		{
//			if (y % i == 0 && x % i == 0)
//			{
//				y = y / i;//x、y变为，除以他们的最大公约数后的值
//				x = x / i;
//			}
//		}
//		return c*y;//最小公倍数
//	}
//	else if (x < y)
//	{
//		if (y % x == 0)//y可以整除x
//			return y;
//		for (i = 2; i <= y; i++)
//		{
//			if (y % i == 0 && x % i == 0)
//			{
//				y = y / i;//x、y变为，除以他们的最大公约数后的值
//				x = x / i;
//			}
//		}
//		return c*y;//最小公倍数
//	}
//	else return x;//相等时
//	 
//}
////求两个数的最小公倍数
//int main()
//{
//	int x, y;
//	printf("x、y为：");
//	scanf("%d%d", &x, &y);
//	int n = Min_mul_count(x, y);
//	printf("%d和%d的最小公倍数为：%d", x,y,n);
//	return 0;
//}
//循环输出26个英文字母
//int main()
//{
//	int i;
//	char a;
//	printf("输入U显示大写英文字母，输入L显示小写英文字母，请输入：");
//	scanf("%c", &a);
//	if (a == 'U'|| a == 'u')
//	{
//		for (i = 65; i < 90; i++)//A对应ASSII值为65，Z对应ASSII值为90
//		{
//			printf("%c ", i);
//		}
//	}
//	else if (a == 'L'|| a== 'l')
//	{
//		for (i = 97; i < 122; i++)//a对应ASSII值为97，z对应ASSII值为122
//		{
//			printf("%c ", i);
//		}
//	}
//	else printf("输入错误！");
//
//	return 0;
//}
//求1000以内的回文数
//回文数：一个自然数各位数字反向排列后所得到的自然数与原数相等，例如：123321
//int Reverse_count(int i)
//{
//	int a=0;
//	while (i > 9)
//	{
//			a = a + (i % 10);
//			i = i / 10;
//			a *= 10;
//	}
//	return a + i;
//}
//int main()
//{
//	int i, j;
//	int c = 0;
//	for (i = 10; i < 1000; i++)
//	{
//		j=Reverse_count(i);
//		if (j == i)
//		{
//			printf("%6d ", j);
//			c++; 
//			//每行打印8个数
//			if (c % 8 == 0)
//			{
//				printf("\n");
//			}
//		}
//	}
//	printf("\n   1000以内的回文数共有%2d个", c);
//	return 0;
//}
#include<math.h>
//用函数判断是否为质数，是就返回1；不是就返回0.
int Primea_num(int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	if (i > sqrt(n))
		return 1;
}
//输入一个正数，输出他所有质数因子
int main()
{
	int n, i,j;
	printf("n的值为：");
	scanf("%d", &n);

	while (n!=1)
	{
		for (j = 2; j <= n; j++)//j可以等于n，以便于输出最后一位质数
		{
			if (n % j == 0 && j != 2)//n的非2因数；
			{
				i = Primea_num(j);//判断因数是否为质数，1为质数
				if (i == 1)
				{
					printf("%d ", j);
					n = n / j;
					break;
				}
			}
			else if (n % j == 0 && j == 2)
			{
					printf("%d ", j);
					n = n / j;
					break;	
			}
		}
	}
	return 0;
}