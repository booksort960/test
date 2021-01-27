#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void setboard(char board[ROWS][COLS], int rows, int cols,char ret)
{
	int i;
	for (i = 0; i < rows; i++)
	{
		int j;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = ret;
		}
	}

}

void showboard(char board[ROWS][COLS], int rows, int cols)
{
	for (int a = 0; a <= cols; a++)
		printf("%d ",a);
	printf("\n");
	int i;
	int a = 1;
	for (i = 1; i <= rows; i++)
	{
		printf("%d ", a++);
		int j;
		for (j = 1; j <= cols; j++)
		{
			printf("%c|", board[i][j]);
		}
		printf("\n");
	}
}
//void player(char board[ROWS][COLS], int row, int col)
//{
//	
//}
void setmine(char mine[ROWS][COLS], int row, int col) //²¼À×
{
	
	int level=LEVEL;
	while (level)
	{
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			level--;
		}

	}

}
int cleanmine(char board[ROWS][COLS],char mine[ROWS][COLS],int row,int col)
{
	int x, y;
	while (1)
	{
		printf("please input the coordinate:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '0')
			{
				board[x][y] = test(mine, x, y) + '0';
				//¿Õ°×µÝ¹éËã·¨
				space(board, mine, x, y);
				//showboard(board, ROW, COL);
				break;
			}
			else if (mine[x][y] == '1')
			{
				printf("You died\n");
				return 0;
				break;
			}
		}
		else
			printf("Coordinate is illegal,please input again\n");
	}
	printf("player\n");
	//showboard(board, ROW, COL);
	return 1;
}
int test(char mine[ROWS][COLS], int x, int y)
{
	int count = 0;
	for (int i = x - 1; i <= x + 1; i++)
	{
		for (int j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
				count++;
		}
	}
	return count;
}
//¿Õ°×µÝ¹éËã·¨
void space(char board[ROWS][COLS], char mine[ROWS][COLS], int x, int y)
{
	int i;
	if(test(mine, x, y)==0)
	{
		board[x][y] = ' ';
		for (i = x-1; i <=x+1; i++)
		{
			int j;
			for (j = y-1; j <=y+1; j++)
			{
				if (i > 0 && i <= ROW && j > 0 && j <= COL && mine[i][j] != '1'&&board[i][j]=='*')
				{
					space(board, mine, i, j);
				}
			}
		} 
	}
	else
		board[x][y] = '0' + test(mine, x, y);
	
	
}
//int loop(char mine[ROWS][COLS],int x,int y)
// {
//	if (x > 0 && x <= ROW && y > 0 && y <= COL)
//	{
//		for (int i = x - 1; i <= x + 1; i++)
//		{
//			for (int j = y - 1; j <= y + 1; j++)
//			{
//				if (mine[i][j] != '0')
//					return 0;
//			}
//		}
//		return 1;
//	}
//	return 0;
//		
//}
//void space(char board[ROWS][COLS], char mine[ROWS][COLS], int row, int col,int x,int y)
//{
//	if (loop(mine, x, y))
//	{
//		if(x > 0 && x <= ROW && y > 0 && y <= COL)
//		{
//			for (int i = x - 1; i <= x + 1; i++)
//			{
//				for (int j = y - 1; j <= y + 1; j++)
//				{
//					space(board, mine, row, col, i, j);
//
//					if (i - 1 > 0 && i + 1 <= ROW && j - 1 > 0 && j + 1 <= COL)
//					{
//						for (int a = i - 1; a <= i + 1; a++)
//						{
//							for (int b = j - 1; b <= j + 1; b++)
//							{
//								board[a][b] = '0';
//							}
//						}
//					}
//				}
//			}
//		}
//		/*for (int i = x - 1; i <= x + 1; i++)
//		{
//			for (int j = y - 1; j <= y + 1; j++)
//			{
//				space(board, mine, row, col,i ,j );
//				
//				for (int a = i - 1; a<= i + 1; a++)
//				{
//					for (int b = j - 1; b <= j + 1; b++)
//					{
//						board[a][b] = ret;
//					}
//				}
//			}
//		}*/
//		/*char ret = '0';
//		for (int i = x - 1; i <= x + 1; i++)
//		{
//			for (int j = y - 1; j <= y + 1; j++)
//			{
//				board[i][j] = ret;
//			}
//		}*/
//	}
//	//
//
//}
