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
		printf("ͨѶ¼�������޷����\n");
	}
	else
	{
		printf("���������֣�");
		scanf("%s", pcon->data[pcon->sz].name);
		printf("���������䣺");
		scanf("%d", &(pcon->data[pcon->sz].age));
		printf("�������Ա�");
		scanf("%s", pcon->data[pcon->sz].sex);
		printf("������绰��");
		scanf("%s", pcon->data[pcon->sz].tele);
		printf("�������ַ��");
		scanf("%s", pcon->data[pcon->sz].addr);
		pcon->sz++;
		printf("��ӳɹ�");
	}
}

void ShowContact(const Contact* pcon)
{
	int i = 0;
	printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
	}
	else
	{
		printf("������Ҫɾ��������:>");
		scanf("%s", name);
		pos = FindEntry(pcon, name);
		if (pos == -1)
		{
			printf("Ҫɾ�����˲�����\n");
		}
		else
		{
			//ɾ��
			int i = 0;
			for (i = pos; i < pcon->sz-1; i++)
			{
				pcon->data[i] = pcon->data[i + 1];
			}
			pcon->sz--;
			printf("ɾ���ɹ�\n");
		}
	}
}
void SearchContact(Contact* pcon)
{
	assert(pcon);
	int pos = 0;
	char name[MAX_NAME] = { 0 };
	printf("�����������ϵ�ˣ�>");
	scanf("%s", name);
	
	pos = FindEntry(pcon, name);
	if (pos == -1)
	{
		printf("��ϵ�˲��Ҳ���������������\n");
	}
	else
	{
		//����
		    printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
			printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data[pos].name, pcon->data[pos].age, pcon->data[pos].sex, pcon->data[pos].tele, pcon->data[pos].addr);
	}
}

void ModifyContact(Contact* pcon)
{
	assert(pcon);
	int pos = 0;
	char name[MAX_NAME] = { 0 };
	printf("�����������ϵ�ˣ�>");
	scanf("%s", name);
	pos = FindEntry(pcon, name);
	if (pos == -1)
	{
		printf("����ϵ�˲����ڣ�����������\n");
	}
	else
	{
		printf("�������޸�����\n");
		printf("���������֣�");
		scanf("%s", pcon->data[pos].name);
		printf("���������䣺");
		scanf("%d", &(pcon->data[pos].age));
		printf("�������Ա�");
		scanf("%s", pcon->data[pos].sex);
		printf("������绰��");
		scanf("%s", pcon->data[pos].tele);
		printf("�������ַ��");
		scanf("%s", pcon->data[pos].addr);
	}
}
int EmptyContact(Contact* pcon)
{
	pcon->sz = 0;
	printf("��ճɹ�\n");
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