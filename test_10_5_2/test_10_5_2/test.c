#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//写代码将三个整数按从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//scanf("%d", &a);
//	//scanf("%d", &b);
//	//scanf("%d", &c);
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int d = a;
//		a = b;
//		b = d;
//	}
//	if (a < c)
//	{
//		int d = a;
//		a = c;
//		c = d;
//	}
//	if (b < c)
//	{
//		int d = b;
//		b = c;
//		c = d;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//更优解：写个函数来交换两个变量，再将这个函数调用三次

//写一个代码打印1~100之间所有3的倍数的数字
//int main()
//{
//	int i = 3;
//	for (i = 3; i <= 100; i += 3)
//		printf("%d ", i);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//给定两个数，求这两个数的最大公约数
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int max = m > n ? n : m;
//	//if (m > n)
//	//	max = n;
//	//else
//	//	max = m;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数是：%d", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

//辗转相除法
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int t = 0;
//	while (t = m % n)//小模大之后等于小，经过转换，变成大模小，所以不用比较两个数的大小
//	{
//		m = n;
//		n = t;
//	}
//	printf("最大公约数为：%d", n);
//	return 0;
//}

//最小公倍数则换为 较大的数++ 向上查找
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int min = m > n ? m : n;
//	//if (m > n)
//	//	max = m;
//	//else
//	//	max = n;
//	while (1)
//	{
//		if (min % m == 0 && min % n == 0)
//		{
//			printf("最小公倍数是：%d", min);
//			break;
//		}
//		min++;
//	}
//	return 0;
//}

//最小公倍数=m*n/最大公约数
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int t = 0;
//	int a = m;
//	int b = n;
//	while (t = a % b)//小模大之后等于小，经过转换，变成大模小，所以不用比较两个数的大小
//	{
//		a = b;
//		b = t;
//	}
//	int min = m * n / b;
//	printf("最小公倍数数为：%d", min);
//	return 0;
//}

//打印1000年到2000年之间的闰年
//判断y是不是闰年
//1. 被4整除，不能被100整除是闰年
//2. 能被400整除是闰年

//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0 && y % 100 != 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//写一个代码，打印100-200之间的素数
//素数-质数
//只能被1和它本身整除
//int main()
//{
//	int num = 0;
//	for (num = 100; num <= 200; num++)
//	{
//		//判断num是否为素数
//		//2到num-1之间的数字去试除num，看能否被整除
//	    int j = 0;
//		for (j = 2; j < num; j++)
//		{
//			if (num % j == 0)
//			{
//				break;
//			}
//		}
//		if (num == j)
//			printf("%d ", num);
//	}
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	int count = 0;
//	for (num = 100; num <= 200; num++)
//	{
//		//判断num是否为素数
//		//2到num-1之间的数字去试除num，看能否被整除
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j < num; j++)
//		{
//			if (num % j == 0)
//			{
//				i = 0;//不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", num);
//		}
//	}
//	printf("\ncount= %d", count);
//	return 0;
//}

//优化代码
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//m=a*b
//	//a和b中至少有一个数字是<=开平方m的
//	// 所以只需要找是否有较小的因子就行
//	//16 = 2*8 = 4*4
//	// 
//	//sqrt - 是开平方的函数 - math.h
//	for (i = 101; i <= 200; i+=2)//偶数不可能是素数
//	{
//		//判断num是否为素数
//		//2到num-1之间的数字去试除num，看能否被整除
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)//减少了试除的次数
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount= %d", count);
//	return 0;
//}

//goto语句的学习
//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//	goto flag;
//	return 0;
//}

//关机程序
//只要运行起来，电脑就在1分钟内关机，如果输入：我是猪，就取消关机！
//shutdown -s -t 60  （关机)--> -s设置关机 -t设置时间关机 60 设置60秒之后关机 
//shutdown -a     (取消关机）
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//	//关机
//	//C语言提供了一个函数：system() - 执行系统命令的
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//system - stdlib.h
//again:
//	printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机！\n");
//	scanf("%s", input);
//	//if(input == "我是猪")//两个字符串比较是不能使用==的，应该使用strump() string compare
//	if (strcmp(input, "我是猪") == 0)//strcmp - string.h
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//关机程序
//只要运行起来，电脑就在1分钟内关机，如果输入：我是猪，就取消关机！
//shutdown -s -t 60  （关机)--> -s设置关机 -t设置时间关机 60 设置60秒之后关机 
//shutdown -a     (取消关机）
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//	//关机
//	//C语言提供了一个函数：system() - 执行系统命令的
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//system - stdlib.h
//
//	while (1)
//	{
//		printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机！\n");
//		scanf("%s", input);
//		//if(input == "我是猪")//两个字符串比较是不能使用==的，应该使用strump() string compare
//		if (strcmp(input, "我是猪") == 0)//strcmp - string.h
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}