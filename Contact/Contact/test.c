#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void menu()
{
	printf("***************************\n");
	printf("*****1.Add     2.Del   *****\n");
	printf("*****3.search  4.modify*****\n");
	printf("*****5.show    6.empty******\n");
	printf("*****7.sort    0.exit*******\n");

}
void Test()
{
	int input = 0;
	Contact con;
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			printf("�˳�����\n");
			break;
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EMPTY:
			EmptyContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		default:
			printf("ѡ�����,������ѡ��\n");
			break;
		}
	} while (input);

}
int main()
{
	Test();
	system("pause");
	return 0;
}