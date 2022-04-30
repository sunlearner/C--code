#include<stdio.h>
//交换两个数（不能创建临时变量）
//int main()
//{
//	int x, y;
//	printf("请输入x、y的值：");
//	scanf("%d%d", &x, &y);
//	//按位异或
//	x = x ^ y;  
//	y = x ^ y;
//	x = x ^ y;
//	printf("x为：%d\ny为：%d",x,y);
//
//	return 0;
//}
//将三个数按从大到小输出。
//int main()
//{
//	int a, b, c,d;
//	printf("请随机输入3个数值：");
//	scanf("%d%d%d",&a,&b,&c);
//	if (a < b)
//	{
//		d = a;
//		a = b;
//		b = d;
//	}
//	 if (a < c)
//	{
//		d = 0;
//		d = a;
//		a = c;
//		c = d;
//	}
//	 if (b < c)//注意这个位置不能用else if，如果使用else if拿只要前面两个进行比较，就会跳过这个；
//	 {
//		d = 0;
//		d = b;
//		b = c;
//		c = d;
//	}
//	 printf("从小到大的顺序为：%d %d %d ", a, b, c);
//	return 0;
//}
//求10 个整数中最大值
//int main()
//{
//	int ai[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i,j;
//	int sz = sizeof(ai) / sizeof(ai[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", ai[i]);
//	}
//	for (i = 1; i < sz; i++)
//	{
//		if (ai[0] < ai[i])
//		{
//			ai[0] = ai[i];
//		}
//	}
//	printf("\n最大值为：%d", ai[0]);
//}
#include<string.h>
//int main()
//{
//	printf("%d", strlen("c:\test\040\test.c"));
//	// \t--tab--水平制表符
//	// \041--\ddd  d是8进制数字
//	// \041 转换为10进制为32 
//	// 以33作为ASSII码值代表字符
//	//sizeof是操作符不是函数 
//	printf("\n%c", '\041');
//	return 0;
//}
//多组输入，将输入的大写字母转换为小写字母
//int main()
//{
//	int ch=0;
//	//EOF  代表的是结束的标志 EOF=Ctrl+z;
//	while((ch=getchar())!=EOF)   //如果是while(ch=getchar())，那打印就永远无法结束
//	{
//		putchar(ch=ch+32);
//		getchar();//清除多余的\n字符
//		printf("\n");
//	}
//	return 0;
// } 
//printf的返回值等于正常情况下是()内字符的数量，运行错误就返回-1; 
//printf("",)是先右后左执行 
//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));//结果为4321 
//	return 0;
//}
//从键盘中输入一个字符判断它是否是字母，如果是输出Yes，如果不是输出No(多次输入) 
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 65 && ch <= 90)
//		{
//			printf("Yes");
//		}
//		else if (ch >=97 && ch <= 122)
//		{
//			printf("Yes");
//		}
//		else {
//			printf("No");
//		}
//		printf("\n");
//		getchar();//清楚回车/(\n)
//	}
//	return 0;
//}
//在屏幕上输出以下图案：
//*
//***
//*****
//*******
//*********
//***********
//*************
//***********
//*********
//*******
//*****
//***
//*
//int main()
//{
//	printf("*\n");
//	printf("***\n");
//	printf("*****\n");
//	printf("*******\n");
//	printf("*********\n");
//	printf("***********\n");
//	printf("*************\n");
//	printf("***********\n");
//	printf("*********\n");
//	printf("*******\n");
//	printf("*****\n");
//	printf("***\n");
//	printf("*\n");
//	return 0;
//}
//求出0～999之间的所有“水仙花数”并输出
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身
int main()
{
	int i, j;
	int a = 0, b = 0, c = 0;
	for (i = 100; i < 1000; i++)
	{
		a = i % 10;
		b = (i / 10) % 10;
		c = (i / 100) % 10;
		j = a * a * a + b * b * b+ c * c * c;
		if (j == i)
		{
			printf("%3d ", i);
		}
	}
	return 0;
}
//答案为：	//153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3
			//370 = 3 ^ 3 + 7 ^ 3 + 0 ^ 3
			//371 = 3 ^ 3 + 7 ^ 3 + 1 ^ 3
			//407 = 4 ^ 3 + 0 ^ 3 + 7 ^ 3

