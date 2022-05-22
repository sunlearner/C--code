#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// 结构体内存对齐
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S1));//12
//	printf("%d\n", sizeof(struct S2));//8
//	printf("%d\n", sizeof(struct S3));//16
//	printf("%d\n", sizeof(struct S4));//32
//	return 0;
//}
//结构体的内存对齐是拿空间来换取时间的做法
//那在设计结构体的时候，我们既要满足对齐，又要节省空间
//如何做到：让占用空间小的成员尽量集中在一起
#pragma pack(8)//设置默认对齐数为8
struct S1
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//取消设置的默认对齐数，还原为默认
#pragma pack(1)//设置默认对齐数为1
struct S2
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//取消设置的默认对齐数，还原为默认
//int main()
//{
//	//输出的结果是什么？
//	printf("%d\n", sizeof(struct S1));//12
//	printf("%d\n", sizeof(struct S2));//6
//		return 0;
//}
//题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
int main()
{
	int i, j,k;
	int count = 0;
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			for (k = 1; k < 5; k++)
			{
				if (i != j && j != k && i != k)
				{
					int set = i * 100 + j * 10 + k;
					printf("%-3d ", set);
					count++;
					if (count % 8 == 0)
						printf("\n");
				}
			}
		}
	}
	printf("无重复数字的三位数共%3d位", count);
	return 0;
}