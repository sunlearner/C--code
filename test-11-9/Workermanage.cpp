#define _CRT_SECURE_NO_WARNINGS
#include"Workermanage.h"
#include"Boss.h"
#include"employee.h"
#include"manager.h"
#define TEXT "ְ������ϵͳ����"
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
	cout << "*********    ��ӭʹ��ְ������ϵͳ    **********" << endl;
	cout << "*********      0���˳�����ϵͳ       **********" << endl;
	cout << "*********      1�����ְ����Ա       **********" << endl;
	cout << "*********      2���鿴ְ����Ա       **********" << endl;
	cout << "*********      3���޸�ְ����Ա       **********" << endl;
	cout << "*********      4������ְ����Ա       **********" << endl;
	cout << "*********      5��ɾ��ְ����Ա       **********" << endl;
	cout << "*********      6������ְ����Ա       **********" << endl;
	cout << "*********      7����չ���ϵͳ       **********" << endl;
	cout << "***********************************************" << endl;
	cout << endl;
}
void Workermanage::ExitWM()
{
	cout << "��ȫ�˳�ְ������ϵͳ��" << endl;
	cout << "��ӭ�´�ʹ��" << endl;
	exit(0);
}
void Workermanage::Add()
{
	cout << "�����뱾��Ҫ����ϵͳ��������>" << endl;
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
			cout << "������ְ��ID��>" << endl;
			int id;
			cin >> id;
			cout << "������ְ��������>" << endl;
			string name;
			cin >> name;
			cout << "���䲿�ű�ţ�>" << endl;
			cout << "1.�ϰ�" << endl;
			cout << "2.����" << endl;
			cout << "3.Ա��" << endl;
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
			cout << "һ��ְ���ɹ�¼��ϵͳ��" << endl;
		}
		delete [] this->workermanager;
		this->workermanager = newwm;
		this->count = add;
		this->Write();
	}
	else
	{
		cout << "��������" << endl;
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
		ofs << "����:" << this->workermanager[x]->m_Name << endl;
		ofs << "����ID:" << this->workermanager[x]->m_Bid << endl;
	}
	ofs.close();
}