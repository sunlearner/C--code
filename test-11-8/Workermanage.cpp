#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include"Workermanage.h"
using namespace std;
Workermanage::Workermanage()
{

}
Workermanage::~Workermanage()
{

}
void Workermanage:: menu()
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

}