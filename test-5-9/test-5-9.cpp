#include<stdio.h>
//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0
int Same_order(char s1[], char s2[])
{
	int i, j;
	int k = 0;
	for (i = 0; i < 6; i++)
	{
		if (s1[0] == s2[i])
		{
			break;
		}
		if (i == 5)
		{
			return 0;
		}
	}
	for (j = 1; j < 6; j++)
	{
		if (j < 6 - i)
		{
			if (s1[j] != s2[i + j])
				return 0;
		}
		else {
			if (s1[j] != s2[k])
			{
				return 0;
			}
			k++;
		}
	}
	return 1;
}
int main()
{
	char s1[20];
	char s2[20];
	int i;
	//printf("������6���ַ�.\ns1:");
	//for (i = 0; i < 6; i++)
	//{
	//	scanf("%c", &s1[i]);
	//}
	//printf("���ٴ�����6���ַ�.\ns2:");
	//getchar();
	//for (i = 0; i < 6; i++)
	//{
	//	scanf("%c", &s2[i]);
	//}
	printf("������6���ַ�.\ns1:");
	scanf("%s", s1);
	printf("���ٴ�����6���ַ�.\ns2:");
	scanf("%s", s2);
	int n = Same_order(s1, s2);
	if (n == 1)
	{
		printf("s1��s2Ϊͬ��!");
	}
	else {
		printf("s1��s2Ϊ��ͬ��!");
	}
	return 0;
}