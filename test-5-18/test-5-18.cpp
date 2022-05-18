#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//实现strncpy
//char* my_strncpy(char* dest, const char* src, int num)
//{
//	assert(dest && src);
//	char* set = dest;
//	while (num)
//	{
//		if (*src == '\0')
//		{
//			while (num) 
//			{
//				*dest = '\0';
//				dest++;
//				num--;
//			}
//			return set;
//		}
//		*dest = *src;
//		dest++;
//		src++;
//		num--;
//	}
//	return set;
//}
//int main()
//{
//	char arr[30] = "abcdef";
//	char arr1[] = "bit ";
//	char *p = strncpy(arr, arr1, 4);
//	printf("%s", p);
//	return 0;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	int num3 = num1 ^ num2;
//	printf("%d \n", num1 & num2);//两个都是1才&(按位与操作符)是1； //0
//	printf("%d \n", num1 | num2);//只要对应的二个二进位有一个为1时，结果位就为1 |（按位或）//3
//	printf("%d \n", num3);//两个二进制表示不同则为1相同则为0 ^(按位异或)//3
//	return 0;
//}
//int main()
//{
//	int num = 10;
//	int count = 0;//计数
//	/*while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}*/
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}
//int main()
//{
//	int a = -10;
//	int* p = NULL;
//	printf("%d\n", !2);
//	printf("%d\n", !0);
//	a = -a;
//	p = &a;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);//这样写行不行？
//	//printf("%d\n", sizeof int);//这样写行不行？
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int x = a++;
//	//先对a先使用，再增加，这样x的值是10；之后a变成11；
//	int y = a--;
//	//先对a先使用，再自减，这样y的值是11；之后a变成10；
//	printf("x=%d\ny=%d\na=%d", x, y, a);
//	return 0;
//}
//程序输出的结果是什么？
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//i=0
//	i = a++||++b||d++; 
//	//逻辑与和或的特点:
//	//1.从左到右执行
//	//2.逻辑与：遇到0(假)就立即停止；逻辑或：遇到1(真)立即停止；
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//条件操作符
//表达式：exp1 ? exp2 : exp3
int main()
{
	int input;
	printf("请输入：");
	scanf("%d", &input);
	input > 5 ? printf("我不喜欢你\n"): printf("我喜欢你\n");
	/*if (a > 5)
		b = 3;
	else
		b = -3;*/
	//与这个相同
	printf("%d", input);
}