#include <stdio.h>
#include <assert.h>
char* my_strncpy(char* arr1, const char* arr2, int n)
{
	assert(arr1 && arr2);
	char* ret = arr1;
	while (n && (*arr1++ = *arr2++))
	{
		n--;
	}
	while (n)
	{
		*arr1 = '\0';
		n--;
	}
	return ret;
}
int main(void)
{
	char arr1[10] = "abcde";
	char arr2[] = "fghi";
	char* ret = my_strncpy(arr1, arr2, 6);
	puts(ret);
	return 0;
}