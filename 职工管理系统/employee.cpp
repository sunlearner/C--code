#define _CRT_SECURE_NO_WARNINGS
#include"employee.h"
Employee::Employee(int id, string name, int bid)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_Bid = bid;
}
void Employee::ShowInfo()
{
	cout << "编号:" << this->m_Id << "\t";
	cout << "姓名:" << this->m_Name << "\t";
	cout << "部门:" << this->Getmanager() << "\t";
	cout << "听从经理的安排！" << endl;
}
string Employee::Getmanager()
{
	return ("员工");
}