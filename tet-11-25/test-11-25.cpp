#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//int main()
//{
//	//auto���������Ƶ�����
//	auto a = 10;
//	auto b = 'a';
//	auto c = &a;
//	auto& d = a;
//	auto n = 1, m = 2;
//	//auto n = 1, m = 2.0;
//	//ͬһ�в��ܶ�������ͬ���͵ı���
//	//ͬʱҲ������Ϊ�����Ĳ���
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//	cout << typeid(n).name() << endl;
//	cout << typeid(m).name() << endl;
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	for (auto& e : arr)
//	{
//		e *= 2;
//	}
//	for (auto e : arr)
//	{
//		cout << e << "  ";
//	}
//	cout << endl;
//	return 0;
//}
void Fun(int a)
{
	cout << "�������ͺ���" << endl;
}
void Fun(int* a)
{
	cout << "��������ָ�뺯��" << endl;
}
class People
{
	int a;
};
struct Preason
{
	int a;
};
int main()
{
	//Fun(0);
	//Fun(NULL);
	////ָ���ʼ��Ϊ�����ʹ��nullptr
	////������NULL��Ϊ��NULL�Ķ���Ϊ0��
	////��nullptr��ʾ���ǿ�ָ�룻
	//Fun(nullptr);
	//cout << sizeof(NULL) << endl;
	//cout << sizeof(nullptr) << endl;
	//cout << sizeof((void*)0) << endl;
	People p;
	Preason p1;
	p1.a;
	//class ��Ĭ�Ϸ�����private
	//��struct��Ĭ�Ϸ�����public
	return 0;
}