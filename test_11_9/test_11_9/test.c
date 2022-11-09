#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//整形提升
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//	char c = a + b;
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	//10000010 - c
//
//	printf("%d\n", c);
//	//11111111111111111111111110000010 - 补码
//	//11111111111111111111111110000001 - 反码
//	//10000000000000000000000001111110 - 源码 -> "-126"
//
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	
//	if (a == 0xb6)
//	{
//		printf("a");
//	}
//	if (b == 0xb600)
//	{
//		printf("b");
//	}	if (c == 0xb6000000)
//	{
//		printf("c");
//	}
//
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%zu\n", sizeof(c));
//	printf("%zu\n", sizeof(+c));
//	printf("%zu\n", sizeof(-c));
//	return 0;
//}

//算术转换

//问题表达式
//int main()
//{
//	int c = 3;
//	int a = c + --c;//4或5
//	printf("%d\n", a);
//	return 0;
//}

//问题表达式
//int fun()
//{
//	int static count = 1;
//	return ++count;
//}
//
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();//2-3*4或4-2*3
//	printf("%d\n", answer);
//	return 0;
//}

//问题表达式
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	//VS  - 12
//	//gcc - 10
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char arr[] = { 'a','b','c'};
//	int ret = strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//数组作业
//void init(int arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//
//}
//
//void reverse(int arr[], int len)
//{
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	print(arr,len);
//	reverse(arr,len);
//	print(arr, len);
//	init(arr, len);
//	print(arr, len);
//
//	return 0;
//}

//数组交换
//#include<string.h>
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int arr3[5] = { 0 };
//	strcpy(arr3, arr1);
//	strcpy(arr1, arr2);
//	strcpy(arr2, arr3);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	return 0;
//}