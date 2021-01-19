#include <stdio.h>
#include <assert.h>
#include <Stdlib.h>
#include <windows.h>

int main(void)
{
	char arr1[] = "hello world";
	char arr2[] = "***********";
	int len = strlen(arr1);
	int left = 0;
	int right = len - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
	}
	printf("%s\n", arr1);
	return 0;
}
///////////////////////////////////////////////
//int my_strcmp(char* p, const char* pt)
//{
//	assert(p && pt != NULL);
//	while (*p == *pt)
//	{
//		if (*p == '\0')
//			return 0;
//		p++;
//		pt++;
//	}
//	if (*p > *pt)
//		return 1;
//	else
//		return -1;
//}
//int main(void)
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abcde";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret > 0)
//		printf("arr1>arr2\n");
//	else if (ret == 0)
//		printf("arr1=arr2\n");
//	else
//		printf("arr1<arr2\n");
//	return 0;
//}

/////////////////////////////////////////////
//char* my_stract(char* p, const char* pt)
//{
//	assert(p && pt != NULL);
//	char* ret = p;
//	while (*p)//找到'\0'的地址,就跳出循环
//	{
//		p++;
//	}
//	while (*p++ = *pt++)//再追加
//	{
//		;
//	}
//	return ret;
//}
//int main(void)
//{
//	char arr1[30] = "hello";
//	char arr2[] = " world";
//	my_stract(arr1, arr2);
//	printf("%s", arr1);
//}

////////////////////////////////////////////
//char* my_strcpy(char* p, const char* pt)
//{
//	char* ret = p;
//	while (*p++=*pt++)//不等于'\0'，最后一次自增之后赋值’\0‘，表达式的值为0，退出
//	{
//		;
//	}
//	
//	return ret;//返回目的指针
//}
//
//int main(void)
//{
//	char arr1[] = "abcd";
//	char arr2[] = "efg";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}