#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//int my_strcmp(const char* arr1, const char* arr2)
//{
//	assert(arr1 && arr2);
//	int ret;
//	while (*arr1 && *arr2)
//	{
//		if (*arr1 - *arr2!=0)
//			break;
//		arr1++;
//		arr2++;
//	}
//	ret = *arr1 - *arr2;
//	if (ret == 0)
//		return 0;
//	else if (ret > 0)
//		return 1;
//	else if (ret < 0)
//		return -1;
//}
//
//int main(void)
//{
//	char arr1[] = "ghi";
//	char arr2[20] = "ghi";
//	int ret=my_strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}
//char* my_strcat(char* arr2, const char* arr1)
//{
//	assert(arr1 && arr2);
//	char* ret = arr2;
//	while(*arr2)
//	{
//		arr2++;
//	}
//	while (*arr2 = *arr1)
//	{
//		arr1++;
//		arr2++;
//	}
//	return ret;
//}
//int main(void)
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = "ghi";
//	printf("%s\n", arr2);
//	my_strcat(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}
//char* my_strcpy(char* arr2, const char* arr1)
//{
//	assert(arr1 && arr2);//保证两个传递的指针不是NULL，导致无法写入
//	char* ret = arr2;
//	while (*arr2 = *arr1)
//	{
//		arr1++;
//		arr2++;
//	}
//	return ret;
//}
//int main(void)
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = "***********";
//	printf("%s\n", arr2);
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}