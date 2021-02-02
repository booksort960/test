#include <stdio.h>
int main(void)
{

}
//void swap(char* a, char* b,int width)
//{
//	int i;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *a;
//		*a = *b;
//		*b = tmp;
//		a++;
//		b++;
//	}
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//int compare(const void* ele1, const void* ele2)
//{
//	return ((struct stu*)ele1)->age - ((struct stu*)ele2)->age;
//}
//void my_qsort(int num, int len, int width, int(*compare)(const void* ele1, const void* ele2))
//{
//	int i;
//	for (i = 0; i < len-1; i++)
//	{
//		int j;
//		for (j = 0; j < len- 1 - i; j++)
//		{
//			if (compare((char*)num + j * width, (char*)num + (j + 1) * width) > 0)
//			{
//				swap((char*)num + j * width, (char*)num + (j + 1) * width, width);
//			}
//		}
//	}
//
//}
//
//int main(void)
//{
//	struct stu arr[] = { {"tom",20},{"jim",18},{"alen",99} };
//	int num[] = { 5,6,4,3,2,1,8,7,9,9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr, len, sizeof(arr[0]), compare);
//	for (int j = 0; j < len; j++)
//		printf("%s-%d ", arr[j].name,arr[j].age);
//	return 0;
//}