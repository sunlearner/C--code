#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//#include"Base.hpp"
//��ģ����̳�
//������̳еĸ�����һ��ģ��ʱ�������������Ĺ����У�Ҫָ�����������
//�����ָ�������������޷�����������ڴ�
//���������ʹ�ø��࣬����Ҳ��Ҫ��Ϊģ����
//template <typename Name,typename Age>
//class Base
//{
//public:
//	Base(Name name, Age age);
//	void Show();
//	Name m_name;
//	Age m_age;
//};
//template<typename Name,class Age>
//Base< Name,Age >::Base(Name name, Age age)
//{
	//this->m_name = name;
	//this->m_age = age;
//}
////class Son : public Base<string, int>
////{
////};
////template<class T, class T1>
////class Son : public Base<T,T1>
////{
////public:
////};
////ģ��������ʵ�ֶ�����
//template<typename Name, class Age>
//void Base<Name,Age>:: Show()
//{
//	cout << "������" << this->m_name << "  ���䣺" << this->m_age << endl;
//}
//int main()
//{
//	Base <string, int>b1("��ӭ��", 20);
//	b1.Show();
//	return 0;
//}
//��ģ����ļ� ��д
//template <typename Name, typename Age>
//class Base
//{
//public:
//	Base(Name name, Age age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	void Show()
//	{
//		cout << "������" << this->m_name << "  ���䣺" << this->m_age << endl;
//	}
//	Name m_name;
//	Age m_age;
//};
//int main()
//{
//	//��ģ����ļ���д
//	//1��ֱ��ʹ��.cppԴ�ļ�
//	//2�����������ļ�д��ͬһ���ļ��У������ĺ�׺Ϊ.hpp��
//	//hpp��Լ������
//	//���������ԭ����ģ���еĳ�Ա�������ڵ��ý׶βŴ�����
//	//���Ե����ļ�����ʱ���Ӳ���
//	Base <string, int>b1("��ӭ��",20);
//	b1.Show();
//	return 0;
//}
//template<class T1, class T2>
//class Base;
//template<class T1, class T2>
//void Show(Base<T1,T2>& b1)
//{
//	cout << "������" << b1.m_name << "  ���䣺" << b1.m_age << endl;
//}
//template<class T1,class T2>
//class Base
//{
//	//ȫ�ֺ�������ʵ�֣�ֱ����������Ԫ����
//	/*friend void Show(Base<string, int> b1)*/
//	//{
//	//	cout << "������" << b1.m_name << "  ���䣺" << b1.m_age << endl;
//	//}
//	//ȫ�ֺ�������ʵ�֣�
//	//1���ӿ�ģ������б�
//	//2����Ϊ������ʵ�֣�����Ҫ�� ��������ǰ֪���������
//	//���Ҫ����������ģ�����ǰ��
//	//ͬʱ��Ҫ�ñ�������ǰ֪��ģ����Ĵ���
//	//3��friend
//	friend void Show<>(Base<T1, T2>&b1);
//public:
//	Base(T1 name,T2 age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//private:
//	T1 m_name;
//	T2 m_age;
//};
//
//int main()
//{
//	//��ģ������Ԫ
//	Base<string, int>b1("��ӭ��", 20);
//	Show(b1);
//	return 0;
//}
template <class Type>
class Array
{
public:
	Array(int n)
	{
		this->count = 0;
		this->whole = n;
		this->arr = new Type[this->whole];
	}
	Array(const Array &p)
	{
		cout << "����Array(const Array &p)����" << endl;
		this->count = p.count;
		this->whole = p.whole;
		this->arr = new Type[whole];
		for (int x = 0; x < p.count; x++)
		{
			arr[x] = p.arr[x];
		}
	}
	Array& operator=(const Array& p)
	{
		this->count = p.count;
		this->whole = p.whole;
		if (this->arr != NULL)
		{
			delete[]this->arr;
		}
		this->arr = new Type[whole];
		for (int x = 0; x < p.count; x++)
		{
			arr[x] = p.arr[x];
			return *this;
		}
	}
	Type operator[](const int x)
	{
		return this->arr[x];
	}
	void Backadd(const Type &p1)
	{
		if (this->count == this->whole)
		{
			cout << "��ֵ�������޷�����������ˣ�" << endl;
		}
		else
		{
			this->arr[this->whole - this->count-1] = p1;
			this->count++;
		}
	}
	void Backdelete()
	{
		if (this->count == 0)
		{
			cout << "����Ϊ�գ��޷�����ɾ����" << endl;
		}
		else
		{
			this->count--;
		}
	}
	int Showcount()
	{
		return this->count;
	}
	int Showwhole()
	{
		return this->whole;
	}
	~Array()
	{
		if (arr != NULL)
		{
			delete[]this->arr;
			arr = NULL;
		}
	}
private:
	int count;
	int whole;
	Type* arr;
};
class Base
{
public:	
	void Add(string name, int age)
	{
		this->Name = name;
		this->Age = age;
	}
	string Name;
	int Age;
};
int main()
{
	//ʵ��һ��ͨ�õ���ֵ��
	//Array<int>p(10);
	//Array<int>p1(15);
	//for (int x = 0; x < 10; x++)
	//{
	//	p.Backadd(x);
	//}
	//for (int x = 0; x < p.Showcount(); x++)
	//{
	//	cout << p[x]<<"   ";
	//}
	//p.Backdelete();
	//p.Backdelete();
	//cout << endl;
	//for (int x = 0; x < p.Showcount(); x++)
	//{
	//	cout << p[x] << "   ";
	//}
	/*cout <<"���鹲��" << p.Showcount() <<"������" << endl;
	cout << "���������Ϊ" << p.Showwhole() << endl;*/
	Array<Base>b1(5);
	Base n;
	n.Add("��˽�", 99);
	Base n1;
	n1.Add("������", 50);
	Base n2;
	n2.Add("�����", 1000);
	Base n3;
	n3.Add("theshy", 20);
	b1.Backadd(n);
	b1.Backadd(n1);
	b1.Backadd(n2);
	b1.Backadd(n3);
	n3.Add("��ʼ��", 66);
	b1.Backadd(n3);
	b1.Backdelete();
	b1.Backdelete();
	b1.Backdelete();
	b1.Backdelete();
	b1.Backdelete();
	b1.Backdelete();
	for (int x = 0; x < b1.Showcount(); x++)
	{
		cout << "������  " << b1[x].Name << "   ���䣺  " << b1[x].Age << endl;
	}
	cout << "���鹲��" << b1.Showcount() << "����" << endl;
	cout << "���������Ϊ" << b1.Showwhole() << endl;
	return 0;
}