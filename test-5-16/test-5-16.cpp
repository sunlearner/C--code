#include<stdio.h>
//int add(int x, int y)
//{
//	return x+y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
////int main()
////{
////	int x, y;
////	int input = 1;
////	int ret = 0;
////	while (input)
////	{
////		printf("************************\n");
////		printf("    1.add   2.sub		\n");
////		printf("    3.mul   4.div		\n");
////		printf("       0.exit			\n");
////		printf("************************\n");
////		printf("请选择：");
////		scanf("%d", &input);
////		switch (input)
////		{
////			case 1:
////			{
////				printf("请输入：");
////				scanf("%d%d", &x, &y);
////				ret=add(x, y);
////				printf("%d +%d = %d \n", x, y, ret);
////				break;
////			}
////			case 2:
////			{
////				printf("请输入：");
////				scanf("%d%d", &x, &y);
////				ret = sub(x, y);
////				printf("%d - %d = %d\n ", x, y, ret);
////				break;
////			}
////			case 3:
////			{
////				printf("请输入：");
////				scanf("%d%d", &x, &y);
////				ret = mul(x, y);
////				printf("%d * %d = %d \n", x, y, ret);
////				break;
////			}
////			case 4:
////			{
////				printf("请输入：");
////				scanf("%d%d", &x, &y);
////				ret = div(x, y);
////				printf("%d / %d = %d \n", x, y, ret);
////				break;
////			}
////			default :
////			{
////				printf("输入错误，重新输入！\n");
////				break;
////			}
////		}
////	}
////	return 0;
////}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int (*p[5])(int, int) = { 0,add,sub,mul,div };//函数指针数组
//	while (input)
//	{
//		printf("************************\n");
//		printf("    1.add   2.sub		\n");
//		printf("    3.mul   4.div		\n");
//		printf("       0.exit			\n");
//		printf("************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input < 5 && input>0)
//		{
//			printf("请输入：");
//			scanf("%d%d", &x, &y);
//			ret = (*p[input])(x, y);
//			printf("结果为：%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("安全退出！");
//			break;
//		}
//		else
//		{
//			printf("输入错误，重新输入！\n");
//		}
//	}
//	return 0;
//}
//qosrt函数的使用者得实现一个比较函数
//#include<stdlib.h>
int int_cmp(const void* p1, const void* p2) {
	return (*(int*)p1 - *(int*)p2);
}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int i = 0;
//
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//		//数组名   个数						字节大小       函数
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//实现函数qsort
//void Exchange(char* base1, char* base2,int size)
//{
//	int i;
//	for (i = 0; i < size; i++)
//	{
//		char num = *(base1 + i);
//		*(base1 + i) = *(base2 + i);
//		*(base2 + i) = num;
//	}
//	return;
//}
//void qsort(void* base, int count, int size, int(*cmp)(const void*,const void*))
//{
//	int i, j;
//	for (i = 0; i < count; i++)
//	{
//		for (j = 0; j < count- i-1; j++)
//		{
//			int ret = (*cmp)((char*)base + j*size,(char*) base + (j + 1)*size);
//			if (ret > 0)
//			{
//				Exchange((char*)base + j * size, (char*)base + (j + 1) * size,size);
//			}
//		}
//	}
//	return ;
//}
//void qsort(void* base, int count, int size, int(*cmp)(const void*, const void*))
//{
//	int i, j;
//	for (i = 0; i < count; i++)
//	{
//		for (j = 0; j < count- i-1; j++)
//		{
//			int ret = (*cmp)((char*)base + j*size,(char*) base + (j + 1)*size);
//			if (ret > 0)
//			{
//				int i;
//				for (i = 0; i < size; i++)
//				{
//					char num = *((char*)base + j * size + i);
//					*((char*)base + j * size + i) = *((char*)base + (j + 1) * size + i);
//					*((char*)base + (j + 1) * size + i) = num;
//				}
//			}
//		}
//	}
//	return ;
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int i = 0;
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e'};//5个元素没有\0
//	char arr1[] = "abcde";//6个元素，有个\0；
//	int sz1 = strlen(arr1);//5
//	int sz = strlen(arr);//随机数  19
//	int sn = sizeof(arr) / sizeof(arr[0]); // 5
//	int sn1 = sizeof(arr1) / sizeof(arr1[0]);//6  加上\0
//	printf("%d", sz);
//	return 0;
//}
#include<string.h>
//int main()
//{
	//一维数组
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//4*4=16
	//printf("%d\n", sizeof(a + 0));//数组名代表的是首元素地址；第一个元素的地址大小；4
	//printf("%d\n", sizeof(*a));//4
	//printf("%d\n", sizeof(a + 1));//第二个元素的地址大小；4
	//printf("%d\n", sizeof(a[1]));//整型2//4
	//printf("%d\n", sizeof(&a));//&a代表的是取出了整个数组的地址；但是他是一个指针；指针的大小就是4；
	//printf("%d\n", sizeof(*&a));//整个数组的大小
	//printf("%d\n", sizeof(&a + 1));//4
	//printf("%d\n", sizeof(&a[0]));//4 第一个元素地址的大小
	//printf("%d\n", sizeof(&a[0] + 1));//第二个元素地址的大小 4
	//return 0;
	//字符数组
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//整个字符串的大小；1*6=6；
	//printf("%d\n", sizeof(arr + 0));//第一个元素地址的大小；4
	//printf("%d\n", sizeof(*arr));//第一个元素的大小；char类型的1个字节；1
	//printf("%d\n", sizeof(arr[1]));//第二个元素的大小/1
	//printf("%d\n", sizeof(&arr));//地址/4
	//printf("%d\n", sizeof(&arr + 1));//地址 4
	//printf("%d\n", sizeof(&arr[0] + 1));//第二个元素的地址/4
	//strlen求字符串的长度；只有遇到\0才会停止
	//printf("%d\n", strlen(arr));//随机数  19
	//printf("%d\n", strlen(arr + 0));//随机数  19
	////printf("%d\n", strlen(*arr));//error
	////printf("%d\n", strlen(arr[1]));//error
	////printf("%d\n", strlen(&arr));//error  &arr的类型为：char(*p)[6]（数组指针）；
	////printf("%d\n", strlen(p+1);//error	&arr的类型为：char(*p)[6]（数组指针）
	//printf("%d\n", strlen(&arr[0] + 1));//随机数（-1）  18
	//char arr[] = "abcdef";
	////printf("%d\n", sizeof(arr));//1*7=7 该字符串含\0；
	////printf("%d\n", sizeof(arr + 0)); //地址 4
	////printf("%d\n", sizeof(*arr));//第一个元素的大小/1
	////printf("%d\n", sizeof(arr[1]));//第二个元素的大小/1
	////printf("%d\n", sizeof(&arr));//指针/4
	////printf("%d\n", sizeof(&arr + 1));//指针/4
	////printf("%d\n", sizeof(&arr[0] + 1));//第二个元素的地址/4
	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));//error
	////printf("%d\n", strlen(arr[1]));//error  &arr的类型为：char(*p)[6]（数组指针）；不兼容
	////printf("%d\n", strlen(&arr));//error  &arr的类型为：char(*p)[6]（数组指针）；不兼容
	////printf("%d\n", strlen(&arr + 1));
	//printf("%d\n", strlen(&arr[0] + 1));//5
