//�ڴ����
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#pragma pack(4)//���ڴ˱�������8�ֽڶ��룬
               //ͨ��Ԥ������֪ͨ��������4�ֽڶ���,���Ϊ40
               //����֪ͨΪ4�ֽڣ����Ϊ48
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
	MemAlign m;//����һ���ṹ�����
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