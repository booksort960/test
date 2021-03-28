#include <stdio.h>
#define MOVE(x) ((x&0xAAAAAAAA)>>1)|((x&55555555)<<1)
int main(void)
{
	int x = 10;
	
	printf("%d",MOVE(x));
	return 0;
}