//����������ָ�뷨
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int Add(int a, int b)
{
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a*b;
}
int Div(int a, int b)
{
	return a / b;
}
int main()
{
	int x, y;
	int input = 1;
	int ret = 0;
	int(*p[5])(int x, int y) = { 0, Add, Sub, Mul, Div };//ת�Ʊ�
	while (input)
	{
		printf("**************************\n");
		printf("   1:add           2:sub  \n");
		printf("   3:mul           4:div  \n");
		printf("          0.exit          \n");
		printf("**************************\n");
		printf("��ѡ��:");
		scanf("%d", &input);
		if ((input <= 4 && input >= 1))
		{
			printf("���������:");
			scanf("%d %d", &x, &y);
			ret = (p[input])(x, y);
		}
		else
			printf("��������\n");
		printf("ret=%d\n", ret);
	}
	system("pause");
	return 0;
}