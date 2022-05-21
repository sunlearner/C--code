#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//递归求阶乘n！;
//int fact(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//	{
//		return n * fact(n - 1);
//	}
//}
//int main()
//{
//	int n;
//	printf("请输入阶乘n：");
//	scanf("%d", &n);
//	int set = fact(n);
//	printf("%d!=%d", n, set);
//	return 0;
//}
//递归编写十进制转二进制
//void fact(int n)
//{
//	if (n == 1)
//		printf("%d",1);
//	else
//	{
//		fact(n / 2);
//		printf("%d", n % 2);
//	}
//	return;
//}
//int main()
//{
//	int n;
//	printf("请输入十进制数：");
//	scanf("%d", &n);
//	fact(n);
//	return 0;
//}
//n个盘子的汉诺塔问题
//int fact(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//	{
//		return  1+2*fact(n-1);
//	}
//}
//int main()
//{
//	int n;
//	printf("请输入盘子的个数：");
//	scanf("%d", &n);
//	int set = fact(n);
//	printf("%d", set);
//	return 0;
//}
//1 1
//2 3
//3 7
//4 7+8=15
//5 15+16=31
//实现memcmp：比较从ptr1和ptr2指针开始的num个字节（比较大小）//注意是字节
//int memcmp ( const void * ptr1, const void* ptr2,size_t num );
#include<string.h>
//int my_memcmp(const void* src1, const void* src2, size_t num)
//{
//	char* p1 = (char*)src1;
//	char* p2 = (char*)src2;
//	while (num && (*p1 == *p2))
//	{
//		p1++;
//		p2++; 
//		num--;
//	}
//	if (num == 0)
//		return 0;
//	else
//	{
//		return *p1 - *p2;
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 1,2,3,4,7,8 };
//	char arr3[] = "abcge";
//	char arr4[] = "abcfg";
//	int set = my_memcmp(arr1, arr2, sizeof(arr1));
//	int sut = my_memcmp(arr3, arr4, sizeof(arr3));
//	printf("%d\n%d", set, sut);
//	return 0;
//}
//访问一个结构的成员
//. 结构体.成员名
//-> 结构体指针->成员名
#include <stdio.h>
//struct Stu
//{
//	char name[10];
//	int age;
//	char sex[5];
//	double score;
//};
//void set_age1(struct Stu stu) 
//{
//	stu.age = 18;
//}
//void set_age2(struct Stu* pStu) 
//{
//	pStu->age = 18;//结构成员访问
//}
//int main()
//{
//	struct Stu stu;
//	struct Stu* pStu = &stu;//结构成员访问
//	stu.age = 20;//结构成员访问
//	set_age1(stu);
//	pStu->age = 20;//结构成员访问
//	set_age2(pStu);
//	printf("%d\n", stu.age);
//	printf("%d\n", pStu->age);
//	return 0;
//}
//整体提升:有符号位高位补符号位无;符号位补0;
int main()
{
	char a =129;
	short b=46592;
	int c=2147483647;
	if (a ==-127)
		printf("a\n");
	if (b == 46592)							
		printf("b");
	if (c == 2147483647)
		printf("c");
	return 0;
}
//111111111 111111111 111111111 1000 0000
//100000000 000000000 000000000 0111 1111
//100000000 000000000 000000000 100000000