//}
//int main()
//{
//	/*const char* p = "abcdef";*/
//	//printf("%d\n", sizeof(p));//地址/4
//	//printf("%d\n", sizeof(p + 1));//地址/4
//	//printf("%d\n", sizeof(*p));//1 求字符的大小
//	//printf("%d\n", sizeof(p[0]));//第一个元素的大小 1
//	//printf("%d\n", sizeof(&p));//二级指针的大小；4
//	//printf("%d\n", sizeof(&p + 1));//指针/4
//	//printf("%d\n", sizeof(&p[0] + 1));//4
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p + 1));//5
//	////printf("%d\n", strlen(*p));//err
//	////printf("%d\n", strlen(p[0]));//err
//	////printf("%d\n", strlen(&p));//err
//	////printf("%d\n", strlen(&p + 1));//err
//	//printf("%d\n", strlen(&p[0] + 1));//5
//	//return 0;
//	//二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//第一行的地址；48
//	printf("%d\n", sizeof(a[0][0]));//第一行第一列的元素大小/4
//	printf("%d\n", sizeof(a[0]));//第一行所有元素的大小/16
//	printf("%d\n", sizeof(a[0] + 1));//第一行第二个元素的地址；4；/
//	printf("%d\n", sizeof(*(a[0] + 1)));//第一行第二列元素的大小/4
//	printf("%d\n", sizeof(a + 1));//第二行地址4
//	printf("%d\n", sizeof(*(a + 1)));//第二行的大小/16
//	printf("%d\n", sizeof(&a[0] + 1));//第二行的地址/4
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16//sizeof(a[3])3这个数字可以是任何值；
//	//这只是一种表示；不会访问内存
//	//a[0]=一维数组名；
//}
//程序的结果是什么？
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2  5
//	return 0;
//}
//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//假设p 的值为0x100000。 如下表表达式的值分别为多少？
//已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1); //0x100014;
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001;
//	//将p转换为整型，整型+1就是+1；
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004;
//	//指针+1代表跳过与之相同类型大小的字节
//	return 0;
//}
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };//小端
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	//将数组a的首元素地址转换为整型；+1既整型+1
//	//在将加和的数转换成地址；既相当于a的首元素地址相右移动一个字节；
//	//根据小端存储；可知输出结果为：2000000
//	printf("%x,%x", ptr1[-1], *ptr2); //4    2000000
//	return 0;
//}
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//里面是（）而不是{}；所以答案不是0；
//	//逗号语句，第一个结果为1；依次是3，5；
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);//1
//	return 0;
//}
//int main()
//{
//	//int a[5][5];
//	//int(*p)[4] = { 0 };
//	int arr[] = { 1,2,3,4,5 };
//	//p = a;
//	//printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//4 /-4
//	int* p = &(arr[4]);
//	int* p1 = &arr[0];
//	printf("%d",p1-p);
//	/*指针- 指针的结果为两指针之间的元素个数。
//	如果两个指针所指向的不是同一个数组中的元素，那么它们之间相减的结果是未定义的*/
//	return 0;
//}
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10   5
//	return 0;
//}
int main()
{
	const char* a[] = { "work","at","alibaba" };
	char** pa =(char**)a;
	pa++;
	printf("%s\n", *pa);
	return 0;
}