#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//竞赛入门第一章
//int main()
//{
//	double a = 8.0 / 5.0;
//	int b = 8.0 / 5.0;
//	double c = 8 / 5;
//	int d = 8 / 5;
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	printf("c = %1f\n", 8 / 5);
//	printf("d = %1f\n", 8 / 5);
//	return 0;
//}

//int main()
//{
//	int  a = 11111  *  11111;
//	int  b = 111111 * 111111;
//	long long c = (long long)111111 * 111111;
//	long long d = (long long)111111111 * 111111111;
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%lld\n", c);
//	printf("%lld\n", d);
//	return 0;
//}

//int main()
//{
//	int b = 111111;
//	int c = 111111;
//	long long a = (long long)b * c;
//
//	printf("a = %lld\n", a);
//	printf("b = %lld\n", b);
//	printf("c = %d\n", c);
//	return 0;
//}

//int main()
//{
//	float b = 111.1;
//	float c = 111.1;
//	double a = b * c;
//
//	printf("a = %lf\n", a);
//	if (b == 111.1 || c == 111.1)
//	{
//		printf("b = %f\n", b);
//		printf("c = %f\n", c);
//	}
//	return 0;
//}


//int main()
//{
//	//printf("a = %lf\n", 1.0/0.0);
//	//printf("b = %lf\n", 0.0/0/0);
//	printf("c = %d\n", sqrt(-10));
//	return 0;
//
//}

//int main()
//{
//	printf("%%d\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%.3lf", (a + b + c) / 3.0);
//	return 0;
//}

//int main()
//{
//	double f = 0.0;
//	scanf("%lf", &f);
//	double c = 5*(f-32)/9.0;
//	printf("%.3lf", c);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", (1 + n) * n / 2);
//}

//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%lf\n", sin(n/180.0*acos(-1)));
//	printf("%lf\n", cos(n/180.0*acos(-1)));
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n * 95 >= 300)
//	{
//		printf("%lf\n", n * 95 * 0.85);
//	}
//	else
//	{
//		printf("%d\n", n * 95);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3] = { 0 };
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = i + 1; j < 3; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	if (arr[0] + arr[1] > arr[2])
//	{
//		if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2])
//		{
//			printf("yes");
//		}
//		else
//		{
//			printf("no");
//		}
//	}
//	else
//	{
//		printf("not a triangle");
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}

//从左到右依次计算&&和||
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	++a&& b++ || c++;
//	//c++ || b++ && ++a;
//	if (a == 1)
//	{
//		printf("(a && b) || c\n");
//	}
//	else if (a == 0)
//	{
//		printf("a && (b || c)\n");
//
//	}
//	else
//	{
//		printf("error\n");
//	}
//	printf("a = %d b = %d c = %d\n", a, b, c);
//}

//int main()
//{
//	int a = 0;
//	if (a++ == 0)
//		if (a == 1)
//			a++;
//		else
//			a--;
//	printf("%d\n", a);
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	//while (n >= i)
//	//{
//	//	n = i;
//	//	i--;
//	//}
//	//printf("%d\n", n);// -2147483648
//
//	while (n <= i)
//	{
//		n = i;
//		i++;
//	}
//	printf("%d\n", n);// 2147483647
//	return 0;
//}


//int main()
//{
//	double a = 1.0;
//	double b = 3.0;
//	double c = a/b;
//	printf("%lf\n", c);// 0.333333
//	double d = 0.111111111111111111111111;
//	printf("%lf\n", d);// 0.111111
//	//利用无限循环小数，得到的结果的位数即是其精度 - double -> 6
//	return 0;
//}

//#include<float.h>
//int main()
//{
//	float a = FLT_MAX;
//	printf("a = %f\n", a);// 
//
//	double b = DBL_MAX;
//	printf("b = %f\n", b);// 
//
//	return 0;
//}

//a = 340282346638528859811704183484516925440.000000
// 
//b = 1797693134862315708145274237317043567980705675
//25844996598917476803157260780028538760589558632766
//87817154045895351438246423432132688946418276846754
//67035375169860499105765512820762454900903893289440
//75868508455133942304583236903222948165808559332123
//34827479782620414472316873817718091929988125040402
//6184124858368.000000

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	char arr[20] = { '\0'};
//	scanf("%[^\n]%*c", arr);
//	printf("%s\n", arr);
//}

//悬空else问题 - 与最近的同一语句块的if配对
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int flag = 1;
//	if (flag == 1)
//		if (flag = 0)
//		{
//			a++;
//		}
//		else
//		{
//			b++;
//		}
//	printf("a = %d b = %d", a, b);
//	return 0;
//}