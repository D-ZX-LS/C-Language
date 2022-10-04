#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int j = 1;
//    scanf("%d",&n);
//	for ( i = 1; i <= n; i++)
//	{
//		 j = i * j;
//	
//	}
//	printf("%d\n", j);
//	return 0;
//}

////计算n的阶乘之和
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int j = 1;
//	int sum = 0;
//	scanf("%d",&n);
//	if (n != 0)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			j = i * j;
//			sum = sum + j;
//		}
//	}
//	else
//		sum = 1;
//	printf("%d\n", sum);
//	return 0;
//}

//在一个有序数列中查找某个具体的数字n-->折半查找、二分查找-->次数是log以二为底的n次（向上取整）
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			printf("找到了:在数组中下标为%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}

//编写代码，演示多个字符从两端移动，向中间汇聚。
//#include<string.h>
//#include<windows.h>
//
//int main()
//{
//	//char arr1[] = "welcome to my github!!!!!";
//	char arr1[] = "welcome to 中国!!!!!";
//	//char arr2[] = "#########################";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//
//        //展示动态效果
//		Sleep(1000);//Sleep(单位毫秒）睡眠1s
//		system("cls");//清空屏幕
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr1);
//	return 0;
//}

//编写代码实现，模拟用户登录情景，并且只能登录三次。
//（只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，则退出程序。

//假设正确的密码是字符串"123456"
#include<string.h>//字符串函数（如strlen、strcmp)所引用的头文件。
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:");
		scanf("%s", password);
		//if(password=="123456")//error--两个字符串的比较，不能使用==，应该使用strcmp函数。
		if (strcmp(password, "123456") == 0)
		{
			printf("登录成功\n");
			break;
		}
		else if(i<2)
		{
			printf("输入错误，重新输入！\n");
		}
	}
	if (i == 3)
	{
		printf("三次均输入错误，退出程序");
	}
	return 0;
}




