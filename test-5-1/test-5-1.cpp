#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	int a, b;
//	printf("������a��ֵ��");
//	scanf("%d", &a);
//	b = 5 * a + 4 * a * 10 + 3 * a * 100 + 2 * a * 1000 + 1 * a * 10000;
//	printf("Sn =a + aa + aaa + aaaa + aaaaa = %d",b );
//	return 0;
//}
//��ɲ�������Ϸ��
//void menu()
//{
//	printf("****************************\n");
//	printf("********   1 .PLAY   *******\n");
//	printf("********   2 .EXIT   *******\n");
//	printf("****************************\n");
//}
//void game()
//{
//	int count;
//	int i, j=0;
//	count = rand()% 100 ;
//	while (1)
//	{
//		printf("�����������µ�����");
//		scanf("%d", &i);
//		if (i > count)
//		{
//			printf("�´��ˣ�\n");
//			j++;
//		}
//		else if (i < count)
//		{
//			printf("��С�ˣ�\n");
//			j++;
//		}
//		else
//		{
//			j++;
//			printf("��ϲ��¶��ˣ�\n��һ������%d�Ρ�\n",j);
//			break;
//		}
//	}
//}
//int main()
//{
//
//	int i = 0, j;
//	menu();//��ӡ�˵�
//	srand((unsigned)time(NULL));
//	while (i!=2)  //�ж��ǽ��л��ǽ�����Ϸ
//	{
//		printf("��ѡ��:>");
//		scanf("%d", &i);
//		switch (i)
//		{
//		case 1:
//			game();  
//			break;
//		case 2:
//			printf("�˳���Ϸ��\n");
//			break;
//		default :
//			printf("�������������ѡ��\n");
//			break;
//		}
//	}
//	return 0;
//}
//д����������������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
//void Find_count(int arr[], int sz,int i)
//{
//	int left = 0;
//	int right = sz;
//	int mid;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > i)
//		{
//			right = mid-1;  //ע��һ��Ҫ��mid-1�������mid�Ǿͻ�������ѭ����
//		}
//		else if (arr[mid] < i)//�����mid�����ҵ�������������Ҳ����ͻ�������ѭ��
//		{
//			left = mid+1;  //ע��һ��Ҫ��mid+1�������mid�Ǿͻ�������ѭ����
//		}
//		else {
//			printf("�ҵ��ˣ�\n�±�Ϊ:%d \n", mid);
//				return;
//		}
//
//	}
//	printf("û���ҵ���");
//}
//int main()
//{       
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12 }; //����������������
//	int i ;  //��Ҫ���ҵ�����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("arr[] = ");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n������Ҫ���ҵ���ֵ��");
//	scanf("%d", &i);
//	Find_count(arr, sz,i);
//	return 0;
//}
//��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
//int main()
//{
//	int pw = 123456;
//	int possword = 0;
//	int ai = 0, b;
//	for (b = 1; b < 4; b++)
//	{
//		ai = 1;
//		printf("����������:>");
//		scanf("%d", &possword);
//		while (possword != pw)
//		{
//			printf("�����������������!\n");
//			printf("����������:>");
//			scanf("%d", &possword);
//			ai++;
//			if (ai == 3)
//			{
//				printf("�˳�����");
//				return 0;
//			}
//		}
//	}
//	printf("������ȷ����¼�ɹ���");
//	return 0;
//}
//��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch > 64 && ch < 91)
		{
			putchar(ch + 32);
			printf("\n");
			getchar();
		}
		else if (ch > 96 && ch < 123)
		{
			putchar(ch - 32);
			printf("\n");
			getchar();
		}
		else
		{
			getchar();
			printf("\n");
		}
	}
	return 0;
}