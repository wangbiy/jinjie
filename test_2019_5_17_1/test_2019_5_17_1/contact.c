#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
#include <stdio.h>
#include <stdlib.h>
void InitContact(Contact *pcon)
{
	assert(pcon != NULL);
	pcon->sz = 0;
	memset(pcon->data, 0, sizeof(pcon->data));
}
void AddContact(Contact *pcon)
{
	assert(pcon != NULL);
	if (pcon->sz == MAX)
	{
		printf("通讯录已满，无法添加!\n");
	}
	else
	{
		printf("请输入名字:> ");
		scanf("%s", pcon->data[pcon->sz].name);
		printf("请输入年龄:> ");
		scanf("%d", &(pcon->data[pcon->sz].age));
		printf("请输入性别:> ");
		scanf("%s", pcon->data[pcon->sz].sex);
		printf("请输入电话:> ");
		scanf("%s", pcon->data[pcon->sz].tele);
		printf("请输入地址;> ");
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
static int Find(Contact *pcon, char name[])
{
	int i = 0;
	for (i = 0; i < pcon->sz; ++i)
	{
		if (0 == strcmp(pcon->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
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
void SearchContact(const Contact *pcon)
{
	int pos = 0;
	char name[MAX_Name] = { 0 };
	assert(pcon != NULL);
	printf("请输入要查找的人的名字:> ");
	scanf("%s", &name);
	pos = Find(pcon, name);
	if (pos == -1)
	{
		printf("要查找的人的信息不存在!\n");
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
		printf("要查找的人不存在!\n");
}
void ModifyContact(Contact *pcon)
{
	char name[MAX_Name] = { 0 };
	int pos = 0;
	assert(pcon != NULL);
	printf("请输入要修改的人的名字:> ");
	scanf("%s", &name);
	pos = Find(pcon, name);
	if (pos == -1)
		printf("要修改的人的信息不存在!\n");
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
void SortContact(Contact *pcon)//冒泡排序
{
	int i = 0;
	int j = 0;
	assert(pcon != NULL);
	for (i = 0; i < pcon->sz; ++i)
	{
		int flag = 1;//表示已经排好
		for (j = 0; j < pcon->sz - 1; ++j)
		{
			if (strcmp(pcon->data[j].name, pcon->data[j + 1].name)>0)
			{
				Info tmp = pcon->data[j];
				pcon->data[j] = pcon->data[j + 1];
				pcon->data[j + 1] = tmp;
			}
		}
		if (flag == 1)
		{
			printf("已经排好了!\n");
			break;
		}
	}
}
void EmptyContact(Contact *pcon)
{
	pcon->sz = 0;
	printf("清空成功!!\n");
}
