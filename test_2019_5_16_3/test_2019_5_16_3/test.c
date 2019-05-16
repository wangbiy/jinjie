//内存对齐
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#pragma pack(4)//由于此编译器是8字节对齐，
               //通过预编译来通知编译器以4字节对齐,结果为40
               //若不通知为4字节，结果为48
typedef struct MemAlign
{
	char a[18];
	double b;
	char c;
	int d;
	short e;
}MemAlign;
int main()
{
	MemAlign m;//定义一个结构体变量
	MemAlign *p = &m;
	printf("%d\n", sizeof(m.a));
	printf("%d\n", sizeof(m.b));
	printf("%d\n", sizeof(m.c));
	printf("%d\n", sizeof(m.d));
	printf("%d\n", sizeof(m.e));
	printf("%d\n", sizeof(m));
	system("pause");
	return 0;
}