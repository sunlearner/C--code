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
	cout << "���:" << this->m_Id << "\t";
	cout << "����:" << this->m_Name << "\t";
	cout << "����:" << this->Getmanager() << "\t";
	cout << "���Ӿ���İ��ţ�" << endl;
}
string Employee::Getmanager()
{
	return ("Ա��");
}