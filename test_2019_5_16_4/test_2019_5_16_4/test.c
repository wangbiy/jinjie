#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
unsigned char i = 0;//0到255
int main()
{
	for (i = 0; i <= 255; i++)
	{
		printf("hello world!\n");//i为无符号字符型，一直在0到255范围内，死循环
	}
	system("pause");
	return 0;
}