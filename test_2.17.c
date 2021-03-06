#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int main(void)
//{
//
//}
//char* s_get(const char* arr, int n)
//{
//	int i = 0;
//	while (*arr != '\0' && *arr != '\n')
//	{
//		 
//	}
//}
//int main(void)
//{
//	char str1[] = "gawsie";
//	char str2[] = "bleeonism";
//	char* ps;
//	int i = 0;
//	for (ps = str1; *ps != '\0'; ps++)
//	{
//		if (*ps == 'a' || *ps == 'e')
//			putchar(*ps);
//		else
//			(*ps)--;
//		putchar(*ps);
//	}
//	putchar('\n');
//	while (str2[i] != '\0')
//	{
//		printf("%c", i % 3 ? str2[i] : '*');
//		++i;
//	}
//	return 0;
//}
//int main(void)
//{
//	char arr[] = "yummy";
//	char* p;
//	p = arr + strlen(arr);
//	while (--p >= arr)
//		puts(p);
//	return 0;
//}
//int main(void)
//{
//	char arr[] = "see you at the snack bar.";
//	char* p = arr;
//	puts(p);
//	puts(++p);
//	arr[7] = '\0';
//	puts(arr);
//	puts(++p);
//	return 0;
//}
//char* strpbrk(const char* arr1,const char* arr2);//////////////////
//int main(void)
//{
//	char arr1[50];
//	char arr2[50];
//	fgets(arr1, 50, stdin);
//	fgets(arr2, 50, stdin);
//	char* ret = strpbrk(arr1, arr2);
//	if (*ret == '\n' )
//	{
//		printf("don't exist\n");
//	}
//	else
//	{
//		printf("exist\n");
//	}
//	return 0;
//}
//char* strchr(const char* s,int c);///////////////////
//int main(void)
//{
//	char arr1[50];
//	char ch = 'c';
//	fgets(arr1,20, stdin);
//	char* tet=strchr(arr1, ch);
//	puts(tet);
//	return 0;
//}
//struct s
//{
//	int n;
//	int* arr;
//};
//int main(void)
//{
//	struct s* p = (struct s*)malloc(sizeof(struct s));
//	p->arr =(int*) malloc(10 * sizeof(int));
//}

//struct s
//{
//	int n;
//	int arr[0];
//};
//struct s* p = malloc(sizeof(struct s) + 4 * sizeof(int));
//void num(char* p)
//{
//	p = (int*)malloc(100);
//}
//void test(void)
//{
//	char* str = NULL;
//	num(str);
//	strcpy(str, "abcdef");
//	printf(str);
//}
//int main(void)
//{
//	test();
//	return 0;
//}