#include<stdio.h>
//int main()
//{
//	int n, i, j, k, t;
//	int YangHui[21] = { 0,1 };
//	printf("请输入杨辉三角形的行数（1 ~ 20）：");
//	scanf("%d", &n);
//	//杨辉三角形
//	for (i = 1; i <= n; i++)
//	{
//		for (j = n-i; j > 0; j--)
//		{
//			printf("  ");    //打印空格
//		}
//		t = 0;
//		for (j = 1; j <= i; j++)
//		{
//			k = YangHui[j];
//			YangHui[j] = k + t;
//			t = k;
//			printf("%-4d ", YangHui[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
// 
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值是value的二进制位模式从左到右翻转后的值。
unsigned int reverse_bit(unsigned int n)
{
	int i,a,b;
	for (i = 1; i < 16; i++)
	{
		a = (n >> (32 - i))&1;
		b = (n >>(i-1)) & 1 ;
		if (a == 1 && b == 0 )
		{
			n = n + (1<<(i-1));
			n = n ^ (1 << (32 - i));
		}
		if (a == 0 && b == 1)
		{
			n = n - (1 << (i-1));
			n = n ^ (1 << ( 32 - i));
		}
	}
	return n;
}
int main()
{
	int n;
	printf("请输入要将二进制位模式从左到右翻转的数：");
	scanf("%d", &n);
	unsigned int count = reverse_bit(n);
	printf("%u", count);
	return 0;
}
