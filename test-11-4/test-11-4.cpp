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
//	//Preason operator++(int)�е�int��Ϊ������ǰ��++
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
	//Preason operator++(int)�е�int��Ϊ������ǰ��++
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
//		cout << "p��p1�����!";
//	}
//	else
//		cout << "p��p1��ȣ�";
//	return 0;
//}
//�̳е��ŵ㣺
//�����ظ��Ĵ���
//��䣺class ���� ���̳з�ʽ ����
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
////�����̳У������еĹ�������ͱ��������ڹ����̳��в��䣬�����е���˽�����ܷ���
//class Son : public Base
//{
//public :
//	//������������Son(int d):Base(10,20,30)����ʽ�����βγ�ʼ��
//	Son(int d):Base(10,20,30)
//	{
//		cout << "����Base";
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
//	static int x;//��ʼ��Ҫ���������������ʼ����
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
//		cout << "Base���ù��캯����" << endl;
//	}
//	~Base()
//	{
//		cout<< "Base��������������" << endl;
//	}
//};
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "Son���ù��캯����" << endl;
//	}
//	~Son()
//	{
//		cout << "Son��������������" << endl;
//	}
//};
//int main()
//{
//	//�ȵ��ø���Ĺ��캯�����ڵ�������Ĺ��캯��
//	//���ͷ��������������������ͷŸ������������
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
		cout << "����Base������"<<endl;
	}
	void Shows()
	{
		cout << "��ӭ���ڵ���Base������"<<endl;
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
		cout << "����Son������"<<endl;
	}
};
int main()
{
	//�̳�ͬ����Աʱ���ȷ�������ĳ�Ա������.�ĺ��������������ܷ��ʸ���ͬ���ĳ�Ա����
	//ԭ���������븸����ͬ����Աʱ����������ظ����ͬ����Ա��
	//���ֻ�м��ϸ������������ܷ��ʸ��ࡣ
	Son s1;
	cout << s1.a << endl;
	s1.Show();
	s1.Shows();
	cout<<s1.Base::a << endl;
	s1.Base::Show();
	return 0;
}