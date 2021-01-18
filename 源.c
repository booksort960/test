#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <String.h>
#include <assert.h>
void an(char* pt,int b)
{
	char* left = pt;
	char* right = pt + b;
	while (left <= right)
	{
		char tmp = *(left);
		*(left) = *(right);
		*(right) = tmp;
		left++;
		right--;
	}
}
void flip(char* p, int a)
{
	int len = strlen(p);
	assert(a <= len);
	
	//翻转ab
	an(p, a-1);
	//翻转cdef
	an(p + a, len -a-1);
	//全部翻转
	an(p, len-1);
}
int main(void)
{
	char arr[] = "abcdef";
	flip(arr, 6);
	printf("%s", arr);
}
//#include <stdio.h>//字符左旋-穷举法
//#include <String.h>
//void move(char* p, int a,int len)
//{
//	for (int i = 0; i < a; i++)
//	{
//		char tmp = *p;
//		for (int j = 0; j < len - 1; j++)
//		{
//			*(p + j) = *(p + j + 1);
//		}
//		*(p + len - 1) = tmp;
//	}
//	printf("%s\n", p);
//}
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	char arr[] = "abcdef";
//	int len= strlen(arr);
//	move(arr, n, len);
//	return 0;
//} 