#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"
#define ROW 3
#define COL 3
//����ֵ
//*
//#
//C-����
//D-ƽ��
void game(void)
{
	char ret;
	char board[ROW][COL];//������ά����
	setboard(board, ROW, COL);//��������
	while (1)
	{
		player(board);//��ҿ�ʼ����
		ret=judgewinner(board);//�ж���Ӯ
		if (ret != 'C')
			break;
		computer(board);//���Կ�ʼ����
		ret=judgewinner(board);//�ж���Ӯ
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
	switch (input)//��֧���
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
		menu();//��ӡ��Ϸ�˵�
		printf("please input option(1/0):>");
		scanf("%d", &input);
		option(input);//ѡ���ж�
	} while (input);
}