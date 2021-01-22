#include <stdio.h>
#include <math.h>
void count(int a,int* num)
{
	int i=0;
	while (a)
	{
		if (a % 10 == 1)
		{
			num[i] += 1;
		}

		i++;
		a /= 10;
	}
}
int binary(int n)
{
	int ret = 0;
	int count = 0;
	while (n)
	{
		
		if (n % 2 == 1)
		{
			ret+=1 * pow(10,count);
		}
		n /= 2;
		count++;
	}
	return ret;
}
int main(void)
{
	int n;
	int num[5] = { 0 };
	for (n = 1; n <= 30; n++)
	{
		int a=binary(n);
		count(a,num);
	}
	for (int n = 0; n < 5; n++)
			printf("%d ", *(num+n));
	
	
	return 0;
}