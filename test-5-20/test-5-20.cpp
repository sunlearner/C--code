#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//实现memcpy函数
//void* my_memcpy(void* dest, const void* src,size_t num)
//{
//	assert(dest && src);
//	char* q1 = (char*)dest;
//	char* q2 = (char*)src;
//	while (num)
//	{
//		*q1 = *q2;
//		q1++;
//		q2++;
//		num--;
//	}
//	return dest;
//}
//struct person
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[30] = { 0 };
//	struct person persons[2] = { {"张三",19},{"李四",20} };
//	struct person person_copy[2];
//	my_memcpy(arr2, arr1, sizeof(arr2));
//	my_memcpy(person_copy, persons,sizeof(persons));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}char读取数据是从低位读取；
//实现函数 memmove
//和memcpy的差别就是memmove函数处理的源内存块和目标内存块是可以重叠的;
void* my_memmove(void* dest, const void* src,size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* dest1 = (char*)dest;
	char* src1 = (char*)src;
	if (dest1 > src1)
	{
		while (num)
		{
			*(dest1 + num-1) = *(src1 + num-1);//一定要减一
			num--;
		}
		return dest;
	}
	else
	{
		while (num)
		{
			*dest1 = *src1;
			dest1++;
			src1++;
			num--;
		}
		return dest;
	}
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;
	my_memmove(arr1, arr1+2, 20);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}