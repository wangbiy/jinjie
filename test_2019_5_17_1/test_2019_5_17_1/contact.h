//����һ��ͨѶ¼
//1000���˵���Ϣ
//ÿ���˵���Ϣ�����������䡢�绰��סַ���Ա�

//1.����˵���Ϣ
//2.ɾ���˵���Ϣ
//3.�޸��˵���Ϣ
//4.������Ϣ
//5.����xxx����
//6.��ӡͨѶ¼����Ϣ
//0.�˳�
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX 1000
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;
//ͨѶ¼�ṹ
typedef struct Contact
{
	struct PeoInfo data[MAX];//1000���˵���Ϣ
	int sz;//��¼��ǰ�ж��ٸ��˵���Ϣ
}Contact;
void InitContact(Contact* pcon);
void AddContact(Contact* pcon);
void ShowContact(const Contact* pcon);
void DelContact(Contact* pcon);
void SearchContact(const Contact* pcon);
void ModifyContact(Contact* pcon);
void SortContact(Contact* pcon);