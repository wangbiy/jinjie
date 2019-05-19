#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int get_max(int x, int y)
{
	return (x > y ? x : y);
}
int main()
{
	int(*pf)(int, int) = get_max;//存放函数的指针
	/*int max = (*pf)(2, 5);*/
	int max = pf(2, 5);
	printf("max=%d\n",max);
	system("pause");
	return 0;

}