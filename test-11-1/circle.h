#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<iostream>
#include"point.h"
using namespace std;	
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
