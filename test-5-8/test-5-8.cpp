#include<stdio.h>
//��������ʹ����ȫ����λ��ż��ǰ��:
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿��
//void Exchange(int arr[],int n)
//{
//	int i, j,k;                             
//	for (i = 0; i < n; i++)           
//	{
//			j = 1;
//			while (arr[i] % 2 != 1 && i+j!=n)
//			{
//				k = arr[i];
//				arr[i] = arr[i + j];
//				arr[i + j] = k;
//				j++;	       
//			}
//	}
//}
//int main()
//{
//	int arr[20] = { 0 };
//	int i, n;
//	printf("��ѡ������ĸ�����");
//	scanf("%d",&n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	Exchange(arr, n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%-2d ", arr[i]);
//	}
//	return 0;
//}
//���Ͼ���
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.���飺1 2 3 \ 2 3 4 \ 3 4 5
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);   
//void Find_count(int arr[][3],int  n,int sz,int sz1)
//{
//	int i, j;
//	if(arr[0][0] <= n && arr[sz][sz1] > n)
//	{
//		for (i = 0; i < sz; i++)
//		{
//			for (j = 0; j < sz1; j++)
//			{
//				if (arr[i][j] == n)
//				{
//					printf("�ҵ��ˣ��±�Ϊ%d %d", i, j);
//					return;
//				}
//			}
//		}
//	}
//	printf("δ�ҵ�������");
//}
//int  main()
//{
//	int arr[3][3] = { {1,2,3},{2,3,4},{3,4,5} };
//	int n;
//	printf("������Ҫ���ҵ�����");
//	scanf("%d", &n);
//	int sz = sizeof(arr) / sizeof(arr[0]); //һ���м���Ԫ��
//	int sz1 = sizeof(arr[0]) / sizeof(arr[0][0]);//һ���м���Ԫ��
//	Find_count(arr, n,sz,sz1);
//	return 0;
//}
//ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
void Left_revolve(char arr[], int sz,int n)
{
	char arrr[20] = { 0 };
	int i, j;
	for (i = 0; i+n < sz; i++)
	{
		arrr[i] = arr[i + n];
	}
	for (i = 0; i < n; i++)
	{
		arrr[sz-n+i] = arr[i];
	}
	printf("%s", arrr);
}
#include<string.h>
int main()
{
	char arr[] = "ABCDE";
	int n;
	printf("%s", arr);
	printf("\n�����������ַ����ĸ���(0~6����");
	scanf("%d", &n);
	//int sz = sizeof(arr)/sizeof(arr[0]);
	int sz = strlen(arr);
	Left_revolve(arr, sz,n);
	return 0;
}