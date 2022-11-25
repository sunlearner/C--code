#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//int main()
//{
//	//auto他能自足推导类型
//	auto a = 10;
//	auto b = 'a';
//	auto c = &a;
//	auto& d = a;
//	auto n = 1, m = 2;
//	//auto n = 1, m = 2.0;
//	//同一行不能定义多个不同类型的变量
//	//同时也不能做为函数的参数
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
	cout << "调用整型函数" << endl;
}
void Fun(int* a)
{
	cout << "调用整型指针函数" << endl;
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
	////指针初始化为空最好使用nullptr
	////而不是NULL因为，NULL的定义为0；
	////而nullptr表示的是空指针；
	//Fun(nullptr);
	//cout << sizeof(NULL) << endl;
	//cout << sizeof(nullptr) << endl;
	//cout << sizeof((void*)0) << endl;
	People p;
	Preason p1;
	p1.a;
	//class 的默认访问是private
	//而struct的默认访问是public
	return 0;
}