#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ctime>
using namespace std;
//void Add(int &b)
//{
//	return;
//}
//int main()
//{
//	int a = 10;
//	int& b = a;
//	b = 115;
//	//Add(b);
//	const int& c=a+a;
//	a = 15;
//	cout << c;
//	return 0;
//}
//int main()
//{
//	// ���ڵ�ǰϵͳ�ĵ�ǰ����/ʱ��
//	time_t now = time(0);
//	cout << now;
//	// �� now ת��Ϊ�ַ�����ʽ
//	char* dt = ctime(&now);
//
//	cout << "�������ں�ʱ�䣺" << dt << endl;
//
//	// �� now ת��Ϊ tm �ṹ
//	tm* gmtm = gmtime(&now);
//	dt = asctime(gmtm);
//	cout << "UTC ���ں�ʱ�䣺" << dt << endl;
//	return 0;
//}
//int main()
//{
//	// ���ڵ�ǰϵͳ�ĵ�ǰ����/ʱ��
//	time_t now = time(0);
//
//	cout << "1970 ��Ŀǰ��������:" << now << endl;
//
//	tm* ltm = localtime(&now);
//
//	// ��� tm �ṹ�ĸ�����ɲ���
//	cout << "��: " << 1900 + ltm->tm_year << endl;
//	cout << "��: " << 1 + ltm->tm_mon << endl;
//	cout << "��: " << ltm->tm_mday << endl;
//	cout << "ʱ��: " << ltm->tm_hour << ":";
//	cout << ltm->tm_min << ":";
//	cout << ltm->tm_sec << endl;
//}
//int main()
//{
//	char* p = new char();
//	cout << *p;
//	delete p;
//	return 0;
//}
//Ҫ�ͷ��ڴ�
int main()
{
	// ���ڵ�ǰϵͳ�ĵ�ǰ����/ʱ��
	time_t now = time(0);

	cout << "1970 ��Ŀǰ��������:" << now << endl;

	tm* ltm = localtime(&now);

	// ��� tm �ṹ�ĸ�����ɲ���
	cout << "��: " << 1900 + ltm->tm_year << endl;
	cout << "��: " << 1 + ltm->tm_mon << endl;
	cout << "��: " << ltm->tm_mday << endl;
	cout << "ʱ��: " << ltm->tm_hour << ":";
	cout << ltm->tm_min << ":";
	cout << ltm->tm_sec << endl;
}