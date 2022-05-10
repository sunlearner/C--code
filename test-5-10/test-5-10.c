#include<stdio.h>
//一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次找出这两个只出现一次的数字，编程实现
//int* Judge_one(int arr[], int n)
//{
//	int count[2];
//	int i, j,k=0;
//	//运用循环进行判断
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
//	printf("输入数组arr中数字的个数：");
//	scanf("%d", &n);
//	printf("输入%d数值：",n);
//	for (j = 0; j < n; j++)
//	{
//		scanf("%d", &arr[j]);
//	}
//	p = Judge_one(arr, n);
//	printf("该数组中只出现了一次的是：%d %d ", p[0], p[1]);
//	return 0;
//}
//编程实现：喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水。
//int main()
//{
//	int i, j;
//	j = 20 / 1;//i代表空瓶
//	i = 20 / 1;//j代表喝汽水的瓶数
//	while (i > 1)
//	{
//		j = j + (i / 2);
//		i = i / 2;//
//	}
//	printf("可以喝%d瓶汽水。", j);
//	return 0;
//}
//模拟实现strcpy，而strcpy函数的作用是复制字符串
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
//strcat函数的作用是复制一个字符串，将这个字符串拼接在另一个字符串后面
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
	//printf("请输入arr1的字符：");
	//scanf("%s", arr1);
	//printf("请输入arr2的字符：");
	//scanf("%s", arr2);//输入是不能用空格，空格和回车都表示输入结束
	char arr1[20] = "Hi ";
	char arr2[20] = "I am LiHua！ ";
	strcat(arr1, arr2);
	printf("%s", arr1);  
	return 0;
}