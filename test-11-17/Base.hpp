#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
template <typename Name, typename Age>
class Base
{
public:
	Base(Name name, Age age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	void Show()
	{
		cout << "������" << this->m_name << "  ���䣺" << this->m_age << endl;
	}
	Name m_name;
	Age m_age;
};