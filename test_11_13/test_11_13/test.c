#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��С������

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = a > b ?  a : b;
//	while (1)
//	{
//		if (0 == max % a && 0 == max % b)
//		{
//			printf("%d\n", max);
//			break;
//		}
//		max++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while (1)
//	{
//		if (0 == a * i % b)
//		{
//			printf("%d\n", a * i);
//			break;
//		}
//		i++;
//	}
//	return 0;
//}

//��С������ = �������/���Լ��
// 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	int m = a;
//	int n = b;
//	while (a % b != 0)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", (m*n)/b);
//
//	return 0;
//}

//շת�����
//16 % 24 = 16
//24 % 16 = 8
//16 % 8  = 0
// 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	while (a % b != 0)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//
//	return 0;

//�ݹ�
//int gcd(int a, int b)// 4 2
//{
//	if (b == 0)
//	{
//		return a;
//	}
//	return gcd(b, a % b);// 2  0
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//
//	printf("%d\n", gcd(a, b));
//
//	return 0;
//}
//16 % 24 = 16
//24 % 16 = 8
//16 % 8  = 0

#include<string.h>

//�ַ����ĵ���
// I like beijing. -> beijing. like I

//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	char* str = arr + len - 1;
//	while (str >= arr)
//	{
//		if (*str == ' ')
//		{
//			printf("%s ", str + 1);
//			*str = '\0';
//		}
//		if(str==arr)
//		{
//			printf("%s", str);
//		}
//		str--;
//	}
//	return 0;
//}

//������ת��

void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[100] = { 0 };
	gets(arr);
	int len = strlen(arr);
	//1.�����ַ���������
	//I like beijing.
	//.gnijieb ekil I
	reverse(arr,arr+len-1);
	//printf("%s", arr);
	//2.ʵ��ÿ�����ʵ�����
	//gnijieb. ekil I
	//beijing. like I
	char* start = arr;
	char* end = arr;
	while (end <= arr + len - 1)
	{
		if (*end == ' '||*end=='\0')
		{
			reverse(start, end - 1);
			start = end + 1;
		}
		end++;
	}
	printf("%s", arr);

	return 0;
}