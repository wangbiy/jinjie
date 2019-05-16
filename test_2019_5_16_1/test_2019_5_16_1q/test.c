#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <stdlib.h>
int main()
{
	unsigned int i;//无符号整数永远没有负数，所以一直大于等于0，所以为死循环
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
	}
	system("pause");
	return 0;
}