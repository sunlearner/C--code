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
	cout << "���:" << this->m_Id << "\t";
	cout << "����:" << this->m_Name << "\t";
	cout << "����:" << this->Getmanager() << "\t";
	cout << "����˾���СС�����飡" << endl;
}
string Boss::Getmanager()
{
	return ("�ܲ�");
}