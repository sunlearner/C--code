#include<stdio.h>
//int add(int x, int y)
//{
//	return x+y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
////int main()
////{
////	int x, y;
////	int input = 1;
////	int ret = 0;
////	while (input)
////	{
////		printf("************************\n");
////		printf("    1.add   2.sub		\n");
////		printf("    3.mul   4.div		\n");
////		printf("       0.exit			\n");
////		printf("************************\n");
////		printf("��ѡ��");
////		scanf("%d", &input);
////		switch (input)
////		{
////			case 1:
////			{
////				printf("�����룺");
////				scanf("%d%d", &x, &y);
////				ret=add(x, y);
////				printf("%d +%d = %d \n", x, y, ret);
////				break;
////			}
////			case 2:
////			{
////				printf("�����룺");
////				scanf("%d%d", &x, &y);
////				ret = sub(x, y);
////				printf("%d - %d = %d\n ", x, y, ret);
////				break;
////			}
////			case 3:
////			{
////				printf("�����룺");
////				scanf("%d%d", &x, &y);
////				ret = mul(x, y);
////				printf("%d * %d = %d \n", x, y, ret);
////				break;
////			}
////			case 4:
////			{
////				printf("�����룺");
////				scanf("%d%d", &x, &y);
////				ret = div(x, y);
////				printf("%d / %d = %d \n", x, y, ret);
////				break;
////			}
////			default :
////			{
////				printf("��������������룡\n");
////				break;
////			}
////		}
////	}
////	return 0;
////}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int (*p[5])(int, int) = { 0,add,sub,mul,div };//����ָ������
//	while (input)
//	{
//		printf("************************\n");
//		printf("    1.add   2.sub		\n");
//		printf("    3.mul   4.div		\n");
//		printf("       0.exit			\n");
//		printf("************************\n");
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input < 5 && input>0)
//		{
//			printf("�����룺");
//			scanf("%d%d", &x, &y);
//			ret = (*p[input])(x, y);
//			printf("���Ϊ��%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("��ȫ�˳���");
//			break;
//		}
//		else
//		{
//			printf("��������������룡\n");
//		}
//	}
//	return 0;
//}
//qosrt������ʹ���ߵ�ʵ��һ���ȽϺ���
//#include<stdlib.h>
int int_cmp(const void* p1, const void* p2) {
	return (*(int*)p1 - *(int*)p2);
}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int i = 0;
//
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//		//������   ����						�ֽڴ�С       ����
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//ʵ�ֺ���qsort
//void Exchange(char* base1, char* base2,int size)
//{
//	int i;
//	for (i = 0; i < size; i++)
//	{
//		char num = *(base1 + i);
//		*(base1 + i) = *(base2 + i);
//		*(base2 + i) = num;
//	}
//	return;
//}
//void qsort(void* base, int count, int size, int(*cmp)(const void*,const void*))
//{
//	int i, j;
//	for (i = 0; i < count; i++)
//	{
//		for (j = 0; j < count- i-1; j++)
//		{
//			int ret = (*cmp)((char*)base + j*size,(char*) base + (j + 1)*size);
//			if (ret > 0)
//			{
//				Exchange((char*)base + j * size, (char*)base + (j + 1) * size,size);
//			}
//		}
//	}
//	return ;
//}
//void qsort(void* base, int count, int size, int(*cmp)(const void*, const void*))
//{
//	int i, j;
//	for (i = 0; i < count; i++)
//	{
//		for (j = 0; j < count- i-1; j++)
//		{
//			int ret = (*cmp)((char*)base + j*size,(char*) base + (j + 1)*size);
//			if (ret > 0)
//			{
//				int i;
//				for (i = 0; i < size; i++)
//				{
//					char num = *((char*)base + j * size + i);
//					*((char*)base + j * size + i) = *((char*)base + (j + 1) * size + i);
//					*((char*)base + (j + 1) * size + i) = num;
//				}
//			}
//		}
//	}
//	return ;
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int i = 0;
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e'};//5��Ԫ��û��\0
//	char arr1[] = "abcde";//6��Ԫ�أ��и�\0��
//	int sz1 = strlen(arr1);//5
//	int sz = strlen(arr);//�����  19
//	int sn = sizeof(arr) / sizeof(arr[0]); // 5
//	int sn1 = sizeof(arr1) / sizeof(arr1[0]);//6  ����\0
//	printf("%d", sz);
//	return 0;
//}
#include<string.h>
//int main()
//{
	//һά����
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//4*4=16
	//printf("%d\n", sizeof(a + 0));//���������������Ԫ�ص�ַ����һ��Ԫ�صĵ�ַ��С��4
	//printf("%d\n", sizeof(*a));//4
	//printf("%d\n", sizeof(a + 1));//�ڶ���Ԫ�صĵ�ַ��С��4
	//printf("%d\n", sizeof(a[1]));//����2//4
	//printf("%d\n", sizeof(&a));//&a�������ȡ������������ĵ�ַ����������һ��ָ�룻ָ��Ĵ�С����4��
	//printf("%d\n", sizeof(*&a));//��������Ĵ�С
	//printf("%d\n", sizeof(&a + 1));//4
	//printf("%d\n", sizeof(&a[0]));//4 ��һ��Ԫ�ص�ַ�Ĵ�С
	//printf("%d\n", sizeof(&a[0] + 1));//�ڶ���Ԫ�ص�ַ�Ĵ�С 4
	//return 0;
	//�ַ�����
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//�����ַ����Ĵ�С��1*6=6��
	//printf("%d\n", sizeof(arr + 0));//��һ��Ԫ�ص�ַ�Ĵ�С��4
	//printf("%d\n", sizeof(*arr));//��һ��Ԫ�صĴ�С��char���͵�1���ֽڣ�1
	//printf("%d\n", sizeof(arr[1]));//�ڶ���Ԫ�صĴ�С/1
	//printf("%d\n", sizeof(&arr));//��ַ/4
	//printf("%d\n", sizeof(&arr + 1));//��ַ 4
	//printf("%d\n", sizeof(&arr[0] + 1));//�ڶ���Ԫ�صĵ�ַ/4
	//strlen���ַ����ĳ��ȣ�ֻ������\0�Ż�ֹͣ
	//printf("%d\n", strlen(arr));//�����  19
	//printf("%d\n", strlen(arr + 0));//�����  19
	////printf("%d\n", strlen(*arr));//error
	////printf("%d\n", strlen(arr[1]));//error
	////printf("%d\n", strlen(&arr));//error  &arr������Ϊ��char(*p)[6]������ָ�룩��
	////printf("%d\n", strlen(p+1);//error	&arr������Ϊ��char(*p)[6]������ָ�룩
	//printf("%d\n", strlen(&arr[0] + 1));//�������-1��  18
	//char arr[] = "abcdef";
	////printf("%d\n", sizeof(arr));//1*7=7 ���ַ�����\0��
	////printf("%d\n", sizeof(arr + 0)); //��ַ 4
	////printf("%d\n", sizeof(*arr));//��һ��Ԫ�صĴ�С/1
	////printf("%d\n", sizeof(arr[1]));//�ڶ���Ԫ�صĴ�С/1
	////printf("%d\n", sizeof(&arr));//ָ��/4
	////printf("%d\n", sizeof(&arr + 1));//ָ��/4
	////printf("%d\n", sizeof(&arr[0] + 1));//�ڶ���Ԫ�صĵ�ַ/4
	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));//error
	////printf("%d\n", strlen(arr[1]));//error  &arr������Ϊ��char(*p)[6]������ָ�룩��������
	////printf("%d\n", strlen(&arr));//error  &arr������Ϊ��char(*p)[6]������ָ�룩��������
	////printf("%d\n", strlen(&arr + 1));
	//printf("%d\n", strlen(&arr[0] + 1));//5
