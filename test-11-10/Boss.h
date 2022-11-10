#pragma once
#include<iostream>
#include<string>
#include"Worker.h"
#include<string>
using namespace std;
class Boss :public Worker
{
public:
	Boss(int id, string name, int bid);
	//显示个人信息
	void ShowInfo();
	//获取岗位名称
	string Getmanager();

};