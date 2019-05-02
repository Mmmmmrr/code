#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void InitContact(Contact* pcon)
{
	assert(pcon);
	pcon->sz = 0;
	memset(pcon->data, 0, sizeof(pcon->data));
}
void AddContact(Contact* pcon)
{
	if (pcon->sz == MAX)
	{
		printf("通讯录已满，无法添加\n");
	}
	else
	{
		printf("请输入名字：");
		scanf("%s", pcon->data[pcon->sz].name);
		printf("请输入年龄：");
		scanf("%d", &(pcon->data[pcon->sz].age));
		printf("请输入性别：");
		scanf("%s", pcon->data[pcon->sz].sex);
		printf("请输入电话：");
		scanf("%s", pcon->data[pcon->sz].tele);
		printf("请输入地址：");
		scanf("%s", pcon->data[pcon->sz].addr);
		pcon->sz++;
		printf("添加成功");
	}
}

void ShowContact(const Contact* pcon)
{
	int i = 0;
	printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "名字", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pcon->sz; i++)
	{
		printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data[i].name, pcon->data[i].age, pcon->data[i].sex, pcon->data[i].tele, pcon->data[i].addr);
	}

}
int FindEntry(Contact* pcon, char name[])
{
	int i = 0;
	assert(pcon);
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void DelContact(Contact* pcon)
{
	assert(pcon);
	int pos = 0;
	char name[MAX_NAME] = { 0 };
	if (pcon->sz == 0)
	{
		printf("通讯录为空，无法删除\n");
	}
	else
	{
		printf("请输入要删除的姓名:>");
		scanf("%s", name);
		pos = FindEntry(pcon, name);
		if (pos == -1)
		{
			printf("要删除的人不存在\n");
		}
		else
		{
			//删除
			int i = 0;
			for (i = pos; i < pcon->sz-1; i++)
			{
				pcon->data[i] = pcon->data[i + 1];
			}
			pcon->sz--;
			printf("删除成功\n");
		}
	}
}
void SearchContact(Contact* pcon)
{
	assert(pcon);
	int pos = 0;
	char name[MAX_NAME] = { 0 };
	printf("请输入查找联系人：>");
	scanf("%s", name);
	
	pos = FindEntry(pcon, name);
	if (pos == -1)
	{
		printf("联系人查找不到，请重新输入\n");
	}
	else
	{
		//查找
		    printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "名字", "年龄", "性别", "电话", "地址");
			printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data[pos].name, pcon->data[pos].age, pcon->data[pos].sex, pcon->data[pos].tele, pcon->data[pos].addr);
	}
}

void ModifyContact(Contact* pcon)
{
	assert(pcon);
	int pos = 0;
	char name[MAX_NAME] = { 0 };
	printf("请输入查找联系人：>");
	scanf("%s", name);
	pos = FindEntry(pcon, name);
	if (pos == -1)
	{
		printf("此联系人不存在，请重新输入\n");
	}
	else
	{
		printf("请输入修改内容\n");
		printf("请输入名字：");
		scanf("%s", pcon->data[pos].name);
		printf("请输入年龄：");
		scanf("%d", &(pcon->data[pos].age));
		printf("请输入性别：");
		scanf("%s", pcon->data[pos].sex);
		printf("请输入电话：");
		scanf("%s", pcon->data[pos].tele);
		printf("请输入地址：");
		scanf("%s", pcon->data[pos].addr);
	}
}
int EmptyContact(Contact* pcon)
{
	pcon->sz = 0;
	printf("清空成功\n");
}


void SortContact(Contact* pcon)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		for (j = 0; j < pcon->sz-1; j++)
		{
			if (strcmp(pcon->data[j].name, pcon->data[j + 1].name)>0)
			{
				PeoInfo tmp = pcon->data[j];
				pcon->data[j] = pcon->data[j + 1];
				pcon->data[j + 1] = tmp;

			}
		}
	}
}