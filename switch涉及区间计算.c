#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define KILO 100000
int main(void)
{
	int profit;
	scanf("%d", &profit);
	double award = 0;
	int result = profit / KILO;
	switch (result)
	{
	case 0:
		award = profit / 10;
		break;
	case 1:
		award = 100000 * 0.1 + (profit - 100000) *0.075;
		break;
	case 2:
		award = 100000 * 0.1 + 100000 * 0.075 + (profit - 200000) * 0.05;
		break;
	case 4:
		award = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05+(profit-400000)*0.03;
		break;
	case 6:
		award = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03+(profit-600000)*0.015;
		break;
	default:
		award = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 200000 * 0.015+(profit-1000000)*0.01;
		break;
	}
	printf("%.2lf", award);
	return 0;
}