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
//���غ���
//��������ͬ�������ķ���ֵ��ͬ
//�βε����Ͳ�ͬ����˳��һ��
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
//��;
;
//class circle
//{
//public:   //Ȩ��
//	//����
//	double m_R;//�뾶
//	//��Ϊ�ú�����ʾ
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
	//����
	string name;
	long long int sno;
	//��Ϊ
	void show_Student()
	{
		cout << "������" << name << "\t";
		cout << "ѧ�ţ�" << sno << endl;
	}
};
int main()
{
	student s1;
	s1.name = "��ӭ��";
	s1.sno = 2105080905139;
	s1.show_Student();
	student s2;
	s2.name = "ɳ����";
	s2.sno = 2105080905001;
	s2.show_Student();
	return 0;
}