#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3
void game(void);//��������Ϸ
void setboard(char board[ROW][COL], int row, int col);//��������
void showboard(char board[ROW][COL], int row, int col);//��ӡ��չʾ����
void player(char board[ROW][COL]);//�������
void computer(char board[ROW][COL]);//��������
char judgewinner(char board[ROW][COL]);//�ж���Ӯ
char ifdraw(char board[ROW][COL]);//�ж��Ƿ�ƽ��