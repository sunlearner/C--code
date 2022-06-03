#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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
//函数声明
void Initialization(struct list* sp);
//添加通讯录
void Add_list(struct list* sp);
//显示通讯录
void Show_list(struct list* sp);
//删除通讯录
void Delete_list(struct list* sp);
//查找通讯录
void Find_list(struct list* sp);
//修改通讯录
void Revise_list(struct list* sp);
//排列通讯录
void Range_list(struct list* sp);