#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//strcpy
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = {"hello bit"};
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);//%s - ���ַ����ĸ�ʽ��ӡ
//	return 0;
//}

//memset
//int main()
//{
//	char arr[] = { "hello bit" };
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//�Զ��庯��
//дһ�����������ҳ����������е����ֵ

//int get_max(int x, int y)
//{
//	//int z = 0;
//	//if (x > y)
//	//	z = x;
//	//else
//	//	z = y;
//	//return z;//����z �������ؽϴ�ֵ
//	return (x > y )?  (x): (y);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//�����ĵ���
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//�����������͵�����
//д�������ˣ��������
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//	
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap(a,b);
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}

//ָ�������Ӧ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}

//������ȷ
//void Swap(int*pa, int*pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa =*pb;
//	*pb = z;
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap(&a,&b);
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}
