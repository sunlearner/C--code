#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//模板的练习，该思想被称为泛型思想
//template<typename T>这个语法
//其中T表示的是模板类型
template <typename T>
void Exange(T &a, T &b)
{
	T tem;
	tem = a;
	a = b;
	b = tem;
}
template <typename T>
void Print(T arr, int len)
{
	for (int x = 0; x < len; x++)
	{
		cout << arr[x];
	}
	cout << endl;
}
template<typename T>
void Arrange(T arr, int len)
{
	for (int x = 0; x < len; x++)
	{
		int a = x;
		for (int y = x + 1; y < len; y++)
		{
			//从小到大排列
			if (arr[x] > arr[y])
			{
				//自动类型推导
				Exange(arr[x], arr[y]);
			}
		}
	}
}
//模板必须确定T的数据类型，才能使用该函数
int main()
{
	int arr[] = { 5,4,8,1,7,2,9,41,6, };
	int len = sizeof(arr) / sizeof(arr[0]);
	Arrange(arr, len);
	Print<int*>(arr, len);
	char arr1[] = "adcbfgwes";
	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	Arrange(arr1, len1);
	Print<char[]>(arr1, len1);
	return 0;
}
//template <typename T>
//int Add(T a, T b)
//{
//	return a + b;
//}
//int Add1(int  a, int  b)
//{
//	return a + b;
//}
// 普通函数调用时可以发生自动类型转换(隐式类型转换)
// 模板函数调用时，自动类型推导，不会发生隐式类型转换
// 如果利用函数显示类型，可以发生隐式类型转换
//int main()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'a';
//	cout << Add(a, b)<<endl;
//	cout << Add<int>(a, c) << endl;
//	cout << Add1(a, c) << endl;
//	return 0;
//}