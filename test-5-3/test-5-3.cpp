#include<stdio.h>
//int Power_function(int n, int k)
//{
//	//��1��ѭ����ʽ
//	//int i;
//	//int j = 1;
//	//for (i = 0; i < k; i++)   
//	//{
//	//	j = n * j;
//	//}
//	//return j;
//	//��2���ݹ�
//	if (k ==0)
//	{
//		return 1;
//	}
//	else {
//		return  n* Power_function(n, k - 1);
//	}
//
//}
////��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
//int main()
//{
//	int n, k;
//	printf("������n��k��ֵ��");
//	scanf("%d%d", &n, &k);
//	int count = Power_function(n,k);
//	printf("%d^%d = %d",n,k, count);
//	return 0; 
//}
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//int DigitSum(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	else {
//		return n % 10 + DigitSum(n / 10);
//	}
//}
//int main()
//{
//	int n;
//	printf("������һ���Ǹ�����n��");
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("���%d������֮��:%d",n,sum);
//	return 0;
//}
//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ���������
//Ҫ�󣺲���ʹ��C�������е��ַ�����������
//void reverse_string(char arr[], int sz)
//{
//	char a;
//	if (arr[1] == '\0')
//	{
//		return;
//	}
//	else {
//		a = arr[0];
//		arr[0] = arr[sz - 2];
//		arr[sz - 2] = '\0';
//		reverse_string(arr + 1, sz - 2);
//		arr[sz - 2] = a;
//	}
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse_string(arr, sz);
//	printf("%s", arr);
//	return 0;
//}
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//int Strlen(char arr[])
//{
//	if (arr[1] == '\0')
//	{
//		return 1;
//	}
//	else {
//		return 1 + Strlen(arr + 1);
//	}
//}
//int Strlens(char arr[])
//{
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		i++;
//	}
//	return i;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	//(1)�ݹ�
//	//int count = Strlen(arr);
//	//(2)�ǵݹ�
//	int count = Strlens(arr);
//	printf("%d", count);
//	return 0;
//}
//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//int Factorial(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else {
//		return n * Factorial(n - 1);
//	}
//}
//int Factorials(int n)
//{
//	int j = 1;
//	while (n != 0)
//	{
//		j = j * n;
//		n--;
//	}
//	return  j;
//}
//int main()
//{
//	int n;
//	printf("������n��ֵ��");
//	scanf("%d", &n);
//	//int count = Factorial(n); //�ݹ鷨
//	int count = Factorials(n);
//	printf("%d! = %d", n,count);
//	return 0;
//}
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
void Eve_one(int n)
{
	if (n < 10)
	{
		printf("%d ", n);
		return;
	}
	else {
		Eve_one(n / 10);
	}
	printf("%d ", n % 10);
}
void Eve_ones(int n)
{
	if (n < 10)
	{
		printf("%d ", n);
		return;
	}
	else {
		printf("%d ", n % 10);
		Eve_one(n / 10);
	}
}
int main()
{
	int n;
	printf("��������ֵn��");
	scanf("%d", &n);
	printf("�����ӡ��");
	Eve_one(n);//�����ӡ
	printf("\n�����ӡ��");
	Eve_ones(n);//�����ӡ
	return 0;
}