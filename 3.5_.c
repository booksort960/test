#include <stdio.h>
int main(void)
{

}
//void ace(char* p1, char* p2)
//{
//	int i = p2 - p1;
//	int le = 0;
//	int ri = i-1;
//	while (le <= ri)
//	{
//		char ad = *(p1 + le);
//		*(p1 + le) = *(p1 + ri);
//		*(p1 + ri) = ad;
//		le++;
//		ri--;
//	}
//}
//void exc(char* str)
//{
//	char* s = str;
//	char* head = str;
//	while (*s)
//	{
//		while(*str)
//		{
//			if (*str == ' ')
//			{
//				ace(s, str);
//				s = str + 1;
//			}
//			str++;
//		}
//		if (*str == '\0')
//		{
//			ace(s, str);
//			break;
//		}
//	}
//	ace(head, str);
//}
//int main(void)
//{
//	char arr[100];
//	gets(arr);
//	exc(arr);
//	puts(arr);
//	return 0;
//}