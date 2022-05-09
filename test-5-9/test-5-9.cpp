#include<stdio.h>
//判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0
int Same_order(char s1[], char s2[])
{
	int i, j;
	int k = 0;
	for (i = 0; i < 6; i++)
	{
		if (s1[0] == s2[i])
		{
			break;
		}
		if (i == 5)
		{
			return 0;
		}
	}
	for (j = 1; j < 6; j++)
	{
		if (j < 6 - i)
		{
			if (s1[j] != s2[i + j])
				return 0;
		}
		else {
			if (s1[j] != s2[k])
			{
				return 0;
			}
			k++;
		}
	}
	return 1;
}
int main()
{
	char s1[20];
	char s2[20];
	int i;
	//printf("请输入6个字符.\ns1:");
	//for (i = 0; i < 6; i++)
	//{
	//	scanf("%c", &s1[i]);
	//}
	//printf("请再次输入6个字符.\ns2:");
	//getchar();
	//for (i = 0; i < 6; i++)
	//{
	//	scanf("%c", &s2[i]);
	//}
	printf("请输入6个字符.\ns1:");
	scanf("%s", s1);
	printf("请再次输入6个字符.\ns2:");
	scanf("%s", s2);
	int n = Same_order(s1, s2);
	if (n == 1)
	{
		printf("s1和s2为同序!");
	}
	else {
		printf("s1和s2为不同序!");
	}
	return 0;
}