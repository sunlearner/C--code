#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include"Workermanage.h"
#include"Worker.h"
#include"employee.h"
#include"Boss.h"
using namespace std;
int main()
{
	Workermanage wm;
	/*Employee p(1, "孙迎新", 1);
	p.ShowInfo();*/
	int import;
	while (true)
	{
		wm.menu();
		cout << "请做出选择：>" << endl;
		cin >> import;
		switch (import)
		{
			//0、退出管理系统
		case 0:wm.ExitWM();
			break;
		case 1: wm.Add();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		default:
			cout << "输入有误，请重新输入！" << endl;
			break;
		}
		system("pause");
		system("cls");
	}
	return 0;
}
//class Basw
//{
//public:
//	int a;
//	Basw()
//	{
//		a = 10;
//	}
//};
//int main()
//{
//	//ofstream ofs;
//	//ofs.open("text.text1", ios::out);	
//	//	ofs << "ID:" <<  endl;
//	//	ofs << "姓名:" << endl;
//	//	ofs << "部门ID:" << endl;
//	//ofs.close();
//	Worker* wp = NULL;
//	wp = new Boss(1, "孙迎新", 1);
//	cout << "名字："<<wp->m_Name;
//	cout << wp->m_Id;
//	wp->ShowInfo();
//}