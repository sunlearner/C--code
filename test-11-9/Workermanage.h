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
	int count;
	Worker** workermanager;
};