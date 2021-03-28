#include <stdio.h>
#define MAX 10
//#undef MAX
#ifdef MAX
	#include <string.h>
	#define MIN 10
#endif // 

int main(void)
{
	printf("%d", MIN);
}
