#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct body
//{
//	double hight;
//	double wight;
//	char score;
//}s1,s2;
//struct Stu
//{
//	struct body q;
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	struct Stu s = { {168.2,121.3,'A'},"张三",18,"20220632" };
//	struct Stu s1 = { {170.6,125.3,'B'},"李四",19,"20220765" };
//	struct Stu* ps = &s1;
//
//	printf("%c\n", s.q.score);
//	printf("%s\n", s.id);
//	printf("%s\n", (*ps).name);
//	printf("%lf\n", ps->q.wight);
//	return 0;
//}

struct body
{
	double hight;
	double wight;
	char score;
}s1,s2;

struct Stu
{
	struct body q;
	char name[20];
	int age;
	char id[20];
};

void print1(struct Stu t)
{
	printf("%lf %lf %c %s %d %s\n", t.q.hight, t.q.wight, t.q.score, t.name, t.age, t.id);
}

void print2(struct Stu* ps)
{
	printf("%lf %lf %c %s %d %s\n", ps->q.hight, ps->q.wight, ps->q.score, ps->name, ps->age, ps->id);
}

int main()
{
	struct Stu s = { {168.2,121.3,'A'},"张三",18,"20220632" };
	struct Stu s1 = { {170.6,125.3,'B'},"李四",19,"20220765" };
	struct Stu* ps = &s1;

	print1(s); //传值调用 —— 空间和时间会浪费
	print2(&s);//传址调用 —— 效率更高

	//printf("%c\n", s.q.score);
	//printf("%s\n", s.id);
	//printf("%s\n", (*ps).name);
	//printf("%lf\n", ps->q.wight);
	return 0;
}