#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include"circle.h"
#include"point.h"
using namespace std;
//class student
//{
//public://����Ȩ�� ��������ɵ��ã�
//protected://����Ȩ�� ֻ���������ڵ��ã��������������ã�
//private://��˽Ȩ�� ֻ���������ڵ��ã�
//};//��Ա����ͨ��˽�л���
//�ŵ�һ�������Լ�������Ȩ
//�ŵ�������Զ�д���ݽ��м��
//class student
//{
//protected:
//	string s_name;
//	string s_sex;
//	int s_age;
//public:
//	void setname(string name)
//	{
//		s_name = name;
//	}
//	void set_sex(string sex)
//	{
//		if (sex == "��" || sex == "Ů")
//		{
//			s_sex = sex;
//		}
//		else
//			cout << "��������" << endl;
//	}
//	void set_age(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			s_age = 0;
//			cout << "�������벻����" << endl;
//		}
//		else
//		s_age = age;
//	}
//	void show_name()
//	{
//		cout << s_name<<endl;
//	}
//	void show_sex()
//	{
//		cout << s_sex << endl;
//	}
//	int show_age()
//	{
//		return s_age;
//	}
//};
//int main()
//{
//	student s1;
//	s1.setname("��ӭ��");
//	s1.set_age(180);
//	s1.set_sex("��");
//	s1.show_name();
//	s1.show_sex();
//	int a = s1.show_age();
//	cout << "����Ϊ��" << a;
//	return 0;
//}
//�����������
//1. �������������
//2.��������
//3.�����Ϊ ��ȡ��������
//4.�ֱ�����ȫ�ֺ����ͳ�Ա����  �ж������������Ƿ����
//class square
//{
//protected:
//	int s_l;
//	int s_w;
//	int s_h;
//public:
//	void set_L(int l)
//	{
//		s_l = l;
//	}
//	void set_W(int w)
//	{
//		s_w = w;
//	}
//	void set_H(int h)
//	{
//		s_h = h;
//	}
//	int  show_L()
//	{
//		return s_l;
//	}
//	int show_W()
//	{
//		return s_w;
//	}
//	int show_H()
//	{
//		return s_h;
//	}
//	int S_square()
//	{
//		return 2*(s_l * s_w + s_l * s_h + s_w * s_h);
//	}
//	int V_square()
//	{
//		return s_l * s_h * s_w;
//	}
//	bool ISsname(square s)
//	{
//		if (s_l == s.show_L() && s_h == s.show_H() && s_w == s.show_W())
//		{
//			return true;
//		}
//		else
//			return false;
//	}
//};
////ȫ�ֺ��� ,�ж������������Ƿ����
//bool Issame(square s1, square s2)
//{
//	if (s1.show_H() == s2.show_H() && s1.show_L() == s2.show_L() && s1.show_W() == s2.show_W())
//	{
//		return true;
//	}
//	else
//		return false;
//}
//int main()
//{
//	square s1;
//	s1.set_L(10) ;
//	s1.set_W(10) ;
//	s1.set_H(10);
//	int S = s1.S_square();
//	int V = s1.V_square();
//	cout << "���Ϊ��" << S << endl;
//	cout << "���Ϊ��" << V << endl;
//	square s2;
//	s2.set_L(10);
//	s2.set_W(10);
//	s2.set_H(10);
//	bool issname = Issame(s1, s2);
//	if (issname)
//	{
//		cout << "���������������" << endl;
//	}
//	else 
//		cout << "���������岻���" << endl;
//	bool issnames = s1.ISsname(s2);
//	if (issnames)
//	{
//		cout << "���������������" << endl;
//	}
//	else
//		cout << "���������岻���" << endl;
//	return 0;
//}
//����Բ�Ĺ�ϵ
//class point
//{
//protected:
//	int p_X;
//	int p_Y;
//public:
//	void set_x(int x)
//	{
//		p_X = x;
//	}
//	void set_y(int y)
//	{
//		p_Y = y;
//	}
//	int show_x()
//	{
//		return p_X;
//	}
//	int show_y()
//	{
//		return p_Y;
//	}
//};
//class circle
//{
//protected:
//	int c_R;
//	point c_point;
//public:
//	void set_r(int r)
//	{
//		c_R = r;
//	}
//	void set_cp(point cp)
//	{
//		c_point = cp;
//	}
//	int show_r()
//	{
//		return c_R;
//	}
//	point show_cp()
//	{
//		return c_point;
//	}
//	void Issp(point& p)
//	{
//		int count = (p.show_x() - c_point.show_x()) * (p.show_x() - c_point.show_x()) +
//			(p.show_y() - c_point.show_y()) * (p.show_y() - c_point.show_y());
//		int add = c_R * c_R;
//		if (count == add)
//			cout << "����Բ�ϣ�" << endl;
//		else if (count > add)
//			cout << "����Բ�⣡" << endl;
//		else
//			cout << "����Բ�ڣ�" << endl;
//
//	}
//};
//�жϵ���Բ�Ĺ�ϵ
//void Issp(point &p,circle &c)
//{
//	int count = (p.show_x() - c.show_cp().show_x()) * (p.show_x() - c.show_cp().show_x()) +
//		(p.show_y() - c.show_cp().show_y()) * (p.show_y() - c.show_cp().show_y());
//	int add = c.show_r() * c.show_r();
//	if (count == add)
//		cout << "����Բ�ϣ�" << endl;
//	else if (count > add)
//		cout << "����Բ�⣡" << endl;
//	else
//		cout << "����Բ�ڣ�" << endl;
//
//}
int main()
{
	circle c1;
	point center;
	center.set_x(10);
	center.set_y(0);
	c1.set_r(10);
	c1.set_cp(center);
	cout << "Բ�İ뾶Ϊ��" << c1.show_r() << endl;
	cout << "Բ��Ϊ��" << center.show_x() << "," << center.show_y() << endl;
	/*cout << c1.show_cp().show_x ()<<",";
	cout << c1.show_cp().show_y() << endl;*/
	point p1;
	p1.set_x(10);
	p1.set_y(9);
	Issp(p1, c1);
	c1.Issp(p1);
	return 0;
}