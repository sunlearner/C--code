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
	//��ʾ������Ϣ
	void ShowInfo();
	//��ȡ��λ����
	string Getmanager();

};