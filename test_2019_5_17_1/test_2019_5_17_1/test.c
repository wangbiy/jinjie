#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void menu()
{
	printf("*************************************\n");
	printf("*************** ͨѶ¼ **************\n");
	printf("***        1.add     2.del        ***\n");
	printf("***        3.search  4.modify     ***\n");
	printf("***        5.show    6.sort       ***\n");
	printf("***            0. exit            ***\n");
	printf("*************************************\n");
}
void test()
{
	//����ͨѶ¼
	Contact con;
	int input = 0;
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			printf("�˳���\n");
			break;
		default:
			printf("ѡ�����:\n");
			break;
		}
	}while(input);
}
int main()
{
	test();
	system("pause");
	return 0;
}