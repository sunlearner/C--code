#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstdio>
#define MAX 1000
using namespace std;
void Phone_menu()
{
	cout << "*************************" << endl;
	cout << "***** 1.���ͨѶ¼ ******" << endl;
	cout << "***** 2.��ʾͨѶ¼ ******" << endl;
	cout << "***** 3.����ͨѶ¼ ******" << endl;
	cout << "***** 4.�޸�ͨѶ¼ ******" << endl;
	cout << "***** 5.ɾ��ͨѶ¼ ******" << endl;
	cout << "***** 6.���ͨѶ¼ ******" << endl;
	cout << "***** 0.�˳�ͨѶ¼ ******" << endl;
	cout << "*************************" << endl;
}
struct personal
{
	//����
	string  name;
	//�Ա�
	//1--Ϊ��
	//2--ΪŮ
	int sex;
	//����
	int year;
	//�绰
	long long int phone;
	//סַ
	string address;
};
struct address
{
	personal adsbook[MAX];
	int count=0;
};
void Addbook(address* books)
{
	//���ͨѶ¼���ˣ����޷������
	if (books->count == 1000)
	{
		cout << "ͨѶ¼������" << endl;
	}
	else {
		//����
		string name;
		cout << "������" << endl;
		cin >> name;
		books->adsbook[books->count].name = name;
		//�Ա�
		//1--��
		//2--Ů
		while (true)
		{
			int sex;
			cout << "�Ա�" << endl;
			cout << "��--1" << endl;
			cout << "Ů--2" << endl;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				books->adsbook[books->count].sex = sex;
				break;
			}
			else
				cout << "��������������룡" << endl;
		}
		//����
		int year;
		cout << "����:" << endl;
		cin >> year;
		books->adsbook[books->count].year = year;
		//�绰
		long long  int phone;
		cout << "�绰��" << endl;
		cin >> phone;
		books->adsbook[books->count].phone = phone;
		//סַ
		string address;
		cout << "סַ��" << endl;
		cin >> address;
		books->adsbook[books->count].address = address;
	}
	cout << "�ɹ����һ��ͨѶ¼��Ա��"<<endl;
}
void Showbook(address* books)
{
	if (books->count== 0)
	{
		cout << "ͨѶ¼Ϊ�գ�" << endl;
	}
	else
	{
		int n = 0;
		int x = books->count;
		while (x)
		{
			cout << "������" << books->adsbook[n].name << "\t";
			if (books->adsbook[n].sex == 1)
				cout << "�Ա�" << "��" << "\t";
			else
				cout << "�Ա�" << "Ů" << "\t";
			cout << "���䣺" << books->adsbook[n].year << "\t";
			cout << "�绰��" << books->adsbook[n].phone << "\t";
			cout << "סַ��" << books->adsbook[n].address << endl;
			x--;
			n++;
		}
	}
}
int Seek(address* books, string name)
{
	int count = books->count;
	while ( count )
	{
		if (books->adsbook[count-1].name  == name)
		{
			return count-1;
		}
		count--;
	}
	return -1;
}
void Seekbook(address* books)
{
	if(books->count == 0)
	{
		cout << "ͨѶ¼Ϊ�գ�" << endl;
		return;
	}
	else
	{
	string name;
	cout << "������Ҫ��ѯ�˵������� "<<endl;
	cin >> name;
	int possess = Seek(books, name);
	if (possess==-1)
		{
			cout << "ͨѶ¼û�д���!" << endl;
			return;
		}
	else
		{
		cout << "������" << books->adsbook[possess].name << "\t";
		if (books->adsbook[possess].sex == 1)
		{
			cout << "�Ա�" << "��" << "\t";
		}
		else
		{
			cout << "�Ա�" << "Ů" << "\t";
		}
		cout << "���䣺" << books->adsbook[possess].year << "\t";
		cout << "�绰��" << books->adsbook[possess].phone << "\t";
		cout << "סַ��" << books->adsbook[possess].address << "\t";
		return;
		}
	}
}
void Revisebook(address* books)
{
	if (books->count == 0)
	{
		cout << "ͨѶ¼Ϊ�գ�" << endl;
		return;
	}
	else
	{
		string name;
		cout << "������Ҫ�޸��˵������� " << endl;
		cin >> name;
		int possess = Seek(books, name);
		if (possess == -1)
		{
			cout << "ͨѶ¼û�д���!" << endl;
			return;
		}
		else
		{
			//����
			string name;
			cout << "������" << endl;
			cin >> name;
			books->adsbook[possess].name = name;
			//�Ա�
			//1--��
			//2--Ů
			while (true)
			{
				int sex;
				cout << "�Ա�" << endl;
				cout << "��--1" << endl;
				cout << "Ů--2" << endl;
				cin >> sex;
				if (sex == 1 || sex == 2)
				{
					books->adsbook[possess].sex = sex;
					break;
				}
				else
					cout << "��������������룡" << endl;
			}
			//����
			int year;
			cout << "����:" << endl;
			cin >> year;
			books->adsbook[possess].year = year;
			//�绰
			long long  int phone;
			cout << "�绰��" << endl;
			cin >> phone;
			books->adsbook[possess].phone = phone;
			//סַ
			string address;
			cout << "סַ��" << endl;
			cin >> address;
			books->adsbook[possess].address = address;
		}
		cout << "�޸ĳɹ���"<<endl;
	}
}
void Deletebook(address* books)
{
	if (books->count == 0)
	{
		cout << "ͨѶ¼Ϊ�գ�" << endl;
		return;
	}
	else
	{
		string name;
		cout << "������Ҫɾ���˵������� " << endl;
		cin >> name;
		int possess = Seek(books, name);//possessӵ��
		if (possess == -1)
		{
			cout << "ͨѶ¼û�д���!" << endl;
			return;
		}
		else
		{
			while (possess < books->count)
			{
				books->adsbook[possess] = books->adsbook[possess + 1];
				possess++;
			}
		}
		cout << "ɾ���ɹ���"<<endl;
	}
}
void Clearbook(address* books)
{
	books->count = 0;
	cout << "ͨѶ¼��ճɹ���"<<endl;
	return;
}
int main()
{
	address  books;
	while (true)
	{
		system("cls");
		//����Ŀ¼
		Phone_menu();
		int  x ;
		cout << "��ѡ��>:";
		cin >> x;
		switch (x) {
		case 1:Addbook(&books);
			books.count ++;
			break;
		case 2:Showbook(&books);
			break;
		case 3:Seekbook(&books);
			break;
		case 4:Revisebook(&books);
			break;
		case 5:Deletebook(&books);
			books.count--;
			break;
		case 6:Clearbook(&books);
			break;
		case 0:cout << "��ȫ�˳���" << endl;	
			return 0;
		default:cout << "�����������������룡" << endl;
			break;
		}		
		system("pause");
	}
}