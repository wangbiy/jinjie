#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//��������(qsort)
//�ṹ������
void qsort(void *base,//����Ҫ����ռ����ʼ��ַ
	size_t num,//size_tΪ�޷������Σ�numΪԪ�ظ���
	size_t width,//Ԫ�ش�С����� 
	int(*cmp)(const void *e1, const void *e2)//����ָ�룬�ȽϺ����ĺ���ָ��
	);
struct S
{
	char name[20];
	int age;
};
int cmp_s_by_name(const void* e1, const void* e2)//������������
{
	return strcmp(((struct S*)e1)->name,((struct S*)e2)->name);
}
int cmp_s_by_age(const void* e1, const void* e2)//������������
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