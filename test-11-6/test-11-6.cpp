#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "����Animal����ĺ�����" << endl;
//	}
//	virtual void show() = 0;
//	/*virtual~Animal()
//	{
//		cout << "����Animal�����ĺ�����" << endl;
//	}*/
//	virtual~Animal() = 0;
//};
//class Cat :public Animal
//{
//public:
//	Cat()
//	{
//		a = new int;
//		cout << "����Cat����ĺ�����" << endl;
//	}
//	virtual void show()
//	{
//		cout << "����show�ĺ�����"<<endl;
//	}
//	~Cat()
//	{
//		cout << "����Cat�����ĺ�����" << endl;
//		if (a != NULL)
//		{
//			delete a;
//			a = NULL;
//		}
//		
//	}
//	int* a;
//};
////����������(����ָ����������ʱ�򲻻�����������������
////			��˱�ᵼ�������ж�ȥ������û�б��ͷţ��Ӷ������ڴ�й©)
////��������������Ϊ�˽����������
////������������������������������
////1.~����()=0;
////2.��������������ʵ��
////3.ֻҪ�д�����������������ǳ����ࣻ�����಻��ʵ��������
//Animal::~Animal()
//{
//	cout << "����Animal���������ĺ�����" << endl;
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
//��̬ʵ����������װ
//class CPU
//{
//public:
//	virtual void count() = 0;
//	/*virtual~CPU()
//	{
//		cout << "����CPU������������" << endl;
//	}*/
//};
//class Xianka
//{
//public:
//	virtual void show() = 0;
//	/*virtual~Xianka()
//	{
//		cout << "����Xianka������������" << endl;
//	}*/
//
//};
//class Neichun
//{
//public:
//	virtual void store() = 0;
	/*virtual~Neichun()
	{
		cout << "����Neichun������������" << endl;
	}*/
//};
//class InterCPU :public CPU
//{
//public:
//	virtual void count()
//	{
//		cout << "Inter��CPU��ʼ���У�" << endl;
//	}
//	/*virtual~InterCPU()
//	{
//		cout << "����InterCPU������������" << endl;
//	}*/
//};
//class InterXianka :public Xianka
//{
//public:
//	virtual void show()
//	{
//		cout << "Inter���Կ���ʼ��ʾ��" << endl;
//	}
//	/*virtual~InterXianka()
//	{
//		cout << "����InterXianka������������" << endl;
//	}*/
//};
//class InterNeichun :public Neichun
//{
//public:
//	virtual void store()
//	{
//		cout << "Inter���ڴ�����ʼ���棡" << endl;
//	}
//	/*virtual~InterNeichun()
//	{
//		cout << "����InterNeichun������������" << endl;
//	}*/
//};
//class LenovoCPU :public CPU
//{
//public:
//	virtual void count()
//	{
//		cout << "Lenovo��CPU��ʼ���У�" << endl;
//	}
//};
//class LenovoXianka :public Xianka
//{
//public:
//	virtual void show()
//	{
//		cout << "Lenovo���Կ���ʼ��ʾ��" << endl;
//	}
//};
//class LenovoNeichun :public Neichun
//{
//public:
//	virtual void store()
//	{
//		cout << "Lenovo���ڴ�����ʼ���棡" << endl;
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
//	cout << "��һ̨���ԣ�" << endl;
//	CPU* cpu = new LenovoCPU;
//	Xianka* xk = new LenovoXianka;
//	Neichun* nc = new LenovoNeichun;
//	Computer c1(cpu, xk, nc);
//	c1.Work();
//	cout << "-------------------------" << endl;
//	cout << "�ڶ�̨���ԣ�" << endl;
//	CPU* cpu1 = new InterCPU;
//	Xianka* xk1 = new InterXianka;
//	Neichun* nc1 = new InterNeichun;
//	Computer c2(cpu1, xk1, nc1);
//	c2.Work();
//	cout << "-------------------------" << endl;
//	cout << "����̨���ԣ�" << endl;
//	Computer c3(new LenovoCPU, new InterXianka,new LenovoNeichun);
//	c3.Work();
//	return 0;
//}
class Base
{
public:
	Base()
	{
		cout << "����Base�Ĺ��캯����" << endl;
	}
	virtual ~Base()
	{
		cout << "����Base������������" << endl;
	}

};
class Son :public Base
{
public:
	Son()
	{
		cout << "����Son�Ĺ��캯����" << endl;
	}
	~Son()
	{
		cout << "����Son������������" << endl;
	}
};
//���캯�����ȸ�������࣬������������������ࡣ
int main()
{
	Son s1;
	return 0;
}