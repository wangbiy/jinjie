#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
char a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };//ȫ�ֱ���strlenΪ�������ֵ
int main()
{
	/*char a[10];*///�ֲ�����strlenΪ���ֵ
	printf("%d\n", strlen(a));
	printf("%d\n",sizeof(a));
	system("pause");
	return 0;
}