#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//快速排序(qsort)
//整形数组排序
int cmp_int(const void *e1, const void *e2)//e1,e2要比较的两个元素
{
	return *(int*)e1 - *(int*)e2;
}
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void qsort(void *base,//接收要排序空间的起始地址
	       size_t num,//size_t为无符号整形，num为元素个数
		   size_t width,//元素大小，宽度 
		   int(*cmp)(const void *e1, const void *e2)//函数指针，比较函数的函数指针
		   );
void test1()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, 4, cmp_int);
	print_arr(arr, sz);
}
int main()
{
	//int a = 10;
	//int *pa = &a;
	//void* pf = &a;//对于void*类型不能解引用，也不能++
	test1();
	system("pause");
	return 0;
}