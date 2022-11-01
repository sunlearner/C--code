#define _CRT_SECURE_NO_WARNINGS
#include"circle.h"
	void  circle ::set_r(int r)
	{
		c_R = r;
	}
	void circle::set_cp(point cp)
	{
		c_point = cp;
	}
	int circle::show_r()
	{
		return c_R;
	}
	point circle::show_cp()
	{
		return c_point;
	}
	void circle::Issp(point& p)
	{
		int count = (p.show_x() - c_point.show_x()) * (p.show_x() - c_point.show_x()) +
			(p.show_y() - c_point.show_y()) * (p.show_y() - c_point.show_y());
		int add = c_R * c_R;
		if (count == add)
			cout << "点在圆上！" << endl;
		else if (count > add)
			cout << "点在圆外！" << endl;
		else
			cout << "点在圆内！" << endl;

	}
void Issp(point& p, circle& c)
{
	int count = (p.show_x() - c.show_cp().show_x()) * (p.show_x() - c.show_cp().show_x()) +
		(p.show_y() - c.show_cp().show_y()) * (p.show_y() - c.show_cp().show_y());
	int add = c.show_r() * c.show_r();
	if (count == add)
		cout << "点在圆上！" << endl;
	else if (count > add)
		cout << "点在圆外！" << endl;
	else
		cout << "点在圆内！" << endl;

}
