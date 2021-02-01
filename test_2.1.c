#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void move(char* p)
{
	
}
char* exchange(char* arr)
{
	char* ret = arr;
	while (*arr)
	{
		if (*arr == ' ')
		{
			move(arr);
		}
		arr++;
	}
}
int main(void)
{
	char p[50] = "abc defgx yz";
	exchange(p);
	printf("%s", p);
}
//int main(void)
//{
//	int a, b, c, d, e;//选手
//	//char p;//冠军
//	if (((b = 1)&& (a = 3))==1)
//	{
//		if (((b = 2) && (e = 4))==1)
//		{
//			if (((c = 1) && (d = 2))==1)
//			{
//				if (((c = 5) && (d = 3))==1)
//				{
//					if (((e = 4) && (a = 1))==1)
//					{
//						if ((a + b + c + d + e) == 15)
//						{
//							printf("a->%d,b->%d,c->%d,d->%d,e->%d\n", a, b, c, d, e);
//						}
//
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//逻辑题，寻找罪犯
//int main(void)
//{
//	char a,b,c,d;//罪犯
//	char str;//凶手
//	for (str = 'a'; str <= 'd'; str++)
//	{
//		if ((str != 'a') + (str == 'c') + (str == 'd') + (str != 'd') == 3)
//		{
//			printf("The murderer is %c", str);
//		}
//	}
//	return 0;
//}
//杨辉三角、、二维数组
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	int num[100][100];
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		int j;
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || j == i)
//			{
//				num[i][j] = 1;
//				printf("%d ",num[i][j]);
//			}
//			else if (j > 0)
//			{
//				num[i][j] = num[i - 1][j - 1] + num[i - 1][j];
//				printf("%d ", num[i][j]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}