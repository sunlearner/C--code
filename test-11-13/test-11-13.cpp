#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//ģ�����ϰ����˼�뱻��Ϊ����˼��
//template<typename T>����﷨
//����T��ʾ����ģ������
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
			//��С��������
			if (arr[x] > arr[y])
			{
				//�Զ������Ƶ�
				Exange(arr[x], arr[y]);
			}
		}
	}
}
//ģ�����ȷ��T���������ͣ�����ʹ�øú���
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
// ��ͨ��������ʱ���Է����Զ�����ת��(��ʽ����ת��)
// ģ�庯������ʱ���Զ������Ƶ������ᷢ����ʽ����ת��
// ������ú�����ʾ���ͣ����Է�����ʽ����ת��
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