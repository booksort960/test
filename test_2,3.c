#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//	int n;
//	int num[3][3] = { {1,2,3},
//					  {2,3,4},
//					  {3,4,5} };
//	printf("input number you wanted\n");
//	scanf("%d", &n);
//	if (n < num[0][2])
//	{
//		if (n > num[0][0])
//		{
//			for (int i = 0; i < 3; i++)
//			{
//				if (num[0][i] == n)
//				{
//					printf("find out,(0,%d)\n", i);
//					break;
//				}
//
//			}
//		}
//		else
//			printf("dont't have\n");
//	}
//	else if (n > num[0][2])
//	{
//		if (num[2][2] < n)
//		{
//			printf("NO\n");
//		}
//		else
//		{
//			for (int i = 0; i < 3; i++)
//			{
//				if (num[i][2] == n)
//				{
//					printf("find out ,(%d,2)\n", i);
//					break;
//				}
//				else if (num[i][2] > n)
//				{
//					int flag = 0;
//					for (int j = 0; j < 3; j++)
//					{
//						if (num[i][j] == n)
//						{
//							flag = 1;
//							printf("(%d,%d)\n", i, j);
//							break;
//						}
//					}
//					if (flag == 0)
//					{
//						printf("NO\n");
//						break;
//					}
//
//				}
//				printf("NO\n");
//			}
//		}
//	}
//	else
//		printf("find out ,(%d£¬%d)", 0, 2);
//
//
//}
//×óÐý×ª×Ö·û
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//char* rotate1(char* p, int n)
//{
//	char* ret = p;
//	int left = 0;
//	int right = n-1;
//	while (left <= right)
//	{
//		char* tmp = *(p + left);
//		*(p + left) = *(p + right);
//		*(p + right) = tmp;
//		left++;
//		right--;
//	}
//	return ret;
//}
//int main(void)
//{
//	char arr[20];
//	int n;
//	printf("input an array\n");
//	gets(arr);
//	int len = strlen(arr);
//	printf("input number you want to rotate\n");
//	scanf("%d", &n);
//	rotate1(arr, n);
//	rotate1(arr + n,len-n);
//	rotate1(arr,len);
//	puts(arr);
//}
//char* left_rotate(char* p, int n)
//{
//	assert(p);
//	char* ret = p;
//	int len = strlen(p);
//	for (int i = 0; i < n; i++)
//	{
//		char tmp = *p;
//		for (int j = 1; j < len; j++)
//		{
//			*(p+j-1) = *(p + j);
//		}
//		*(p + len - 1) = tmp;
//	}
//	return ret;
//}
//int main(void)
//{
//	char arr[20];
//	int n;
//	printf("input an array\n");
//	gets(arr);
//	printf("input number you want to rotate\n");
//	scanf("%d", &n);
//	left_rotate(arr, n);
//	puts(arr);
//	return 0;
//}
//void rotate(char* arr)
//{
//	assert(arr);
//	if (*arr)
//	{
//		int len = strlen(arr);
//		int left = 0;
//		int right = len - 1;
//		char tmp = *(arr + left);
//		*(arr + left) = *(arr + right);
//		*(arr + right) = '\0';
//		rotate(arr + 1);
//		*(arr + right) = tmp;
//	}
//}
//int main(void)
//{
//	char s1[20];
//	char s2[20];
//	printf("input s1\n");
//	scanf("%s", s1);
//	rotate(s1);
//	//printf("%s", s1);
//	printf("input s2\n");
//	scanf("%s", s2);
//	
//	int ret=strcmp(s1, s2);
//	if (ret != 0)
//		printf("0"); 
//	else
//		printf("1");
//	return 0;
//}