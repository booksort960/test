#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 && p2);
	char* cur = (char*)p1;
	char* s2;
	char* s1;
	while (*cur)
	{
		s2 = (char*)p2;
		s1 = cur;
		while ((*s1) && (*s2) && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;
		}
		cur++;
	}
	return NULL;
}
int main(void)
{
	const char* pt = "abbbcdefg";
	const char* st = "bbc";
	char* ret = my_strstr(pt, st);
	if (ret == NULL)
	{
		printf("Don't have it\n");
	}
	else
		printf("%s\n", ret);
	return 0;
}