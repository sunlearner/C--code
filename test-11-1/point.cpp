#define _CRT_SECURE_NO_WARNINGS
#include"point.h"
void point::set_x(int x)
{
	p_X = x;
}
void  point::set_y(int y)
{
	p_Y = y;
}
int  point::show_x()
{
	return p_X;
}
int  point::show_y()
{
	return p_Y;
}