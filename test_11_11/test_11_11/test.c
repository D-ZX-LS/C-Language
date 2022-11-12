#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//斐波那契数列前n项和
//1 1 2 3 5  8  13 21 34 55
//1 2 4 7 12 20 33
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int add = 0;
//	while (n > 0)
//	{
//		a = b;
//		b = c;
//		c = a + b;
//		add = add + c;
//		n--;
//	}
//	printf("%d\n", add);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int add = 2;
//	if (n <= 2)
//	{
//		add = n;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < n - 2; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			add = add + c;
//		}
//
//	}
//	printf("%d\n", add);
//	return 0;
//}

//矩阵旋转
//#include <stdio.h>
//#include <stdlib.h>
//
//int a[20][20];
//int b[20][20];
//
//int main()
//{
//    int i, j, n, w=0, t;
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++)
//        for (j = 0; j < n; j++)
//            scanf("%d", &a[i][j]);
//    /********please correct here**************
//        scanf("%d", w);
//    *****************************************/
//        scanf("%d",&w);
//        w = w / 90;
//
//        for (t = 0; t < w; t++)
//        {
//            /********please correct here**************
//                    for(i = 0; i < n; i++)
//                        for(j = 0; j < n; j++)
//                            b[i][j] = a[j][i];
//            *****************************************/
//      
//            for (i = 0; i < n; i++)
//            {
//                for (j = 0; j <n; j++)
//                {
//                    b[j][i] = a[i][j];
//                }
//            }
//            int k = 0;
//            for (j = 0; j < n / 2; j++)
//            {
//                for (i = 0; i < n; i++)
//                {
//                    k = b[i][j];
//                    b[i][j] = b[i][n - j - 1];
//                    b[i][n - j - 1] = k;
//                }
//            }
//                for (i = 0; i < n; i++)
//                    for (j = 0; j < n; j++)
//                        a[i][j] = b[i][j];
//        }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//            printf("%d ", a[i][j]);
//        printf("\n");
//    }
//    return 0;
//}

//int main()
//{
//	int a[10][10] = { 0 };
//	int b[10][10] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int w = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	scanf("%d", &w);
//	w = w / 90;
//	int t = 0;
//	for (t = 0; t < w; t++)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				b[i][j] = a[j][i];
//			}
//		}
//		int k = 0;
//		for (j = 0; j < n / 2; j++)
//		{
//			for (i = 0; i < n; i++)
//			{
//				k = b[i][j];
//				b[i][j] = b[i][n - j - 1];
//				b[i][n - j - 1] = k;
//			}
//		}
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				a[i][j] = b[i][j];
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int j = 1;
//    int add = 0;
//    for (i = 1; i <= n; i++)
//    {
//        j = j * i;
//        printf("%d ", j);
//        add = add + j;
//    }
//    printf("%d\n", add);
//    return 0;
//}

//VS - 32位平台下死循环
//i的地址与arr[12]的地址相同，每次arr[12]=0时，i=0 -> 死循环
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int i = 0;
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

