#include<stdio.h>
//ʵ��strstr������strstr(str1,str2) ���������ж��ַ���str2�Ƿ���str1���Ӵ���
//����ǣ���ú�������str2��str1���״γ��ֵĵ�ַ�����򣬷���NULL
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
//	printf("������arr1��");
//	gets_s(arr1);
//	printf("������arr2��");
//	gets_s(arr2);
//	const char* p = strstr(arr1, arr2);
//	if (p == NULL)
//	{
//		printf("arr2��arr1���Ӵ�");
//	}
//	else
//		printf("arr2����arr1���Ӵ�");
//	return 0;
//}
//ʵ��strchr������
//���ַ���str��Ѱ���ַ�C��һ�γ��ֵ�λ�ã���������λ�ã���ַָ�룩����ʧ���򷵻�NULL��
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
//	printf("������arr1��");
//	gets_s(arr1);
//	printf("������Ҫ���ҵ��ַ���");
//	ai = getchar();
//	char* p =strchr(arr1, ai);
//	if (p == NULL)
//	{
//		printf("û�ҵ���");
//	}
//	else
//		printf("�ҵ��ˣ�");
//	return 0;
//}
//ʵ��strcmp:���ڶ������ַ������бȽϵĺ��������ķ���ֵ��int����
//���ַ���1�����ַ���2�����ؽ��������
//���ַ���1С���ַ���2�����ؽ��С����
//���ַ���1�����ַ���2�����ؽ��������
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
//	printf("������arr1��");
//	gets_s(arr1);
//	printf("������arr2��");
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
//����Ļ��������Σ�
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
	printf("������������");
	scanf("%d", &row);
	//�ȴ�ӡ�ϰ벿��
	int i,j;
	for (i = 0; i < row; i++)
	{
		//��ӡ�ո�
		for (j = 0; j < row-1-i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j <2*i+1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//��ӡ�°벿��
	for (i = 0; i < row - 1; i++)
	{
		//��ӡ�ո�
		for (j = 0; j <=i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2 * (row - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}