#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//快速排序(qsort)
//结构体排序
void qsort(void *base,//接收要排序空间的起始地址
	size_t num,//size_t为无符号整形，num为元素个数
	size_t width,//元素大小，宽度 
	int(*cmp)(const void *e1, const void *e2)//函数指针，比较函数的函数指针
	);
struct S
{
	char name[20];
	int age;
};
int cmp_s_by_name(const void* e1, const void* e2)//根据名字排序
{
	return strcmp(((struct S*)e1)->name,((struct S*)e2)->name);
}
int cmp_s_by_age(const void* e1, const void* e2)//根据年龄排序
{
	return ((struct S*)e1)->age - ((struct S*)e2)->age;
}
void test2()
{
	int i = 0;
	struct S arr[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 5 } };
	qsort(arr, 3, sizeof(struct S), cmp_s_by_name);
	for (i = 0; i < 3; i++)
	{
		printf("%s ", arr[i].name);
	}
	printf("\n");
}
void test3()
{
	int i = 0;
	struct S arr[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 5 } };
	qsort(arr, 3, sizeof(struct S), cmp_s_by_age);
	for (i = 0; i < 3; i++)
	{
		printf("%d ", arr[i].age);
	}
	printf("\n");
}
int main()
{
	test2();
	test3();
	system("pause");
	return 0;
}