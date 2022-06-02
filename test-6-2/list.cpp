#define _CRT_SECURE_NO_WARNINGS
#include"list.h"
void Initialization(struct list* sp)
{
	memset(sp->every, 0, sizeof(sp->every));
	sp-> size = 0;
}
void Add_list(struct list* sp)
{
	if (sp->size == MAX)
	{
		printf("通讯录已满，无法再添加！");
	}
	else
	{	
		printf("姓名：");
		scanf("%s", &sp->every[sp->size].name);
		printf("性别：");
		scanf("%s", &sp->every[sp->size].sex);
		printf("年龄：");
		scanf("%s", &sp->every[sp->size].age);
		printf("电话：");
		scanf("%s", &sp->every[sp->size].phone);
		printf("住址：");
		scanf("%s", &sp->every[sp->size].adrss);
		sp->size++;
		printf("输入成功！\n");
	}
}
void Show_list(struct list* sp)
{
	if (sp->size == 0)
	{
		printf("通讯录为空。");
	}
	else
	{
		printf("%-8s\t%-5s\t%-5s\t%-12s\t%-12s\n", "姓名", "性别", "年龄", "电话", "住址");
		int i = 0;
		for (i = 0; i <= sp->size; i++)
		{
			printf("%-8s\t%-5s\t%-5s\t%-12s\t%-12s\n",
				sp->every[i].name,
				sp->every[i].sex,
				sp->every[i].age,
				sp->every[i].phone,
				sp->every[i].adrss);
		}
	}
}