#include<stdio.h>
//����Ļ�ϴ�ӡ������ǡ�
//1          
//1 1    
//1 2 1 
//1 3 3 1
//void Yang_Hui(int row)
//{
//	int i, j;
//	int arr[20][20] = { 0 };
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < row-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <=i; j++)
//		{
//			//��ӡֱ�Ǳߺ�б�ߵ�1
//			if (j == 0||j==i)
//			{
//				arr[i][j] = 1;
//				printf("%d ",arr[i][j]);
//			}
//			//�±ߵĵ��������������ĺ�
//			else {
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//				printf("%d ", arr[i][j]);
//			}
//
//		}
//		printf("\n");
//	}
//	return;
//}
//int main()
//{
//	int row;
//	printf("�������ӡ������ǵ�������");
//	scanf("%d", &row);
//	Yang_Hui(row);
//	return 0;
//}
//ʵ�ֺ���qsortð������
//void qsort(int* arr, int sz)
//{
//	int i, j;
//	for (i = 0; i < sz ; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (*(arr + j) > *(arr + j + 1))
//			{
//				int a = *(arr + j);
//				*(arr + j) = *(arr + j + 1);
//				*(arr + j + 1)=a;
//			}
//		}
//	}
//}
//void print(int* arr, int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[]= { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz);
//	printf("�Ӵ�С���к�Ϊ��");
//	print(arr,sz);
//	return 0;
//}
//���ʲô��
//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;//����Ϊ��11111111 ��ΪcΪ�޷�����������c��Ϊ255��
//	printf("a=%d,b=%d,c=%d", a, b, c);//a=-1;b=-1;c=255
//	return 0;
//}
//����������ʲô��
//int main()
//{
//	char a = -128;//char�ķ�Χ-128~255
//	printf("%u\n", a);//%uΪ���޷���ʮ����
//	return 0;
//}
int main()
{
	char a = 128;
	printf("%u\n", a);  //a=4294967168
	//�������������޷���������������ȱ�2Ϊ�޷���������������������a��Ϊ128��
	return 0;
}
//���������������з��ŵ�:��������ʱ�ǰ��ձ����Ĳ��뱻�ض�ʱ�����λ��ʲô���в�λ��
//����ضϺ����λ���������һλ��Ϊ 1 �������λǰ�� 1 ,
//������λ�� 0 ����ǰ�油 0 ,����32λ��int���ͼ���
//�޷��ŵ�:ֱ���ڱ��ضϵ�ǰ�油 0 ����