#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 3 / 5;
//	int b = 3.0 / 5;
//	double c = 3.0 / 5;
//	printf("%d\n", a);//0
//	printf("%d\n", b);//0
//	printf("%lf\n", c);//0.600000
//	return 0;
//}

//int main()
//{
//	int a = 7 % 3;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = a << 1;
//	printf("a = %d\n", a);// a = 2  aû�з����仯
//	printf("b = %d\n", b);// b = 4
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	//��ǰ�����Ʋ�����ʹ�õ�����������
//	printf("b = %d\n", b);// b = -1
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	
//	//& - ��(������)λ��
//	//int c = a & b;
//	//printf("c = %d\n", c);  	
//	//00000000000000000000000000000011
//    //00000000000000000000000000000101
//    //00000000000000000000000000000001
//	
//	//| - ��(������)λ��
//	//int c = a | b;
//	//printf("c = %d\n", c);
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000111
//
//	//^ - ��(������)λ���
//	//������ͬΪ0������Ϊ1
//	//int c = a ^ b;
//	//printf("c = %d\n", c);
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000110
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//����
//	printf("a = %d b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;//a^b^b
//	a = a ^ b;//a^b^b - a^b^a
//	printf("a = %d b = %d\n", a, b);
//
//	//printf("a = %d b = %d\n", a, b);
//	////��ֵ̫������
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("a = %d b = %d\n", a, b);
//
//	//int c = 0;//��ƿ
//	//printf("a = %d b = %d\n", a, b);
//	//c = a;
//	//a = b;
//	//b = c;
//	//printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	//a ^ a = 0;
//	//011
//	//011
//	//000
//	//0 ^ a = a;
// 	//000
//	//011
//	//011
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int count = 0;
//	int i = 0;
//	while (num)
//	{
//		if (num & 1 == 1)
//		{
//			count++;
//		}
//		//num = num >> 1;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 13;
//	//��a�Ķ������еĵ���λ��Ϊ1
//	a = a | (1 << 4);
//	//000000000000000000000000000001101
//	//000000000000000000000000000010000
//	//000000000000000000000000000011101
//	printf("a = %d\n", a);
//	//��a�Ķ������еĵ���λ��Ϊ0
//	a = a & (~(1 << 4));
//	//000000000000000000000000000011101
//	//111111111111111111111111111101111
//	//000000000000000000000000000001101
//	printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	int flag = 5;
//	printf("%d\n", !flag);
//	//flagΪ�棬��ӡhehe
//	if (flag)
//	{
//		printf("hehe");
//	}
//	//flagΪ�٣���ӡhaha
//	if (!flag)
//	{
//		printf("haha");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	char arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(char [10]));
//	int arr1[10] = { 0 };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(int [10]));
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int); -error
//	return 0;
//}

//int main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	// ~ ��λȡ��
//	//11111111111111111111111111111111
//	//00000000000000000000000000000000
//	int b = ~a;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

struct Book
{
	char name[20];
	char id[20];
	int price;
};
int main()
{
	struct Book b = { "C����","VS2022",101 };
	struct Book* pb = &b;

	printf("������%s\n", pb->name);
	printf("��ţ�%s\n", pb->id);
	printf("�۸�%d\n", pb->price);

	printf("������%s\n", (*pb).name);
	printf("��ţ�%s\n", (*pb).id);
	printf("�۸�%d\n", (*pb).price);

	printf("������%s\n", b.name);
	printf("��ţ�%s\n", b.id);
	printf("�۸�%d\n", b.price);
	return 0;
}

