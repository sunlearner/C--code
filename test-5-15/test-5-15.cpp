#include<stdio.h>
//���Ͼ���
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ����;
//ʱ�临�Ӷ�С��O(N);
//int Findnum(int (*arr)[3], int n, int* px, int* py)
// ����ָ���д�ŵ�Ӧ��������ĵ�ַ
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x < *px && y >= 0)
//	{
//		if (arr[x][y] > n)
//		{
//			y--;
//		}
//		else if (arr[x][y] < n)
//		{
//			x++;
//		}
//		else {
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{2,3,4},{3,4,5} };
//	int x = 3;
//	int y = 3;
//	printf("������Ҫ���ҵ�����");
//	int n;
//	scanf("%d", &n);
//	int set = Findnum(arr, n, &x, &y);
//	if (set == 1)
//	{
//		printf("�ҵ��ˣ�\n");
//		printf("�±�Ϊ��%d��%d", x, y);
//	}
//	else {
//		printf("û���ҵ���");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[5];//����
//	int* parr1[10];//ָ�����飻�����д�ŵ���ָ��
//	int(*parr2)[10];//����ָ�룻��ָ�����ָ��һ�����飬�������10��Ԫ�أ�ÿ��Ԫ����int����
//	int(*parr3[10])[5];//����ָ������飻parr3��һ�����ָ������飻��������10����ֵָ�룻
//	//ÿ��ָ�����ָ��һ�����飬��ָ���������5��Ԫ�أ�ÿ��Ԫ����int����
//	return 0;
//}
//#include <stdio.h>
//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}
//void test(int* arr)//ok?
//{}
//void test2(int* arr[20])//ok?
//{}
//void test2(int** arr)//ok?
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}
//void test(int arr[3][5])//ok������
//{}
//void test(int arr[][])//ok�����У����в���Ϊ�գ�
//{}
//void test(int arr[][5])//ok������
//{}
//�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
//��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
//�����ŷ������㡣
//void test(int* arr)//ok��������
//{}
//void test(int* arr[5])//ok�������ԣ�����һ��ָ������
//{}
//void test(int(*arr)[5])//ok�����ԣ�����ָ��
//{}
//void test(int** arr)//ok�������ԣ�����ָ��
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}
//void print(int* p, int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//void print1(char* p, int sz) {
//	int i = 0;
//	for (i = 0; i < sz*4; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char* p = (char*)arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ��p����������
////	print(p, sz);
//	print1(p, sz);//��int*ǿ��ת����char*��pָ���һ���ֽ�һ���ֽڵĴ�ӡ��
//	return 0;
//}
//void test(int** ptr) {
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
// //�����ǵȼ۵�
//	return 0;
//}
void test()
{
	printf("hehe\n");
}
int main()
{
	printf("%p\n", test);// 00B413CA
	printf("%p\n", &test); //00B413CA
	//˵��test=&test��
	return 0;
}
