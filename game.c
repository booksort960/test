#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"
//void game(void)
//{
//	char board[ROW][COL];//������ά����
//	setboard(board, ROW, COL);//��������
//	player(board);//��ҿ�ʼ����
//
//	computer(board);//���Կ�ʼ����
//
//}
void setboard(char board[ROW][COL], int row, int col)//������һ������
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
void showboard(char board[ROW][COL], int row, int col)//��ӡ����
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
void player(char board[ROW][COL])//�������
{
	int x, y;
	while (1)
	{
		printf("please input the coordinate:>");
		scanf("%d %d", &x, &y);//����Ҫ���ӵ�����
		if (x>=1&&x<=ROW&&y>=1&&y<=COL)//�жϸ����괦���Ƿ�δ�������
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
			printf("Coordinate is illegal,please input again\n");//��ʹ�ù�����������
	}
	//printf("*******************\n");
	printf("Player\n");
	showboard(board, ROW, COL);//��ӡÿ������������
}
void computer(char board[ROW][COL])//��������
{
	
	while (1)
	{
		int x = rand() % ROW;
		int y = rand() % COL;
		if (board[x][y] == ' ')//�жϸ����괦���Ƿ�δ�������
		{
			board[x][y] = '#';
			break;
		}
	}
	printf("Computer\n");
	//printf("*******************\n");
	showboard(board, ROW, COL);//��ӡÿ������������
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
	//�ж�һ��Ӯ
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
				return '*';//���Ӯ
			else if (board[i][j] == '#')
				return '#';//����Ӯ
		}
		if ((count != COL - 1) && (i == ROW - 1))
			return ifdraw(board);//ƽ��
	}
	//�ж���Ӯ
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
				return '*';//���Ӯ
			else if (board[i][j] == '#')
				return '#';//����Ӯ
		}
		if ((count != ROW - 1) && i == COL - 1)
			return ifdraw(board);//ƽ��
	}
	//�ж϶Խ���\Ӯ
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
				return '*';//���Ӯ
			else if (board[i][j] == '#')
				return '#';//����Ӯ
		}
	}
	
	return ifdraw(board);//ƽ��}
		
	
	//�Խ���/
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
				return '*';//���Ӯ
			else if (board[i][j] == '#')
				return '#';//����Ӯ
		}
		
	}
	
	return ifdraw(board);//ƽ��
	
}
