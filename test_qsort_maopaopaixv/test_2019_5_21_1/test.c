#define _CRT_SECURE_NO_WARNIONGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void qsort(void* base, 
	       size_t num,
	       size_t width, 
		   int(*cmp)(const void* e1, const void* e2));
struct S
{
	char name[20];
	int age;
};
int cmp_s_by_name(const void* e1, const void* e2)//������������
{
	return strcmp(((struct S*)e1)->name, ((struct S*)e2)->name);
}
int cmp_s_by_age(const void* e1, const void* e2)//������������
{
	return ((struct S*)e1)->age - ((struct S*)e2)->age;
}
int cmp_int(const void *e1, const void *e2)//e1,e2Ҫ�Ƚϵ�����Ԫ��
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
void Swap(char* buf1, char* buf2, size_t width)
{
	size_t i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base,
	             size_t sz,
	             size_t width,
	             int(*cmp)(const void* e1, const void* e2))//ð������
{
	size_t i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//��������Ԫ�صıȽ�
		size_t j = 0;
		for (j = 0; j <sz - i - 1; j++)
		{
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
			{
				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
			}
		}
	}
}
void test1()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("����ǰ:\n");
	print_arr(arr, sz);
	bubble_sort(arr, sz, 4, cmp_int);
	printf("�����:\n");
	print_arr(arr, sz);
}
void test2()
{
	int i = 0;
	struct S arr[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 5 } };
	printf("����ǰ:");
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		printf("%s ", arr[i].name);
	}
	printf("\n");
	bubble_sort(arr, 3, sizeof(struct S), cmp_s_by_name);
	printf("�����:");
	printf("\n");
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
	printf("����ǰ:");
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", arr[i].age);
	}
	printf("\n");
	bubble_sort(arr, 3, sizeof(struct S), cmp_s_by_age);
	printf("�����:");
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", arr[i].age);
	}
	printf("\n");
}
int main()
{
	test1();
	test2();
	test3();
	system("pause");
	return 0;
}