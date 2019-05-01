#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define ADD(x,y) x+y
#define MUL(x,y) (x)*(y)
int main()
{
	int a = 10;
	int b = 20;
	int sum = ADD(a, b);
	printf("MUL=%d\n", MUL((1 + 2),(1 + 2)));
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}