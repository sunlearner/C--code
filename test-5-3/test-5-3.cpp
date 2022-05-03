#include<stdio.h>
//int Power_function(int n, int k)
//{
//	//（1）循环方式
//	//int i;
//	//int j = 1;
//	//for (i = 0; i < k; i++)   
//	//{
//	//	j = n * j;
//	//}
//	//return j;
//	//（2）递归
//	if (k ==0)
//	{
//		return 1;
//	}
//	else {
//		return  n* Power_function(n, k - 1);
//	}
//
//}
////编写一个函数实现n^k，使用递归实现
//int main()
//{
//	int n, k;
//	printf("请输入n、k的值：");
//	scanf("%d%d", &n, &k);
//	int count = Power_function(n,k);
//	printf("%d^%d = %d",n,k, count);
//	return 0; 
//}
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//int DigitSum(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	else {
//		return n % 10 + DigitSum(n / 10);
//	}
//}
//int main()
//{
//	int n;
//	printf("请输入一个非负整数n：");
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("组成%d的数字之和:%d",n,sum);
//	return 0;
//}
//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列
//要求：不能使用C函数库中的字符串操作函数
//void reverse_string(char arr[], int sz)
//{
//	char a;
//	if (arr[1] == '\0')
//	{
//		return;
//	}
//	else {
//		a = arr[0];
//		arr[0] = arr[sz - 2];
//		arr[sz - 2] = '\0';
//		reverse_string(arr + 1, sz - 2);
//		arr[sz - 2] = a;
//	}
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse_string(arr, sz);
//	printf("%s", arr);
//	return 0;
//}
//递归和非递归分别实现strlen
//int Strlen(char arr[])
//{
//	if (arr[1] == '\0')
//	{
//		return 1;
//	}
//	else {
//		return 1 + Strlen(arr + 1);
//	}
//}
//int Strlens(char arr[])
//{
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		i++;
//	}
//	return i;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	//(1)递归
//	//int count = Strlen(arr);
//	//(2)非递归
//	int count = Strlens(arr);
//	printf("%d", count);
//	return 0;
//}
//递归和非递归分别实现求n的阶乘
//int Factorial(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else {
//		return n * Factorial(n - 1);
//	}
//}
//int Factorials(int n)
//{
//	int j = 1;
//	while (n != 0)
//	{
//		j = j * n;
//		n--;
//	}
//	return  j;
//}
//int main()
//{
//	int n;
//	printf("请输入n的值：");
//	scanf("%d", &n);
//	//int count = Factorial(n); //递归法
//	int count = Factorials(n);
//	printf("%d! = %d", n,count);
//	return 0;
//}
//递归方式实现打印一个整数的每一位
void Eve_one(int n)
{
	if (n < 10)
	{
		printf("%d ", n);
		return;
	}
	else {
		Eve_one(n / 10);
	}
	printf("%d ", n % 10);
}
void Eve_ones(int n)
{
	if (n < 10)
	{
		printf("%d ", n);
		return;
	}
	else {
		printf("%d ", n % 10);
		Eve_one(n / 10);
	}
}
int main()
{
	int n;
	printf("请输入数值n：");
	scanf("%d", &n);
	printf("正序打印：");
	Eve_one(n);//正序打印
	printf("\n逆序打印：");
	Eve_ones(n);//逆序打印
	return 0;
}