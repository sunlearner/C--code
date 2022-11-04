#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//class Preason
//{
//public :
//	int a;
//	int b;
//	Preason(int x, int y)
//	{
//		a = x;
//		b = y;
//	}
//	Preason& operator++()
//	{
//		a++;
//		b++;
//		return *this;
//	}
//};
//ostream& operator<<(ostream& cout, Preason p)
//{
//	cout << "a=" << p.a << endl;
//	cout << "b=" << p.b << endl;
//	return cout;
//}
//int main()
//{
//	Preason p(10, 100);
//	cout << ++(++p) << "hello word" << endl;
//	cout << p;
//	return 0;
//}
//class Preason
//{
//public:
//	int a;
//	int b;
//	Preason(int x, int y)
//	{
//		a = x;
//		b = y;
//	}
//	Preason& operator--()
//	{
//		a--;
//		b--;
//		return *this;
//	}
//};
//ostream& operator<<(ostream& cout, Preason p)
//{
//	cout << "a=" << p.a << endl;
//	cout << "b=" << p.b << endl;
//	return cout;
//}
//int main()
//{
//	Preason p(10, 100);
//	cout << --(--p) << "hello word" << endl;
//	cout << p;
//	return 0;
//}
//class Preason
//{
//public:
//	int a;
//	int b;
//	Preason(int x, int y)
//	{
//		a = x;
//		b = y;
//	}
//	//Preason operator++(int)中的int是为了区分前置++
//	Preason operator++(int )
//	{
//		Preason count(0,0);
//		count.a = a;
//		count.b = b;
//		a++;
//		b++;
//		return count;
//	}
//};
//ostream& operator<<(ostream& cout, Preason p)
//{
//	cout << "a=" << p.a << endl;
//	cout << "b=" << p.b << endl;
//	return cout;
//}
//int main()
//{
//	Preason p(10, 100);
//	int a = 10;
//	cout << (p++) << "hello word" << endl;
//	cout << p;
//	return 0;
//}
class Preason
{
public:
	int a;
	int b;
	Preason(int x, int y)
	{
		a = x;
		b = y;
	}
	//Preason operator++(int)中的int是为了区分前置++
	//bool operator==(Preason p)
	//{
	//	if (a == p.a && b == p.b)
	//	{
	//		return true;
	//	}
	//	return false;
	//}
};
//ostream& operator<<(ostream& cout, Preason p)
//{
//	cout << "a=" << p.a << endl;
//	cout << "b=" << p.b << endl;
//	return cout;
//}
//bool operator!=(Preason p,Preason p1)
//{
//	if (p1.a == p.a &&p1. b == p.b)
//	{
//		return false;
//	}
//	return true;
//}
//int main()
//{
//	Preason p(10, 100);
//	Preason p1(101, 100);
//	if (p != p1)
//	{
//		cout << "p和p1不相等!";
//	}
//	else
//		cout << "p和p1相等！";
//	return 0;
//}
//继承的优点：
//减少重复的代码
//语句：class 子类 ：继承方式 父类
//class Base
//{
//public:
//	Base(int a, int b, int c)
//	{
//		A = a;
//		B = b;
//		C = c;
//		cout << a << "\t" << b << "\t" << c << endl;
//	}
//	int A;
//protected:
//	int B;
//private:
//	int C;
//};
////公共继承：父类中的公共对象和保护对象在公共继承中不变，父类中的隐私对象不能访问
//class Son : public Base
//{
//public :
//	//父类在子类以Son(int d):Base(10,20,30)的形式发生形参初始化
//	Son(int d):Base(10,20,30)
//	{
//		cout << "调用Base";
//		D = d;
//	}
//	int D;
//};
//int main()
//{
//	//Base b(10, 20, 30);
//	/*Son s1(10);
//	s1.(10, 20, 30);*/
//	//Son s2;
//	Son s3(10);
//	return 0;
//}
//class Base
//{
//public:
//	Base()
//	{
//		A = 10;
//		B = 20;
//		C = 30;
//	}
//	int A;
//protected:
//	int B;
//private:
//	int C;
//};
////class Son : protected Base
////{
////public:
////	int D;
////};
//class Son : private Base
//{
//public:
//	int D;
//};
//int main()
//{
//	Son s1;
//	return 0;
//}
//class Base
//{
//public:
//	static int x;//初始化要类内声明，类外初始化。
//	int A;
//protected:
//	int B;
//private:
//	int C;
//};
//class Son : public Base
//{
//public:
//	int D;
//};
//int Base::x = 100;
//int main()
//{
//	Son s1;
//	cout << sizeof(s1)<<endl<<s1.x;
//	s1.x = 10;
//	cout << "\t" << s1.x;
//	return 0;
//}
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base调用构造函数！" << endl;
//	}
//	~Base()
//	{
//		cout<< "Base调用析构函数！" << endl;
//	}
//};
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "Son调用构造函数！" << endl;
//	}
//	~Son()
//	{
//		cout << "Son调用析构函数！" << endl;
//	}
//};
//int main()
//{
//	//先调用父类的构造函数，在调用子类的构造函数
//	//先释放子类的析构函数，最后释放父类的析构函数
//	Son s;
//	return 0;
//}
class Base
{
public:
	int a;
	int b;
	Base()
	{
		a = 100;
		b = 20;
	}
	void Show()
	{
		cout << "调用Base函数！"<<endl;
	}
	void Shows()
	{
		cout << "孙迎新在调用Base函数！"<<endl;
	}
};
class Son : public Base
{
public:
	int a;
	Son()
	{
		a = 10;
	}
	void Show()
	{
		cout << "调用Son函数！"<<endl;
	}
};
int main()
{
	//继承同名成员时，先访问子类的成员对象，在.的后面加上作用域就能访问父类同名的成员对象
	//原理：当子类与父类有同名成员时，子类会隐藏父类的同名成员，
	//因此只有加上父类的作用域才能访问父类。
	Son s1;
	cout << s1.a << endl;
	s1.Show();
	s1.Shows();
	cout<<s1.Base::a << endl;
	s1.Base::Show();
	return 0;
}