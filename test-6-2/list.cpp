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
		printf("ͨѶ¼�������޷�����ӣ�");
	}
	else
	{	
		printf("������");
		scanf("%s", &sp->every[sp->size].name);
		printf("�Ա�");
		scanf("%s", &sp->every[sp->size].sex);
		printf("���䣺");
		scanf("%s", &sp->every[sp->size].age);
		printf("�绰��");
		scanf("%s", &sp->every[sp->size].phone);
		printf("סַ��");
		scanf("%s", &sp->every[sp->size].adrss);
		sp->size++;
		printf("����ɹ���\n");
	}
}
void Show_list(struct list* sp)
{
	if (sp->size == 0)
	{
		printf("ͨѶ¼Ϊ�ա�");
	}
	else
	{
		printf("%-8s\t%-5s\t%-5s\t%-12s\t%-12s\n", "����", "�Ա�", "����", "�绰", "סַ");
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