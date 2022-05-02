#include<stdio.h>
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、(做不到）
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//void init(int arr[],int n)//初始化数组
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void reverse(int arr[], int n)
//{
//	int i,j;
//	int arr1[20] = { 0 };
//	/*for (i = 0; i < n; i++)
//	{
//		arr1[i] = arr[n - 1 - i];
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr1[i]);
//	}*/
//	for (i = 0; i < n/2; i++)
//	{
//		j = arr[i];
//		arr[i] = arr[n - 1 - i];
//		arr[n - i - 1] = j;
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[20] = { 0 };
//	int n,i;
//	printf("请确定输入n的个数：");
//	scanf("%d", &n);
//	init(arr, n);//初始化数组
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	reverse(arr, n);//数组元素的逆置
//	return 0;
//}
//递归和非递归分别实现求第n个斐波那契数
int Fibonacci(int n)
{
	int count = 0 ;
	int count1 = 1;
	int count2 = 1;
	if (n == 1 || n == 2)
	{
		return 1;
	}
	while (n != 2)
	{
		count = count1 + count2;
		count1 = count2;
		count2 = count;
		n--;

	}
	return count;
}
int Fibonacci_s(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
		return  Fibonacci_s(n - 1) + Fibonacci_s(n - 2);
}
int main()
{
	int n, count;
	printf("n的值为：");
	scanf("%d", &n);
	count = Fibonacci(n);//非递归
	count = Fibonacci_s(n);//递归
	printf("%d", count);
	return 0;
}