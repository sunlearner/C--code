#include<stdio.h>
//写一个函数返回参数二进制中 1 的个数
//比如： 15       0000 1111       4 个 1
int  Count_one_bits(unsigned int n)
{
	int i;
	int count=0;
	//方法1 n/2法
	//while (n)
	//{
	//	count = count + n % 2;
	//	n = n / 2;//10100  1010 101 10  1  每除一次2就少一位
	//}
	// 方法2 按位与
	//for (i = 0; i < 32; i++)
	//{
	//	int j = (n>>i) & 1;
	//	if (j == 1)
	//	{
	//		count++;
	//	}
	//}
	//方法2的优化
	do {
			count++;
	} while (n &= n - 1);

	return count;
}
int main()
{
	int n;
	printf("请输入数值n：");
	scanf("%d", &n);
	int count = Count_one_bits(n);
	printf("%d的二进制中共有 %d 个 1",n,count);
	return 0;
}
//获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列
//int main()
//{
//	int n,i;
//	printf("请输入数值n：");
//	scanf("%d", &n);
//	printf("奇数位二进制序列为：");
//	for (i = 31; i > 0; i -= 2)
//	{
//		int j = (n >> (i-1)) & 1;
//		if (j == 1)
//		{
//			printf("%d ", j);
//		}
//		else {
//			printf("0 ");
//		}
//	}
//	printf("\n偶数位二进制序列为：");
//	for (i = 32; i > 0; i -= 2)
//	{
//		int j = (n >> (i-1)) & 1;
//		if (j == 1)
//		{
//			printf("%d ", j);
//		}
//		else {
//			printf("0 ");
//		}
//	}
//	return 0;
//}
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同
//输入例子: 1999 2299    输出例子:7
//int Dif_one(unsigned int m,unsigned int n)
//{
//	int i;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		int j = ((m >> i) &1)^( (n >> i)&1);
//		if (j == 1)
//		{
//			count++ ;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int m, n;
//	printf("请分别输入m、和 n的值：");
//	scanf("%d%d", &m, &n);
//	int count = Dif_one(m, n);
//	printf("不同个位(bit)有：%d", count);
//	return 0;
//}