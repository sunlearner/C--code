#pragma once
#include<iostream>
#include<string>
using namespace std;
class Worker
{
public:
	//��ʾ������Ϣ
	virtual void ShowInfo() = 0;
	//��ȡ��λ����
	virtual string Getmanager() = 0;
	//ְ�����
	int m_Id;
	//ְ������
	string m_Name;
	//���ű��
	int m_Bid;
};