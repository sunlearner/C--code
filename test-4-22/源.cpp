#include<stdio.h>
//int My_strlen(char ch[10])
//{
//	int i,q=0;	
//	for(i=0;i<20;i++)
//	{
//		if(ch[i]!='\0')
//		{
//			q++;
//		}
//		else return q; 
//			
//	}
// } 
//int My_strlens(char* p)
//{
//	char* pa;
//	char* pb;
//	pa=p;
//	pb=p;
//	while(*pb!='\0')
//	{
//		pb++;
//	}
//	return pb-pa;
//}
//main()
//{
//	char ch[10]="word";
//	int sen =My_strlen(ch); //���ַ�����(ѭ����)
//	int cen=My_strlens(ch); //���ַ�����(ָ����)
//	printf("%d\n",cen);
//	printf("%d\n",sen);
// } 
//int strlend(char* arr)
//{
//	if(*arr=='\0') 
//	 	return 0;
//	else{		  	
//		return 1+strlend(arr+1);}
// } 
//
//main()
//{
//	char arr[]="word";
//	int len=strlend(arr);//���ַ�����(�ݹ���)
//	printf("%d",len);
//	return 0;
//}
//��100-200֮�������
int main()
{
	int i, j, a = 0;
	for (i = 101; i < 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j >= i / 2)
		{
			printf("%d ", i);
			a++;
			if (a % 5 == 0)
			{
				printf("\n");
			}
		}

	}printf("\n100-200������Ϊ��%d", a);
	return 0;
}