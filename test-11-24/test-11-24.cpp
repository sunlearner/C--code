#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//残缺部分的后面可以是残缺也可以是完整
//但是残缺部分的前面必须是残缺
//void Fun(int a,int b=20,int c=10)
//{
//	cout << "Hello !" << endl;
//}
//int main()
//{
//	//缺省函数
//	/*int a = 10;
//	Fun(10,10,10);*/
//	return 0;
//}
//函数的重载只和函数类型的顺序，多少，不同有关
//int main()
//{
//	//引用==外号
//	//引用在定义是必须初始化
//	//隐式类型转换
//	int a = 10;
//	char c = a;
//	//char& b = a;不能正常执行
//	const char& b = a;//在这个过程中产生一个临时变量，临时变量具有常性
//	return 0;
//}
//int Fun1(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
int& Fun2(int a, int b)
{
	static int c;
	c = a + b;
	return c;
}
int main()
{
	int set=Fun2(10,20);
	cout << set;
	printf("abc\n");
	Fun2(100,200);
	cout << set;
	return 0;
}