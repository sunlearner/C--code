#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//C��ָ��1.8_2��ϰ��
//int main()
//{
//	char arr[30];
//	int count = 0;
//	while (gets_s(arr))
//	{
//		count++;
//		printf("%d.%s\n", count, arr);
//	}
//	return 0;
//}
// malloc�ڶ��Ͽ������ռ�
// void* malloc (size_t size);
//������ٳɹ����򷵻�һ��ָ�򿪱ٺÿռ��ָ�롣
//�������ʧ�ܣ��򷵻�һ��NULLָ�룬���malloc�ķ���ֵһ��Ҫ����顣
//����ֵ�������� void* ������malloc��������֪�����ٿռ�����ͣ�������ʹ�õ�ʱ��ʹ�����Լ���������
//������� size Ϊ0��malloc����Ϊ�Ǳ�׼��δ����ģ�ȡ���ڱ�����
//int main()
//{
//	/*int* ptr = (int*)malloc(4 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(ptr+i) = i + 1;
//	}*/
//	/*int arr[5] = { 1,2,3,4,5 };
//	char* p = (char*)arr;
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//	/*for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}*/
//	/*char arr[20];
//	scanf("%s", arr);
//	printf("%s", arr);*/
//	return 0;
//}
//int main()
//{
	/*int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(i + p) = i + 1;
			printf("%d ",*(i + p));
		}
	}
	free(p);
	p = NULL;*/
//	int* p1 = (int*)calloc(10, 4);//void* calloc(size_t num, size_t size);
//	if (p1 == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d", *(p1 + i));
//		}
//	}
//	free(p1);
//	p1 = NULL;
//	return 0;
//}
//calloc
//void* calloc(size_t num, size_t size);
//�����Ĺ�����Ϊ num ����СΪ size ��Ԫ�ؿ���һ��ռ䣬���Ұѿռ��ÿ���ֽڳ�ʼ��Ϊ0;
//realloc void* realloc(void* ptr, size_t size);
//ptr ��Ҫ�������ڴ��ַ
//size ����֮���´�С
//����ֵΪ����֮����ڴ���ʼλ�á�
//�����������ԭ�ڴ�ռ��С�Ļ����ϣ����Ὣԭ���ڴ��е������ƶ����µĿռ䡣
#if 1
int main()
{

	int* p = (int*)calloc(10, 4);
	if (p == NULL)
	{
		printf("%s", strerror(errno));
	}
	else 
	{
		int* arr =(int*) realloc(p, 80);
		p = arr;
		int i = 0;
		for (i = 0; i < 20; i++)
		{
			*(p + i) = i + 1;
			printf("%-2d ", *(p + i));
		}
	}
	free(p);
	p = NULL;
	printf("hello");
	return 0;
}
#endif
//int main()
//{
//	return 0;
//}
//#if 0 ��#endif���൱��/* */��ע������,��#if 0��#endif֮������ݾͻᱻ����,����ִ��;
//#if 1 ��#endifʹ��֮��,��#if 1��#endif֮��Ĵ�����Ȼ��ִ��;