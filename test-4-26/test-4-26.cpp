#include<stdio.h>
//�������������Լ��
//int Max_con_count(int x, int y)
//{
//	int i, j=1;
//	if (x > y)
//	{
//		if (x % y == 0)
//			return y;
//		for (i = 2; i <= y; i++)
//		{
//			if (y % i == 0 && x % i == 0)
//			{
//				y = y / i;
//				x = x / i;
//				j *= i;
//			}
//		}
//		return j;
//	}
//	else if (x < y)
//	{
//		if (y % x == 0)
//			return x;
//		for (i = 2; i <= y; i++)
//		{
//			if (y % i == 0 && x % i == 0)
//			{
//				y = y / i;
//				x = x / i;
//				j *= i;
//			}
//		}
//		return j;
//	}
//	else return 1;
//	 
//}
//int main()
//{
//	int x, y;
//	printf("���x��y��ֵ��");
//	scanf("%d%d", &x, &y);
//	int n = Max_con_count(x, y);
//	printf("%d", n);
//	return 0;
//}
// int Min_mul_count(int x, int y)
//{
//	int i,c=1;
//		c = x;
//	if (x > y)
//	{
//		if (x % y == 0)//x��������y
//			return x;
//		for (i = 2; i <= y; i++)
//		{
//			if (y % i == 0 && x % i == 0)
//			{
//				y = y / i;//x��y��Ϊ���������ǵ����Լ�����ֵ
//				x = x / i;
//			}
//		}
//		return c*y;//��С������
//	}
//	else if (x < y)
//	{
//		if (y % x == 0)//y��������x
//			return y;
//		for (i = 2; i <= y; i++)
//		{
//			if (y % i == 0 && x % i == 0)
//			{
//				y = y / i;//x��y��Ϊ���������ǵ����Լ�����ֵ
//				x = x / i;
//			}
//		}
//		return c*y;//��С������
//	}
//	else return x;//���ʱ
//	 
//}
////������������С������
//int main()
//{
//	int x, y;
//	printf("x��yΪ��");
//	scanf("%d%d", &x, &y);
//	int n = Min_mul_count(x, y);
//	printf("%d��%d����С������Ϊ��%d", x,y,n);
//	return 0;
//}
//ѭ�����26��Ӣ����ĸ
//int main()
//{
//	int i;
//	char a;
//	printf("����U��ʾ��дӢ����ĸ������L��ʾСдӢ����ĸ�������룺");
//	scanf("%c", &a);
//	if (a == 'U'|| a == 'u')
//	{
//		for (i = 65; i < 90; i++)//A��ӦASSIIֵΪ65��Z��ӦASSIIֵΪ90
//		{
//			printf("%c ", i);
//		}
//	}
//	else if (a == 'L'|| a== 'l')
//	{
//		for (i = 97; i < 122; i++)//a��ӦASSIIֵΪ97��z��ӦASSIIֵΪ122
//		{
//			printf("%c ", i);
//		}
//	}
//	else printf("�������");
//
//	return 0;
//}
//��1000���ڵĻ�����
//��������һ����Ȼ����λ���ַ������к����õ�����Ȼ����ԭ����ȣ����磺123321
//int Reverse_count(int i)
//{
//	int a=0;
//	while (i > 9)
//	{
//			a = a + (i % 10);
//			i = i / 10;
//			a *= 10;
//	}
//	return a + i;
//}
//int main()
//{
//	int i, j;
//	int c = 0;
//	for (i = 10; i < 1000; i++)
//	{
//		j=Reverse_count(i);
//		if (j == i)
//		{
//			printf("%6d ", j);
//			c++; 
//			//ÿ�д�ӡ8����
//			if (c % 8 == 0)
//			{
//				printf("\n");
//			}
//		}
//	}
//	printf("\n   1000���ڵĻ���������%2d��", c);
//	return 0;
//}
#include<math.h>
//�ú����ж��Ƿ�Ϊ�������Ǿͷ���1�����Ǿͷ���0.
int Primea_num(int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	if (i > sqrt(n))
		return 1;
}
//����һ�������������������������
int main()
{
	int n, i,j;
	printf("n��ֵΪ��");
	scanf("%d", &n);

	while (n!=1)
	{
		for (j = 2; j <= n; j++)//j���Ե���n���Ա���������һλ����
		{
			if (n % j == 0 && j != 2)//n�ķ�2������
			{
				i = Primea_num(j);//�ж������Ƿ�Ϊ������1Ϊ����
				if (i == 1)
				{
					printf("%d ", j);
					n = n / j;
					break;
				}
			}
			else if (n % j == 0 && j == 2)
			{
					printf("%d ", j);
					n = n / j;
					break;	
			}
		}
	}
	return 0;
}