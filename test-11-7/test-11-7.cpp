#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
//д�ļ�
//void test()
//{
//	//1.��ͷ�ļ�
//	//2.����������
//	ofstream ofs;
//	//3.���ļ�
//	ofs.open("test.test", ios::out);
//	//4.д�ļ�
//	ofs << "��������ӭ�� " << endl;
//	ofs << "���䣺18     " << endl;
//	ofs << "���ã�����   " << endl;
//	//5.�ر��ļ�
//	ofs.close();
//}
//void test1()
//{
//	//1.��ͷ�ļ�
//	//2.����������
//	ifstream ifs;
//	//3.���ļ�
//	ifs.open("test.test", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "�Ҳ���test.test�ļ���" << endl;
//		return;
//	}
//	//4.���ļ�
//	// ����һ��
//	//char arr[1024] = {0};
//	//while (ifs >> arr)//arr��һ��ָ��
//	//{
//	//	cout << arr<<endl;
//	//}
//	//��������
//	//����һ��һ�е����
//	/*while(ifs.getline(arr,1024)//arr��һ��ָ��
//	{
//		cout << arr << endl;
//	}*/
//	//��������
//	// ����һ��һ�е����
//	//string arr;
//	//while (getline(ifs,arr))
//	//{
//	//	cout << arr << endl;
//	//}
//	// �����ģ�
//	char arr;
//	while ((arr = ifs.get()) != EOF)
//	{
//		//һ��һ���ַ������������Ҫ����
//		cout << arr ;
//	}
//	//5.�ر��ļ�
//	ifs.close();
//}
//int main()
//{
//	//test();
//	test1();
//	return 0;
//}
//������д�ļ�
class Base
{
public:
	Base(string name,int age,string like)
	{
		m_name = name;
		m_age = age;
		m_like = like;
	}
	string m_name;
	int m_age;
	string m_like;
};
void test()
{
	//1.��ͷ�ļ�
	//2.����������
	ofstream ofs;
	//3.���ļ�
	ofs.open("test1.test", ios::out|ios::binary);
	//4.д�ļ�
	Base b1("��ӭ��",20,"��Ϸ");
	ofs.write((char*)&b1, sizeof(Base));
	//5.�ر��ļ�
	ofs.close();
}
class Base1
{
public:

	string m_name;
	int m_age;
	string m_like;
};
void test1()
{

	//1.��ͷ�ļ�
	//2.����������
	ifstream ifs;
	//3.���ļ�
	ifs.open("test1.test", ios::in|ios::binary);
	if (!ifs.is_open())
	{
		cout << "�Ҳ���test.test�ļ���" << endl;
		return;
	}
	//4.���ļ�
	Base1 b;
	ifs.read((char*)&b, sizeof(Base1));
	cout <<"������" << b.m_name << endl;
	cout<<"���䣺" << b.m_age << endl;
	cout <<"���ã�" << b.m_like << endl;
	//5.�ر��ļ�
	ifs.close();
}
int main()
{
	test();
	test1();
	return 0;
}