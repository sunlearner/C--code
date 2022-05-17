#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//实现strlen
//1.计数器的方法
//2.递归
//3.指针-指针
//int strlens2(char* arr)
//{
//	//指针-指针
//	assert(arr != NULL);
//	char* arr1 = arr;
//	while (*arr1 != '\0')
//	{
//		arr1++;
//	}
//	return arr1 - arr;
//}
//int strlens1(char* arr)
//{
//	//2.递归
//	assert(arr != NULL);
//	if (*arr == '\0')
//		return 0;
//	else
//	{
//		return 1 + strlens1(arr + 1);
//	}
//}
//int strlens(char* arr)
//{
//	//1.计数器的方法
//	assert(arr != NULL);
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	//int ret = strlens(arr);
//	//int ret = strlens1(arr);
//	int ret = strlens2(arr);
//	printf("%d", ret);
//	return 0;
//}
//实现strcpy函数
//是字符串的复制 函数strcpy(字符数组1,字符串2)作用就是将字符串2复制到字符数组1中去
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while ((*dest++ = *src++) != '\0');
//	//while (*dest = *src != '\0'){ dest++;scr++;} *dest = *src;
//	//与他是相等的；
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";//字符串要包含\0;
//	char arr2[] = "bit";
//	char* p = my_strcpy(arr1, arr2);
//	printf("%s", p);
//	return 0;
//}
//实现strcat函数：
//复制一个字符串,将这个字符串拼接在另一个字符串后面
//char* my_strcat(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//1.找到目的字符的\0；
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.复制
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello ";
//	char arr2[] = "bit!";
//	char* set = my_strcat(arr1, arr2);
//	printf("%s", set);
//	return 0;
//}
//实现strmp函数(字符串比较)
//int my_strmp(const char* src1, const char* src2)
//{
//	assert(src1 != NULL);
//	assert(src2 != NULL);
//	while (*src1 == *src2)
//	{
//		if (*src1 == '\0')
//		{
//			return 0;
//		}
//		src1++;
//		src2++;
//	}
//	if (*src1 > *src2)
//		return 1;
//	else 
//		return -1;
//}
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "bit";
//	int ret = my_strmp(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("arr1 > arr2");
//	}
//	else if (ret == 0)
//	{
//		printf("arr1 = arr2");
//	}
//	else
//	{
//		printf("arr1 < arr2");
//	}
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//void print(struct Stu* ps) 
//{
//	printf("name = %s   age = %d\n", (*ps).name, (*ps).age);
//	//使用结构体指针访问指向对象的成员,要解应用；
//	printf("name = %s   age = %d\n", ps->name, ps->age);
//}
//int main()
//{
//	struct Stu s = { "zhangsan", 20 };
//	print(&s);//结构体地址传参
//	return 0;
//}
//struct S {
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////结构体传参
//void print1(struct S s) {
//	printf("%d\n", s.num);
//}
////结构体地址传参
//void print2(struct S* ps) {
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s); //传结构体
//	print2(&s); //传地址
//	return 0;
//}
//print2比print1好；结构体传参的时候，要传结构体的地址
//如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，
//所以会导致性能的下降
//指针的类型决定了指针向前或者向后走一步有多大
int main()
{
	int n = 0x11223344;
	char* pc = (char*)&n;
	int* pi = &n;
	*pc = 0;  //重点在调试的过程中观察内存的变化。//11223300
	*pi = 0;  //重点在调试的过程中观察内存的变化。//00000000
	return 0;
}
//指针的类型决定了，对指针解引用的时候有多大的权限（能操作几个字节）。
//比如： char* 的指针解引用就只能访问一个字节，而 int* 的指针的解引用就能访问四个字节