#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//普通函数好函数模板都可以实现时，优先实现普通函数
//可以通过空模板参数来强制调用函数模板
//函数模板也可以发生重载
//如果函数模板可以产生更好的匹配，那就调用模板函数
//void Show(int a)
//{
//	cout << "调用普通函数Show()！" << endl;
//}
//template <typename T>
//void Show(T a)
//{
//	cout << "调用模板函数Show()！" << endl;
//}
//template <typename T>
//void Show(T a,T b)
//{
//	cout << "调用重载模板函数Show()！" << endl;
//}
//template <typename T>
//int Add(T a,T b)
//{
//	cout << "调用模板函数Add()！" << endl;
//	return a + b;
//}
//int  Add(int  a, int b)
//{
//	cout << "调用普通函数Add()！" << endl;
//	return a + b;
//}
//int main()
//{
//	char a = 10;
//	//Show<int >(a);
//	//Show(a);
//	char b = 20;
//	//Show(a, b);
//	cout << Add(a, b) << endl;
//	return 0;
//}
//模板的局限性
//自定义的模板类型是无法进行比较的
//因此可以为这些特定的类型进行具体化的模板
//class Base
//{
//public:
//	Base(int age ,string name )
//	{
//		m_Age = age;
//		m_Name = name;
//	}
//	int m_Age;
//	string m_Name;
// };
//template <typename T>
//bool Exange(T& a, T& b)
//{
	//if (a == b)
	//{
	//	return true;
	//}
//	return false;
//}
//template<typename T>
//bool Bitters(T &a, T &b)
//{
//	/*if (a == b)
//	{
//		return true;
//	}*/
//	return false;
//}
//template<> 
//bool Bitters(Base &a,Base &b)
//{
//	if (a.m_Age==b.m_Age &&  a.m_Name==b.m_Name)
//	{
//		return true;
//	}
//	return false;
//}
//template<> bool Bitters<int >(int a, int b)
//{
//	if (a == b)
//		return  true;
//	else
//		return false;
//}
//自定义类型的变量是无法进行判断的，因此
//对这些特定的类型，进行显示具体化模板
//注意要先有原来的模板
//在新建一个特定的模板，特定模板的函数名，参数必须初始化
//定义：template<> 函数类型 函数名(特定类型 变量,....)
//int main()
//{
//	Base b1(18,"孙悟空");
//	Base b2(20, "猪八戒");
//	int a = 10;
//	int b = 20;
//	if (Bitters(b1, b2))
//	{
//		cout << "b1与b2相等！" << endl;
//	}
//	else
//	{
//		cout << "b1与b2不相等！" << endl;
//	}
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//template<typename T>
//T add(T X, T Y)
//{
//	return X + Y;
//}
//template<>
//int* add <int*>(int* x, int* y)
//{
//	int* z = new int[5];
//	for (int i = 0; i < 5; i++)
//		z[i] = x[i] + y[i];
//	return z;
//}
//int main()
//{
//	int a[5] = { 4,6,2,7,8 };
//	int b[5] = { 7,5,4,2,6 };
//	for (int i = 0; i < 5; i++)
//		cout << a[i] + b[i] << " ";//使用隐式实例化函数模板
//	cout << endl;
//	int* c = NULL;
//	c = add(a, b);//使用显示实例化函数模板
//	for (int i = 0; i < 5; i++)
//		cout << c[i] << " ";
//	cout << endl;
//	return 0;
//
//}
//类模板
//template <typename Name,typename Age=int>
//class Base
//{
//public:
//	//Base(string name, int age)
//	//{
//	//	m_age = age;
//	//	m_name = name;
//	//}
//	string m_name;
//	int m_age;
//	void Show1()
//	{
//		cout << "孙迎新";
//		cout << "18";
//	}
//};
//template <typename Name, typename Age >
//class Base1
//{
//public:
//	/*Base1(string name, int age)
//	{
//		m_age = age;
//		m_name = name;
//	}*/
//	string m_name;
//	int m_age;
//	void Show2()
//	{
//		cout << "姓名：";
//		cout << "年龄：";
//	}
//};
//template<class T>
//class Myclass
//{
//public:
//	T obj;
//	void Show1()
//	{
//		obj.Show1();
//	}
//	void Show2()
//	{
//		obj.Show2();
//	}
//};
//int main()
//{
//	/*Base <string>b1("孙迎新", 18);
//	b1.();*/
//	//类模板的调用不能使用自动类型推导，必须使用显示指定类型
//	//类模板在参数列表中可以有默认参数
//	//Base <int , string>b2(20, "孙迎新");
//	//b2.Show();
//	//类模板中的成员函数在调用时才会去创建
//	Myclass<Base>my;
//	//my.Show2();
//	my.Show1();
//	return 0;
//}
template<typename Name,class Age>
class Base
{
public:
	Base(Name name,Age age)
	{
		this->m_age = age;
		this->m_name = name;
	}
	Name m_name;
	Age m_age;
	void Show()
	{
		cout << "姓名：" << this->m_name << endl;
		cout << "年龄：" << this->m_age << endl;
	}
};
void printfBase(Base <string, int>& b)
{
	b.Show();
}
template<typename T>
void printfBase1(T& b)
{
	b.Show();
}
template<typename T,class T1>
void printfBase2(Base<T,T1>& b)
{
	b.Show();
}
int main()
{
	//类模板对象做函数参数
	//1.指定传入参数类型
	Base <string, int>b1("孙迎新", 18);
	//printfBase(b1);
	//2.整个类模板化
	//printfBase1< Base <string, int>>(b1);
	//3.参数模板化
	printfBase2<string,int>(b1);
	return 0;
}