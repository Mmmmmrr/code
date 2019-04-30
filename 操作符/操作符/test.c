#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <assert.h>
#define N_VALUES 5

int my_strlen(const char* str)
{
	assert(str != NULL);
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char* a = "hello";
	int len = my_strlen(a);
	printf("%d\n", len);
	system("pause");
	return;
}
//int main()
//{
//	const int a = 10;
//	const int* p = &a;
//	//*p = 20; const修饰后a不能修改
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}

//char* my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//char* ret = dest;
//	/*if (src == NULL)
//		return;*/
//	while (*dest++ = *src++)
//	{
//		;
//	}
//    return ret;
//}
//int main()
//{
//	char arr[20] = "qqqqqqqq";
//	char* p = "hello";
//	my_strcpy(arr, p);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char arr[20] = "qqqqqqqqq";
//	char* p = "hello";
//	strcpy(arr, p);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}
//struct S
//{
//	char date[1000];
//	int n;
//};
//void print(struct S ss)
//{
//	printf("%s %d\n", ss.date, ss.n);
//}
//void print1(struct S* ps)
//{
//	printf("%s %d\n", ps->date, ps->n);
//
//}//结构体传参，形参压栈，会降低效率
//int main()
//{
//	struct S s = { "zhangsan", 100 };
//	int time1 = 0;
//	int time2 = 0;
//	int start = 0;
//	int end = 0;
//	int i = 0;
//	start = GetTickCount();
//	for (i = 0; i < 1000; i++)
//	{
//		print(s);
//	}
//	end = GetTickCount();
//	time1 = end - start;
//	start = GetTickCount();
//	for (i = 0; i < 1000; i++)
//	{
//		print1(&s);
//	}
//	end = GetTickCount();
//	time2 = end - start;
//	printf("%d %d\n", time1, time2);
//	system("pause");
//	return 0;
//}
//struct Point
//{
//	int x;
//	int y;
//};
//struct Node
//{
//	int date;
//	struct Point p;
//	struct Node* next;
//};
//int main()
//{
//	struct Node n= { 10, { 1, 2 }, NULL };
//	printf("%d {%d %d} %d\n",n.date,n.p.x, n.p.y,n.next);
//	system("pause");
//	return 0;
//}

//typedef struct Student
//{
//	char name[5];
//	int age;
//	char sex[5];
//}Student;//类型
////s1, s2, s3;//全局变量
//int main()
//{
//	//struct Student s;//局部变量
//	Student s = { "张三", 20, "男" };
//	printf("%s  %d  %s\n", s.name, s.age, s.sex);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//	int arr4[] = { 4, 5, 6, 7, 8 };
//	int* arr[] = { arr1, arr2, arr3, arr4 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//void print(char* arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s ", arr[i]);
//	}
//}
//void print(char** arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s ", arr[i]);
//	}
//}
//int main()
//{
//	char* arr[3] = { "zhangsan", "lisi", "wangwu" };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr1[5] = { 0 };
//	//[int][int][int][int][int]
//	int* arr2[5] = { 0 };
//	//[int*][int*][int*][int*][int*]
//	char arr3[5] = { 0 };
//	//[char][char][char][char][char]
//	char* arr[3] = { "zhanfsan", "wangwu", "lisi" };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s ", arr[i]);
//	}
//
//	system("pause");
//	return 0;
//}


////指针减指针
//int my_strlen1(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
////递归
//int my_strlen2(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//	return 1 + my_strlen2(1+str);
//}
////计数
//int my_strlen3(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char* p = "abcdef";
//	int len1 = my_strlen1(p);
//	int len2 = my_strlen2(p);
//	int len3 = my_strlen3(p);
//
//	printf("%d\n", len1);
//	printf("%d\n", len2);
//	printf("%d\n", len3);
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//		system("pause");
//	return 0;
//}//9  指针减指针得中间元素的个数
//int main()
//{
//	float values[N_VALUES];
//	float *vp;
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);//数组首元素的地址
//	printf("%d\n", sizeof(*arr));
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);//首元素的地址
//	printf("%d\n", sizeof(*&arr[0]));
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);//数组的地址
//	printf("%d\n", sizeof(*&arr));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char c = 1;
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(+c));
//	printf("%d\n", sizeof(!c));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a = 0xb6;
//	//10110110   b 6
//	//11111111111111111111111110110110
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//	{
//		printf("a");
//	}
//	if (b == 0xb600)
//	{
//		printf("b");
//	}
//	if (c == 0xb6000000)
//	{
//		printf("c");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}