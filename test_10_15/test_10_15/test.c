#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}

//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//
//}
//int main()
//{
//	test(1);
//	return 0;
//}

//#include <string.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1+my_strlen(str + 1); 
//		//return 1+my_strlen(str++);错误
//		//return 1+my_strlen(++str);不好
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//求n的阶乘
//迭代 
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//递归
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac(n-1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d", ret);
//	return 0;
//}

//求第n个斐波那契数
//递归-效率低
//int count = 0;
//int Fib(int n)
//{
//	//if (n == 3)
//		//count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	//printf("count = %d\n", count);
//	return 0;
//}

//迭代
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//    while(n>2)
//	{
//	    c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

