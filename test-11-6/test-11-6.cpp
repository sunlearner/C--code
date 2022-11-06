#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "调用Animal构造的函数！" << endl;
//	}
//	virtual void show() = 0;
//	/*virtual~Animal()
//	{
//		cout << "调用Animal析构的函数！" << endl;
//	}*/
//	virtual~Animal() = 0;
//};
//class Cat :public Animal
//{
//public:
//	Cat()
//	{
//		a = new int;
//		cout << "调用Cat构造的函数！" << endl;
//	}
//	virtual void show()
//	{
//		cout << "调用show的函数！"<<endl;
//	}
//	~Cat()
//	{
//		cout << "调用Cat析构的函数！" << endl;
//		if (a != NULL)
//		{
//			delete a;
//			a = NULL;
//		}
//		
//	}
//	int* a;
//};
////虚析构函数(父类指针在析构的时候不会调用子类的析构函数
////			如此便会导致子类有堆去的属性没有被释放，从而导致内存泄漏)
////虚析构函数就是为了解决这个问题的
////纯虚析构函数与虚析构函数的区别
////1.~类名()=0;
////2.类内声明，类外实现
////3.只要有纯虚析构函数的类就是抽象类；抽象类不能实例化对象
//Animal::~Animal()
//{
//	cout << "调用Animal纯虚析构的函数！" << endl;
//}
//int main()
//{
//	Animal* p = new Cat;
//	p->show();
//	if (p != NULL)
//	{
//		delete p;
//		p = NULL;
//	}
//	return 0;
//}
//多态实例：电脑组装
//class CPU
//{
//public:
//	virtual void count() = 0;
//	/*virtual~CPU()
//	{
//		cout << "调用CPU的析构函数！" << endl;
//	}*/
//};
//class Xianka
//{
//public:
//	virtual void show() = 0;
//	/*virtual~Xianka()
//	{
//		cout << "调用Xianka的析构函数！" << endl;
//	}*/
//
//};
//class Neichun
//{
//public:
//	virtual void store() = 0;
	/*virtual~Neichun()
	{
		cout << "调用Neichun的析构函数！" << endl;
	}*/
//};
//class InterCPU :public CPU
//{
//public:
//	virtual void count()
//	{
//		cout << "Inter的CPU开始运行！" << endl;
//	}
//	/*virtual~InterCPU()
//	{
//		cout << "调用InterCPU的析构函数！" << endl;
//	}*/
//};
//class InterXianka :public Xianka
//{
//public:
//	virtual void show()
//	{
//		cout << "Inter的显卡开始显示！" << endl;
//	}
//	/*virtual~InterXianka()
//	{
//		cout << "调用InterXianka的析构函数！" << endl;
//	}*/
//};
//class InterNeichun :public Neichun
//{
//public:
//	virtual void store()
//	{
//		cout << "Inter的内存条开始储存！" << endl;
//	}
//	/*virtual~InterNeichun()
//	{
//		cout << "调用InterNeichun的析构函数！" << endl;
//	}*/
//};
//class LenovoCPU :public CPU
//{
//public:
//	virtual void count()
//	{
//		cout << "Lenovo的CPU开始运行！" << endl;
//	}
//};
//class LenovoXianka :public Xianka
//{
//public:
//	virtual void show()
//	{
//		cout << "Lenovo的显卡开始显示！" << endl;
//	}
//};
//class LenovoNeichun :public Neichun
//{
//public:
//	virtual void store()
//	{
//		cout << "Lenovo的内存条开始储存！" << endl;
//	}
//};
//class Computer
//{
//protected:
//	CPU* m_cpu;
//	Xianka* m_xk;
//	Neichun* m_nc;
//public:
//	Computer(CPU* cpu, Xianka* xk,Neichun* nc)
//	{
//		m_cpu = cpu;
//		m_xk = xk;
//		m_nc = nc;
//	}
//	void Work()
//	{
//		m_cpu->count();
//		m_xk->show();
//		m_nc->store();
//		
//	}
//	~Computer()
//	{
//		if (m_cpu != NULL)
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//		if (m_xk != NULL)
//		{
//			delete m_xk;
//			m_xk = NULL;
//		}
//		if (m_nc != NULL)
//		{
//			delete m_nc;
//			m_nc = NULL;
//		}
//	}
//};
//int main()
//{
//	cout << "第一台电脑：" << endl;
//	CPU* cpu = new LenovoCPU;
//	Xianka* xk = new LenovoXianka;
//	Neichun* nc = new LenovoNeichun;
//	Computer c1(cpu, xk, nc);
//	c1.Work();
//	cout << "-------------------------" << endl;
//	cout << "第二台电脑：" << endl;
//	CPU* cpu1 = new InterCPU;
//	Xianka* xk1 = new InterXianka;
//	Neichun* nc1 = new InterNeichun;
//	Computer c2(cpu1, xk1, nc1);
//	c2.Work();
//	cout << "-------------------------" << endl;
//	cout << "第三台电脑：" << endl;
//	Computer c3(new LenovoCPU, new InterXianka,new LenovoNeichun);
//	c3.Work();
//	return 0;
//}
class Base
{
public:
	Base()
	{
		cout << "调用Base的构造函数！" << endl;
	}
	virtual ~Base()
	{
		cout << "调用Base的析构函数！" << endl;
	}

};
class Son :public Base
{
public:
	Son()
	{
		cout << "调用Son的构造函数！" << endl;
	}
	~Son()
	{
		cout << "调用Son的析构函数！" << endl;
	}
};
//构造函数是先父类后子类，析构函数是先子类后父类。
int main()
{
	Son s1;
	return 0;
}