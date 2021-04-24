#include <stdio.h>
int main(void)
{
	int i = 1;
	int flag = 1;
	double sum = 0;
	double tmp;
	double exp;
	scanf_s("%lf", &exp);
	if (exp >= 1 || exp <= 0)
	{
		printf("input error");
		return 0;
	}
	do
	{
		tmp = 1.0 / i;
		double num = flag * tmp;
		sum += num;
		i += 2;
		flag *= -1;
	} while (tmp >= exp);
	printf("%.6lf", 4*sum);
	return 0;
}