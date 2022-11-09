#define _CRT_SECURE_NO_WARNINGS
#include"manager.h"
Manager::Manager(int id, string name, int bid)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_Bid = bid;
}
void Manager::ShowInfo()
{
	cout << "编号:" << this->m_Id << "\t";
	cout << "姓名:" << this->m_Name << "\t";
	cout << "部门:" << this->Getmanager() << "\t";
}
string Manager::Getmanager()
{
	return ("经理");
}