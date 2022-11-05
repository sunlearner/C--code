#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//class Base1
//{
//public:
//};
//class Base2
//{
//public:
//};
//class Son :public Base1, public Base2
//{
//public:
//
//};
////多态访问；子类可以有多个父类
////语法 class 子类 :继承方式 父类1, 继承方式 父类2
//int main()
//{
//	Son s1;
//	return 0;
//}
class  Animal
{
public :
	 int m_A;
};
//加入virtual后变为虚继承
//同时Animal类称为 虚基类
//class Sheep :  public Animal
//{
//	int m_B;
//};
//class Tuo :  public Animal
//{
//	int m_C;
//};
//class SheepTuo :  public Sheep, public Tuo
//{
//public:
//	int m_D;
//};
//int main()
//{
//	//菱形继承，导致孙类包含了两个爷类，所以在调用时要加上作用域
//	//同时两份数据也将导致资源的浪费
//	SheepTuo st;
//	st.Sheep::m_A;
//	st.Tuo::m_A;
//	//st.m_A;
//	cout << sizeof(SheepTuo);
//	return 0;
//}
//class Base
//{
//public:
//	int m_A;
//	void virtual  Show()
//	{
//		cout << "调用的是Base的函数" << endl;
//	}
//};
//class Son :public Base
//{
//public:
//	int m_C;
//	void  Show()
//	{
//		cout << "调用的是Son的函数" << endl;
//	}
//};
//void Arr(Base& s)
//{
//	cout << "调用函数Arr！" << endl;
//	s.Show();
//}
////静态的多态函数在编译阶段前就确定了
////动态的多态函数在运行阶段前就确定了
////在父类的函数前加上virtual使函数变为虚函数，既函数可以在运行阶段确定地址
//int main()
//{
//	//父类的引用和指针可以直接指向子类对象
//	//Son* s=new Son;
//	Son s;
//	//Arr(s);
//	s.Show();
//	return 0;
//}
//多态的满足条件：
//1.要有继承
//2.子类和父类必须要有完全相同的函数声明的函数
//多态实现———计算机
//普通版
//class Computer
//{
//public:
//	int Num1;
//	int Num2;
//	Computer(int a,int b)
//	{
//		Num1 = a;
//		Num2 = b;
//	}
//	int Count(string opter)
//	{
//		if (opter == "+")
//			return Num1 + Num2;
//		else if(opter=="-")
//			return Num1 - Num2;
//		else if(opter=="*")
//			return Num1 * Num2;
//	}
//};
//int main()
//{
//	Computer c1(10, 20);
//	cout << c1.Num1 << "+" << c1.Num2 << "=" << c1.Count("+") << endl;
//	Computer c2(10, 20);
//	cout << c2.Num1 << "-" << c2.Num2 << "=" << c2.Count("-") << endl;
//	Computer c3(10, 20);
//	cout << c3.Num1 << "*" << c3.Num2 << "=" << c3.Count("*") << endl;
//	return 0;
//}
//多态版
//代码组织机构清晰
//可读性强
//利于前期和后期的维护
//class Computer
//{
//public:
//	int a;
//	//virtual int count() = 0;
//	//被称为纯虚函数
//	//而该类也被称为抽象类；
//	//抽象类不能实例化对象
//	//并且子类如果没有重写父类的纯虚函数，那么子类也将变成抽象类；
//	virtual int count() = 0;
//};
//class Add : public Computer
//{
//public:
//	int Num1;
//	int Num2;
//	Add (int a, int b)
//	{
//		Num1 = a;
//		Num2 = b;
//	}
//	int count()
//	{
//		return Num1 + Num2;
//	}
//};
//class Sub : public Computer
//{
//public:
//	int Num1;
//	int Num2;
//	Sub(int a, int b)
//	{
//		Num1 = a;
//		Num2 = b;
//	}
//	int count()
//	{
//		return Num1 - Num2;
//	}
//};
//class Mul : public Computer
//{
//public:
//	int Num1;
//	int Num2;
//	Mul(int a, int b)
//	{
//		Num1 = a;
//		Num2 = b;
//	}
//	int count()
//	{
//		return Num1 * Num2;
//	}
//};
//int  Setcount(Computer& p)
//{
//	return p.count();
//}
//int main()
//{
//	//Computer p1;
//	Add p1(10, 20);
//	cout << p1.Num1 << "+" << p1.Num2 << "=" << Setcount(p1) << endl;
//	Sub p2(10, 20);
//	cout << p2.Num1 << "-" << p2.Num2 << "=" << Setcount(p2) << endl;
//	Mul p3(10, 20);
//	cout << p3.Num1 << "*" << p3.Num2 << "=" << Setcount(p3) << endl;
//	return 0;
//}
//总结c++提倡利用多态设计程序框架
//制作饮品
//大致的过程为：煮水-->冲泡-->倒入杯中-->加入佐料
class Base
{
public :
	//煮水
	virtual void Step1() = 0;
	//冲泡
	virtual void Step2() = 0;
	//倒入杯中
	virtual void Step3() = 0;
	//加入佐料
	virtual void Step4() = 0;
	void Make()
	{
		Step1();
		Step2();
		Step3();
		Step4();
	}
};
class Coffee:public Base
{
public:
	void Step1()
	{
		cout << "煮矿泉水！" << endl;
	}
	void Step2()
	{
		cout << "冲泡咖啡！" << endl;
	}
	void Step3()
	{
		cout << "倒入杯中!" << endl;
	}
	void Step4()
	{
		cout << "加入牛奶和糖！" << endl;
	}
};
class Tea :public Base
{
public:
	void Step1()
	{
		cout << "煮农夫山泉！" << endl;
	}
	void Step2()
	{
		cout << "冲泡茶叶！" << endl;
	}
	void Step3()
	{
		cout << "倒入茶壶中!" << endl;
	}
	void Step4()
	{
		cout << "加入枸杞！" << endl;
	}
};
void Making(Base& p)
{
	p.Make();
}
int main()
{
	Coffee p1;
	Making(p1);
	cout << "----------------------------------------" << endl;
	Tea p;
	Making(p);
	return 0;
}
