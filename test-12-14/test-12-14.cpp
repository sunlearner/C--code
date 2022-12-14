#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//class P
//{
//public:
//	P()
//	{
//		c = 0;
//	}
//private:
//	int c;
//};
class Date
{
public:
	Date(int year = 0, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
		//p = new int;
		 p = (int*)malloc(1024);
	}
	~Date()
	{
		free(p);
	}
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	Date operator=(Date &d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
		return *this;
	}
private:
	int _year;
	int _month;
	int _day;
	int* p;
	//P p;
};
int main()
{
	Date d1(2022,12,14);
	Date d2 = d1;
	Date d3;
	d3 = d1;
	d1.Print();
	d2.Print();
	d3.Print();
	return 0;
}