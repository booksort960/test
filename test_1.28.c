#include <stdio.h>
int main(void)
{
	
	int num[] = { 1,2,3,4,5 };
	const int* p = num;
	int* const pt = num;
	num[0] = 10;
	*p = 10;
	*++p=10;
	*(pt + 1) = 10;
	pt++;

}