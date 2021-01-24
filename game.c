#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"
//void game(void)
//{
//	char board[ROW][COL];//创建二维数组
//	setboard(board, ROW, COL);//制作棋盘
//	player(board);//玩家开始下棋
//
//	computer(board);//电脑开始下棋
//
//}
void setboard(char board[ROW][COL], int row, int col)//制作第一个棋盘
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
	showboard(board,ROW, COL);
}
void showboard(char board[ROW][COL], int row, int col)//打印棋盘
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{

			printf(" %c ", board[i][j]);
			if (j < col)
				printf("|");
		}
		if (i < row)
			printf("\n---|---|---|\n");
	}
}
void player(char board[ROW][COL])//玩家下棋
{
	int x, y;
	while (1)
	{
		printf("please input the coordinate:>");
		scanf("%d %d", &x, &y);//输入要落子的坐标
		if (x>=1&&x<=ROW&&y>=1&&y<=COL)//判断该坐标处，是否未被输入过
		{
			if (board[x - 1][y - 1] != ' ')
				printf("Coordinates occupied,please input again\n");
			else
			{
				board[x - 1][y - 1] = '*';
				break;
			}
		}
		else
			printf("Coordinate is illegal,please input again\n");//被使用过，重新输入
	}
	//printf("*******************\n");
	printf("Player\n");
	showboard(board, ROW, COL);//打印每次下棋后的棋盘
}
void computer(char board[ROW][COL])//电脑落子
{
	
	while (1)
	{
		int x = rand() % ROW;
		int y = rand() % COL;
		if (board[x][y] == ' ')//判断该坐标处，是否未被输入过
		{
			board[x][y] = '#';
			break;
		}
	}
	printf("Computer\n");
	//printf("*******************\n");
	showboard(board, ROW, COL);//打印每次下棋后的棋盘
}
char ifdraw(char board[ROW][COL])
{
	int i;
	for (i = 0; i < ROW; i++)
	{
		int j;
		for (j = 0; j < COL; j++)
		{
			if (board[i][j] == ' ')
				return 'C';
		}
	}
	return 'D';
}
char judgewinner(char board[ROW][COL])
{
	int count;
	//判断一行赢
	for (int i = 0; i < ROW; i++)
	{
		int j,count=0;
		for (j = 0; j < COL-1; j++)
		{
			if (board[i][j] != board[i][j + 1])
				break;
			else if (board[i][j] == board[i][j + 1])
				count++;
		}
		if (count == COL - 1)
		{
			if (board[i][j] == '*')
				return '*';//玩家赢
			else if (board[i][j] == '#')
				return '#';//电脑赢
		}
		if ((count != COL - 1) && (i == ROW - 1))
			return ifdraw(board);//平局
	}
	//判断列赢
	for (int i = 0; i < COL; i++)
	{
		int j, count = 0;
		for (j = 0; j < ROW - 1; j++)
		{
			if (board[i][j] != board[i][j + 1])
				break;
			else if (board[i][j] == board[i][j + 1])
				count++;
		}
		if (count == ROW - 1)
		{
			if (board[i][j] == '*')
				return '*';//玩家赢
			else if (board[i][j] == '#')
				return '#';//电脑赢
		}
		if ((count != ROW - 1) && i == COL - 1)
			return ifdraw(board);//平局
	}
	//判断对角线\赢
	count = 0;
	int i = 0;
	int j;
	while ((count != COL - 1) && (i <ROW-1))
	{
		j = i;
		if (board[i][j] == board[i + 1][j + 1])
			count++;
		else if (board[i][j] != board[i + 1][j + 1])
			break;
		i++;
		if (count == ROW - 1)
		{
			if (board[i][j] == '*')
				return '*';//玩家赢
			else if (board[i][j] == '#')
				return '#';//电脑赢
		}
	}
	
	return ifdraw(board);//平局}
		
	
	//对角线/
	count=0;
	i = ROW - 1;
		
	while (i>0)
	{
		j=ROW-i-1;
		if (board[i][j] == board[i - 1][j + 1])
			count++;
		else if (board[i][j] = board[i - 1][j + 1])
			break;
		i--;
		if (count == COL - 1)
		{
			if (board[i][j] == '*')
				return '*';//玩家赢
			else if (board[i][j] == '#')
				return '#';//电脑赢
		}
		
	}
	
	return ifdraw(board);//平局
	
}
