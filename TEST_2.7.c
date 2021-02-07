#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void* my_memmove(void* arr2, const void* arr1, int num)
{
	if (arr1 < arr2)//从后向前
	{
		while (num--)
		{
			*((char*)arr2 + num) = *((char*)arr1 + num);
		}
	}
	else//从前向后
	{
		while (num--)
		{
			*((char*)arr2) = *((char*)arr1);
			((char*)arr2)++;
			((char*)arr1)++;
		}
	}
}
int main(void)
{
	int num[] = { 1,2,3,4,5,6,7,8,9 };
	int ret = sizeof(num) / sizeof(num[0]);
	my_memmove(num + 2, num+3, 3*4);
	for (int i = 0; i < ret; i++)
		printf("%d ", num[i]);
	return 0;
}
//int main(void)
//{
//	int num[] = { 1,2,3,4,5,6,7,8,9 };
//	memmove(num, num+2, 3*sizeof(num[0]));
//	for (int i = 0; i < 9; i++)
//		printf("%d ", num[i]);
//	return 0;
//}
void* my_memcpy(void* arr2, void* arr1, int num)
{
	for (int i = 0; i < num; i++)
	{
		*((char*)arr2) = *((char*)arr1);
		(char*)arr2++;
		(char*)arr1++;
	}
}
int main(void)
{
	char arr1[] = "abcdefg";
	char arr2[50] = "*********";
	int ret = sizeof(arr1) / sizeof(arr1[0])-1;
	my_memcpy(arr2 + 3, arr1, ret);
	printf("%s\n", arr2);
	return 0;
}
//int main(void)
//{
//	char arr1[] = "ab.cd.ef";
//	char* arr2 = ".";
//	char* ret=NULL;
//	for (ret = strtok(arr1, arr2); ret != NULL; ret = strtok(NULL, arr2))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}