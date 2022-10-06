#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//strcpy
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = {"hello bit"};
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);//%s - 以字符串的格式打印
//	return 0;
//}

//memset
//int main()
//{
//	char arr[] = { "hello bit" };
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//自定义函数
//写一个函数可以找出两个整数中的最大值

//int get_max(int x, int y)
//{
//	//int z = 0;
//	//if (x > y)
//	//	z = x;
//	//else
//	//	z = y;
//	//return z;//返回z ——返回较大值
//	return (x > y )?  (x): (y);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的调用
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//交换两个整型的内容
//写出问题了，代码错误
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//	
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(a,b);
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

//指针变量的应用
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}

//代码正确
//void Swap(int*pa, int*pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa =*pb;
//	*pb = z;
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(&a,&b);
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}
