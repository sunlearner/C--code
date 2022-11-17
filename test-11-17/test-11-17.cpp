#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//#include"Base.hpp"
//类模板与继承
//当子类继承的父类是一个模板时，子类在声明的过程中，要指明父类的类型
//如果不指定，编译器就无法给子类分配内存
//如果想灵活的使用父类，子类也需要变为模板类
//template <typename Name,typename Age>
//class Base
//{
//public:
//	Base(Name name, Age age);
//	void Show();
//	Name m_name;
//	Age m_age;
//};
//template<typename Name,class Age>
//Base< Name,Age >::Base(Name name, Age age)
//{
	//this->m_name = name;
	//this->m_age = age;
//}
////class Son : public Base<string, int>
////{
////};
////template<class T, class T1>
////class Son : public Base<T,T1>
////{
////public:
////};
////模板类类外实现对象函数
//template<typename Name, class Age>
//void Base<Name,Age>:: Show()
//{
//	cout << "姓名：" << this->m_name << "  年龄：" << this->m_age << endl;
//}
//int main()
//{
//	Base <string, int>b1("孙迎新", 20);
//	b1.Show();
//	return 0;
//}
//类模板分文件 编写
//template <typename Name, typename Age>
//class Base
//{
//public:
//	Base(Name name, Age age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	void Show()
//	{
//		cout << "姓名：" << this->m_name << "  年龄：" << this->m_age << endl;
//	}
//	Name m_name;
//	Age m_age;
//};
//int main()
//{
//	//类模板分文件编写
//	//1、直接使用.cpp源文件
//	//2、将声明与文件写在同一个文件中，并更改后缀为.hpp，
//	//hpp是约定名称
//	//出现问题的原因：类模板中的成员函数是在调用阶段才创立的
//	//所以导致文件编译时链接不到
//	Base <string, int>b1("孙迎新",20);
//	b1.Show();
//	return 0;
//}
//template<class T1, class T2>
//class Base;
//template<class T1, class T2>
//void Show(Base<T1,T2>& b1)
//{
//	cout << "姓名：" << b1.m_name << "  年龄：" << b1.m_age << endl;
//}
//template<class T1,class T2>
//class Base
//{
//	//全局函数类内实现，直接在类内友元即可
//	/*friend void Show(Base<string, int> b1)*/
//	//{
//	//	cout << "姓名：" << b1.m_name << "  年龄：" << b1.m_age << endl;
//	//}
//	//全局函数类外实现，
//	//1、加空模板参数列表
//	//2、因为是类外实现，所以要让 编译器提前知道这个函数
//	//因此要将函数放在模板类的前面
//	//同时还要让编译器提前知道模板类的存在
//	//3、friend
//	friend void Show<>(Base<T1, T2>&b1);
//public:
//	Base(T1 name,T2 age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//private:
//	T1 m_name;
//	T2 m_age;
//};
//
//int main()
//{
//	//类模板与友元
//	Base<string, int>b1("孙迎新", 20);
//	Show(b1);
//	return 0;
//}
template <class Type>
class Array
{
public:
	Array(int n)
	{
		this->count = 0;
		this->whole = n;
		this->arr = new Type[this->whole];
	}
	Array(const Array &p)
	{
		cout << "调用Array(const Array &p)函数" << endl;
		this->count = p.count;
		this->whole = p.whole;
		this->arr = new Type[whole];
		for (int x = 0; x < p.count; x++)
		{
			arr[x] = p.arr[x];
		}
	}
	Array& operator=(const Array& p)
	{
		this->count = p.count;
		this->whole = p.whole;
		if (this->arr != NULL)
		{
			delete[]this->arr;
		}
		this->arr = new Type[whole];
		for (int x = 0; x < p.count; x++)
		{
			arr[x] = p.arr[x];
			return *this;
		}
	}
	Type operator[](const int x)
	{
		return this->arr[x];
	}
	void Backadd(const Type &p1)
	{
		if (this->count == this->whole)
		{
			cout << "数值已满，无法在添加数据了！" << endl;
		}
		else
		{
			this->arr[this->whole - this->count-1] = p1;
			this->count++;
		}
	}
	void Backdelete()
	{
		if (this->count == 0)
		{
			cout << "数组为空，无法进行删除！" << endl;
		}
		else
		{
			this->count--;
		}
	}
	int Showcount()
	{
		return this->count;
	}
	int Showwhole()
	{
		return this->whole;
	}
	~Array()
	{
		if (arr != NULL)
		{
			delete[]this->arr;
			arr = NULL;
		}
	}
private:
	int count;
	int whole;
	Type* arr;
};
class Base
{
public:	
	void Add(string name, int age)
	{
		this->Name = name;
		this->Age = age;
	}
	string Name;
	int Age;
};
int main()
{
	//实现一个通用的数值类
	//Array<int>p(10);
	//Array<int>p1(15);
	//for (int x = 0; x < 10; x++)
	//{
	//	p.Backadd(x);
	//}
	//for (int x = 0; x < p.Showcount(); x++)
	//{
	//	cout << p[x]<<"   ";
	//}
	//p.Backdelete();
	//p.Backdelete();
	//cout << endl;
	//for (int x = 0; x < p.Showcount(); x++)
	//{
	//	cout << p[x] << "   ";
	//}
	/*cout <<"数组共有" << p.Showcount() <<"个数！" << endl;
	cout << "数组的容量为" << p.Showwhole() << endl;*/
	Array<Base>b1(5);
	Base n;
	n.Add("猪八戒", 99);
	Base n1;
	n1.Add("白龙马", 50);
	Base n2;
	n2.Add("孙悟空", 1000);
	Base n3;
	n3.Add("theshy", 20);
	b1.Backadd(n);
	b1.Backadd(n1);
	b1.Backadd(n2);
	b1.Backadd(n3);
	n3.Add("秦始皇", 66);
	b1.Backadd(n3);
	b1.Backdelete();
	b1.Backdelete();
	b1.Backdelete();
	b1.Backdelete();
	b1.Backdelete();
	b1.Backdelete();
	for (int x = 0; x < b1.Showcount(); x++)
	{
		cout << "姓名：  " << b1[x].Name << "   年龄：  " << b1[x].Age << endl;
	}
	cout << "数组共有" << b1.Showcount() << "个！" << endl;
	cout << "数组的容量为" << b1.Showwhole() << endl;
	return 0;
}