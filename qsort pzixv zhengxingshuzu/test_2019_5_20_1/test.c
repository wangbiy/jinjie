#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//��������(qsort)
//������������
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
void qsort(void *base,//����Ҫ����ռ����ʼ��ַ
	       size_t num,//size_tΪ�޷������Σ�numΪԪ�ظ���
		   size_t width,//Ԫ�ش�С����� 
		   int(*cmp)(const void *e1, const void *e2)//����ָ�룬�ȽϺ����ĺ���ָ��
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
	//void* pf = &a;//����void*���Ͳ��ܽ����ã�Ҳ����++
	test1();
	system("pause");
	return 0;
}