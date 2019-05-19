#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
void fun(char* br)
{
	printf("%d\n", strlen(br));
	printf("%d\n", sizeof(br));
}
int main()
{
	char ar[10] = "abcdefghi";
	fun(ar);
	system("pause");
	return 0;
}