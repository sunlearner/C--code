#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
struct Peraon
{
public:
	int age;
private:
	struct Perason* p;
};
//C语言中struct是用来定义结构体的
//C++中，兼容C语言struct结构体的用法，但是同时struct也可以定义类
//与class不同的是struct所定义的类，
//在本体引用自己类类型的指针是要加上s在类名前truct
class Student
{
public:
	void Show()
	{
		cout << _a;
	}
	void Man()
	{
		cout << "Man()" << endl;
	}
	int _a;
};
int main()
{
	Student* s=nullptr;
	//cout << sizeof(s) << endl;
	//cout << &s;
	//s->Man();
	s->Show();
	//成员函数储存在公共代码段，所以s->Man()直接进入Man()函数
	//而s->Show()中用成员变量，所以要通过s指针去访问类中的变量
	//又因为s为空指针，所以程序崩溃。
	return 0;
}