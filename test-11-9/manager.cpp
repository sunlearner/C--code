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
	cout << "���:" << this->m_Id << "\t";
	cout << "����:" << this->m_Name << "\t";
	cout << "����:" << this->Getmanager() << "\t";
}
string Manager::Getmanager()
{
	return ("����");
}