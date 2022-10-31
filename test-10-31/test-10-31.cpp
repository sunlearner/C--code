#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
const double PI = 3.14;
//void Add(int a, int=10)
//{
//	cout << "Add(int a,int)";
//}
//int main()
//{
//	int a = 10;
//	Add(a);
//	return 0;
//}
//重载函数
//函数名相同，函数的返回值相同
//形参的类型不同，或顺序不一样
//int Add(int a, int b)
//{
//	return a + b;
//}
//double Add(double a, double b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = Add(15, 18);
//	cout << a << endl;
//	double x = 0.25;
//	double y = 0.75;
//	double b = Add(3.14 , 3.18);
//	cout << b;
//	return 0;
//}
//类;
;
//class circle
//{
//public:   //权限
//	//属性
//	double m_R;//半径
//	//行为用函数表示
//	double circle_long()
//	{
//		return 2 * PI * m_R;
//	}
//	void circle_longs()
//	{
//		cout << 2 * PI * m_R;
//	}
//};
//int main()
//{
//	circle c1;
//	c1.m_R = 10;
//	/*double b = c1.circle_long();
//	cout << b;*/
//	c1.circle_longs();
//	return 0;
//}
class student
{
public:
	//属性
	string name;
	long long int sno;
	//行为
	void show_Student()
	{
		cout << "姓名：" << name << "\t";
		cout << "学号：" << sno << endl;
	}
};
int main()
{
	student s1;
	s1.name = "孙迎新";
	s1.sno = 2105080905139;
	s1.show_Student();
	student s2;
	s2.name = "沙中玉";
	s2.sno = 2105080905001;
	s2.show_Student();
	return 0;
}