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
////��̬���ʣ���������ж������
////�﷨ class ���� :�̳з�ʽ ����1, �̳з�ʽ ����2
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
//����virtual���Ϊ��̳�
//ͬʱAnimal���Ϊ �����
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
//	//���μ̳У������������������ү�࣬�����ڵ���ʱҪ����������
//	//ͬʱ��������Ҳ��������Դ���˷�
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
//		cout << "���õ���Base�ĺ���" << endl;
//	}
//};
//class Son :public Base
//{
//public:
//	int m_C;
//	void  Show()
//	{
//		cout << "���õ���Son�ĺ���" << endl;
//	}
//};
//void Arr(Base& s)
//{
//	cout << "���ú���Arr��" << endl;
//	s.Show();
//}
////��̬�Ķ�̬�����ڱ���׶�ǰ��ȷ����
////��̬�Ķ�̬���������н׶�ǰ��ȷ����
////�ڸ���ĺ���ǰ����virtualʹ������Ϊ�麯�����Ⱥ������������н׶�ȷ����ַ
//int main()
//{
//	//��������ú�ָ�����ֱ��ָ���������
//	//Son* s=new Son;
//	Son s;
//	//Arr(s);
//	s.Show();
//	return 0;
//}
//��̬������������
//1.Ҫ�м̳�
//2.����͸������Ҫ����ȫ��ͬ�ĺ��������ĺ���
//��̬ʵ�֡����������
//��ͨ��
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
//��̬��
//������֯��������
//�ɶ���ǿ
//����ǰ�ںͺ��ڵ�ά��
//class Computer
//{
//public:
//	int a;
//	//virtual int count() = 0;
//	//����Ϊ���麯��
//	//������Ҳ����Ϊ�����ࣻ
//	//�����಻��ʵ��������
//	//�����������û����д����Ĵ��麯������ô����Ҳ����ɳ����ࣻ
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
//�ܽ�c++�ᳫ���ö�̬��Ƴ�����
//������Ʒ
//���µĹ���Ϊ����ˮ-->����-->���뱭��-->��������
class Base
{
public :
	//��ˮ
	virtual void Step1() = 0;
	//����
	virtual void Step2() = 0;
	//���뱭��
	virtual void Step3() = 0;
	//��������
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
		cout << "���Ȫˮ��" << endl;
	}
	void Step2()
	{
		cout << "���ݿ��ȣ�" << endl;
	}
	void Step3()
	{
		cout << "���뱭��!" << endl;
	}
	void Step4()
	{
		cout << "����ţ�̺��ǣ�" << endl;
	}
};
class Tea :public Base
{
public:
	void Step1()
	{
		cout << "��ũ��ɽȪ��" << endl;
	}
	void Step2()
	{
		cout << "���ݲ�Ҷ��" << endl;
	}
	void Step3()
	{
		cout << "��������!" << endl;
	}
	void Step4()
	{
		cout << "������轣�" << endl;
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
