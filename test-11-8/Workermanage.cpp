#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include"Workermanage.h"
using namespace std;
Workermanage::Workermanage()
{

}
Workermanage::~Workermanage()
{

}
void Workermanage:: menu()
{
	cout << "***********************************************" << endl;
	cout << "*********    欢迎使用职工管理系统    **********" << endl;
	cout << "*********      0、退出管理系统       **********" << endl;
	cout << "*********      1、添加职工人员       **********" << endl;
	cout << "*********      2、查看职工人员       **********" << endl;
	cout << "*********      3、修改职工人员       **********" << endl;
	cout << "*********      4、查找职工人员       **********" << endl;
	cout << "*********      5、删除职工人员       **********" << endl;
	cout << "*********      6、排列职工人员       **********" << endl;
	cout << "*********      7、清空管理系统       **********" << endl;
	cout << "***********************************************" << endl;
	cout << endl;
}
void Workermanage::ExitWM()
{
	cout << "安全退出职工管理系统！" << endl;
	cout << "欢迎下次使用" << endl;
	exit(0);
}
void Workermanage::Add()
{

}