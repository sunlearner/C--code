#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//ʵ�ֺ���strstr��
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
//		printf("û���Ӵ���");
//	}
//	else
//	{
//		printf("�ҵ��ˣ�\n");
//		printf("%s", set);
//	}
//	return 0;
//}
//strlen ���ַ�������
//strcpy �����ַ���
//strcat �ַ���׷��  �����Լ�׷���Լ�
//strcmp �ַ����Ƚ�
//strncpy ���ƿ����ĸ���
//strnact ����׷�ӵĸ���
//strncmp ���ƱȽϵĸ���
//strstr  ��C�����еĺ����������Ƿ����ַ������״γ����Ӵ��ĵ�ַ
// strtok���� ���ֽ��ַ���Ϊһ���ַ���
//char * strtok ( char * str, const char * sep );
//sep�����Ǹ��ַ����������������ָ������ַ�����
//strtok�����ĵ�һ��������Ϊ NULL,�������ҵ�str�е�һ�����,strtok���������������ַ����е�λ�á�
// strtok�����ĵ�һ������Ϊ NULL ����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ�����
//strtok������ı䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸�
//strtok�����ҵ�str�е���һ����ǣ��������� \0 ��β������һ��ָ�������ǵ�ָ��
//����ַ����в����ڸ���ı�ǣ��򷵻� NULL ָ�롣
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
//strerror ���ش����룬����Ӧ�Ĵ�����Ϣ
#include <errno.h>//���������ͷ�ļ�
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
//���ű��ʽ��������������ִ�С��������ʽ�Ľ�������һ�����ʽ�Ľ��
int main()
{
	int a = 1;
	int b = 2;
	int c= (a > b, a = b + 10, a, b = a + 1);//���ű��ʽ    13
	printf("%d", c);
	//c�Ƕ��٣�
	return 0;
}