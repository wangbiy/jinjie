#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void InitContact(Contact* pcon)//初始化
{
	assert(pcon != NULL);
	pcon->sz = 0;
	memset(pcon->data, 0, sizeof(pcon->data));
}
void AddContact(Contact* pcon)
{
	assert(pcon != NULL);
	if (pcon->sz == MAX)
	{
		printf("通讯录已满，无法添加!\n");
	}
	else
	{
		printf("请输入名字:");
		scanf("%s", pcon->data[pcon->sz].name);//数组名是地址，不用输入&
		printf("请输入年龄:");
		scanf("%d", &(pcon->data[pcon->sz].age));//这是个变量，要取地址
		printf("请输入性别:");
		scanf("%s", pcon->data[pcon->sz].sex);
		printf("请输入电话:");
		scanf("%s", pcon->data[pcon->sz].tele);
		printf("请输入地址:");
		scanf("%s", pcon->data[pcon->sz].addr);
		pcon->sz++;
	}
}
void ShowContact(const Contact* pcon)
{
	int i = 0;
	//名字  年龄  性别  电话  地址
	//张三  20    男    123   西安
	printf("%10s\t%4s\t%4s\t%12s\t%15s\n", "名字", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pcon->sz; i++)
	{
		printf("%10s\t%4d\t%4s\t%12s\t%15s\n",
			pcon->data[i].name,
			pcon->data[i].age,
			pcon->data[i].sex,
			pcon->data[i].tele,
			pcon->data[i].addr);
		   //打印一个人的信息
	}	
}
static int FindEntry(Contact* pcon, char name[])
{
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return - 1;
}
void DelContact(Contact *pcon)
{
	int i = 0;
	int j = 0;
	int ret = 0;
	char name[MAX_Name] = { 0 };
	printf("请输入要删除的人的名字:> ");
	scanf("%s", &name);
	if (pcon->sz == 0)
	{
		printf("通讯录已空，无法删除!\n");
		return;
	}
	ret = Find(pcon, name);
	if (ret==-1)
	{
		printf("要删除的人不存在!\n");
		return;
	}
	if (ret != -1 && ret <= pcon->sz)
	{
		//删除
		for (j = ret; j < pcon->sz - 1; ++j)
		{
			pcon->data[j] = pcon->data[j + 1];
		}
	}
	pcon->sz--;
	printf("删除成功!\n");
}
void SearchContact(Contact* pcon)
{
	char name[MAX_NAME] = { 0 };
	int pos = 0;
	assert(pcon != NULL);
	printf("请输入要查找的人的名字：");
	scanf("%s", &name);
	pos = FindEntry(pcon, name);
	if (pos == -1)
	{
		printf("要查找的人的信息不存在\n");
	}
	else if (pos != -1)
	{
		printf("%10s\t%4s\t%4s\t%12s\t%15s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%10s\t%4d\t%4s\t%12s\t%15s\n",
			pcon->data[pos].name,
			pcon->data[pos].age,
			pcon->data[pos].sex,
			pcon->data[pos].tele,
			pcon->data[pos].addr);//打印一个人的信息
	}
	else
		printf("要找的人不存在!\n");
}
void ModifyContact(Contact* pcon)
{
	char name[MAX_NAME] = { 0 };
	int pos = 0;
	assert(pcon != NULL);
	printf("请输入要修改的人的名字：");
	scanf("%s", &name);
	pos = FindEntry(pcon, name);
	if (pos == -1)
	{
		printf("要修改的人的信息不存在\n");
	}
	else
	{
		printf("请输入名字:");
		scanf("%s", pcon->data[pos].name);
		printf("请输入年龄:");
		scanf("%d", &(pcon->data[pos].age));
		printf("请输入性别:");
		scanf("%s", pcon->data[pos].sex);
		printf("请输入电话:");
		scanf("%s", pcon->data[pos].tele);
		printf("请输入地址:");
		scanf("%s", pcon->data[pos].addr);
	}
}
void SortContact(Contact* pcon)//冒泡排序
{
	int i = 0;//趟数
	assert(pcon != NULL);
	//
	for (i = 0; i < pcon->sz - 1; i++)
	{
		int flag = 1;//表示已经排序好了
		int j = 0;
		for (j = 0; j < pcon->sz - 1 - i; j++)
		{
			if (strcmp(pcon->data[j].name, pcon->data[j + 1].name)>0);
			{
				PeoInfo tmp = pcon->data[j];
				pcon->data[j] = pcon->data[j + 1];
				pcon->data[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}
void EmptyContact(Contact *pcon)
{
	pcon->sz = 0;
	printf("清空成功!!\n");
}
