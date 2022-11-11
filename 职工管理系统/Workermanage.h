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
	//写文件
	void Write();
	//判断文件是否为空
	bool IsKong;
	int count;
	//统计人数：
	int Conntpeopel();
	//初始化数据
	//显示文件
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