#include<stdio.h>
//调整数组使奇数全部都位于偶数前面:
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分
//void Exchange(int arr[],int n)
//{
//	int i, j,k;                             
//	for (i = 0; i < n; i++)           
//	{
//			j = 1;
//			while (arr[i] % 2 != 1 && i+j!=n)
//			{
//				k = arr[i];
//				arr[i] = arr[i + j];
//				arr[i + j] = k;
//				j++;	       
//			}
//	}
//}
//int main()
//{
//	int arr[20] = { 0 };
//	int i, n;
//	printf("请选择输入的个数：");
//	scanf("%d",&n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	Exchange(arr, n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%-2d ", arr[i]);
//	}
//	return 0;
//}
//杨氏矩阵
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.数组：1 2 3 \ 2 3 4 \ 3 4 5
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);   
//void Find_count(int arr[][3],int  n,int sz,int sz1)
//{
//	int i, j;
//	if(arr[0][0] <= n && arr[sz][sz1] > n)
//	{
//		for (i = 0; i < sz; i++)
//		{
//			for (j = 0; j < sz1; j++)
//			{
//				if (arr[i][j] == n)
//				{
//					printf("找到了，下标为%d %d", i, j);
//					return;
//				}
//			}
//		}
//	}
//	printf("未找到此数！");
//}
//int  main()
//{
//	int arr[3][3] = { {1,2,3},{2,3,4},{3,4,5} };
//	int n;
//	printf("请输入要查找的数：");
//	scanf("%d", &n);
//	int sz = sizeof(arr) / sizeof(arr[0]); //一行有几个元素
//	int sz1 = sizeof(arr[0]) / sizeof(arr[0][0]);//一列有几个元素
//	Find_count(arr, n,sz,sz1);
//	return 0;
//}
//实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
void Left_revolve(char arr[], int sz,int n)
{
	char arrr[20] = { 0 };
	int i, j;
	for (i = 0; i+n < sz; i++)
	{
		arrr[i] = arr[i + n];
	}
	for (i = 0; i < n; i++)
	{
		arrr[sz-n+i] = arr[i];
	}
	printf("%s", arrr);
}
#include<string.h>
int main()
{
	char arr[] = "ABCDE";
	int n;
	printf("%s", arr);
	printf("\n请输入左旋字符串的个数(0~6）：");
	scanf("%d", &n);
	//int sz = sizeof(arr)/sizeof(arr[0]);
	int sz = strlen(arr);
	Left_revolve(arr, sz,n);
	return 0;
}