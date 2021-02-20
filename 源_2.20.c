#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 50
//void geta(char* arr, int n)
//{
//	int i;
//	for (i = 0; i <= n; i++)
//	{
//		if (*(arr + i) == ' ' || *(arr + i) == '\n' || *(arr + i) == '\0')
//			*(arr + i + 1) = '\0';
//	}
//	*(arr + n) = '\0';
//
//}
//int main(void)
//{
//	char arr[SIZE];
//	int n;
//	scanf("%d", &n);
//	getchar();
//	gets(arr);
//	geta(arr, n);
//	fputs(arr, stdout);
//	return 0;
//}
//void getwords(char* arr, int n)
//{
//	*(arr + n) = '\0';
//}
//int main(void)
//{
//	int n;
//	char ch;
//	char arr[50];
//	scanf("%d ", &n);
//	gets(arr);
//	getwords(arr, n);
//	puts(arr);
//}
//int test(int n)
//{
//	int ret = 0;
//	while ((n & 1)|| n)
//	{
//		if(n&1)
//			ret++;
//		n >>= 1;
//	} 
//	return ret;
//}
//int main(void)
//{
//	unsigned int n;
//	scanf("%d", &n);
//	int ret=test(n);
//	fprintf(stdout, "%d\n", ret);
//}
//#define f(x,y) ((x)+(y))
//int main(void)
//{
//	int a = 3, b = 4;
//	printf("%d\n", f(a++, b++));
//}