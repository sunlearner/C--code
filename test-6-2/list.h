#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define MAX_name 12
#define MAX_sex 5
#define MAX_phone 12
#define MAX_adrss 30
#define MAX_age 5
#define MAX 100
struct Individual
{
	char name[MAX_name];
	char sex[MAX_sex];
	char  age[MAX_age];
	char phone[MAX_phone];
	char adrss[MAX_adrss];
};
struct list
{
	struct Individual every[MAX];
	int size;
};
//��������
void Initialization(struct list* sp);
//���ͨѶ¼
void Add_list(struct list* sp);
//��ʾͨѶ¼
void Show_list(struct list* sp);