#define _CRT_SECURE_NO_WARNINGS
#include"Workermanage.h"
#include"Boss.h"
#include"employee.h"
#include"manager.h"
#define TEXT "ְ������ϵͳ����"
using namespace std;
Workermanage::Workermanage()
{
	//δ�����ļ�
	ifstream ifs;
	ifs.open(TEXT, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ������ڣ�" << endl;
		this->count = 0;
		this->workermanager = NULL;
		this->IsKong = true;
		ifs.close();
		return;
	}
	//�ļ�Ϊ��ʱ���ļ�ĩβ����һ���ַ���
	//��Ҫ������ַ��������� eof() �ж��Ƿ�Ϊ�ա�
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "�ļ������ڣ�" << endl;
		this->count = 0;
		this->workermanager = NULL;
		this->IsKong = true;
		ifs.close();
		return;
	}
	//�ļ����ڣ���¼������
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
		cout << "�ļ�Ϊ�ջ����ļ������ڣ�" << endl;
	}
	else
	{
		cout << "������Ҫ�޸ĵ�ID�ţ�>" << endl;
		int ids;
		cin >> ids;
		int count = this->Find(ids);
		if (count != -1)
		{
			cout << "�������޸ĺ��ְ��ID��>" << endl;
			int id;
			cin >> id;
			cout << "�������޸ĺ��ְ��������>" << endl;
			string name;
			cin >> name;
			cout << "�����޸ĺ�Ĳ��ű�ţ�>" << endl;
			cout << "1.�ϰ�" << endl;
			cout << "2.����" << endl;
			cout << "3.Ա��" << endl;
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
			cout << "�޸ĳɹ���" << endl;
			this->Write();
		}
		else
		{
			cout << "ְ��ϵͳû�и�ID�ţ�" << endl;
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
void Workermanage::Delete()
{
	if (this->IsKong)
	{
		cout << "�ļ�Ϊ�ջ����ļ������ڣ�" << endl;
		cout << "ɾ��ʧ�ܣ�" << endl;
	}
	else
	{
		cout << "������Ҫɾ����ID�ţ�>" << endl;
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
			cout << "ɾ��ID:" << ids << "�ɹ���" << endl;
			this->Write();
			return;
		}
		else
		{
			cout << "ְ��ϵͳû�и�ID��ְ����" << endl;
		}
	}
}
void Workermanage::Arrange()
{
	if (this->IsKong)
	{
		cout << "�ļ�Ϊ�ջ����ļ������ڣ�" << endl;
		cout << "����ʧ�ܣ�" << endl;
	}
	else
	{
		cout << "��ѡ�����еķ�ʽ:>" << endl;
		cout << "1.��������" << endl;
		cout << "2.��������" << endl;
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
		cout << "�ļ�Ϊ�ջ����ļ������ڣ�" << endl;
		cout << "��ѯʧ�ܣ�" << endl;
	}
	else
	{
		cout<<"�������ѯ�ķ�ʽ��" << endl;
		cout << "1����ID��ѯ" << endl;
		cout << "2����������ѯ" << endl;
		int p = 0;
		cin >> p;
		if (p == 1)
		{
			ifstream ifs;
			ifs.open(TEXT, ios::in);
			int x;
			string y;
			int z;
			cout << "������Ҫ��ѯ��ID�ţ�>" << endl;
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
				cout << "ְ��ϵͳδ��ѯ����" << endl;
			}
		}	
		else if (p == 2)
		{
			cout << "������Ҫ��ѯ��������>" << endl;
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
				cout << "ְ��ϵͳδ��ѯ����" << endl;
			}
			ifs.close();
		}
	}
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
			cout << "һ��ְ���ɹ�¼��ϵͳ��" << endl;
		}
		delete[] this->workermanager;
		this->workermanager = newwm;
		this->count = add;
		this->Write();
		this->IsKong = false;
	}
	else
	{
		cout << "��������" << endl;
		return;
	}
}
void Workermanage::Clear()
{
	cout << "ȷ����գ�" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2������" << endl;
	int n = 0;
	cin >> n;
	if (n == 1)
	{
		//����ļ�����д���ģʽ�򿪵ģ���ios::trunɾ�������´����ļ�
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
			cout << "��ճɹ���" << endl;
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
		cout << "�ļ�Ϊ�ջ����ļ������ڣ�" << endl;
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
