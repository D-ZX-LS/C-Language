#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//д���뽫�����������Ӵ�С���
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
//���Ž⣺д�����������������������ٽ����������������

//дһ�������ӡ1~100֮������3�ı���������
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

//���������������������������Լ��
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
//			printf("���Լ���ǣ�%d", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

//շת�����
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int t = 0;
//	while (t = m % n)//Сģ��֮�����С������ת������ɴ�ģС�����Բ��ñȽ��������Ĵ�С
//	{
//		m = n;
//		n = t;
//	}
//	printf("���Լ��Ϊ��%d", n);
//	return 0;
//}

//��С��������Ϊ �ϴ����++ ���ϲ���
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
//			printf("��С�������ǣ�%d", min);
//			break;
//		}
//		min++;
//	}
//	return 0;
//}

//��С������=m*n/���Լ��
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int t = 0;
//	int a = m;
//	int b = n;
//	while (t = a % b)//Сģ��֮�����С������ת������ɴ�ģС�����Բ��ñȽ��������Ĵ�С
//	{
//		a = b;
//		b = t;
//	}
//	int min = m * n / b;
//	printf("��С��������Ϊ��%d", min);
//	return 0;
//}

//��ӡ1000�굽2000��֮�������
//�ж�y�ǲ�������
//1. ��4���������ܱ�100����������
//2. �ܱ�400����������

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

//дһ�����룬��ӡ100-200֮�������
//����-����
//ֻ�ܱ�1������������
//int main()
//{
//	int num = 0;
//	for (num = 100; num <= 200; num++)
//	{
//		//�ж�num�Ƿ�Ϊ����
//		//2��num-1֮�������ȥ�Գ�num�����ܷ�����
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
//		//�ж�num�Ƿ�Ϊ����
//		//2��num-1֮�������ȥ�Գ�num�����ܷ�����
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j < num; j++)
//		{
//			if (num % j == 0)
//			{
//				i = 0;//��������
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

//�Ż�����
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//m=a*b
//	//a��b��������һ��������<=��ƽ��m��
//	// ����ֻ��Ҫ���Ƿ��н�С�����Ӿ���
//	//16 = 2*8 = 4*4
//	// 
//	//sqrt - �ǿ�ƽ���ĺ��� - math.h
//	for (i = 101; i <= 200; i+=2)//ż��������������
//	{
//		//�ж�num�Ƿ�Ϊ����
//		//2��num-1֮�������ȥ�Գ�num�����ܷ�����
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)//�������Գ��Ĵ���
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//��������
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

//goto����ѧϰ
//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//	goto flag;
//	return 0;
//}

//�ػ�����
//ֻҪ�������������Ծ���1�����ڹػ���������룺��������ȡ���ػ���
//shutdown -s -t 60  ���ػ�)--> -s���ùػ� -t����ʱ��ػ� 60 ����60��֮��ػ� 
//shutdown -a     (ȡ���ػ���
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//	//�ػ�
//	//C�����ṩ��һ��������system() - ִ��ϵͳ�����
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//system - stdlib.h
//again:
//	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ���\n");
//	scanf("%s", input);
//	//if(input == "������")//�����ַ����Ƚ��ǲ���ʹ��==�ģ�Ӧ��ʹ��strump() string compare
//	if (strcmp(input, "������") == 0)//strcmp - string.h
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//�ػ�����
//ֻҪ�������������Ծ���1�����ڹػ���������룺��������ȡ���ػ���
//shutdown -s -t 60  ���ػ�)--> -s���ùػ� -t����ʱ��ػ� 60 ����60��֮��ػ� 
//shutdown -a     (ȡ���ػ���
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//	//�ػ�
//	//C�����ṩ��һ��������system() - ִ��ϵͳ�����
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//system - stdlib.h
//
//	while (1)
//	{
//		printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ���\n");
//		scanf("%s", input);
//		//if(input == "������")//�����ַ����Ƚ��ǲ���ʹ��==�ģ�Ӧ��ʹ��strump() string compare
//		if (strcmp(input, "������") == 0)//strcmp - string.h
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}