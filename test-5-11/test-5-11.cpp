#include<stdio.h>
//实现strstr函数；strstr(str1,str2) 函数用于判断字符串str2是否是str1的子串。
//如果是，则该函数返回str2在str1中首次出现的地址；否则，返回NULL
//#include<assert.h>
//char* strstr(char* str1, const char* str2)
//{
//	assert((str1 != NULL) && (str2 != NULL));
//	int i = 0;
//	int j = 0;
//	while (*(str1 + i) != '\0')
//	{
//		if (*(str2) == *(str1 + i))
//			break;
//		i++;
//	}
//	if (*(str1 + i) == '\0')
//		return NULL;
//	else {
//		while (*(str2 + j) == *(str1 + i) &&  *(str2 + j) != '\0')
//		{
//			i++;
//			j++;
//		}
//		if (*(str2 + j) != '\0')
//			return NULL;
//	}
//	return (str1 + i);
//}
//int main()
//{
//	char arr1[20] ;
//	char arr2[20] ;
//	printf("请输入arr1：");
//	gets_s(arr1);
//	printf("请输入arr2：");
//	gets_s(arr2);
//	const char* p = strstr(arr1, arr2);
//	if (p == NULL)
//	{
//		printf("arr2是arr1的子串");
//	}
//	else
//		printf("arr2不是arr1的子串");
//	return 0;
//}
//实现strchr函数：
//在字符串str中寻找字符C第一次出现的位置，并返回其位置（地址指针），若失败则返回NULL；
//#include<assert.h>
//char* strchr(char* str, const char ai)
//{
//	int i = 0;
//	assert(*str != NULL);
//	while (*(str+i)!= '\0')
//	{
//		if (*(str + i) == ai)
//		{
//			return str;
//		}
//		i++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[20];
//	char ai;
//	printf("请输入arr1：");
//	gets_s(arr1);
//	printf("请输入要查找的字符：");
//	ai = getchar();
//	char* p =strchr(arr1, ai);
//	if (p == NULL)
//	{
//		printf("没找到！");
//	}
//	else
//		printf("找到了！");
//	return 0;
//}
//实现strcmp:用于对两组字符串进行比较的函数，它的返回值是int类型
//若字符串1大于字符串2，返回结果大于零
//若字符串1小于字符串2，返回结果小于零
//若字符串1等于字符串2，返回结果等于零
//#include<assert.h>
//int strcmp(const char* str1, const char* str2)
//{
//	int i = 0;
//	assert((str1 != NULL) && (str2 != NULL));
//	while (*(str1+i) == *(str2+i))
//	{
//		i++;
//	}
//	return (int)*(str1+i) - (int)*(str2+i);
//}
//int main()
//{
//	char arr1[20];
//	char arr2[20];
//	printf("请输入arr1：");
//	gets_s(arr1);
//	printf("请输入arr2：");
//	gets_s(arr2);
//	int n = strcmp(arr1, arr2);
//	if (n > 0)
//	{
//		printf("arr1>arr2!");
//	}
//	else if (n < 0)
//	{
//		printf("arr1<arr2");
//	}
//	else {
//		printf("arr1=arr2");
//	}
//	return 0;
//}
//在屏幕上输出菱形：
//      *
//     ***
//    *****
//	 *******
//	*********
// ***********
//*************
// ***********   11
//  *********
//   *******
//    *****
//     ***
//      *
int main()
{
	int row;
	printf("请输入行数：");
	scanf("%d", &row);
	//先打印上半部分
	int i,j;
	for (i = 0; i < row; i++)
	{
		//打印空格
		for (j = 0; j < row-1-i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j <2*i+1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下半部分
	for (i = 0; i < row - 1; i++)
	{
		//打印空格
		for (j = 0; j <=i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * (row - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}