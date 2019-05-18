#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int Small_Int(long value)//-128--127
{
	while (value > 127)
	{
		value -= 256;
	}
	while (value < -128)
	{
		value += 256;
	}
	return value;
}
int main()
{
	int value = 0;
	scanf("%d", &value);
	int ret = Small_Int(value);
	printf("%d\n", ret);
	system("pause");
	return 0;
}