#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char a[1000];//char的取值范围为-128到127
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d\n", a[127]);//-128
	printf("%d\n", a[128]);//127
	printf("%d\n", a[255]);//0
	printf("%d\n", strlen(a));
	system("pause");
	return 0;
}