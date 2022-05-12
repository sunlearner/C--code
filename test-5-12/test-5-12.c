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
//		//左边找偶数
//		while (arr[left] % 2 == 1 && left < right)
//		{
//			left++;
//		}
//		//右边找奇数
//		while (arr[right] % 2 != 1 && left < right)
//		{
//			right--;
//		}
//		//交换
//		if (left < right)
//		{
//			int i = arr[left];
//			arr[left] = arr[right];
//			arr[right] = i;
//		}
//	}
//}
////输入一个整数数组，实现一个函数，
////来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
////所有偶数位于数组的后半部分
//int main()
//{
//	int i;
//	int arr[20];
//	int sz;
//	printf("请输入arr数组的个数：");
//	scanf("%d", &sz);
//	printf("arr:");
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//move(arr, sz);    //方法一（单边）
//	move1(arr, sz);		//方法二（两边）
//	printf("排列后为：");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//实现memcpy:
// 把资源内存（src所指向的内存区域）拷贝到目标内存（dest所指向的内存区域）
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
//实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
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
	reversal(arr, arr+n-1);//左边反转
	reversal(arr+n, arr+sn-1); //右边反转
	reversal(arr, arr+sn-1); //整体反转
	return;
}
//三步反转法
int main()
{
	char arr[30] ;
	printf("请输入arr：");
	scanf("%s", arr);
	printf("请输入向左旋转字符的个数：");
	int n;
	scanf("%d", &n);
	Left_move(arr, n);
	printf("左旋后为：%s", arr);
	return 0;
}