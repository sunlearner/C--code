#pragma once
#include<iostream>
#include<string>
#include"Worker.h"
#include<fstream>
using namespace std;
class Workermanage
{
public:
	Workermanage();
	void menu();
	void ExitWM();
	void Add();
	~Workermanage();
	//д�ļ�
	void Write();
	//�ж��ļ��Ƿ�Ϊ��
	bool IsKong;
	int count;
	//ͳ��������
	int Conntpeopel();
	//��ʼ������
	void Initialization();
	Worker** workermanager;
};