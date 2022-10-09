#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//#include<stdio.h>
//int main()
//{
//	int t = 0;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d,%d,%d", &a, &b, &c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	 if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	 if(b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d,%d,%d", a, b, c);
//	return 0;
//}

//#include<stdio.h>
//void Swap(int* pm, int* pn)
//{
//	int t = 0;
//	t = *pm;
//	*pm = *pn;
//	*pn = t;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d,%d,%d", &a, &b, &c);
//	if (a > b)
//	{
//		Swap(&a,&b);
//	}
//	if (a > c)
//	{
//		Swap(&a, &c);
//	}
//	if (b > c)
//	{
//		Swap(&b, &c);
//	}
//	printf("%d,%d,%d", a, b, c);
//	return 0;
//}


//1.写一个函数可以判断一个数是不是素数。
//#include<math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount= %d\n", count);
//	return 0;
//}

//2.写一个函数判断一年是不是闰年。
//
//int is_leap_year(int n)
//{
//	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
//}

//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) ||( n % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}

//3.写一个函数，实现一个整形有序数组的二分查找。
// 
//int binary_search(int arr1[], int k, int s)
//int binary_search(int* pa, int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (pa[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (pa[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (pa[mid] = k)
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了返回找到的位置的下标
//	//找不到就返回-1
//	int ret = binary_search(arr,key,sz);
//	if (ret != -1)
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	else
//	{
//		printf("找不到");
//	}
//	return 0;
//}