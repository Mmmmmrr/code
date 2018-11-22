#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
 
void meun()
{
	printf("*************************\n");
	printf("****      1.play     ****\n");
	printf("****      0.exit     ****\n");
	printf("*************************\n");
}
#define ROW 3
#define COL 3
void game()
{
	char board[ROW][COL] = { 0 };
	char ret = 0;
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		ComputerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != ' ')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		playerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != ' ')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	//DisplayBoard(board, ROW, COL);
	if (ret == '0')
	{
		printf("玩家赢\n");
	}
	else if (ret == 'X')
	{
		printf("电脑赢\n");
	}
	else if(ret == 'Q')
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		meun();
		printf("请选择：>");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		game();
		break;
	case 0:
		printf("退出游戏");
			break;
	default:
		printf("选择错误，请重新输入");
		break;
	}

	}while (input);


	return 0;
}