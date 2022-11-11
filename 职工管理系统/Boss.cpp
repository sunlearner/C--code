#define _CRT_SECURE_NO_WARNINGS
#include"Boss.h"
Boss::Boss(int id, string name, int bid)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_Bid = bid;
}
void Boss::ShowInfo()
{
	cout << "编号:" << this->m_Id << "\t";
	cout << "姓名:" << this->m_Name << "\t";
	cout << "部门:" << this->Getmanager() << "\t";
	cout << "管理公司大大小小的事情！" << endl;
}
string Boss::Getmanager()
{
	return ("总裁");
}