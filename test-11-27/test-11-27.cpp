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
		_name = "¿Õ";
	}*/
	Personal(int year=0, string name="¿Õ")
	{
		_year = year;
		_name = name;
	}
};
int main()
{
	Personal p1;
	Personal p2(10, "ËïÎò¿Õ");
	return 0;
}