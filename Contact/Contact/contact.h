#define _CRT_SECURE_NO_WARNINGS 1
#ifndef __CONTACT_H__
#define __CONTACT_H__

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	EMPTY,
	SORT

};
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define TELE_MAX 12
#define ADDR_MAX 30
typedef struct PeoInfo
{
	char name[MAX_NAME];
	short int age;
	char sex[MAX_SEX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];


}PeoInfo;
typedef struct Contact
{
	PeoInfo data[MAX];
	int sz;
}Contact;

void InitContact(Contact* pcon);
void AddContact(Contact* pcon);
void ShowContact(const Contact* pcon);
void DelContact(Contact* pcon);
void SearchContact(Contact* pcon);
void ModifyContact(Contact* pcon);
int EmptyContact(Contact* pcon);
void SortContact(Contact* pcon);

#endif //__CONTACT_H__
