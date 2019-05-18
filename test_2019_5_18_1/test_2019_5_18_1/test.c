#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*char ch = 'w';
	char *pc = &ch;
	*pc = 'w';*/
	char *pstr = "hello bit";//将字符串的首字母的地址放入pstr
	printf("%s\n", pstr);
	system("pause");
	return 0;
}