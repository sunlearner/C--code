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
//	//��ʼ���б�
//	Preason(string a ,int b ) : name(a),age(b)
//	{
//		;
//	}
//	/*Preason()
//	{
//		cout << "�޲������캯����" << endl;
//	}
//	Preason(int ages,int hights)
//	{
//		age = ages; 
//		hight=new int (hights);
//		cout << "�в������캯����" << endl;
//	}
//	Preason(const Preason &p)
//	{
//		age = p.age;
//		hight = new int(*p.hight);
//		cout << "�����������캯����" << endl;
//	}
//	~Preason()
//	{
//		cout << "����������" << endl;
//		if (hight != NULL)
//		{
//			delete hight;
//			hight = NULL;
//		}
//	}*/
//};
////void test1()
////{
////	//����/����
////	/*Preason p("������");
////	Preason p1(p)*/;
////	//��ʾ
////	/*Preason p=Preason ("��ӭ��");
////	Preason p1 = Preason (p);*/
////	//Preason("��ӭ��");�������������ִ�����ϵͳ������������������
////	//����ת��
////	//Preason p();//��Preason p()���ɺ��������ˣ�
////	Preason p;
////	Preason p2 = p;
////	cout << "����Ϊ��" << p1.name << endl;
////	cout << "����Ϊ��" << p2.name << endl;
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
////	//free(p);//ֵ����
////	//Preason p1=free1();//����ֵ����
////	//ʹ��һ���Ѿ�������ɵĶ�������ʼ��һ���µĶ���
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
//		//��̬�������ܵ��÷Ǿ�̬��Ա����
//		//��̬�������ڹ�ͬ��Դ��һ�鶼�䣻
//		//�Ӷ��޷�ȷ���Ǿ�̬��Ա�������ĸ���Ա�ģ�
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
//	//��̬��Ա���ԴӶ������������������룬���磺Preason::  
//}
////����Ĵ�СΪ1�ֽ�
////ֻ�зǾ� ̬��Ա ���� ����Ĵ�С��Ӱ�죻�зǾ�̬��Ա������������ࡣ
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
//		//this �������ֳ�Ա�������β���ͬ��
//	{
//		this->a = a;
//	}
//	Preason & add(Preason p)
//	{
//		a+=p.a;
//		return *this;
//	}
//};
////���ض�������*this
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
//	//�����Ϊ��ָ�룬����ָ��Ա����
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
	mutable int a;//��������ڳ������п����޸ģ�Ҫ��muable�ؼ���
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