#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
char a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };//全局变量strlen为它计算的值
int main()
{
	/*char a[10];*///局部变量strlen为随机值
	printf("%d\n", strlen(a));
	printf("%d\n",sizeof(a));
	system("pause");
	return 0;
}