#include <time.h>
#define ROW 9
#define COL 9
#define _CRT_SECURE_NO_WARNINGS
#define ROWS ROW+2
#define COLS COL+2
#define LEVEL 10
#include <stdio.h>
#include <stdio.h>
void game(void);//扫雷游戏
void setboard(char board[ROWS][COLS], int rows, int cols,char ret);//初始布置棋盘内容
void showboard(char board[ROWS][COLS], int rows, int cols);//负责打印棋盘
//void player(char board[ROWS][COLS]);//玩家输入
void setmine(char mine[ROWS][COLS], int row, int col);//布置地雷
int cleanmine(char board[ROWS][COLS], char mine[ROWS][COLS], int row, int col);
void space(char board[ROWS][COLS], char mine[ROWS][COLS], int x,int y);//空白递归算法
int test(char mine[ROWS][COLS], int x, int y);//计算周围雷数