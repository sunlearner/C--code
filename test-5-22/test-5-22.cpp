#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// �ṹ���ڴ����
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S1));//12
//	printf("%d\n", sizeof(struct S2));//8
//	printf("%d\n", sizeof(struct S3));//16
//	printf("%d\n", sizeof(struct S4));//32
//	return 0;
//}
//�ṹ����ڴ�������ÿռ�����ȡʱ�������
//������ƽṹ���ʱ�����Ǽ�Ҫ������룬��Ҫ��ʡ�ռ�
//�����������ռ�ÿռ�С�ĳ�Ա����������һ��
#pragma pack(8)//����Ĭ�϶�����Ϊ8
struct S1
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
#pragma pack(1)//����Ĭ�϶�����Ϊ1
struct S2
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//int main()
//{
//	//����Ľ����ʲô��
//	printf("%d\n", sizeof(struct S1));//12
//	printf("%d\n", sizeof(struct S2));//6
//		return 0;
//}
//��Ŀ����1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
int main()
{
	int i, j,k;
	int count = 0;
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			for (k = 1; k < 5; k++)
			{
				if (i != j && j != k && i != k)
				{
					int set = i * 100 + j * 10 + k;
					printf("%-3d ", set);
					count++;
					if (count % 8 == 0)
						printf("\n");
				}
			}
		}
	}
	printf("���ظ����ֵ���λ����%3dλ", count);
	return 0;
}