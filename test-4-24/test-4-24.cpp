#include<stdio.h>
//����5���������Դ�С�����˳�����У�ͬʱ������ֵ����Сֵ
//int main()
//{
//	int ai[100], i, j, k, p, q;
//	printf("������5����ֵ��");
//	for (i = 0; i < 5; i++)
//		scanf("%d", &ai[i]);
//	for (j = 1; j < 5; j++)
//	{
//		p = ai[4];
//		q = ai[0];
//		if (ai[0] < ai[j])
//		{
//			ai[0] = ai[j];
//			ai[j] = q;
//		}
//
//
//		if (ai[4] > ai[5 - j])
//		{
//			ai[4] = ai[5 - j];
//			ai[5 - j] = p;
//		}
//	}
//	for (k = 0; k < 5; k++)
//	{
//		printf("%d ", ai[k]);
//	}
//	printf("\n�������ֵΪ��%d  \n��СֵΪ: %d", ai[0], ai[4]);
//
//	return 0;
//}
//��4��4�����еĶ�ά������ת90��
//int main()
//{
//	int i, j, ai[4][4], bi[4][4];
//	printf("������16����ֵ��\n");
//	for (i = 0; i < 4; i++)
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &ai[i][j]);
//		}
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			bi[i][j] = ai[j][3 - i];
//			printf("%2d ", bi[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//��ӡ�������10�У�ֱ����ʽ��
//int main()
//{
//	int i, j, k[10][10];
//	for (i = 0; i < 10; i++)
//	{
//		k[i][i] = 1; k[i][0] = 1;
//	}
//	for (j = 2; j < 10; j++)
//	{
//		for (i = 1; i <= j - 1; i++)
//		{
//			k[j][i] = k[j - 1][i] + k[j - 1][i - 1];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%-4d ", k[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}
//��ӡ9*9�˷���
//int main()
//{
//int i, j;
//for (i = 1; i < 10; i++)
//	for (j = 1; j <= i; j++)
//	{
//		printf("%d*%d=%-2d ", i, j, i * j);
//		if (j == i)
//			printf("\n");
//	}
//return 0;
//}
//�������У�쳲��������У�
//int main()
//{
//	int i, j = 0, k = 1, m;
//	printf("1�µ�12�����ӵ������ֱ�Ϊ��");
//	for (i = 1; i < 13; i++)
//	{
//		printf("%-2d ", k);
//		m = k;
//		k = j + k; j = m;
//	}
//	return 0;
//}
//��10000���ڵ�������һ�������ǡ�õ��ڳ��������������֮���Ǿͳ�֮Ϊ������
//int main()
//{
//	int i, j, k = 0;
//	printf("10000���ڵ������У�");
//	for (i = 2; i < 10001; i++)
//	{
//		k = 0;
//		for (j = 1; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				k = k + j;
//			}
//		}
//		if (i == k)
//		{
//			printf("%-3d  ", i);
//		}
//	}
//	return 0;
//}
//���������������Ϊ����ĵڼ���
int main()
{
	int i, j, k, a, b = 0, c, d;
	printf("����������:");
	scanf("%d%d%d", &i, &j, &k);
	if (i % 4 == 0 || i % 400 == 0)
	{
		switch (j + 1)
		{
		case 1:
			b += 31;
		case 2:
			b += 29;
		case 3:
			b += 31;
		case 4: b += 30;
		case 5: b += 31;
		case 6: b += 30;
		case 7: b += 31;
		case 8: b += 31;
		case 9: b += 30;
		case 10: b += 31;
		case 11:b += 30;
		case 12:b += 31;
		}

		if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
			c = 31 - k;
		if (j == 4 || j == 6 || j == 9 || j == 11)
			c = 30 - k;
		if (j == 2)
			c = 29 - k;
		d = 366 - b - c;
		printf("%d", d);
	}
	else {
		switch (j + 1)
		{
		case 1:
			b += 31;
		case 2:
			b += 28;
		case 3:
			b += 31;
		case 4: b += 30;
		case 5: b += 31;
		case 6: b += 30;
		case 7: b += 31;
		case 8: b += 31;
		case 9: b += 30;
		case 10: b += 31;
		case 11:b += 30;
		case 12:b += 31;
		}
		if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
			c = 31 - k;
		if (j == 4 || j == 6 || j == 9 || j == 11)
			c = 30 - k;
		if (j == 2)
			c = 28 - k;
		d = 365 - b - c;
		printf("������Ϊ%d�ĵ�%d����:",i,d);
	
	}
}