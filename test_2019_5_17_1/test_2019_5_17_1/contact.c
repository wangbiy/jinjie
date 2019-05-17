#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void InitContact(Contact* pcon)//��ʼ��
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
		printf("ͨѶ¼�������޷����!\n");
	}
	else
	{
		printf("����������:");
		scanf("%s", pcon->data[pcon->sz].name);//�������ǵ�ַ����������&
		printf("����������:");
		scanf("%d", &(pcon->data[pcon->sz].age));//���Ǹ�������Ҫȡ��ַ
		printf("�������Ա�:");
		scanf("%s", pcon->data[pcon->sz].sex);
		printf("������绰:");
		scanf("%s", pcon->data[pcon->sz].tele);
		printf("�������ַ:");
		scanf("%s", pcon->data[pcon->sz].addr);
		pcon->sz++;
	}
}
void ShowContact(const Contact* pcon)
{
	int i = 0;
	//����  ����  �Ա�  �绰  ��ַ
	//����  20    ��    123   ����
	printf("%10s\t%4d\t%4s\t%12s\t%15s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pcon->sz; i++)
	{
		printf("%10s\t%4d\t%4s\t%12s\t%15s\n",
			pcon->data[i].name,
			pcon->data[i].age,
			pcon->data[i].sex,
			pcon->data[i].tele,
			pcon->data[i].addr);
		   //��ӡһ���˵���Ϣ
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
void DelContact(Contact* pcon)
{
	//����
	int i = 0;
	int j = 0;
	int pos = 0;
	char name[MAX_NAME] = { 0 };//��ʱ����
	printf("��������Ҫɾ���˵�����:");
	scanf("%s", &name);
	if (pcon->sz == 0)
	{
		printf("ͨѶ¼�ѿգ��޷�ɾ��!\n");
		return;
	}
	pos=FindEntry(pcon, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	//ɾ��
	for (j = i; j <pcon->sz-1; j++)
	{
		pcon->data[j] = pcon->data[j + 1];
	}
	pcon->sz--;
	printf("ɾ���ɹ�\n");
}
void SearchContact(Contact* pcon)
{
	char name[MAX_NAME] = { 0 };
	int pos = 0;
	assert(pcon != NULL);
	printf("������Ҫ���ҵ��˵����֣�");
	scanf("%s", &name);
	pos = FindEntry(pcon, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˵���Ϣ������\n");
	}
	else if (pos != -1)
	{
		printf("%10s\t%4d\t%4s\t%12s\t%15s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%10s\t%4d\t%4s\t%12s\t%15s\n",
			pcon->data[pos].name,
			pcon->data[pos].age,
			pcon->data[pos].sex,
			pcon->data[pos].tele,
			pcon->data[pos].addr);//��ӡһ���˵���Ϣ
	}
	else
		printf("Ҫ�ҵ��˲�����!\n");
}
void ModifyContact(Contact* pcon)
{
	char name[MAX_NAME] = { 0 };
	int pos = 0;
	assert(pcon != NULL);
	printf("������Ҫ�޸ĵ��˵����֣�");
	scanf("%s", &name);
	pos = FindEntry(pcon, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˵���Ϣ������\n");
	}
	else
	{
		printf("����������:");
		scanf("%s", pcon->data[pos].name);
		printf("����������:");
		scanf("%d", &(pcon->data[pos].age));
		printf("�������Ա�:");
		scanf("%s", pcon->data[pos].sex);
		printf("������绰:");
		scanf("%s", pcon->data[pos].tele);
		printf("�������ַ:");
		scanf("%s", pcon->data[pos].addr);
	}
}
void SortContact(Contact* pcon)//ð������
{
	int i = 0;//����
	assert(pcon != NULL);
	//
	for (i = 0; i < pcon->sz - 1; i++)
	{
		int flag = 1;//��ʾ�Ѿ��������
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