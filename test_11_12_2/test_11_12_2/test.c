#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//NumberOf就是计算n的二进制补码中有几个1

//适用于计算正整数
//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n != 0)
//	{
//		if (1 == n % 2)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}

//正负数均可
//int NumberOf1(unsigned int n)
//{
//	int count = 0;
//	while (n != 0)
//	{
//		if (1 == n % 2)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//10000000000000000000000000000001 -> -1

//正负数均可
//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == (n & 1))
//		{
//			count++;
//		}
//		n = n >> 1;
//	}
//	return count;
//}

//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((n >> i) & 1))
//		{
//			count++;
//		}
//
//	}
//	return count;
//}

//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n != 0)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
// n=n&(n-1)
// 1011 - n
// 1010 - n-1
// 1010 - n
// 1001 - n-1
// 1000 - n
// 0111 - n-1
// 0000 - n

// 100001 - n
// 100000 - n-1
// 100000 - n
// 011111 - n-1
// 000000 - n

// n=n&(n-1)每次运行将n最右边的一个1去掉


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = NumberOf1(n);
//	printf("%d\n", count);
//	return 0;
//}

//写一个代码判断一个数字是不是2的n次方 (n>=0)
// 1 - 0001
// 2 - 0010
// 4 - 0100 
// 8 - 1000

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = n;
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	if (1==count)
//	{
//		printf("%d是2的n次方\n", ret);
//	}
//	else
//	{
//		printf("%d不是2的n次方\n", ret);
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (0 == (n & (n - 1)))
//	{
//		printf("%d是2的n次方\n", n);
//	}
//	else
//	{
//		printf("%d不是2的n次方\n", n);
//
//	}
//	return 0;
//}

//求两个数二进制中不同位的个数

//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) != ((m >> i) & 1))
//		//if (1 == ((n>>i) & 1) ^ ((m>>i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n != 0)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int count = 0;
//	int i = 0;
//	int ret = m ^ n;//相同为0，相异为1
//	//统计一下ret的二进制中有几个1，就说明m和n的二进制位中有几个不同
//	count = NumberOf1(ret);
//
//	printf("%d\n", count);
//	return 0;
//}

//打印整数二进制位的奇数位和偶数位(假设最低位为奇数位)
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr1[16] = { 0 };
//	int arr2[16] = { 0 };
//	int i = 0;
//	for (i = 0; i < 16; i++)
//	{
//		arr1[i] = n & 1;
//		n = n >> 1;
//		arr2[i] = n & 1;
//		n = n >> 1;
//	}
//	printf("奇数位");
//	for (i = 15; i >= 0; i--)
//	{
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//
//	printf("偶数位");
//	for (i = 15; i >= 0; i--)
//	{
//		printf("%d", arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	printf("偶数位");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("奇数位");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	return 0;
//}

//不允许创建临时变量，交换两个整数的内容
int main()
{
	int a = 10;
	int b = 20;
	printf("%d %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d\n", a, b);
	return 0;
}