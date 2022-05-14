#include<stdio.h>
//请简述大端字节序和小端字节序的概念，
//大端字节序:低位存低地址；高位存高地址
//小端字节序:低位存高地址；高位存低地址
//设计一个小程序来判断当前机器的字节序。
//int main()
//{
//	int a = 1;
//	int ret = *(char*)&a;
//	//内存存储是十六进制，但是使用时是十进制；
//	if (ret == 1)
//	{
//		printf("该计算机是大端字节序！");
//	}
//	if (ret == 0)
//	{
//		printf("该计算机是小端字节序！");
//	}
//	return 0;
//}
//int main()
//{
//	int i = -20;
//	unsigned int j=10;	
//	printf("%d\n", i + j);//-10
//	//按照补码的形式进行运算，最后格式化成为有符号整数
//	return 0;
//}
//int main()
//{
//	unsigned int i=-1;
//	for (i = 9; i >= 0; i--) 
//	{
//		printf("%u\n", i);//死循环
//		//当a由0变为-1时；
//		//反码为11111111111111111111111111111111111
//		//因为i为无符号整数，将a当成正数；所以这是个是循环
//	}
//}
//#include<string.h>
//int main()
//{
//	char a[1000];//a——>(-128~127)
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//		//a[i]先从-1~-128
//		//在从-128-1变为127
//		//最后再由127~0；
//		//第一次0出现是：i=128+127=255
//	}
//	printf("%d", strlen(a));//strlen遇到\0，即停止；
//	return 0;
//}
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");//死循环
//		//当a=256时，char类型的反码为：0000 0000
//		//所以a又变为0；
//	}
//	return 0;
//}
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);//n=9;
//	printf("*pFloat的值为：%f\n", *pFloat);//*pFloat的值为：0.000000
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);//num的值为：1091567616
//	//通过num和*pfloat可以得知；浮点数和整型在内存中存储的方式不同
//	printf("*pFloat的值为：%f\n", *pFloat); //9.000000
//	return 0;
//}
//int main()
//{
//    int i = 2;
//    printf("%d,%d,%d,%d,\n", i++, ++i, i++, i);//4,5,2,5,
//    //VC++6.0后⾃增运算(后置++)是要在整条语句结束以后才⾃加1的
//    //printf函数是从右向左执行
//    //++i只执行加法但不显示，等到所有的都计算完了再使用
//    //i等所有的计算完成了，再使用
//    //i++先使用，紧接着再执行加法，不必等到整条语句都执行完了
//    //不同的编译器；得到的结果也不同；
//    printf("%d\n", i);//5
//	return 0;
//}
//请证明printf函数是从右向左执行的
//int main()
//{
//	int a = 1;
//	int b = 5;
//	printf("%d %d", b = a + 1, a = a + 1);//a先+1遍为2；在加1赋值给b；
//	return 0;
//}
//浮点数的存储方式：
//(-1) ^ S* M * 2 ^ E
//(-1) ^ s表示符号位，当s = 0，V为正数；当s = 1，V为负数
//M表示有效数字，大于等于1，小于2
//2 ^ E表示指数位
//对于32位的浮点数，最高的1位是符号位s，接着的8位是指数E，剩下的23位为有效数字M
//在计算机内部保存M时，默认这个数的第一位总是1，因此可以被舍去
//等到读取的时候，再把第一位的1加上去，这样就可以保存24位有效数字
//因为E不能为负数，存入内存时E的真实值必须再加上一个中间数（127)float/1023(double);
//浮点数9.0：9.0 -> 1001.0 ->(-1) ^ 01.0012 ^ 3->s = 0, M = 1.001, E = 3 + 127 = 130
//反码为：0 10000010 001 0000 0000 0000 0000 0000
//十进制输出为：1091567616
//int main()
//{
//	const char* pstr = "hello bit.";//这里是把字符串 hello bit首字符的地址放到了pstr中；
//	printf("%s\n", pstr);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("arr = %p\n", arr);//arr = 0093FD14
//	printf("&arr= %p\n", &arr);//&arr= 0093FD14
//	//数组名代表的是数组首元素的地址；而&数组名取出的是整个数组的地址；
//	//虽然打印的结果相同；但是意义却不同
//	printf("arr+1 = %p\n", arr + 1);//arr+1 = 0093FD18
//	printf("&arr+1= %p\n", &arr + 1);//&arr+1=0093FD3C  作差得到0x24——>36(十进制)差9个元素
//	return 0;
//}
#include <stdio.h>
void print_arr1(int arr[3][5], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print_arr2(int(*arr)[5], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			//printf("%d ",*(*(arr+i)+j));
			//printf("%d ", arr[i][j]);
			//printf("%d ", *(arr[i]+j));
			printf("%d ", (*(arr+i))[j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
	//print_arr1(arr, 3, 5);
	//数组名arr，表示首元素的地址
	//但是二维数组的首元素是二维数组的第一行
	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
	//可以数组指针来接收
	print_arr2(arr, 3, 5);
	return 0;
}