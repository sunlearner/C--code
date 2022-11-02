#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
using namespace std;
//class Preason
//{
//public:
//	string name;
//	int age;
//	int *hight;
//	void set(string names, int ages)
//	{
//		name = names;
//		age = ages;
//	}
//	//初始化列表
//	Preason(string a ,int b ) : name(a),age(b)
//	{
//		;
//	}
//	/*Preason()
//	{
//		cout << "无参数构造函数！" << endl;
//	}
//	Preason(int ages,int hights)
//	{
//		age = ages; 
//		hight=new int (hights);
//		cout << "有参数构造函数！" << endl;
//	}
//	Preason(const Preason &p)
//	{
//		age = p.age;
//		hight = new int(*p.hight);
//		cout << "拷贝参数构造函数！" << endl;
//	}
//	~Preason()
//	{
//		cout << "析构函数！" << endl;
//		if (hight != NULL)
//		{
//			delete hight;
//			hight = NULL;
//		}
//	}*/
//};
////void test1()
////{
////	//括号/常见
////	/*Preason p("孙潇洋");
////	Preason p1(p)*/;
////	//显示
////	/*Preason p=Preason ("孙迎新");
////	Preason p1 = Preason (p);*/
////	//Preason("孙迎新");匿名对象，在语句执行完后，系统会立即回收匿名对象
////	//隐性转换
////	//Preason p();//把Preason p()看成函数声明了；
////	Preason p;
////	Preason p2 = p;
////	cout << "姓名为：" << p1.name << endl;
////	cout << "姓名为：" << p2.name << endl;
////}
//void free(Preason p)
//{
//	;
//}
////Preason free1()
////{
////	Preason p1;
////	return p1;
////}
////void test01()
////{
////	//Preason p;
////	//free(p);//值传递
////	//Preason p1=free1();//部分值返回
////	//使用一个已经创建完成的对象来初始化一个新的对象
////	Preason p("sun",18);
////	cout << p.age << endl;
////	cout << p.name << endl;
////	Preason p1(p);
////}
////int main()
//{
//	//test01();
//	//test1();
//	return 0;
//}
//class Preason
//{
//public:
//	static int a;
//	static int b;
//	int c;
//	static void set(int a1, int b1 )
//	{
//		a = a1;
//		b = b1;
//		//静态函数不能调用非静态成员变量
//		//静态变量属于共同资源，一遍都变；
//		//从而无法确定非静态成员变量是哪个成员的；
//	}
//};
//int Preason::a=10;
//int Preason::b = 20;
//void test()
//{
//	Preason p;
//	//p.a = 10;
//	//p.b = 20;
//	//p.c = 30;
//	p.set(10, 20);
//	cout << "a=" << p.a;
//	cout << "b=" << p.b<<endl;
//	Preason p1;
//	//p1.a = 300;
//	//p1.b = 200;
//	//p1.c = 10;
//	p1.set(30, 20);
//	/*cout << "a=" << p.a;
//	cout << "b=" << p.b;*/
//	cout << "a=" << Preason::a ;
//	//静态成员可以从对象调入或者是类名调入，例如：Preason::  
//}
////空类的大小为1字节
////只有非静 态成员 变量 对类的大小有影响；有非静态成员变量不计算空类。
//int main()
//{
//	test();
//	return 0;
//}
//class Preason
//{
//public:
//	int a;
//	static int b;
//	void set(int a)
//		//this 用来区分成员变量与形参相同是
//	{
//		this->a = a;
//	}
//	Preason & add(Preason p)
//	{
//		a+=p.a;
//		return *this;
//	}
//};
////返回对象本身用*this
//int main()
//{
//	/*Preason p;
//	p.set(10);
//	cout << p.a;*/
//	Preason p1;
//	p1.a = 10;
//	Preason p2;
//	p2.a = 10;
//	p2.add(p1).add(p1).add(p1).add(p1);
//	cout << "p2=" << p2.a;
//	return 0;
//}
//class Preason
//{
//public:
//	int a;
//	void show1()
//	{
//		cout << "show";
//	}
//	//传入的为空指针，不能指成员变量
//	void show2()
//	{
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << "a=" << a;
//	}
//
//};
//int main()
//{
//	Preason* p1 = NULL;
//	//p1->show1();
//	p1->show2();
//	return 0;
//}
class Preason
{
public:
	mutable int a;//特殊变量在常函数中可以修改，要有muable关键字
	int b;
	void set()
		//void set()const== const Preason *cost this;a=this->a;
	{
		this->a = 10;
		this->b = 20;
	}
};
int main()
{

	return 0;
}