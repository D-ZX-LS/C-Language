#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	printf("%0x\n", a);
//	char* pc = &a;
//	*pc = 0;
//	printf("%0x\n", a);
//
//	//int* pa = &a;
//	//*pa = 0;
//	//printf("%0x\n", a);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}

#include<string.h>

//int my_strlen(char* str)
//{
//	static int count = 0;
//	if (*str != '\0')
//	{
//		count++;
//		my_strlen(str + 1);
//	}
//	return count;
//}

//计数器
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

//指针-指针
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	int len = my_strlen("bit");
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	//[] 是一个操作符，2和arr是两个操作数
//	//a+b
//	//b+a
//	printf("%d\n", arr[2]);
//	printf("%d\n", 2[arr]);
//	//arr[2]-->*(arr+2)-->*(2+arr)-->2{arr]
//	printf("%d\n", p[2]);
//	printf("%d\n", 2[p]);
//
//	//arr[2]<==>*(p+2)<==>*(2+p)<==>*(2+arr)<==>2[arr]
//	//arr[2]<==>*(arr+2)<==>*(2+arr)<==>2[arr]
//	return 0;
//}

//二级指针
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	int** ppa = &pa;
//	//*ppa=pa  *pa=a
//	//**ppa=*(*ppa)=*pa=a
//	**ppa = 20;
//	printf("%d\n", a);
//	return 0;
//}

//指针数组
int main()
{
	int arr[10] = { 0 };//整形数组
	char ch[10] = { 0 };//字符数组
	int* parr[10];//整形指针数组
	char* pch[10];//字符指针数组
	return 0;
}


