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
		printf("ͨѶ¼�������޷�����ӣ�\n");
	}
	else
	{
		printf("������������");
		scanf("%s", &sp->every[sp->size].name);
		printf("�������Ա�");
		scanf("%s", &sp->every[sp->size].sex);
		printf("���������䣺");
		scanf("%s", &sp->every[sp->size].age);
		printf("������绰��");
		scanf("%s", &sp->every[sp->size].phone);
		printf("������סַ��");
		scanf("%s", &sp->every[sp->size].adrss);
		sp->size++;
		printf("����ɹ���\n");
	}
}
void Show_list(struct list* sp)
{
	if (sp->size == 0)
	{
		printf("ͨѶ¼Ϊ�ա�\n");
	}
	else
	{
		printf("%-8s\t%-5s\t%-5s\t%-15s\t%-12s\n", "����", "�Ա�", "����", "�绰", "סַ");
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
	printf("������Ҫɾ����������>");
	scanf("%s", &name);
	//1.����
	int pos = Find_name(sp, name);
	if (pos == -1)
	{
		printf("������δ��ͨѶ¼��.\n");
	}
	//2.ɾ��
	else
	{
		int i = 0;
		for (i = pos; i < sp->size - 1; i++)
		{
			sp->every[i] = sp->every[i + 1];
		}
		--sp->size;
		printf("ɾ���ɹ���\n");
	}
}
void Find_list(struct list* sp)
{
	char name[MAX_name];
	printf("������Ҫ�����˵�������>");
	scanf("%s", &name);
	int pos = Find_name(sp, name);
	if (pos == -1)
	{
		printf("������δ��ͨѶ¼��.\n");
	}
	else
	{
		printf("%-8s\t%-5s\t%-5s\t%-15s\t%-12s\n", "����", "�Ա�", "����", "�绰", "סַ");
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
	printf("������Ҫ�޸��˵�������>");
	scanf("%s", &name);
	int pos = Find_name(sp, name);
	if (pos == -1)
	{
		printf("������δ��ͨѶ¼��.\n");
	}
	else
	{
		printf("������������");
		scanf("%s", &sp->every[pos].name);
		printf("�������Ա�");
		scanf("%s", &sp->every[pos].sex);
		printf("���������䣺");
		scanf("%s", &sp->every[pos].age);
		printf("������绰��");
		scanf("%s", &sp->every[pos].phone);
		printf("������סַ��");
		scanf("%s", &sp->every[pos].adrss);
		printf("�޸ĳɹ���\n");
	}
}
int Compare(const void* sp1,const void* sp2)
{
	return  strcmp((char*)sp1, (char*)sp2);
}
void Range_list(struct list* sp)
{
	printf("����������Ϊ��\n");
	qsort(sp->every, sp->size, sizeof(sp->every[0]), Compare);
	Show_list(sp);
}