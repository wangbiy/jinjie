//�жϵ�ǰ�������ֽ���
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
struct test
{
	int i;
	char c;
}t;
int check_sys()
{
	t.i = 1;
	return t.c;
}
int main()
{
	int ret = check_sys();
	if (ret)
	{
		printf("ΪС��\n");
	}
	else
		printf("Ϊ���\n");
	system("pause");
	return 0;
}