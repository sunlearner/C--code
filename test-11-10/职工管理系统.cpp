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
	/*Employee p(1, "��ӭ��", 1);
	p.ShowInfo();*/
	int import;
	while (true)
	{
		wm.menu();
		cout << "������ѡ��>" << endl;
		cin >> import;
		switch (import)
		{
			//0���˳�����ϵͳ
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
			cout << "�����������������룡" << endl;
			break;
		}
		system("pause");
		system("cls");
	}
	return 0;
}