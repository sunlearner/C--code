#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
class Personal
{
public:
	int _year;
	string _name;
	/*Personal(int year ,string name )
	{
		_year = year;
		_name = name;
	}*/
	/*Personal()
	{
		_year = 0;
		_name = "��";
	}*/
	Personal(int year=0, string name="��")
	{
		_year = year;
		_name = name;
	}
};
int main()
{
	Personal p1;
	Personal p2(10, "�����");
	return 0;
}