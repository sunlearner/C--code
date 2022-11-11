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
		case 2:wm.Show();
			break;
		case 3:wm.Revise();
			break;
		case 4:wm.Findone();
			break;
		case 5:wm.Delete();
			break;
		case 6:wm.Arrange();
			break;
		case 7:wm.Clear();
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