#pragma once
#include<iostream>
#include<string>
#include"Worker.h"
using namespace std;
class Manager :public Worker
{
public:
	Manager(int id, string name, int bid);
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