//}
//int main()
//{
//	/*const char* p = "abcdef";*/
//	//printf("%d\n", sizeof(p));//��ַ/4
//	//printf("%d\n", sizeof(p + 1));//��ַ/4
//	//printf("%d\n", sizeof(*p));//1 ���ַ��Ĵ�С
//	//printf("%d\n", sizeof(p[0]));//��һ��Ԫ�صĴ�С 1
//	//printf("%d\n", sizeof(&p));//����ָ��Ĵ�С��4
//	//printf("%d\n", sizeof(&p + 1));//ָ��/4
//	//printf("%d\n", sizeof(&p[0] + 1));//4
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p + 1));//5
//	////printf("%d\n", strlen(*p));//err
//	////printf("%d\n", strlen(p[0]));//err
//	////printf("%d\n", strlen(&p));//err
//	////printf("%d\n", strlen(&p + 1));//err
//	//printf("%d\n", strlen(&p[0] + 1));//5
//	//return 0;
//	//��ά����
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//��һ�еĵ�ַ��48
//	printf("%d\n", sizeof(a[0][0]));//��һ�е�һ�е�Ԫ�ش�С/4
//	printf("%d\n", sizeof(a[0]));//��һ������Ԫ�صĴ�С/16
//	printf("%d\n", sizeof(a[0] + 1));//��һ�еڶ���Ԫ�صĵ�ַ��4��/
//	printf("%d\n", sizeof(*(a[0] + 1)));//��һ�еڶ���Ԫ�صĴ�С/4
//	printf("%d\n", sizeof(a + 1));//�ڶ��е�ַ4
//	printf("%d\n", sizeof(*(a + 1)));//�ڶ��еĴ�С/16
//	printf("%d\n", sizeof(&a[0] + 1));//�ڶ��еĵ�ַ/4
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16//sizeof(a[3])3������ֿ������κ�ֵ��
//	//��ֻ��һ�ֱ�ʾ����������ڴ�
//	//a[0]=һά��������
//}
//����Ľ����ʲô��
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2  5
//	return 0;
//}
//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	printf("%p\n", p + 0x1); //0x100014;
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001;
//	//��pת��Ϊ���ͣ�����+1����+1��
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004;
//	//ָ��+1����������֮��ͬ���ʹ�С���ֽ�
//	return 0;
//}
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };//С��
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	//������a����Ԫ�ص�ַת��Ϊ���ͣ�+1������+1
//	//�ڽ��Ӻ͵���ת���ɵ�ַ�����൱��a����Ԫ�ص�ַ�����ƶ�һ���ֽڣ�
//	//����С�˴洢����֪������Ϊ��2000000
//	printf("%x,%x", ptr1[-1], *ptr2); //4    2000000
//	return 0;
//}
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//�����ǣ���������{}�����Դ𰸲���0��
//	//������䣬��һ�����Ϊ1��������3��5��
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);//1
//	return 0;
//}
//int main()
//{
//	//int a[5][5];
//	//int(*p)[4] = { 0 };
//	int arr[] = { 1,2,3,4,5 };
//	//p = a;
//	//printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//4 /-4
//	int* p = &(arr[4]);
//	int* p1 = &arr[0];
//	printf("%d",p1-p);
//	/*ָ��- ָ��Ľ��Ϊ��ָ��֮���Ԫ�ظ�����
//	�������ָ����ָ��Ĳ���ͬһ�������е�Ԫ�أ���ô����֮������Ľ����δ�����*/
//	return 0;
//}
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10   5
//	return 0;
//}
int main()
{
	const char* a[] = { "work","at","alibaba" };
	char** pa =(char**)a;
	pa++;
	printf("%s\n", *pa);
	return 0;
}