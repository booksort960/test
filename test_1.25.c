#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "game.h"
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define LEVEL 10
void game()
{
	char board[ROWS][COLS];
	char mine[ROWS][COLS];
	setboard(mine, ROWS, COLS,'0');//创建初始棋盘
	setmine(mine, ROW, COL);//布雷
	setboard(board, ROWS, COLS, '*');//给玩家看的棋盘
	while (1)
	{
		int ret;
		showboard(mine, ROW, COL);
		
		showboard(board, ROW, COL);//打印玩家棋盘
		//player(board);
		ret=cleanmine(board,mine,ROW,COL);//扫雷
		//showboard(board, ROW, COL);
		int count = 0;
		for (int i = 1; i <= ROW; i++)
		{
			
			for (int j = 1; j <= COL; j++)
			{

				if (board[i][j] == '*')
					count++;
			}
		}
		if (count ==  LEVEL)
		{
			printf("you win\n");
			break;
		}
		if (ret == 0)
			break;
		system("cls");
		
	}
	

}
void option(int input)
{
	switch (input)//分支语句
	{
	case 1:
		game();//扫雷开始
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
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
//void* my_memmove(void* num, void* arr, int n)
//{
//	for (int i = 0; i < 4 * n; i++)
//	{
//		char tmp = *((char*)num+i);
//		*((char*)num + i) = *((char*)arr + i);
//		*((char*)arr + i) = tmp;
//	}
//
//}
//int main(void)
//{
//	int num[] = { 1,2,3,4,5,6,7 };
//	int arr[] = { 9,8,7,6,5,4,3 };
//	int sz = sizeof(num) / sizeof(num[0]);
//	my_memmove(num, arr,sz);
//	for (int i = 0; i < sz; i++)
//		printf("%d ", num[i]);
//	printf("\n");
//	for(int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
//void print(int num[], int n)
//{
//	for (int i = 0; i < n; i++)
//		printf("%d ", num[i]);
//}
//void reverse(int num[], int n)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left <= right)
//	{
//		int tmp = num[left];
//		num[left] = num[right];
//		num[right] = tmp;
//		left++;
//		right--;
//	}
//	print(num, n);
//}
//int main(void)
//{
//	int num[] = { 1,2,3,4,5,6,7,8 };
//	int sz = sizeof(num) / sizeof(num[0]);
//	reverse(num, sz);
//	return 0;
//}