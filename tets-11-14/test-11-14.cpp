#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//��ͨ�����ú���ģ�嶼����ʵ��ʱ������ʵ����ͨ����
//����ͨ����ģ�������ǿ�Ƶ��ú���ģ��
//����ģ��Ҳ���Է�������
//�������ģ����Բ������õ�ƥ�䣬�Ǿ͵���ģ�庯��
//void Show(int a)
//{
//	cout << "������ͨ����Show()��" << endl;
//}
//template <typename T>
//void Show(T a)
//{
//	cout << "����ģ�庯��Show()��" << endl;
//}
//template <typename T>
//void Show(T a,T b)
//{
//	cout << "��������ģ�庯��Show()��" << endl;
//}
//template <typename T>
//int Add(T a,T b)
//{
//	cout << "����ģ�庯��Add()��" << endl;
//	return a + b;
//}
//int  Add(int  a, int b)
//{
//	cout << "������ͨ����Add()��" << endl;
//	return a + b;
//}
//int main()
//{
//	char a = 10;
//	//Show<int >(a);
//	//Show(a);
//	char b = 20;
//	//Show(a, b);
//	cout << Add(a, b) << endl;
//	return 0;
//}
//ģ��ľ�����
//�Զ����ģ���������޷����бȽϵ�
//��˿���Ϊ��Щ�ض������ͽ��о��廯��ģ��
//class Base
//{
//public:
//	Base(int age ,string name )
//	{
//		m_Age = age;
//		m_Name = name;
//	}
//	int m_Age;
//	string m_Name;
// };
//template <typename T>
//bool Exange(T& a, T& b)
//{
	//if (a == b)
	//{
	//	return true;
	//}
//	return false;
//}
//template<typename T>
//bool Bitters(T &a, T &b)
//{
//	/*if (a == b)
//	{
//		return true;
//	}*/
//	return false;
//}
//template<> 
//bool Bitters(Base &a,Base &b)
//{
//	if (a.m_Age==b.m_Age &&  a.m_Name==b.m_Name)
//	{
//		return true;
//	}
//	return false;
//}
//template<> bool Bitters<int >(int a, int b)
//{
//	if (a == b)
//		return  true;
//	else
//		return false;
//}
//�Զ������͵ı������޷������жϵģ����
//����Щ�ض������ͣ�������ʾ���廯ģ��
//ע��Ҫ����ԭ����ģ��
//���½�һ���ض���ģ�壬�ض�ģ��ĺ����������������ʼ��
//���壺template<> �������� ������(�ض����� ����,....)
//int main()
//{
//	Base b1(18,"�����");
//	Base b2(20, "��˽�");
//	int a = 10;
//	int b = 20;
//	if (Bitters(b1, b2))
//	{
//		cout << "b1��b2��ȣ�" << endl;
//	}
//	else
//	{
//		cout << "b1��b2����ȣ�" << endl;
//	}
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//template<typename T>
//T add(T X, T Y)
//{
//	return X + Y;
//}
//template<>
//int* add <int*>(int* x, int* y)
//{
//	int* z = new int[5];
//	for (int i = 0; i < 5; i++)
//		z[i] = x[i] + y[i];
//	return z;
//}
//int main()
//{
//	int a[5] = { 4,6,2,7,8 };
//	int b[5] = { 7,5,4,2,6 };
//	for (int i = 0; i < 5; i++)
//		cout << a[i] + b[i] << " ";//ʹ����ʽʵ��������ģ��
//	cout << endl;
//	int* c = NULL;
//	c = add(a, b);//ʹ����ʾʵ��������ģ��
//	for (int i = 0; i < 5; i++)
//		cout << c[i] << " ";
//	cout << endl;
//	return 0;
//
//}
//��ģ��
//template <typename Name,typename Age=int>
//class Base
//{
//public:
//	//Base(string name, int age)
//	//{
//	//	m_age = age;
//	//	m_name = name;
//	//}
//	string m_name;
//	int m_age;
//	void Show1()
//	{
//		cout << "��ӭ��";
//		cout << "18";
//	}
//};
//template <typename Name, typename Age >
//class Base1
//{
//public:
//	/*Base1(string name, int age)
//	{
//		m_age = age;
//		m_name = name;
//	}*/
//	string m_name;
//	int m_age;
//	void Show2()
//	{
//		cout << "������";
//		cout << "���䣺";
//	}
//};
//template<class T>
//class Myclass
//{
//public:
//	T obj;
//	void Show1()
//	{
//		obj.Show1();
//	}
//	void Show2()
//	{
//		obj.Show2();
//	}
//};
//int main()
//{
//	/*Base <string>b1("��ӭ��", 18);
//	b1.();*/
//	//��ģ��ĵ��ò���ʹ���Զ������Ƶ�������ʹ����ʾָ������
//	//��ģ���ڲ����б��п�����Ĭ�ϲ���
//	//Base <int , string>b2(20, "��ӭ��");
//	//b2.Show();
//	//��ģ���еĳ�Ա�����ڵ���ʱ�Ż�ȥ����
//	Myclass<Base>my;
//	//my.Show2();
//	my.Show1();
//	return 0;
//}
template<typename Name,class Age>
class Base
{
public:
	Base(Name name,Age age)
	{
		this->m_age = age;
		this->m_name = name;
	}
	Name m_name;
	Age m_age;
	void Show()
	{
		cout << "������" << this->m_name << endl;
		cout << "���䣺" << this->m_age << endl;
	}
};
void printfBase(Base <string, int>& b)
{
	b.Show();
}
template<typename T>
void printfBase1(T& b)
{
	b.Show();
}
template<typename T,class T1>
void printfBase2(Base<T,T1>& b)
{
	b.Show();
}
int main()
{
	//��ģ���������������
	//1.ָ�������������
	Base <string, int>b1("��ӭ��", 18);
	//printfBase(b1);
	//2.������ģ�廯
	//printfBase1< Base <string, int>>(b1);
	//3.����ģ�廯
	printfBase2<string,int>(b1);
	return 0;
}