#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
class Date
{
public:
	int Countday(int year,int month, int day)
	{
		int monthes[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if ((year % 4 == 0 && year % 100 != 0 && month == 2) || year % 400 == 0)
		{
			return 29;
		}
		return monthes[month];
	}
	Date(int year = 0, int month = 1, int day = 1)
	{
		if (month >= 1 && month <= 12 && day >= 1 
			&& day <= Countday(year, month, day))
		{
			_year = year;
			_month = month;
			_day = day;
		}
		else
			cout << "输入日期有误！" << endl;
	}
	Date(Date &d)
	{
		this->_year = d._year;
		this->_month = d._month;
		this->_day = d._day;
	}
	bool operator==(Date d)
	{
		if (_year == d._year && _month == d._month && _day == d._day)
			return true;
		else
			return false;
	}
	bool operator<(Date d)
	{
		if (_year < d._year)
			return true;
		else if (_year == d._year && _month < d._month)
			return true;
		else if (_year == d._year && _month == d._month && _day < d._day)
			return true;
		else
			return false;
	}
	bool operator<=(Date d)
	{
		if (*this < d || *this == d)
			return true;
		else
			return false;
	}
	bool operator>(Date d)
	{
		if (!(*this < d) && !(*this == d))
			return true;
		else
			return false;
	}
	Date operator+(int count)
	{
		int day = _day + count;
		while (day > Countday(_year, _month, _day))
		{
			day=day - Countday(_year, _month, _day);
			_month++;
		}
		_day = day;
		return *this;
	}
	int operator-(Date d)
	{
		int year = (_year - d._year) * 365;
		int thismonth = _month;
		int month = 0;
		int day = _day - d._day;
		int sp = 0;
		while (_month)
		{
			month += Countday(_year, _month-1, _day);
			_month--;
		}
		while (d._month)
		{
			month-= Countday(d._year,d._month-1,d._day);
			d._month--;
		}
		_month = thismonth;
		int c = _year - d._year;
		if (c >0)
		{
			sp = (c / 100) * 24 + (c % 100) / 4 + (c / 400);
				return year + month + day + sp;
		}
		else
		{
			sp= (c / 100) * 24 + (c % 100) % 4 + (c / 400);
			return year + month + day - sp;
		}
	}
	void Printe()
	{
		cout << this->_year << "-" << this->_month << "-" << this->_day<<endl;
	}
protected:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d(2022, 11, 11);
	Date d1(1000,11,11);
	cout << d - d1<<endl;
	d.Printe();
	return 0;
}