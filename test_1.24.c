#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"
#define ROW 3
#define COL 3
//返回值
//*
//#
//C-继续
//D-平局
void game(void)
{
	char ret;
	char board[ROW][COL];//创建二维数组
	setboard(board, ROW, COL);//制作棋盘
	while (1)
	{
		player(board);//玩家开始下棋
		ret=judgewinner(board);//判断输赢
		if (ret != 'C')
			break;
		computer(board);//电脑开始下棋
		ret=judgewinner(board);//判断输赢
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("The winner is player\n");
	else if (ret == '#')
		printf("The winner is computer\n");
	else if (ret == 'D')
		printf("Player and computer draw\n");

}
void option(int input)
{
	switch (input)//分支语句
	{
	case 1:
		game();
		break;
	case 0:
		printf("Logon out the game\n");
		break;
	default:
		printf("Input error,please input again\n");
		break;
	}
}
void menu(void)
{
	printf("Welcome to game\n");
	printf("\n");
	printf("****************\n");
	printf("*----1.play----*\n");
	printf("*----0.exit----*\n");
	printf("****************\n");
}
int main(void)
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//打印游戏菜单
		printf("please input option(1/0):>");
		scanf("%d", &input);
		option(input);//选项判断
	} while (input);
}