#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//一维数组的学习
//int main()
//{
//	int arr[8]={0};
//	char ch[5]="abcde";
//	printf("%d\n", arr[1]);
//	printf("%c\n", ch[2]);
//	printf("%d\n", ch[2]);
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char ch1[3] = "bit";
//	char ch2[5] = "bit";
//	char ch3[] = "bit";
//	char ch4[] = "bit";
//	char ch5[] = {'b','i','t'};
//	//printf("%s\n", ch4);
//	//printf("%s\n", ch5);
//	printf("%d\n", strlen(ch4));
//	printf("%d\n", strlen(ch5));
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	arr[5] = 6;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	//printf("%d\n", sizeof(i));
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n",i, &arr[i]);
//	}
//	//printf("%x\n", 0x12);
//	//printf("%p\n", 0x12);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	//int* p = &arr[0];
//	int i = 0;
//	
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*p);
//		p++;
//	}
//	
//	return 0;
//}

//二维数组
//int main()
//{
//	//三行四列
//	//int arr[3][4];
//	//char ch[5][7];
//	//初始化
//	//int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	//int arr2[3][4] = {1,2,3,4,5,6,7,8,9,10};
//	//int arr[3][4] = { {1,2},{3,4},{5,6} };
//	//int arr[][4] = { {1,2},{3,4},{5,6} };
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//二维数组在内存中的存取
//int main()
//{
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	int* p = &arr[0][0];
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//	//	}
//	//
//	//}
//	return 0;
//}

