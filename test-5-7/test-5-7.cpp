#include<stdio.h>
//编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值是value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
//unsigned int reverse_bit(unsigned int n)
//{
//	int i,a,b;
//	for (i = 1; i < 16; i++)
//	{
//		a = (n >> (32 - i)) & 1;
//		b = (n >> (i - 1)) & 1;
//		//bit位共有32位；所以要交换16次，而每一次交换时先判断交换位的数值是1还是0
//		//如果相同就不交换
//		if (a == 1 && b == 0)
//		{
//			n = n - (1 << (32 - i)); 
//			n = n + (1 << (i - 1));
//		}
//		if (a == 0 && b == 1)
//		{
//			n = n + (1 << (32 - i));
//			n = n - (1 << (i - 1));
//		}
//	}
//	return n;
//}
//int main()
//{
//	int n;
//	printf("请输入要进行二进制位模式从左到右翻转的数值：");
//	scanf("%d", &n);
//	int count = reverse_bit(n);
//	printf("%u", count);//注意输出的格式一定要是%u；%d为输出有符号10进制的整数；
//	return 0;
//}
//不使用（a + b）/ 2这种方式，求两个数的平均值
//float Average(float n, float m)
//{
//	float i;
//	if (n > m)
//	{
//		i = n;
//		n = m;
//		m = i;
//	}
//	while (n < m)
//	{
//		if (n + 1 == m)
//		{
//			n = n + (float)(1.0/2);  //注意这里是1.0/2；因为整数1/2为0；而1.0/2才为小数；
//			m = m - (float)(1.0/2);	//其次1.0/2系统默认为得到的数是double类型的，所以要进行强制转换
//		}
//		else {
//			n++;
//			m--;
//		}
//	}
//	return n;
//}
//int main()
//{
//	float n, m;
//	printf("请输入求平均值的两个数：");
//	scanf("%f%f", &n, &m);
//	float a = Average(n, m);
//	printf("%.1f ",a);
//	return 0;
//}
//编程实现：一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的；请找出这个数字。（使用位运算）
//int Only_one(int arr[], int sz)
//{
//	int n = 0;
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		n = n ^ arr[i];
//	}
//	return n;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n = Only_one(arr, sz);
//	printf("arr组数据中只有%d数字出现了一次.", n);
//	return 0;
//}
//有一个字符数组的内容为:"student a am i",
//请你将数组的内容改为"i am a student".
//要求：
//不能使用库函数。
//只能开辟有限个空间（空间个数和字符串的长度无关）
void Countdown(char arr[], int sz)
{
	int i;
	char j;
	for (i = 0; i < sz/2; i++)
	{
		j = arr[i];
		arr[i] = arr[sz - 1 - i];
		arr[sz - 1 - i] = j;
	}
}
void Exchange(char arr[], int sz)
{
	int n = 0;
	int j = 0;
	int i,k;
	char q;
	while (n <= sz)
	{
		if(arr[n]==' '|| n==sz) //用空格和字符数来判断单词的长度及所在arr[]数值中的下标值
		{
			j++;
			if (j == 2)
			{
				k = n-i-1;  //k是单词的长度
				for (i=0;i<k/2;i++)
				{
					q = arr[n-k+i];
					arr[n-k+i] = arr[n - 1 - i];//将单词的首位进行相互交换
					arr[n - 1 - i] = q;
				}
				j = 1;
			}
			if(j==1) {
				i = n;//n代表单词首字母的前一个下标

			}
		}
		n++;
	}
}
#include<string.h>
int main()
{
	char arr[] = "student a am i";
	int sz = strlen(arr);
	Countdown(arr, sz);//先逆序排列   i ma a tneduts
	Exchange(arr, sz);//将每个单词在逆转  i am a student
	printf("%s", arr);
	return 0;
}
