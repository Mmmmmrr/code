#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//strncpy
//strncat
//strncmp
int main()
{

	system("pause");
	return 0;
}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (*str1++ == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 < *str2)
//		return -1;
//	else
//		return 1;
//}
//int main()
//{
//	int ret = my_strcmp("abc", "abccc");
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//qsort
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int cmp_int(void * e1, void * e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[] = { 1, 9, 7, 5, 0, 2, 3, 4, 8, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//}
//struct Stu
//{
//	char name[5];
//	int age;
//};
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return (*(struct Stu*)e1).age - (*(struct Stu*)e2).age;
//}
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp((*(struct Stu*)e1).name, (*(struct Stu*)e2).name);
//}
//void print1(struct Stu s[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d %d %d", s[i].age);
//	}printf("\n");
//}

//void test2()
//{
//	struct Stu s[3] = { { "marui", 21 }, { "ayi", 10 }, { "longm", 18 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//
//	print1(s, sz);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//void Swap(char* x, char* y, int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char tmp = *x;
//		*x = *y;
//		*y = tmp;
//		x++;
//		y++;
//	}
//}
//void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
//			{
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
//			}
//		}
//	}
//}
//void test2()
//{
//	struct Stu s[3] = { { "marui", 21 }, { "ayi", 10 }, { "longm", 18 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//int main()
//{
//	//test1();
//	test2();
//	system("pause");
//	return 0;
//}

//冒泡排序
//void Swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//void bubble_sort(int arr[] , int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1- i ; j++)
//		{
//			/*if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}*/
//			if (arr[j] > arr[j + 1])
//			{
//				Swap(&arr[j], &arr[j + 1]);
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 9, 0, 7, 5, 2, 4, 6, 3, 1, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	system("pause");
//	return 0;
//}
//

//计算器

//enum
//{
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//};
//void menu()
//{
//	printf("***************************\n");
//	printf("*****1.add  2.sub**********\n");
//	printf("*****3.mul  4.div**********\n");
//	printf("********  0.exit **********\n");
//	printf("***************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x*y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	switch (input)
//	{
//	case ADD:
//
//	}
//	
//
//}
//void Cacl(int(*pfun)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("选择两个操作数");
//	scanf("%d%d", &x, &y);
//	ret = pfun(x, y);
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Cacl(Add);
//			break;
//		case 2:
//			Cacl(Sub);
//			break;
//		case 3 :
//			Cacl(Mul);
//			break;
//		case 4:
//			Cacl(Div);
//			break;
//		case 0:
//			printf("退出");
//			break;
//		default:
//			printf("错误");
//				break;
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int(*pfun[5])(int, int) = { 0, Add, Sub, Mul, Div };
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 0 && input <= 4)
//		{
//			printf("请选择两个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = pfun[input](x, y);
//			printf("%d\n", ret);
//		}
//
//	} while (input);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择：>\n");
//		scanf("%d", &input);
//		printf("请选择两个操作数");
//		scanf("%d %d", &x, &y);
//		switch (input)
//		{
//		case 1:
//			ret = Add(x,y);
//			break;
//		case 2:
//			ret = Sub(x,y);
//			break;
//		case 3:
//			ret = Mul(x,y);
//			break;
//		case 4:
//			ret = Div(x,y);
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//		printf("%d\n", ret);
//	} while (input);
//	system("pause");
//	return 0;
//}

//typedef void(*pfun_t)(int);//类型
//void(*p)(int)//变量
//void(*signal(int, void(*) (int)))(int)
//pfun_t signal(int,pfun_t)
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*p)(int, int) = Add;
//	printf("%d\n", p(1, 2));
//	system("pause");
//	return 0;
//}

//数组指针：存储数组的指针  int* (*p) [10]
//void print(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print(int(*arr)[5], int x, int y)
//{
//	int i = 0;
//		int j = 0;
//		for (i = 0; i < x; i++)
//		{
//			for (j = 0; j < y; j++)
//			{
//				printf("%d ", *(*(arr+i)+j));
//			}
//			printf("\n");
//		}
//}
//int main()
//{
//	//int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	/*int* p = arr;*/
//	int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
//	print(arr, 3, 5);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j= 10;
//	printf("%d\n", i + j);
//	//char a = -1;
//	////11111111
//	////1111111111111111111111111111111
//
//	//printf("%u\n", a);
//	//char a = 128;
//	////10000000
//	////111111111111111111111111110000000//42949674..
//	//unsigned b = 128;
//	////10000000
//	////000000000000000000000000100000000//128
//	//printf("%u %u", a, b);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d %d %d\n", a, b, c);
//	system("pause");
//	return 0;
//}
////联合体
//union Un
//{
//	int i;
//	char c[5];
//};
//int main()
//{
//	union Un un = { 0 };
//	printf("%d\n", sizeof(un));
//	system("pause");
//	return 0;
//}
//联合体大小端问题
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}un;
//	un.i = 1;
//	return un.c;
//}
//
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	system("pause");
//	return 0;
//}
//大小端
//int check_sys()
//{
//	int a = 1;
//	if ((*(char*)&a == 1))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret==1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	system("pause");
//	return 0;
//}
//void test()
//{
//	printf("hehe\n");
//}
//void test2(void)
//{
//	printf("test2");
//}
//int main()
//{
//	test2();
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int arr[5] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(char [5]));//数组类型
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char c;
//	unsigned c1;//无符号
//	signed c2;//有符号
//	system("pause");
//	return 0;
//}