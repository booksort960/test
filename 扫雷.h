#include <time.h>
#define ROW 9
#define COL 9
#define _CRT_SECURE_NO_WARNINGS
#define ROWS ROW+2
#define COLS COL+2
#define LEVEL 10
#include <stdio.h>
#include <stdio.h>
void game(void);//ɨ����Ϸ
void setboard(char board[ROWS][COLS], int rows, int cols,char ret);//��ʼ������������
void showboard(char board[ROWS][COLS], int rows, int cols);//�����ӡ����
//void player(char board[ROWS][COLS]);//�������
void setmine(char mine[ROWS][COLS], int row, int col);//���õ���
int cleanmine(char board[ROWS][COLS], char mine[ROWS][COLS], int row, int col);
void space(char board[ROWS][COLS], char mine[ROWS][COLS], int x,int y);//�հ׵ݹ��㷨
int test(char mine[ROWS][COLS], int x, int y);//������Χ����