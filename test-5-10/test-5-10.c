#include<stdio.h>
//һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ������������ҳ�������ֻ����һ�ε����֣����ʵ��
//int* Judge_one(int arr[], int n)
//{
//	int count[2];
//	int i, j,k=0;
//	//����ѭ�������ж�
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i == j)
//			{
//				continue;
//			}
//			if (arr[i] == arr[j])
//				break;
//		}
//		if (arr[i] != arr[j])
//		{
//			count[k]=arr[i];
//			k++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int arr[20];
//	int n,j;
//	int* p;
//	printf("��������arr�����ֵĸ�����");
//	scanf("%d", &n);
//	printf("����%d��ֵ��",n);
//	for (j = 0; j < n; j++)
//	{
//		scanf("%d", &arr[j]);
//	}
//	p = Judge_one(arr, n);
//	printf("��������ֻ������һ�ε��ǣ�%d %d ", p[0], p[1]);
//	return 0;
//}
//���ʵ�֣�����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ��
//int main()
//{
//	int i, j;
//	j = 20 / 1;//i�����ƿ
//	i = 20 / 1;//j�������ˮ��ƿ��
//	while (i > 1)
//	{
//		j = j + (i / 2);
//		i = i / 2;//
//	}
//	printf("���Ժ�%dƿ��ˮ��", j);
//	return 0;
//}
//ģ��ʵ��strcpy����strcpy�����������Ǹ����ַ���
//#include <assert.h>
//void strcpy(char* dest, const char* source)
//{
//	assert((dest != NULL) && (source != NULL));
//	while ((*dest++=*source ++) != '\0')
//	{
//	}
//}
//int main()
//{
//	char arr1[20] = "abcde";
//	char arr2[20] = "fghij";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//strcat�����������Ǹ���һ���ַ�����������ַ���ƴ������һ���ַ�������
#include<assert.h>
void strcat(char* Begin,const char* End)
{
	assert((Begin != NULL) && (End != NULL));
	int i=0, j=0;
	while (*(Begin+i) != '\0')
	{
		i++;
	}
	do
	{
		*(Begin + i + j) = *(End + j);
		j++;
	} while (*(End + j) != '\0');
	*(Begin + i + j) = '\0';
}
int main()
{
	//char arr1[20];
	//char arr2[20];
	//printf("������arr1���ַ���");
	//scanf("%s", arr1);
	//printf("������arr2���ַ���");
	//scanf("%s", arr2);//�����ǲ����ÿո񣬿ո�ͻس�����ʾ�������
	char arr1[20] = "Hi ";
	char arr2[20] = "I am LiHua�� ";
	strcat(arr1, arr2);
	printf("%s", arr1);  
	return 0;
}