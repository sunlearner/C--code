#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
//写文件
//void test()
//{
//	//1.引头文件
//	//2.创建对象流
//	ofstream ofs;
//	//3.打开文件
//	ofs.open("test.test", ios::out);
//	//4.写文件
//	ofs << "姓名：孙迎新 " << endl;
//	ofs << "年龄：18     " << endl;
//	ofs << "爱好：下棋   " << endl;
//	//5.关闭文件
//	ofs.close();
//}
//void test1()
//{
//	//1.引头文件
//	//2.创建对象流
//	ifstream ifs;
//	//3.打开文件
//	ifs.open("test.test", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "找不到test.test文件夹" << endl;
//		return;
//	}
//	//4.读文件
//	// 方法一：
//	//char arr[1024] = {0};
//	//while (ifs >> arr)//arr是一个指针
//	//{
//	//	cout << arr<<endl;
//	//}
//	//方法二：
//	//是以一行一行的输出
//	/*while(ifs.getline(arr,1024)//arr是一个指针
//	{
//		cout << arr << endl;
//	}*/
//	//方法三：
//	// 是以一行一行的输出
//	//string arr;
//	//while (getline(ifs,arr))
//	//{
//	//	cout << arr << endl;
//	//}
//	// 方法四：
//	char arr;
//	while ((arr = ifs.get()) != EOF)
//	{
//		//一个一个字符的输出，不需要换行
//		cout << arr ;
//	}
//	//5.关闭文件
//	ifs.close();
//}
//int main()
//{
//	//test();
//	test1();
//	return 0;
//}
//二进制写文件
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
	//1.引头文件
	//2.创建对象流
	ofstream ofs;
	//3.打开文件
	ofs.open("test1.test", ios::out|ios::binary);
	//4.写文件
	Base b1("孙迎新",20,"游戏");
	ofs.write((char*)&b1, sizeof(Base));
	//5.关闭文件
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

	//1.引头文件
	//2.创建对象流
	ifstream ifs;
	//3.打开文件
	ifs.open("test1.test", ios::in|ios::binary);
	if (!ifs.is_open())
	{
		cout << "找不到test.test文件夹" << endl;
		return;
	}
	//4.读文件
	Base1 b;
	ifs.read((char*)&b, sizeof(Base1));
	cout <<"姓名：" << b.m_name << endl;
	cout<<"年龄：" << b.m_age << endl;
	cout <<"爱好：" << b.m_like << endl;
	//5.关闭文件
	ifs.close();
}
int main()
{
	test();
	test1();
	return 0;
}