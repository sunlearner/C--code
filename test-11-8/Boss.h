#pragma once
#include<iostream>
#include<string>
#include"Worker.h"
using namespace std;
class Boss :public Worker
{
public:
	Boss(int id, string name, int bid);
	//��ʾ������Ϣ
	void ShowInfo();
	//��ȡ��λ����
	string Getmanager();
	//ְ�����
	int m_Id;
	//ְ������
	string m_Name;
	//���ű��
	int m_Bid;
};