//#include <stdio.h>
//#include <assert.h>
//void my_sort(int num[], int sz)//奇偶分离
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		if (num[left] % 2 == 1)//num[left]为奇数
//		{
//			left++;
//		}
//		else//num[left]为偶数
//		{
//			while (left<=right)
//			{
//				if (num[right]%2 == 1)
//				{
//					int tmp = num[left];
//					num[left] = num[right];
//					num[right] = tmp;
//					break;
//				}
//				right--;
//			}
//		}
//	}
//
//}
//int main(void)
//{
//	int num[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(num) / sizeof(num[0]);
//	my_sort(num,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", num[i]);
//	}
//}
//char* my_strcpy(char* arr1, const char* arr2)
//{
//	assert(arr1 && arr2);
//	char* ret = arr1;
//	while (*arr1++=*arr2++)
//	{}
//	return ret;
//}
//int main(void)
//{
//	char arr1[20] = "abcdef";
//	const char arr2[] = "hello world";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//实现strlen()
//int main(void)
//{
//	char arr[] = "abcdef";
//	printf("%d",my_strlen(arr));
//}
//int my_strlen(const char* arr)
//{
//	if (*arr)
//		return 1 + my_strlen(arr + 1);
//	else 
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}
	

/*int num[] = { 1,2,3,4,5 };
	const int* p = num;
	int* const pt = num;
	num[0] = 10;
	*p = 10;
	*++p=10;
	*(pt + 1) = 10;
	pt++;*/