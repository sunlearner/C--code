#define _CRT_SECURE_NO_WARNINGS
#include"Workermanage.h"
#include"Boss.h"
#include"employee.h"
#include"manager.h"
#define TEXT "职工管理系统数据"
using namespace std;
Workermanage::Workermanage()
{
	//未创建文件
	ifstream ifs;
	ifs.open(TEXT, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件不存在！" << endl;
		this->count = 0;
		this->workermanager = NULL;
		this->IsKong = true;
		ifs.close();
		return;
	}
	//文件为空时，文件末尾会有一个字符，
	//需要将这个字符读出在用 eof() 判断是否为空。
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "文件不存在！" << endl;
		this->count = 0;
		this->workermanager = NULL;
		this->IsKong = true;
		ifs.close();
		return;
	}
	//文件存在，记录有数据
	int num = this->Conntpeopel();
	this->count = num;
	this->workermanager = new Worker * [this->count];
	this->Initialization();
	//for (int x = 0; x < count; x++)
	//{
	//	this->workermanager[x]->ShowInfo();
	//}
}
Workermanage::~Workermanage()
{
	delete this->workermanager;
	this->workermanager = NULL;
}
void Workermanage::Revise()
{
	if (this->IsKong)
	{
		cout << "文件为空或者文件不存在！" << endl;
	}
	else
	{
		cout << "请输入要修改的ID号：>" << endl;
		int ids;
		cin >> ids;
		int count = this->Find(ids);
		if (count != -1)
		{
			cout << "请输入修改后的职工ID：>" << endl;
			int id;
			cin >> id;
			cout << "请输入修改后的职工姓名：>" << endl;
			string name;
			cin >> name;
			cout << "请输修改后的部门编号：>" << endl;
			cout << "1.老板" << endl;
			cout << "2.经理" << endl;
			cout << "3.员工" << endl;
			int  bid;
			cin >> bid;
			Worker* worker = NULL;
			switch (bid)
			{
			case 1: worker = new Boss(id, name, bid);
				break;
			case 2:worker = new Manager(id, name, bid);
				break;
			case 3:worker = new Employee(id, name, bid);
				break;
			default:
				break;
			}
			this->workermanager[count] = worker;
			cout << "修改成功！" << endl;
			this->Write();
		}
		else
		{
			cout << "职工系统没有该ID号！" << endl;
		}
	}
}
int Workermanage::Find(int id)
{
	ifstream ifs;
	ifs.open(TEXT, ios::in);
	int x;
	string y;
	int z;
	int count = 0;
	while (ifs >> x && ifs >> y && ifs >> z)
	{
		if (x == id)
		{
			return count;
		}
		count++;
	}
	return -1;
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
void Workermanage::Delete()
{
	if (this->IsKong)
	{
		cout << "文件为空或者文件不存在！" << endl;
		cout << "删除失败！" << endl;
	}
	else
	{
		cout << "请输入要删除的ID号：>" << endl;
		int ids;
		cin >> ids;
		int counts = this->Find(ids);
		if (counts != -1)
		{
			for (int x = counts; x < this->count; x++)
			{
				this->workermanager[x] = this->workermanager[x + 1];
			}
			this->count = this->count - 1;
			if (count == 0)
			{
				this->IsKong = true;
			}
			cout << "删除ID:" << ids << "成功！" << endl;
			this->Write();
			return;
		}
		else
		{
			cout << "职工系统没有该ID的职工！" << endl;
		}
	}
}
void Workermanage::Arrange()
{
	if (this->IsKong)
	{
		cout << "文件为空或者文件不存在！" << endl;
		cout << "排列失败！" << endl;
	}
	else
	{
		cout << "请选择排列的方式:>" << endl;
		cout << "1.降序排列" << endl;
		cout << "2.升序排列" << endl;
		int x = 0;
		cin >> x;
		int isno = 0;
		for (int n = 0; n < this->count; n++)
		{
			int a = n;
			for (int m = n + 1; m < this->count; m++)
			{
				if (x == 1)
				{
					if (this->workermanager[a]->m_Id <
						this->workermanager[m]->m_Id)
					{
						int p = a;
						a = m;
						m = p;
					}
				}
				else if (x == 2)
				{
					if (this->workermanager[n]->m_Id >
						this->workermanager[m]->m_Id)
					{
						int p = a;
						a = m;
						m = p;
					}
				}
			}
			if (a != n)
			{
				Worker* worker = NULL;
				worker = workermanager[a];
				workermanager[a] = workermanager[n];
				workermanager[n] = worker;
			}
		}
		this->Write();
	}
}
void Workermanage::Findone()
{
	if (this->IsKong)
	{
		cout << "文件为空或者文件不存在！" << endl;
		cout << "查询失败！" << endl;
	}
	else
	{
		cout<<"请输入查询的方式：" << endl;
		cout << "1、按ID查询" << endl;
		cout << "2、按姓名查询" << endl;
		int p = 0;
		cin >> p;
		if (p == 1)
		{
			ifstream ifs;
			ifs.open(TEXT, ios::in);
			int x;
			string y;
			int z;
			cout << "请输入要查询的ID号：>" << endl;
			int ids;
			cin >> ids;
			int cum = 0;
			int mnc = 0;
			while (ifs >> x && ifs >> y && ifs >> z)
			{
				if (x == ids)
				{
					this->workermanager[mnc]->ShowInfo();
					cum++;
				}
				mnc++;
			}
			if(cum==0)
			{
				cout << "职工系统未查询到！" << endl;
			}
		}	
		else if (p == 2)
		{
			cout << "请输入要查询的姓名：>" << endl;
			string names;
			cin >> names;
			ifstream ifs;
			int id;
			string name;
			int bid;
			int count = 0;
			int cup = 0;
			ifs.open(TEXT, ios::in);
			while (ifs >> id && ifs >> name && ifs >> bid)
			{
				if (name == names)
				{
					this->workermanager[count]->ShowInfo();
					cup++;
				}
				count++;
			}
			if (cup == 0)
			{
				cout << "职工系统未查询到！" << endl;
			}
			ifs.close();
		}
	}
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
			Worker* worker = NULL;
			switch (bid)
			{
			case 1: worker = new Boss(id, name, bid);
				break;
			case 2:worker = new Manager(id, name, bid);
				break;
			case 3:worker = new Employee(id, name, bid);
				break;
			default:
				break;
			}
			newwm[x] = worker;
			cout << "一名职工成功录入系统！" << endl;
		}
		delete[] this->workermanager;
		this->workermanager = newwm;
		this->count = add;
		this->Write();
		this->IsKong = false;
	}
	else
	{
		cout << "输入有误！" << endl;
		return;
	}
}
void Workermanage::Clear()
{
	cout << "确认清空？" << endl;
	cout << "1、确认" << endl;
	cout << "2、返回" << endl;
	int n = 0;
	cin >> n;
	if (n == 1)
	{
		//清空文件是以写入的模式打开的，用ios::trun删除并重新创建文件
		ofstream ofs;
		ofs.open(TEXT, ios::trunc);
		if (this->workermanager != NULL)
		{
			for (int x = 0; x < this->count; x++)
			{
				delete this->workermanager[x];
				this->workermanager[x] = NULL;
			}
			this->count = 0;
			delete[]this->workermanager;
			this->workermanager = NULL;
			cout << "清空成功！" << endl;
			this->IsKong = true;
		}
		ofs.close();
	}
}
void Workermanage::Write()
{
	ofstream ofs;
	ofs.open(TEXT, ios::out);
	for (int x = 0; x < this->count; x++)
	{
		ofs << this->workermanager[x]->m_Id <<"\t";
		ofs  << this->workermanager[x]->m_Name << "\t";
		ofs << this->workermanager[x]->m_Bid << endl;
	}
	ofs.close();
}
int Workermanage::Conntpeopel()
{
	ifstream ifs;
	ifs.open(TEXT, ios::in);
	int id;
	string name;
	int bid;
	int count=0;
	while (ifs >> id && ifs >> name && ifs >> bid)
	{
		count++;
	}
	ifs.close();
	return count;
}
void Workermanage::Show()
{
	if (this->IsKong)
	{
		cout << "文件为空或者文件不存在！" << endl;
	}
	else
		for (int x = 0; x < this->count; x++)
		{
			this->workermanager[x]->ShowInfo();
		}
}
void Workermanage::Initialization()
{
	ifstream ifs;
	ifs.open(TEXT, ios::in);
	int id;
	string name;
	int bid;
	int x = 0;
	Worker* worker = NULL;
	while (ifs >> id && ifs >> name && ifs >> bid)
	{
		if (bid == 1)
		{
			worker = new Boss(id, name, bid);
		}
		if (bid == 2)
		{
			worker = new Manager(id, name, bid);
		}
		if (bid == 3)
		{
			worker = new Employee(id, name, bid);
		}
		this->workermanager[x] = worker;
		x++;
	}
}
