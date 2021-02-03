��Щ�������������ǣ��ַ�����


>** strlen()�����ַ����ĳ��ȡ�**
> �ַ����ԡ���\0����Ϊ������־��strlen�������㷵�ء�\0��ǰ���ֵ��ַ�������
> �������޷������͡�

```c
size_t strlen(const char* str)
```
1, ������
2���ݹ鷨
3��ָ���ָ��
[ʵ��strlen()����](https://blog.csdn.net/weixin_52199109/article/details/112796848)

> ** strcpy()�����������ַ���������**
> 1�����뱣֤Դ�ַ����֡�\0��
> 2��Ŀ��ռ�����㹻�󣬱�֤�ܴ��Դ�ַ�����
> 3��Ŀ��ռ����ݱ�������޸ģ�����ʹ�ó����ַ�����

���Ǻ�����ԭ�������
```c
char* strcpy(char* strDestination, const char* strSource);
```
����ٸ�����
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char arr1[] = "abcdef";
	char arr2[20] = "***********";
	printf("%s\n", arr2);
	strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}
```
����ǰ������ͼ
![���������ͼƬ����](https://img-blog.csdnimg.cn/20210129211300204.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjE5OTEwOQ==,size_16,color_FFFFFF,t_70)
�����󣬼���
![���������ͼƬ����](https ://img-blog.csdnimg.cn/20210129211223949.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjE5OTEwOQ==,size_16,color_FFFFFF,t_70)
	�������Դ�ַ���������Ŀ�ĵ��ַ�����������\0'��
	ʵ��strcpy����

	```c
#include <stdio.h>
#include <string.h>
#include <assert.h>
	char* my_strcpy(char* arr2, const char* arr1)
{
	assert(arr1 && arr2);//��֤�������ݵ�ָ�벻��NULL�������޷�д��
	char* ret = arr2;
	while (*arr2 = *arr1)//���*arr1����\0���Ը���arr2���Ҹ�����Ϊ0,������ѭ��
	{
		arr1++;//����һλ��ȡ
		arr2++;
	}
	return ret;
}
int main(void)
{
	char arr1[] = "abcdef";
	char arr2[20] = "***********";
	printf("%s\n", arr2);
	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}
```

> ** strcat �������ַ���׷���ַ���**
> char* strcat(char* strDestination, const char* strSource);
> 1��Դ�ַ�������Ҫ��'\0'��β
> 2��Ŀ��ռ�����㹻��
> 3��Ŀ���ַ�����������޸�

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
int main(void)
{
	char arr1[] = "abcdef";
	char arr2[20] = "ghi";
	printf("%s\n", arr2);
	strcat(arr2, arr1);
	printf("%s", arr2);
	return 0;
}
```
׷�Ӻ󣬼���
![���������ͼƬ����](https://img-blog.csdnimg.cn/20210129213841346.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjE5OTEwOQ==,size_16,color_FFFFFF,t_70)
ʵ��strcat����

```c
#include <stdio.h>
#include <string.h>
#include <assert.h>
char* my_strcat(char* arr2, const char* arr1)
{
	assert(arr1 && arr2);
	char* ret = arr2;
	while (*arr2)//Ҫ���ҵ�arr2�ַ�����\0��
	{
		arr2++;
	}
	while (*arr2 = *arr1)//��׷���ַ���
	{
		arr1++;
		arr2++;
	}
	return ret;
}
int main(void)
{
	char arr1[] = "abcdef";
	char arr2[20] = "ghi";
	printf("%s\n", arr2);
	my_strcat(arr2, arr1);
	printf("%s", arr2);
	return 0;
}
```

> ** strcmp�Ƚ������ַ���**
> 1����һ���ַ������ڵڶ����ַ������򷵻ش���0������
> 2����һ���ַ������ڵڶ����ַ������򷵻�0
> 3����һ���ַ���С�ڵڶ����ַ������򷵻�С��0������

```c
int strcmp(const char* string1, const char* string2);
```

�����ַ���һ��һ���Ƚϣ������Ⱦͼ�������һ���ƶ���ֱ���Ƚ��ַ�����Ȼ��߷���1�� - 1��

```c
#include <stdio.h>
#include <string.h>
#include <assert.h>
int main(void)
{
	char arr1[] = "abcdef";
	char arr2[20] = "ghi";
	int ret = strcmp(arr1, arr2);
	printf("%d", ret);
	return 0;
}
```
�����һ����a��ASCII��С��g���� - 1��
ʵ��strcmp����

```c
#include <stdio.h>
#include <string.h>
#include <assert.h>
int my_strcmp(const char* arr1, const char* arr2)
{
	assert(arr1 && arr2);
	int ret;
	while (*arr1 && *arr2)//Ҫ��֤�����ַ�Ԫ�ض�������\0
	{
		if (*arr1 - *arr2 != 0)
			break;
		arr1++;
		arr2++;
	}
	ret = *arr1 - *arr2;
	if (ret > 0)
		return 1;
	else if (ret < 0)
		return -1;
	else
		return 0;
}

int main(void)
{
	char arr1[] = "ghi";
	char arr2[20] = "ghi";
	int ret = my_strcmp(arr1, arr2);
	printf("%d", ret);
	return 0;
}
```
** strstr**

```c
char* strstr(const char* string, const char* strCharSet);
//�ж�strCharSet�ǲ���string���Ӵ�
```
����stringt���Ӵ�strCharSet��һ�γ��ֵ�λ�ã���ӡ�����λ��ֱ�����ַ�Ϊֹ��

```c
#include <string.h>
#include <stdio.h>
int main(void)
{
	const char* arr1 = "abcdefghi";
	const char* arr2 = "cdef";
	char* ret = strstr(arr1, arr2);//�ж�arr1�е��Ӵ�����û��arr2  //arr2�ǲ���arr1���Ӵ�
	printf("%s", ret);
	return 0;
}
```
ʵ��strstr()����

```c
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>//strstr()������ͷ�ļ�
#include <stdio.h>
#include <assert.h>
char* my_strstr(const char* arr1, const char* arr2)
{
	assert(arr1 && arr2);
	char* aim = arr1;
	char* str = arr2;
	while (*aim)
	{
		arr1 = aim;
		while ((*arr1 == *arr2) && (*arr1))
		{
			arr1++;
			arr2++;
			if (*arr2 == '\0')
				return aim;//�ҵ��Ӵ���������
		}
		if (*arr1 != *arr2)
		{
			aim++;
			arr2 = str;
			continue;
		}
	}

	return NULL;//�������ѭ����������ʹ��������Ӵ�
}
int main(void)
{
	const char* arr1 = "abbbcd";
	const char* arr2 = "cd";
	char* ret = my_strstr(arr1, arr2);
	printf("%s", ret);
	return 0;
}
```
