#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//ʵ��strncpy
//char* my_strncpy(char* dest, const char* src, int num)
//{
//	assert(dest && src);
//	char* set = dest;
//	while (num)
//	{
//		if (*src == '\0')
//		{
//			while (num) 
//			{
//				*dest = '\0';
//				dest++;
//				num--;
//			}
//			return set;
//		}
//		*dest = *src;
//		dest++;
//		src++;
//		num--;
//	}
//	return set;
//}
//int main()
//{
//	char arr[30] = "abcdef";
//	char arr1[] = "bit ";
//	char *p = strncpy(arr, arr1, 4);
//	printf("%s", p);
//	return 0;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	int num3 = num1 ^ num2;
//	printf("%d \n", num1 & num2);//��������1��&(��λ�������)��1�� //0
//	printf("%d \n", num1 | num2);//ֻҪ��Ӧ�Ķ�������λ��һ��Ϊ1ʱ�����λ��Ϊ1 |����λ��//3
//	printf("%d \n", num3);//���������Ʊ�ʾ��ͬ��Ϊ1��ͬ��Ϊ0 ^(��λ���)//3
//	return 0;
//}
//int main()
//{
//	int num = 10;
//	int count = 0;//����
//	/*while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}*/
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("��������1�ĸ��� = %d\n", count);
//	return 0;
//}
//int main()
//{
//	int a = -10;
//	int* p = NULL;
//	printf("%d\n", !2);
//	printf("%d\n", !0);
//	a = -a;
//	p = &a;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);//����д�в��У�
//	//printf("%d\n", sizeof int);//����д�в��У�
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int x = a++;
//	//�ȶ�a��ʹ�ã������ӣ�����x��ֵ��10��֮��a���11��
//	int y = a--;
//	//�ȶ�a��ʹ�ã����Լ�������y��ֵ��11��֮��a���10��
//	printf("x=%d\ny=%d\na=%d", x, y, a);
//	return 0;
//}
//��������Ľ����ʲô��
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//i=0
//	i = a++||++b||d++; 
//	//�߼���ͻ���ص�:
//	//1.������ִ��
//	//2.�߼��룺����0(��)������ֹͣ���߼�������1(��)����ֹͣ��
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//����������
//���ʽ��exp1 ? exp2 : exp3
int main()
{
	int input;
	printf("�����룺");
	scanf("%d", &input);
	input > 5 ? printf("�Ҳ�ϲ����\n"): printf("��ϲ����\n");
	/*if (a > 5)
		b = 3;
	else
		b = -3;*/
	//�������ͬ
	printf("%d", input);
}