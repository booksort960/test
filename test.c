#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int check(int a)//�ж��ǲ�������
{
	//int flag = 1;
	for (int i = 2; i * i <= a; i++)
	{
		if (a % i == 0)
		{
			//flag = 0;
			return 0;
		}
	}
	return 1;

}
void try(int a)//�ж��ǲ��ǳ�������
{
	int flag;
	int c = a;
	while (a != 0)
	{
		int b = check(a % 10);
		if (b == 1)
		{
			flag = 1;
		}
		else
		{
			flag = 0;
			break;
		}
		a /= 10;
	}
	if (flag == 1)
		printf("%d�ǳ�������\n", c);
}
int main(void)
{
	int n, num;
	while (~scanf("%d", &n))
	{
		for (int i = 11; i <= n; i++)
		{
			num = check(i);
			if (num == 1)
			{
				try(i);
			}
		}

	}
	return 0;
}
