#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//C和指针1.8_2练习题
//int main()
//{
//	char arr[30];
//	int count = 0;
//	while (gets_s(arr))
//	{
//		count++;
//		printf("%d.%s\n", count, arr);
//	}
//	return 0;
//}
// malloc在堆上开发出空间
// void* malloc (size_t size);
//如果开辟成功，则返回一个指向开辟好空间的指针。
//如果开辟失败，则返回一个NULL指针，因此malloc的返回值一定要做检查。
//返回值的类型是 void* ，所以malloc函数并不知道开辟空间的类型，具体在使用的时候使用者自己来决定。
//如果参数 size 为0，malloc的行为是标准是未定义的，取决于编译器
//int main()
//{
//	/*int* ptr = (int*)malloc(4 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(ptr+i) = i + 1;
//	}*/
//	/*int arr[5] = { 1,2,3,4,5 };
//	char* p = (char*)arr;
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//	/*for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}*/
//	/*char arr[20];
//	scanf("%s", arr);
//	printf("%s", arr);*/
//	return 0;
//}
//int main()
//{
	/*int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(i + p) = i + 1;
			printf("%d ",*(i + p));
		}
	}
	free(p);
	p = NULL;*/
//	int* p1 = (int*)calloc(10, 4);//void* calloc(size_t num, size_t size);
//	if (p1 == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d", *(p1 + i));
//		}
//	}
//	free(p1);
//	p1 = NULL;
//	return 0;
//}
//calloc
//void* calloc(size_t num, size_t size);
//函数的功能是为 num 个大小为 size 的元素开辟一块空间，并且把空间的每个字节初始化为0;
//realloc void* realloc(void* ptr, size_t size);
//ptr 是要调整的内存地址
//size 调整之后新大小
//返回值为调整之后的内存起始位置。
//这个函数调整原内存空间大小的基础上，还会将原来内存中的数据移动到新的空间。
#if 1
int main()
{

	int* p = (int*)calloc(10, 4);
	if (p == NULL)
	{
		printf("%s", strerror(errno));
	}
	else 
	{
		int* arr =(int*) realloc(p, 80);
		p = arr;
		int i = 0;
		for (i = 0; i < 20; i++)
		{
			*(p + i) = i + 1;
			printf("%-2d ", *(p + i));
		}
	}
	free(p);
	p = NULL;
	printf("hello");
	return 0;
}
#endif
//int main()
//{
//	return 0;
//}
//#if 0 与#endif就相当于/* */的注释作用,在#if 0与#endif之间的内容就会被屏蔽,不会执行;
//#if 1 与#endif使用之后,在#if 1与#endif之间的代码依然会执行;