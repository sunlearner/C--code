#include<stdio.h>
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢(��������
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
//void init(int arr[],int n)//��ʼ������
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void reverse(int arr[], int n)
//{
//	int i,j;
//	int arr1[20] = { 0 };
//	/*for (i = 0; i < n; i++)
//	{
//		arr1[i] = arr[n - 1 - i];
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr1[i]);
//	}*/
//	for (i = 0; i < n/2; i++)
//	{
//		j = arr[i];
//		arr[i] = arr[n - 1 - i];
//		arr[n - i - 1] = j;
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[20] = { 0 };
//	int n,i;
//	printf("��ȷ������n�ĸ�����");
//	scanf("%d", &n);
//	init(arr, n);//��ʼ������
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	reverse(arr, n);//����Ԫ�ص�����
//	return 0;
//}
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
int Fibonacci(int n)
{
	int count = 0 ;
	int count1 = 1;
	int count2 = 1;
	if (n == 1 || n == 2)
	{
		return 1;
	}
	while (n != 2)
	{
		count = count1 + count2;
		count1 = count2;
		count2 = count;
		n--;

	}
	return count;
}
int Fibonacci_s(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
		return  Fibonacci_s(n - 1) + Fibonacci_s(n - 2);
}
int main()
{
	int n, count;
	printf("n��ֵΪ��");
	scanf("%d", &n);
	count = Fibonacci(n);//�ǵݹ�
	count = Fibonacci_s(n);//�ݹ�
	printf("%d", count);
	return 0;
}