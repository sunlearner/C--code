#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
struct Peraon
{
public:
	int age;
private:
	struct Perason* p;
};
//C������struct����������ṹ���
//C++�У�����C����struct�ṹ����÷�������ͬʱstructҲ���Զ�����
//��class��ͬ����struct��������࣬
//�ڱ��������Լ������͵�ָ����Ҫ����s������ǰtruct
class Student
{
public:
	void Show()
	{
		cout << _a;
	}
	void Man()
	{
		cout << "Man()" << endl;
	}
	int _a;
};
int main()
{
	Student* s=nullptr;
	//cout << sizeof(s) << endl;
	//cout << &s;
	//s->Man();
	s->Show();
	//��Ա���������ڹ�������Σ�����s->Man()ֱ�ӽ���Man()����
	//��s->Show()���ó�Ա����������Ҫͨ��sָ��ȥ�������еı���
	//����ΪsΪ��ָ�룬���Գ��������
	return 0;
}