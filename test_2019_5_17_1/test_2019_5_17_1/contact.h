#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define MAX_Name 20
#define MAX_Sex 3
#define MAX_Tele 12
#define MAX_Addr 30
#define MAX 1000
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	EMPTY
};
typedef struct Info
{
	char name[MAX_Name];
	int age;
	char sex[MAX_Sex];
	char tele[MAX_Tele];
	char addr[MAX_Addr];
}Info;
typedef struct Contact
{
	int sz;
	struct Info data[MAX];
}Contact;
void InitContact(Contact *pcon);
void AddContact(Contact *pcon);
void ShowContact(const Contact *pcon);
void DelContact(Contact *pcon);
void SearchContact(const Contact *pcon);
void ModifyContact(Contact *pcon);
void SortContact(Contact *pcon);
void EmptyContact(Contact *pcon);
