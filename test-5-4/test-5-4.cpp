#include<stdio.h>
//дһ���������ز����������� 1 �ĸ���
//���磺 15       0000 1111       4 �� 1
int  Count_one_bits(unsigned int n)
{
	int i;
	int count=0;
	//����1 n/2��
	//while (n)
	//{
	//	count = count + n % 2;
	//	n = n / 2;//10100  1010 101 10  1  ÿ��һ��2����һλ
	//}
	// ����2 ��λ��
	//for (i = 0; i < 32; i++)
	//{
	//	int j = (n>>i) & 1;
	//	if (j == 1)
	//	{
	//		count++;
	//	}
	//}
	//����2���Ż�
	do {
			count++;
	} while (n &= n - 1);

	return count;
}
int main()
{
	int n;
	printf("��������ֵn��");
	scanf("%d", &n);
	int count = Count_one_bits(n);
	printf("%d�Ķ������й��� %d �� 1",n,count);
	return 0;
}
//��ȡһ�������������������е�ż��λ������λ���ֱ��������������
//int main()
//{
//	int n,i;
//	printf("��������ֵn��");
//	scanf("%d", &n);
//	printf("����λ����������Ϊ��");
//	for (i = 31; i > 0; i -= 2)
//	{
//		int j = (n >> (i-1)) & 1;
//		if (j == 1)
//		{
//			printf("%d ", j);
//		}
//		else {
//			printf("0 ");
//		}
//	}
//	printf("\nż��λ����������Ϊ��");
//	for (i = 32; i > 0; i -= 2)
//	{
//		int j = (n >> (i-1)) & 1;
//		if (j == 1)
//		{
//			printf("%d ", j);
//		}
//		else {
//			printf("0 ");
//		}
//	}
//	return 0;
//}
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ
//��������: 1999 2299    �������:7
//int Dif_one(unsigned int m,unsigned int n)
//{
//	int i;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		int j = ((m >> i) &1)^( (n >> i)&1);
//		if (j == 1)
//		{
//			count++ ;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int m, n;
//	printf("��ֱ�����m���� n��ֵ��");
//	scanf("%d%d", &m, &n);
//	int count = Dif_one(m, n);
//	printf("��ͬ��λ(bit)�У�%d", count);
//	return 0;
//}