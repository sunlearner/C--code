#include<stdio.h>

//���벢��ӡ�ĸ�ͬѧ����ѧ���Ӣ���ѧ�ĳɼ�(��λ����)
//int main()
//{
//	int student[4][5], i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &student[i][j]);
//		}
//	}
//	printf("     ��ѧ ���� Ӣ�� ��ѧ ƽ��\n");
//	for (i = 0; i < 3; i++)
//	{
//		student[i][4] = (student[i][0] + student[i][1] + student[i][2] + student[i][3]) / 4;
//	}
//	for (i = 0; i < 4; i++)
//	{
//		student[3][i] = (student[0][i] + student[1][i] + student[2][i]) / 3;
//	}
//	student[3][4] = (student[0][4] + student[1][4] + student[2][4]) * 4;
//	for (i = 0; i < 4; i++)
//	{
//		switch (i)
//		{
//		case 0:printf("С����"); break;
//		case 1:printf("С����"); break;
//		case 2:printf("С����"); break;
//		case 3:printf("ƽ����"); break;
//		}
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d   ", student[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include<string.h>
//9*9�˷���
//int main()
//{
//	int a, b, c;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			c = a * b;
//			printf("%d*%d=%-3d", a, b, c);
//		}printf("\n");
//	}
//	return 0;
//}
//��1��2��3��4���ÿλ����ͬ����λ��
//int main()
//{
//	int a, b, c, count = 0;
//	for (a = 1; a <= 4; a++)
//		for (b = 1; b <= 4; b++)
//			for (c = 1; c <= 4; c++)
//				if (a != b && b != c && a != c)
//				{
//					printf("%d%d%d  ", a, b, c);
//					count++;
//				}
//	printf("\n");
//	printf("%d", count);
//	return 0;
//}
//int is_prime(int n)
//{
//    int j = 0;
//    for (j = 2; j < n; j++)
//    {
//        if (n % j == 0)
//            break;
//    }
//    if (j >= n)
//    {
//        return 1;
//    }
//    return 0;
//
//}
////�ú�����100��200֮�������
//int main()
//{
//    int i, n = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        if (is_prime(i) == 1)
//        {
//            printf("%d ", i);
//            n++;
//        }
//    }
//    printf("\n%d", n);
//    return 0;
//}
//��100��200֮�������
//int main()
//{
//    int i, j, n = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        for (j = 2; j <= i; j++)
//        {
//            if (i % j == 0)
//                break;
//        }
//        if (j >= i / 2)
//        {
//            printf("%d  ", i);
//            n++;
//            if (n % 8 == 0)
//            {
//                printf("\n%d", n);
//            }
//        }        
//    }
//    printf("\n100��200֮�������Ϊ��%d", n);
//    return 0;
//}
//��ָ��Ƚ��������Ĵ�С
//int main()
//{
//	int x, y;
//	printf("����������������");
//	scanf("%d%d", &x, &y);
//	int* a = &x;
//	int* b = &y;
//	if (x < y)
//	{
//		int* c = a; a = b; b = c;
//	}
//	printf("���������ǣ�%d", *a);
//	return 0;
//}
//ѭ���Ƚ��������Ĵ�С
int main()
{
	int i, j;
	printf("������������ֵ��");
	scanf("%d%d", &i, &j);
	printf("���ֵΪ��");
	if (i < j)
		printf("%d", j);
	else if (i >= j)
		printf("%d", i);
	return 0;
}