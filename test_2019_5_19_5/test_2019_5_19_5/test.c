#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a = -128;
	//char a = 128;//与-128一样
	printf("%u\n", a);//a:1 1000 0000
	                 //a(反码):1 0111 1111
	                //补码：1 1000 0000
	               //整形提升补码：1000 0000 0000 0000 0000 0000 1000 0000
	              //反码：1111 1111 1111 1111 1111 1111 0111 1111
	              //原码：1111 1111 1111 1111 1111 1111 0111 1110结果为：4294967168
	system("pause");
	return 0;
}
