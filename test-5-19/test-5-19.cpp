#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//实现函数strstr：
//char* my_strstr(const char* str1, const char* str2)
//{
//	char* p1 = NULL;
//	char* p2 = NULL;
//	char* set = (char*)str1;
//	if (!*str1)
//	{
//		return (char*)str1;
//	}
//	while (*set)
//	{
//		p1 = set;
//		p2 = (char*)str2;
//		while ((*p1)&&(*p1 == *p2)&&(*p2))
//		{
//			p1++;
//			p2++;
//		}
//		if (!*p2)
//		{
//			return set;
//		}
//		if (!*p1)
//		{
//			return NULL;
//		}
//		set++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bcd";
//	char* set = my_strstr(arr1, arr2);
//	if (!set)
//	{
//		printf("没有子串！");
//	}
//	else
//	{
//		printf("找到了！\n");
//		printf("%s", set);
//	}
//	return 0;
//}
//strlen 求字符串长度
//strcpy 拷贝字符串
//strcat 字符串追加  不能自己追加自己
//strcmp 字符串比较
//strncpy 限制拷贝的个数
//strnact 限制追加的个数
//strncmp 限制比较的个数
//strstr  是C语言中的函数，作用是返回字符串中首次出现子串的地址
// strtok函数 ：分解字符串为一组字符串
//char * strtok ( char * str, const char * sep );
//sep参数是个字符串，定义了用作分隔符的字符集合
//strtok函数的第一个参数不为 NULL,函数将找到str中第一个标记,strtok函数将保存它在字符串中的位置。
// strtok函数的第一个参数为 NULL ，函数将在同一个字符串中被保存的位置开始，查找下一个标记
//strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改
//strtok函数找到str中的下一个标记，并将其用 \0 结尾，返回一个指向这个标记的指针
//如果字符串中不存在更多的标记，则返回 NULL 指针。
#include<string.h>
//int main()
//{
//	char arr1[] = "2391476189@qq.com";
//	char p[] = "@.";
//	char arr2[30] = { 0 };
//	strcpy(arr2, arr1);
//	char* set = NULL;
//	for (set = strtok(arr2, p); set != NULL; set = strtok(NULL, p))
//	{
//		printf("%s\n", set);
//	}
//	return 0;
//}
//int main()
//{
//	char str[] = "- This, a sample string.";
//	char* pch;
//	printf("Splitting string \"%s\" into tokens:\n", str);
//	pch = strtok(str, " ,.-");
//	while (pch != NULL)
//	{
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ,.-");
//	}
//	return 0;
//}
//strerror 返回错误码，所对应的错误信息
#include <errno.h>//必须包含的头文件
//int main()
//{
//	/*FILE * pFile;
//	pFile = fopen("unexist.ent", "r");
//	if (pFile == NULL)
//		printf("Error opening file unexist.ent: %s\n", strerror(errno));*/
//	errno: Last error number
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	return 0;
//}
//逗号表达式，从左向右依次执行。整个表达式的结果是最后一个表达式的结果
int main()
{
	int a = 1;
	int b = 2;
	int c= (a > b, a = b + 10, a, b = a + 1);//逗号表达式    13
	printf("%d", c);
	//c是多少？
	return 0;
}