#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<iostream>
using namespace std;
class point
{
protected:
	int p_X;
	int p_Y;
public:
	void set_x(int x);
	void set_y(int y);
	int show_x();
	int show_y();
};
class circle
{
protected:
	int c_R;
	point c_point;
public:
	void set_r(int r);
	void set_cp(point cp);
	int show_r();
	point show_cp();
	void Issp(point& p);
};
void Issp(point& p, circle& c);