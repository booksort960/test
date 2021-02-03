这些函数操作对象都是，字符串。


>** strlen()计算字符串的长度。**
> 字符串以‘’\0‘作为结束标志，strlen函数计算返回‘\0’前出现的字符个数。
> 返回是无符号整型。

```c
size_t strlen(const char* str)
```
1, 计数器
2，递归法
3，指针减指针
[实现strlen()函数](https://blog.csdn.net/weixin_52199109/article/details/112796848)

> ** strcpy()函数，用于字符串拷贝。**
> 1，必须保证源字符串又‘\0’
> 2，目标空间必须足够大，保证能存放源字符串。
> 3，目标空间内容必须可以修改，不能使用常量字符串。

这是函数的原码的声明
```c
char* strcpy(char* strDestination, const char* strSource);
```
这个举个例子
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
交换前，监视图
![在这里插入图片描述](https://img-blog.csdnimg.cn/20210129211300204.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjE5OTEwOQ==,size_16,color_FFFFFF,t_70)
交换后，监视
![在这里插入图片描述](https ://img-blog.csdnimg.cn/20210129211223949.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjE5OTEwOQ==,size_16,color_FFFFFF,t_70)
	会把整个源字符串拷贝到目的地字符串，包括‘\0'。
	实现strcpy函数

	```c
#include <stdio.h>
#include <string.h>
#include <assert.h>
	char* my_strcpy(char* arr2, const char* arr1)
{
	assert(arr1 && arr2);//保证两个传递的指针不是NULL，导致无法写入
	char* ret = arr2;
	while (*arr2 = *arr1)//如果*arr1读到\0可以赋给arr2并且该条件为0,并跳出循环
	{
		arr1++;//向下一位读取
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

> ** strcat 可以在字符串追加字符串**
> char* strcat(char* strDestination, const char* strSource);
> 1，源字符串必须要有'\0'结尾
> 2，目标空间必须足够大
> 3，目标字符串必须可以修改

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
追加后，监视
![在这里插入图片描述](https://img-blog.csdnimg.cn/20210129213841346.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjE5OTEwOQ==,size_16,color_FFFFFF,t_70)
实现strcat函数

```c
#include <stdio.h>
#include <string.h>
#include <assert.h>
char* my_strcat(char* arr2, const char* arr1)
{
	assert(arr1 && arr2);
	char* ret = arr2;
	while (*arr2)//要先找到arr2字符串的\0处
	{
		arr2++;
	}
	while (*arr2 = *arr1)//再追加字符串
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

> ** strcmp比较两个字符串**
> 1，第一个字符串大于第二个字符串，则返回大于0的数字
> 2，第一个字符串等于第二个字符串，则返回0
> 3，第一个字符串小于第二个字符串，则返回小于0的数字

```c
int strcmp(const char* string1, const char* string2);
```

两个字符串一个一个比较，如果相等就继续向下一个移动，直到比较字符串相等或者返回1或 - 1。

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
这个第一个，a的ASCII码小于g返回 - 1。
实现strcmp函数

```c
#include <stdio.h>
#include <string.h>
#include <assert.h>
int my_strcmp(const char* arr1, const char* arr2)
{
	assert(arr1 && arr2);
	int ret;
	while (*arr1 && *arr2)//要保证两个字符元素都不能是\0
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
//判断strCharSet是不是string的子串
```
返回stringt中子串strCharSet第一次出现的位置，打印从这个位置直到空字符为止。

```c
#include <string.h>
#include <stdio.h>
int main(void)
{
	const char* arr1 = "abcdefghi";
	const char* arr2 = "cdef";
	char* ret = strstr(arr1, arr2);//判断arr1中的子串中有没有arr2  //arr2是不是arr1的子串
	printf("%s", ret);
	return 0;
}
```
实现strstr()函数

```c
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>//strstr()函数的头文件
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
				return aim;//找到子串，并返回
		}
		if (*arr1 != *arr2)
		{
			aim++;
			arr2 = str;
			continue;
		}
	}

	return NULL;//如果出了循环都到这里，就代表不存在子串
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
