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
	cout << "***** 1.添加通讯录 ******" << endl;
	cout << "***** 2.显示通讯录 ******" << endl;
	cout << "***** 3.查找通讯录 ******" << endl;
	cout << "***** 4.修改通讯录 ******" << endl;
	cout << "***** 5.删除通讯录 ******" << endl;
	cout << "***** 6.清空通讯录 ******" << endl;
	cout << "***** 0.退出通讯录 ******" << endl;
	cout << "*************************" << endl;
}
struct personal
{
	//姓名
	string  name;
	//性别
	//1--为男
	//2--为女
	int sex;
	//年龄
	int year;
	//电话
	long long int phone;
	//住址
	string address;
};
struct address
{
	personal adsbook[MAX];
	int count=0;
};
void Addbook(address* books)
{
	//如果通讯录满了，就无法在添加
	if (books->count == 1000)
	{
		cout << "通讯录已满！" << endl;
	}
	else {
		//姓名
		string name;
		cout << "姓名：" << endl;
		cin >> name;
		books->adsbook[books->count].name = name;
		//性别
		//1--男
		//2--女
		while (true)
		{
			int sex;
			cout << "性别：" << endl;
			cout << "男--1" << endl;
			cout << "女--2" << endl;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				books->adsbook[books->count].sex = sex;
				break;
			}
			else
				cout << "输入错误，重新输入！" << endl;
		}
		//年龄
		int year;
		cout << "年龄:" << endl;
		cin >> year;
		books->adsbook[books->count].year = year;
		//电话
		long long  int phone;
		cout << "电话：" << endl;
		cin >> phone;
		books->adsbook[books->count].phone = phone;
		//住址
		string address;
		cout << "住址：" << endl;
		cin >> address;
		books->adsbook[books->count].address = address;
	}
	cout << "成功添加一个通讯录成员！"<<endl;
}
void Showbook(address* books)
{
	if (books->count== 0)
	{
		cout << "通讯录为空！" << endl;
	}
	else
	{
		int n = 0;
		int x = books->count;
		while (x)
		{
			cout << "姓名：" << books->adsbook[n].name << "\t";
			if (books->adsbook[n].sex == 1)
				cout << "性别：" << "男" << "\t";
			else
				cout << "性别：" << "女" << "\t";
			cout << "年龄：" << books->adsbook[n].year << "\t";
			cout << "电话：" << books->adsbook[n].phone << "\t";
			cout << "住址：" << books->adsbook[n].address << endl;
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
		cout << "通讯录为空！" << endl;
		return;
	}
	else
	{
	string name;
	cout << "请输入要查询人的姓名： "<<endl;
	cin >> name;
	int possess = Seek(books, name);
	if (possess==-1)
		{
			cout << "通讯录没有此人!" << endl;
			return;
		}
	else
		{
		cout << "姓名：" << books->adsbook[possess].name << "\t";
		if (books->adsbook[possess].sex == 1)
		{
			cout << "性别：" << "男" << "\t";
		}
		else
		{
			cout << "性别：" << "女" << "\t";
		}
		cout << "年龄：" << books->adsbook[possess].year << "\t";
		cout << "电话：" << books->adsbook[possess].phone << "\t";
		cout << "住址：" << books->adsbook[possess].address << "\t";
		return;
		}
	}
}
void Revisebook(address* books)
{
	if (books->count == 0)
	{
		cout << "通讯录为空！" << endl;
		return;
	}
	else
	{
		string name;
		cout << "请输入要修改人的姓名： " << endl;
		cin >> name;
		int possess = Seek(books, name);
		if (possess == -1)
		{
			cout << "通讯录没有此人!" << endl;
			return;
		}
		else
		{
			//姓名
			string name;
			cout << "姓名：" << endl;
			cin >> name;
			books->adsbook[possess].name = name;
			//性别
			//1--男
			//2--女
			while (true)
			{
				int sex;
				cout << "性别：" << endl;
				cout << "男--1" << endl;
				cout << "女--2" << endl;
				cin >> sex;
				if (sex == 1 || sex == 2)
				{
					books->adsbook[possess].sex = sex;
					break;
				}
				else
					cout << "输入错误，重新输入！" << endl;
			}
			//年龄
			int year;
			cout << "年龄:" << endl;
			cin >> year;
			books->adsbook[possess].year = year;
			//电话
			long long  int phone;
			cout << "电话：" << endl;
			cin >> phone;
			books->adsbook[possess].phone = phone;
			//住址
			string address;
			cout << "住址：" << endl;
			cin >> address;
			books->adsbook[possess].address = address;
		}
		cout << "修改成功！"<<endl;
	}
}
void Deletebook(address* books)
{
	if (books->count == 0)
	{
		cout << "通讯录为空！" << endl;
		return;
	}
	else
	{
		string name;
		cout << "请输入要删除人的姓名： " << endl;
		cin >> name;
		int possess = Seek(books, name);//possess拥有
		if (possess == -1)
		{
			cout << "通讯录没有此人!" << endl;
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
		cout << "删除成功！"<<endl;
	}
}
void Clearbook(address* books)
{
	books->count = 0;
	cout << "通讯录清空成功！"<<endl;
	return;
}
int main()
{
	address  books;
	while (true)
	{
		system("cls");
		//创建目录
		Phone_menu();
		int  x ;
		cout << "请选择>:";
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
		case 0:cout << "安全退出！" << endl;	
			return 0;
		default:cout << "输入有误，请重新输入！" << endl;
			break;
		}		
		system("pause");
	}
}