#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#pragma once
using namespace std;
//class Preason
//{
//	friend void setAge(Preason& p);
//public:
//	int m_Year;
//	Preason(int age,int year);
//private:
//	int m_Age;
//};
////全局函数访问隐私成员；要在类中用friend身名函数
////void setAge(Preason &p)
////{
////	p.m_Age = 20;
////	cout << p.m_Age;
////}
////void test()
////{
////	Preason p1(10);
////	setAge(p1);
////}
//Preason :: Preason(int age,int year)//注意要定义作用域
//{
//	m_Age = age;
//	m_Year = year;
//	cout << "m_Age=" << age << endl;
//	cout << "m_Year=" << year << endl;
//}
//int main()
//{
//	Preason p1(20, 18);
//	//test();
//	return 0;
//}
//class Room
//{
//	friend class Student;
//public:
//	string out_Room;
//	Room()
//	{
//		out_Room = "公共教室";
//		my_Room = "我的教室";
//	}
//private:
//	string my_Room;
//};
//class Student
//{
//public:
//	Student()
//	{
//		rooms = new Room;
//	}
//	void visit()
//	{
//		cout << "out_Room=" << rooms->out_Room << endl;
//		cout << "my_Room=" << rooms->my_Room;
//	}
//	Room* rooms;
//};
//int main()
//{
//	Student s;
//	s.visit();
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//
//class A
//{
//public:
//	friend class B;
//	A(int _age, string _name) :age(_age), name(_name) {}
//	~A() {};
//	void print_a()
//	{
//		cout << name << "	" << age << endl;
//	}
//private:
//	int age;
//	string name;
//};
//class B
//{
//public:
//	//B() {};
//	//~B() {};
//	void print_b(A& a)
//	{
//		a.print_a();
//	}
//};
//
//int main()
//{
//	A a(20, "name");
//	B b;
//	b.print_b(a);
//	system("pause");
//	return 0;
//}
//class Room
//{
//	friend class Student;
//public:
//	string out_Room;
//	Room();
//private:
//	string my_Room;
//};
//class Student
//{
//public:
//	Student();
//	void visit();
//	Room* rooms;
//};
//void Student::visit()
//{
//	cout << "out_Room=" << rooms->out_Room << endl;
//	cout << "my_Room=" << rooms->my_Room;
//}
//Student::Student()
//{
//	rooms = new Room;
//}
//Room::Room()
//{
//	out_Room = "公共教室";
//	my_Room = "我的教室";
//}
//void test()
//{
//	Student s;
//	s.visit();
//
//}
//int main()
//{
//	//先调用的类或函数必须在前面，否则无法执行
//	test();
//	return 0;
//}
//class Room
//{
//	//friend class Student;
//	//friend  void Student :: visit(Room rooms);
//public:
//	string out_Room;
//	Room()
//	{
//		out_Room = "公共教室";
//		my_Room = "我的教室";
//	}
//private:
//	string my_Room;
//};
//class Student
//{
//public:
//	int a;
//	void visit(Room rooms)
//	{
//		cout << "out_Room=" << rooms.out_Room << endl;
//		//cout << "my_Room=" << rooms.my_Room;
//	}
//};
////成员函数访问另一个隐私成员，直接用类调用，成员函数VS报错
//int main()
//{
//	Room rooms;
//	Student s;
//	s.visit(rooms);
//	return 0;
//}
//class People
//{
//public:
//	int a;
//	int b;
//	People(int x,int y)
//	{
//		a = x;
//		b = y;
//	}
//	//成员函数实现加法运算符重载
//	/*People operator+(People p)
//	{
//		People c(10,20);
//		c.a = a + p.a;
//		c.b = b + p.b;
//		return c;
//	}*/
//};
////全局函数实现加法运算符重载
//People operator-(People p,People p1)
//	{
//		People c(10,20);
//		c.a =p. a - p1.a;
//		c.b = p.b - p1.b;
//		return c;
//	}
//int main()
//{
//	People p1(50,80);
//	People p2(10, 20);
//	People p3(10, 20);
//	People p4=p1-p2-p3;
//	cout << p4.a << endl;
//	cout << p4.b << endl;
//	return 0;
//}
class People
{
public:
	int a;
	int b;
	People()
	{
		a = 10;
		b = 20;
	}
};
//cout 必须要引用，不然违背了cout的定义；cout只能有一个所以要用引用
ostream& operator<<(ostream &cout ,People &p)
{
	cout << "p.a="<<p.a <<"p.b="<< p.b;
	return cout;
}
int main()
{
	People p;
	cout << p;
	return 0;
}