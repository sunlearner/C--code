#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//��ȱ���ֵĺ�������ǲ�ȱҲ����������
//���ǲ�ȱ���ֵ�ǰ������ǲ�ȱ
//void Fun(int a,int b=20,int c=10)
//{
//	cout << "Hello !" << endl;
//}
//int main()
//{
//	//ȱʡ����
//	/*int a = 10;
//	Fun(10,10,10);*/
//	return 0;
//}
//����������ֻ�ͺ������͵�˳�򣬶��٣���ͬ�й�
//int main()
//{
//	//����==���
//	//�����ڶ����Ǳ����ʼ��
//	//��ʽ����ת��
//	int a = 10;
//	char c = a;
//	//char& b = a;��������ִ��
//	const char& b = a;//����������в���һ����ʱ��������ʱ�������г���
//	return 0;
//}
//int Fun1(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
int& Fun2(int a, int b)
{
	static int c;
	c = a + b;
	return c;
}
int main()
{
	int set=Fun2(10,20);
	cout << set;
	printf("abc\n");
	Fun2(100,200);
	cout << set;
	return 0;
}