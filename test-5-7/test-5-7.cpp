#include<stdio.h>
//��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
//unsigned int reverse_bit(unsigned int n)
//{
//	int i,a,b;
//	for (i = 1; i < 16; i++)
//	{
//		a = (n >> (32 - i)) & 1;
//		b = (n >> (i - 1)) & 1;
//		//bitλ����32λ������Ҫ����16�Σ���ÿһ�ν���ʱ���жϽ���λ����ֵ��1����0
//		//�����ͬ�Ͳ�����
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
//	printf("������Ҫ���ж�����λģʽ�����ҷ�ת����ֵ��");
//	scanf("%d", &n);
//	int count = reverse_bit(n);
//	printf("%u", count);//ע������ĸ�ʽһ��Ҫ��%u��%dΪ����з���10���Ƶ�������
//	return 0;
//}
//��ʹ�ã�a + b��/ 2���ַ�ʽ������������ƽ��ֵ
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
//			n = n + (float)(1.0/2);  //ע��������1.0/2����Ϊ����1/2Ϊ0����1.0/2��ΪС����
//			m = m - (float)(1.0/2);	//���1.0/2ϵͳĬ��Ϊ�õ�������double���͵ģ�����Ҫ����ǿ��ת��
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
//	printf("��������ƽ��ֵ����������");
//	scanf("%f%f", &n, &m);
//	float a = Average(n, m);
//	printf("%.1f ",a);
//	return 0;
//}
//���ʵ�֣�һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵģ����ҳ�������֡���ʹ��λ���㣩
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
//	printf("arr��������ֻ��%d���ֳ�����һ��.", n);
//	return 0;
//}
//��һ���ַ����������Ϊ:"student a am i",
//���㽫��������ݸ�Ϊ"i am a student".
//Ҫ��
//����ʹ�ÿ⺯����
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ�
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
		if(arr[n]==' '|| n==sz) //�ÿո���ַ������жϵ��ʵĳ��ȼ�����arr[]��ֵ�е��±�ֵ
		{
			j++;
			if (j == 2)
			{
				k = n-i-1;  //k�ǵ��ʵĳ���
				for (i=0;i<k/2;i++)
				{
					q = arr[n-k+i];
					arr[n-k+i] = arr[n - 1 - i];//�����ʵ���λ�����໥����
					arr[n - 1 - i] = q;
				}
				j = 1;
			}
			if(j==1) {
				i = n;//n����������ĸ��ǰһ���±�

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
	Countdown(arr, sz);//����������   i ma a tneduts
	Exchange(arr, sz);//��ÿ����������ת  i am a student
	printf("%s", arr);
	return 0;
}
