#pragma once
#include<iostream>
#include<string>
#include"Worker.h"
using namespace std;
class Manager :public Worker
{
public:
	Manager(int id, string name, int bid);
	//显示个人信息
	void ShowInfo();
	//获取岗位名称
	string Getmanager();
	//职工编号

};