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
//	printf("a = %d\n", a);// a = 2  a没有发生变化
//	printf("b = %d\n", b);// b = 4
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	//当前的右移操作符使用的是算术右移
//	printf("b = %d\n", b);// b = -1
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	
//	//& - 按(二进制)位与
//	//int c = a & b;
//	//printf("c = %d\n", c);  	
//	//00000000000000000000000000000011
//    //00000000000000000000000000000101
//    //00000000000000000000000000000001
//	
//	//| - 按(二进制)位或
//	//int c = a | b;
//	//printf("c = %d\n", c);
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000111
//
//	//^ - 按(二进制)位异或
//	//规则：相同为0，相异为1
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
//	//交换
//	printf("a = %d b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;//a^b^b
//	a = a ^ b;//a^b^b - a^b^a
//	printf("a = %d b = %d\n", a, b);
//
//	//printf("a = %d b = %d\n", a, b);
//	////数值太大会溢出
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("a = %d b = %d\n", a, b);
//
//	//int c = 0;//空瓶
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
//	//把a的二进制中的第五位置为1
//	a = a | (1 << 4);
//	//000000000000000000000000000001101
//	//000000000000000000000000000010000
//	//000000000000000000000000000011101
//	printf("a = %d\n", a);
//	//把a的二进制中的第五位置为0
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
//	//flag为真，打印hehe
//	if (flag)
//	{
//		printf("hehe");
//	}
//	//flag为假，打印haha
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
//	// ~ 按位取反
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
	struct Book b = { "C语言","VS2022",101 };
	struct Book* pb = &b;

	printf("书名：%s\n", pb->name);
	printf("书号：%s\n", pb->id);
	printf("价格：%d\n", pb->price);

	printf("书名：%s\n", (*pb).name);
	printf("书号：%s\n", (*pb).id);
	printf("价格：%d\n", (*pb).price);

	printf("书名：%s\n", b.name);
	printf("书号：%s\n", b.id);
	printf("价格：%d\n", b.price);
	return 0;
}

