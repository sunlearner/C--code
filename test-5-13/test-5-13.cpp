#include<stdio.h>
//在屏幕上打印杨辉三角。
//1          
//1 1    
//1 2 1 
//1 3 3 1
//void Yang_Hui(int row)
//{
//	int i, j;
//	int arr[20][20] = { 0 };
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < row-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <=i; j++)
//		{
//			//打印直角边和斜边的1
//			if (j == 0||j==i)
//			{
//				arr[i][j] = 1;
//				printf("%d ",arr[i][j]);
//			}
//			//下边的等于上面两个数的和
//			else {
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//				printf("%d ", arr[i][j]);
//			}
//
//		}
//		printf("\n");
//	}
//	return;
//}
//int main()
//{
//	int row;
//	printf("请输入打印杨辉三角的行数：");
//	scanf("%d", &row);
//	Yang_Hui(row);
//	return 0;
//}
//实现函数qsort冒泡排序
//void qsort(int* arr, int sz)
//{
//	int i, j;
//	for (i = 0; i < sz ; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (*(arr + j) > *(arr + j + 1))
//			{
//				int a = *(arr + j);
//				*(arr + j) = *(arr + j + 1);
//				*(arr + j + 1)=a;
//			}
//		}
//	}
//}
//void print(int* arr, int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[]= { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz);
//	printf("从大到小排列后为：");
//	print(arr,sz);
//	return 0;
//}
//输出什么？
//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;//反码为：11111111 因为c为无符号数，所以c变为255；
//	printf("a=%d,b=%d,c=%d", a, b, c);//a=-1;b=-1;c=255
//	return 0;
//}
//下面程序输出什么？
//int main()
//{
//	char a = -128;//char的范围-128~255
//	printf("%u\n", a);//%u为：无符号十进制
//	return 0;
//}
int main()
{
	char a = 128;
	printf("%u\n", a);  //a=4294967168
	//先整型提升在无符号输出，而不是先变2为无符号数在整型提升；所以a不为128；
	return 0;
}
//进行整形提升：有符号的:整型提升时是按照变量的补码被截断时的最高位是什么进行补位的
//如果截断后最高位即最左面的一位数为 1 则在最高位前补 1 ,
//如果最高位是 0 则在前面补 0 ,补够32位即int类型即可
//无符号的:直接在被截断的前面补 0 即可