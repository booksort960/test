#include <stdio.h>
#include <assert.h>
//int my_strlen(const char* p)//ָ�������
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

//int my_strlen(const char* p)//�ݹ鷨
//{
//	while (*p)
//	{
//		p++;
//		my_strlen(p);
//		return 1+my_strlen(p);//��ʱp�Ѿ��ǽ���ѭ����p+1;
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

//int my_strlen(const char* arr)//�������ķ���
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