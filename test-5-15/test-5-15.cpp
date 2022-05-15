#include<stdio.h>
//杨氏矩阵
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在;
//时间复杂度小于O(N);
//int Findnum(int (*arr)[3], int n, int* px, int* py)
// 数组指针中存放的应该是数组的地址
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x < *px && y >= 0)
//	{
//		if (arr[x][y] > n)
//		{
//			y--;
//		}
//		else if (arr[x][y] < n)
//		{
//			x++;
//		}
//		else {
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{2,3,4},{3,4,5} };
//	int x = 3;
//	int y = 3;
//	printf("请输入要查找的数：");
//	int n;
//	scanf("%d", &n);
//	int set = Findnum(arr, n, &x, &y);
//	if (set == 1)
//	{
//		printf("找到了！\n");
//		printf("下标为：%d，%d", x, y);
//	}
//	else {
//		printf("没有找到！");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[5];//数组
//	int* parr1[10];//指针数组；数组中存放的是指针
//	int(*parr2)[10];//数组指针；该指针可以指向一个数组，这个数组10个元素；每个元素是int类型
//	int(*parr3[10])[5];//数组指针的数组；parr3是一个存放指针的数组；该数组存放10个数值指针；
//	//每个指针可以指向一个数组，被指向的数组是5个元素；每个元素是int类型
//	return 0;
//}
//#include <stdio.h>
//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}
//void test(int* arr)//ok?
//{}
//void test2(int* arr[20])//ok?
//{}
//void test2(int** arr)//ok?
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}
//void test(int arr[3][5])//ok？可以
//{}
//void test(int arr[][])//ok？不行，纵行不能为空；
//{}
//void test(int arr[][5])//ok？可以
//{}
//总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
//因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
//这样才方便运算。
//void test(int* arr)//ok？不可以
//{}
//void test(int* arr[5])//ok？不可以，这是一个指针数组
//{}
//void test(int(*arr)[5])//ok？可以，数组指针
//{}
//void test(int** arr)//ok？不可以，二级指针
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}
//void print(int* p, int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//void print1(char* p, int sz) {
//	int i = 0;
//	for (i = 0; i < sz*4; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char* p = (char*)arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
////	print(p, sz);
//	print1(p, sz);//当int*强制转换成char*；p指针就一个字节一个字节的打印；
//	return 0;
//}
//void test(int** ptr) {
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
// //他们是等价的
//	return 0;
//}
void test()
{
	printf("hehe\n");
}
int main()
{
	printf("%p\n", test);// 00B413CA
	printf("%p\n", &test); //00B413CA
	//说明test=&test；
	return 0;
}
