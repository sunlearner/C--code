#include<stdio.h>
//n*n的乘法口诀
//void Sen(int i)
//{
//	int a, b;
//	for (a = 1; a <= i; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			printf("%-2d*%-2d=%-3d ", a, b, a * b);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int i;
//	printf("请输入乘法口诀n次数：");
//	scanf("%d", &i);
//	Sen(i);
//	return 0;
//}
//void Eve_one(int i)
//{
//	int j;
//	printf("逆序打印为：");
//	while (i > 0)
//	{
//		j = i % 10;
//		i = i / 10;
//		printf("%d ", j);
//	}
//}
//void Eve_ones(int i)
//{
//	if (i <= 9 && i >= 0)
//	{
//		printf("%d", i);
//	}
//	else if (i < 0)
//	{
//		Eve_ones(-i);
//	}
//	else {
//		printf("%d ", i % 10);
//		Eve_ones(i / 10);
//	}
//}
//void eve_one(int i)
//{
//	if (i > 9)
//	{
//		eve_one(i / 10);
//	}
//	printf("%d ", i % 10);
//}
//int main()
//{
//	int i;
//	printf("请输入一个五位及五位以上的数值：");
//	scanf("%d", &i);
//	//Eve_one()循环打印
//	//Eve_one(i);
//	printf("逆序打印该数的每一位：");
//	Eve_ones(i);//递归
//	printf("\n");
//	printf("正序打印该数的每一位：");
//	eve_one(i);//递归
//	return 0;
//}
//阶乘(非递归）
//	int Factor(int i)
//{
//	int a, b = 1;
//	for (a = 1; a <= i; a++)
//	{
//		b *= a;
//	}
//	return b;
//}
////阶乘 (递归） 
//int Factors(int i)
//{
//	if (i == 1)
//		return 1;
//	else
//		return  i * Factors(i - 1);
//}
//int main()
//{
//	int i;
//	printf("阶乘n为：");
//	scanf("%d", &i);
//	int counts=Factor(i);//非递归 
//	//int counts = Factors(i);//递归 
//	printf("n的阶乘为：%d", counts);
//	return 0;
//}
//void Reverse_string(char* ch)
//{
//	int sz = 0;
//	while (*(ch + sz) != '\0')
//	{
//		sz++;
//	}
//	int left = 0;
//	int right = sz;
//	char rem;
//	while (left < right)
//	{
//		rem = *(ch + left);
//		*(ch + left) = *(ch + right - 1);
//		*(ch + right - 1) = rem;
//		left++;
//		right--;
//	}
//}
//void Reverse_strings(char* ch)
//{
//	int sz = 0;
//	char arr;
//	while (*(ch + sz) != '\0')
//	{
//		sz++;
//	}
//	int left = 0;
//	int right = sz;
//	if (left < right)
//	{
//		arr = *(ch + left);
//		*(ch + left) = *(ch + right - 1);
//		*(ch + right - 1) = '\0';
//		Reverse_strings(ch + 1);
//
//	}	*(ch + right - 1) = arr;
//}
////逆序打印字符串
//int main()
//{
//	int i;
//	char ch[10] = "abcdefg";
//	Reverse_string(ch);//非递归 
////Reverse_strings(ch);//递归 
//	int sz = sizeof(ch) / sizeof(ch[0]);
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%c ", ch[i]);
//	}*/
//	printf("%2s", ch);
//	return 0;
//}
//int DigitSum(unsigned int i)
//{
//    if (i < 10)
//        return i;
//    else {
//        return i % 10 + DigitSum(i / 10);
//    }
//}
////将输入数值的每一位相加求和
//int main()
//{
//    unsigned int i;
//    printf("请输入数值n：");
//    scanf("%d", &i);
//    int mun = DigitSum(i);
//    printf("%d", mun);
//    return 0;
//}
float Pow(int n, int k)
//返回为float类型是因为k可以为负数
{
	if (k < 0)
	{
		return 1.0 / Pow(n, -k);
	}
	else if (k == 0) {
		return 1;
	}
	else {
		return n * Pow(n, k - 1);
	}
}
//求n~k
int main()
{
	int n, k;
	printf("请分别输入n、k的数值：");
	scanf("%d %d", &n, &k);
	float count = Pow(n, k);
	printf("%.3lf", count);
	return 0;
}