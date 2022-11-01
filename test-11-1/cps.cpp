#define _CRT_SECURE_NO_WARNINGS
#include"cp.h"
int main()
{
	circle c1;
	point center;
	center.set_x(10);
	center.set_y(0);
	c1.set_r(10);
	c1.set_cp(center);
	cout << "圆的半径为：" << c1.show_r() << endl;
	cout << "圆心为：" << center.show_x() << "," << center.show_y() << endl;
	/*cout << c1.show_cp().show_x ()<<",";
	cout << c1.show_cp().show_y() << endl;*/
	point p1;
	p1.set_x(10);
	p1.set_y(9);
	Issp(p1, c1);
	c1.Issp(p1);
	return 0;
}