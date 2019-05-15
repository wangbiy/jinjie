#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int v = 0;
	printf("%d %d %d %d\n", v++, ++v, v++, ++v);
	printf("%d\n", v);
	system("pause");
	return 0;
}