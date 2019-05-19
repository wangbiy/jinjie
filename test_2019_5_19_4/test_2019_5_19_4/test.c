#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a[] = { 'H',0,'I','I', 'o' };
	printf("%d\n", strlen(a));//'\0'µÈ¼ÛÓÚ0
	printf("%d\n", sizeof(a));
	system("pause");
	return 0;
}
