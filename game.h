#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3
void game(void);//三子棋游戏
void setboard(char board[ROW][COL], int row, int col);//创建棋盘
void showboard(char board[ROW][COL], int row, int col);//打印、展示棋盘
void player(char board[ROW][COL]);//玩家落子
void computer(char board[ROW][COL]);//电脑落子
char judgewinner(char board[ROW][COL]);//判断输赢
char ifdraw(char board[ROW][COL]);//判断是否平局