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
	//��ʾ�ļ�
	void Show();
	void Revise();
	void Initialization();
	int Find(int id);
	void Findone();
	void Delete();
	void Arrange();
	void Clear();
	Worker** workermanager;
};