#include <stdio.h>
#include <assert.h>
//int my_strlen(const char* p)//指针相减法
//{
//	char* ret = p;
//	while (*p)
//	{
//		p++;
//	}
//	return p - ret;
//
//}
//int main(void)
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//}

//int my_strlen(const char* p)//递归法
//{
//	while (*p)
//	{
//		p++;
//		my_strlen(p);
//		return 1+my_strlen(p);//此时p已经是进入循环的p+1;
//	}
//	return 0;
//	
//}
//int main(void)
//{
//	char arr[] = "abcde";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

//int my_strlen(const char* arr)//计数器的方法
//{
//	assert(arr);
//	int count = 0;
//	while (*arr)
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main(void)
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}