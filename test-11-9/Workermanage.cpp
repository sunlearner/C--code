#define _CRT_SECURE_NO_WARNINGS
#include"Workermanage.h"
#include"Boss.h"
#include"employee.h"
#include"manager.h"
#define TEXT "职工管理系统数据"
using namespace std;
Workermanage::Workermanage()
{
	this->count = 0;
	this->workermanager = NULL;
}
Workermanage::~Workermanage()
{
	delete workermanager;
	workermanager = NULL;
}
void Workermanage::menu()
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
	cout << "请输入本次要纳入系统的人数：>" << endl;
	int n;
	cin >> n;
	if (n > 0)
	{
		int add = count + n;
		Worker** newwm = new Worker * [add];
		for (int x = 0; x < count; x++)
		{
			newwm[x] = workermanager[x];
		}
		for (int x = count; x < add; x++)
		{
			cout << "请输入职工ID：>" << endl;
			int id;
			cin >> id;
			cout << "请输入职工姓名：>" << endl;
			string name;
			cin >> name;
			cout << "请输部门编号：>" << endl;
			cout << "1.老板" << endl;
			cout << "2.经理" << endl;
			cout << "3.员工" << endl;
			int  bid;
			cin >> bid;
			Worker* worker=NULL;
			switch (bid)
			{
			case 1: worker =new Boss(id, name, bid);
				break;
			case 2:worker = new Manager(id, name, bid);
				break;
			case 3:worker = new Employee(id, name, bid);
				break;
			default:
				break;
			}
			newwm[this->count +x] = worker;
			cout << "一名职工成功录入系统！" << endl;
		}
		delete [] this->workermanager;
		this->workermanager = newwm;
		this->count = add;
		this->Write();
	}
	else
	{
		cout << "输入有误！" << endl;
		return;
	}
}
void Workermanage::Write()
{
	ofstream ofs;
	ofs.open(TEXT,ios::out);
	for (int x = 0; x <this-> count; x++)
	{
		ofs << "ID:" << this->workermanager[x]->m_Id << endl;
		ofs << "姓名:" << this->workermanager[x]->m_Name << endl;
		ofs << "部门ID:" << this->workermanager[x]->m_Bid << endl;
	}
	ofs.close();
}