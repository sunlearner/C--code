#include<stdio.h>
//void move(int arr[], int sz)
//{
//	int i=0, j=0;
//	while (i < sz)
//	{
//		if (arr[i] % 2 == 1)
//		{
//			i++;
//		}
//		else 
//		{
//			while (arr[i + j] % 2 != 1 && j + i < sz)
//			{
//				j++;
//			}
//			if (arr[i + j] % 2 == 1)
//			{
//				int c = arr[i];
//				arr[i] = arr[i + j];
//				arr[i + j] = c;
//				j = 0;
//				i++;
//			}
//			if (i + j == sz)
//				return;
//		}
//	}
//}
//void move1(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//�����ż��
//		while (arr[left] % 2 == 1 && left < right)
//		{
//			left++;
//		}
//		//�ұ�������
//		while (arr[right] % 2 != 1 && left < right)
//		{
//			right--;
//		}
//		//����
//		if (left < right)
//		{
//			int i = arr[left];
//			arr[left] = arr[right];
//			arr[right] = i;
//		}
//	}
//}
////����һ���������飬ʵ��һ��������
////�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
////����ż��λ������ĺ�벿��
//int main()
//{
//	int i;
//	int arr[20];
//	int sz;
//	printf("������arr����ĸ�����");
//	scanf("%d", &sz);
//	printf("arr:");
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//move(arr, sz);    //����һ�����ߣ�
//	move1(arr, sz);		//�����������ߣ�
//	printf("���к�Ϊ��");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//ʵ��memcpy:
// ����Դ�ڴ棨src��ָ����ڴ����򣩿�����Ŀ���ڴ棨dest��ָ����ڴ�����
//#include<assert.h>
//void* memcpy(void* dest, void* src, int sn,int sz)
//{
//	int i = 0;
//	assert((dest != NULL) && (src != NULL));
//	unsigned char* dest1 = (unsigned char*)dest;
//	unsigned char* src1 = (unsigned char*)src;
//	while (sz-- > 0)
//	{
//		*(dest1+i)= *(src1+i);
//		i++;
//	}
//	return dest;
//}
//int main()
//{
//	int i;
//	int arr[] = { 1,2,3,4,5,9,10 };
//	int arr1[] = { 6,7,8,9,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	memcpy(arr,arr1, sizeof(arr1[0]),sizeof(arr1));
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",*(arr+i));
//	}
//	return 0;
//}
//ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
#include<string.h>
#include<assert.h>
void reversal(char*left , char* right)
{
	assert((left != NULL) && (right != NULL));
	while (left < right)
	{
		char nu = *left;
		*left =  *right;
		*right = nu;
		left++;
		right--;
	}
}
void Left_move(char* arr, int n)
{
	assert(arr != NULL);
	int sn = strlen(arr);
	reversal(arr, arr+n-1);//��߷�ת
	reversal(arr+n, arr+sn-1); //�ұ߷�ת
	reversal(arr, arr+sn-1); //���巴ת
	return;
}
//������ת��
int main()
{
	char arr[30] ;
	printf("������arr��");
	scanf("%s", arr);
	printf("������������ת�ַ��ĸ�����");
	int n;
	scanf("%d", &n);
	Left_move(arr, n);
	printf("������Ϊ��%s", arr);
	return 0;
}