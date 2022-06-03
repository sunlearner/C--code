#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include"list.h"
void Initialization(struct list* sp)
{
	memset(sp->every, 0, sizeof(sp->every));
	sp->size = 0;
}
void Add_list(struct list* sp)
{
	if (sp->size == MAX)
	{
		printf("通讯录已满，无法再添加！\n");
	}
	else
	{
		printf("请输入姓名：");
		scanf("%s", &sp->every[sp->size].name);
		printf("请输入性别：");
		scanf("%s", &sp->every[sp->size].sex);
		printf("请输入年龄：");
		scanf("%s", &sp->every[sp->size].age);
		printf("请输入电话：");
		scanf("%s", &sp->every[sp->size].phone);
		printf("请输入住址：");
		scanf("%s", &sp->every[sp->size].adrss);
		sp->size++;
		printf("输入成功！\n");
	}
}
void Show_list(struct list* sp)
{
	if (sp->size == 0)
	{
		printf("通讯录为空。\n");
	}
	else
	{
		printf("%-8s\t%-5s\t%-5s\t%-15s\t%-12s\n", "姓名", "性别", "年龄", "电话", "住址");
		int i = 0;
		for (i = 0; i < sp->size; i++)
		{
			printf("%-8s\t%-5s\t%-5s\t%-15s\t%-12s\n",
				sp->every[i].name,
				sp->every[i].sex,
				sp->every[i].age,
				sp->every[i].phone,
				sp->every[i].adrss);
		}
	}
}
int Find_name(struct list* sp, char nam[MAX_name])
{
	int i = 0;
	for (i = 0; i < sp->size; i++)
	{
		if (strcmp(sp->every[i].name, nam) == 0)
			return i;
	}
	return -1;
}
void Delete_list(struct list* sp)
{
	char name[MAX_name];
	printf("请输入要删除的姓名：>");
	scanf("%s", &name);
	//1.查找
	int pos = Find_name(sp, name);
	if (pos == -1)
	{
		printf("该名字未在通讯录内.\n");
	}
	//2.删除
	else
	{
		int i = 0;
		for (i = pos; i < sp->size - 1; i++)
		{
			sp->every[i] = sp->every[i + 1];
		}
		--sp->size;
		printf("删除成功！\n");
	}
}
void Find_list(struct list* sp)
{
	char name[MAX_name];
	printf("请输入要查找人的姓名：>");
	scanf("%s", &name);
	int pos = Find_name(sp, name);
	if (pos == -1)
	{
		printf("该名字未在通讯录内.\n");
	}
	else
	{
		printf("%-8s\t%-5s\t%-5s\t%-15s\t%-12s\n", "姓名", "性别", "年龄", "电话", "住址");
			printf("%-8s\t%-5s\t%-5s\t%-15s\t%-12s\n",
				sp->every[pos].name,
				sp->every[pos].sex,
				sp->every[pos].age,
				sp->every[pos].phone,
				sp->every[pos].adrss);
	}
}
void Revise_list(struct list* sp)
{
	char name[MAX_name];
	printf("请输入要修改人的姓名：>");
	scanf("%s", &name);
	int pos = Find_name(sp, name);
	if (pos == -1)
	{
		printf("该名字未在通讯录内.\n");
	}
	else
	{
		printf("请输入姓名：");
		scanf("%s", &sp->every[pos].name);
		printf("请输入性别：");
		scanf("%s", &sp->every[pos].sex);
		printf("请输入年龄：");
		scanf("%s", &sp->every[pos].age);
		printf("请输入电话：");
		scanf("%s", &sp->every[pos].phone);
		printf("请输入住址：");
		scanf("%s", &sp->every[pos].adrss);
		printf("修改成功！\n");
	}
}
int Compare(const void* sp1,const void* sp2)
{
	return  strcmp((char*)sp1, (char*)sp2);
}
void Range_list(struct list* sp)
{
	printf("按姓名排列为：\n");
	qsort(sp->every, sp->size, sizeof(sp->every[0]), Compare);
	Show_list(sp);
}