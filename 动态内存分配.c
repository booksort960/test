

> 创建变量
> 1，局部变量--栈区
> 2，全局变量--静态区
> 创建数组
> 1，局部数组--栈区
> 2，全局数组--静态区

![在这里插入图片描述](https://img-blog.csdnimg.cn/20210216213229100.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjE5OTEwOQ==,size_16,color_FFFFFF,t_70)

## 介绍动态内存分配函数

```c
malloc
free
calloc
realloc
```
所有的动态内存分配，都是在** 堆** 中进行分配
** 分别介绍动态内存函数**
** 1, malloc**

```c
void* malloc(size_t size)
```
向内存堆中申请size个字节，并返回该空间的首地址。同时定义一个指针来接受函数返回的地址。
如：

```c
int* p = (int*)malloc(10 * sizeof(int));
```
开辟了40个字节的动态空间，进行了类型转换，就像开辟了10个int类型的空间。
如果开辟失败，就会返回一个空指针NULL。
所以，使用指针时要检查。否则会因空指针造成非法访问。
当动态空间不再使用时，就要将空间返回给内存，防止堆满了。
** 2，free * *
释放空间

```c
void free（void * memblock(要释放的空间的首地址)）
```
free只是释放掉堆中的空间，但定义的指针是在栈中，并不会被销毁，也就是说，指针储存的地址依然存在，所定义的指针仍然可以指向那个空间，但空间已经被销毁，不具备访问权限，会造成非法访问。

```c
free(p);
p = NULL;
```
不仅释放空间，还要，将指针置为空指针，就无法访问了。

> 每次动态分配内存都要判断是否成功。

** 3，calloc * *
开辟一个数组空间，并将每个元素都置为0
```c
void* calloc(size_t num, size_t size)
```
num代表是元素个数，size代表每个元素的字节数。calloc将在堆中开辟一个数组，并将每个元素都置为0.返回开辟空间的首地址。同时要考虑用一个对应指针来接受。
* *4，realloc * *
调整动态开辟空间的大小

```c
void* realloc(void* memblock, size_t size);
```
举个例子

```c
int* p = (int*)malloc(5 * sizeof(int))
int* pp = (int*)realloc(p, 10 * sizeof(int))
if (p != NULL && pp != NULL)
{
	p = pp;
}
```
这样使用后就会将p指向的空间调整为10个int空间的动态空间。
** realloc使用细节**

> 1，在堆区中，malloc开辟了一块空间，再使用realloc增加空间，诺可以满足直接在原空间直接增加空间，就会直接追加，并返回原来地址。
> 2，诺无法满足条件，后面无法追加足够的空间，就会在堆区重新创建一个满足追加后的大小的空间，并将原空间的字节一一复制到这个新空间，并自动free掉原空间，返回新建空间的首地址，如果realloc失败，就会返回NULL

* *就是说，如果realloc要的空间较大，可能会开辟一个新的空间，改变返回的地址，所以要定义新的指针来接受realloc的返回地址。 * *

## 常见的动态内存开辟的错误
* *1，malloc开辟失败未判断 * *

```c
if (p == NULL)
{
	printf("%S", strerror(error));
}
else
{
	开辟成功
}
```
2，对动态开辟空间的越界访问
3，对非动态开辟空间的释放

```c
int num[10]; 在栈区开辟的不能free
free(num);
num = NULL;
```
4，对同一块动态内存进行多次释放，所以要p = NULL, 这样再次释放就没意义。
5，对动态空间未释放，会导致堆中满了，造成内存泄漏。
6，free了一部分动态空间，因为p的指向位置发生了改变，p不能改变。

## 举个例子

```c
#include <stdio.h>
void num(char* p)
{
	p = (int*)malloc(100);
}
void test(void)
{
	char* str = NULL;
	num(str);
	strcpy(str, "abcdef");
	printf(str);
}
int main(void)
{
	test();
	return 0;
}
```
有形式参数，存放在栈区。
一旦函数结束，就会被销毁，无法使用。
p只是str的形参，利用p开辟空间，但不会影响str。所以str还是NULL, strcpy会造成非法访问。
但这叫，传值操作。可以通过传址操作，可以改变实参。可以使用

> 1，二级指针，传址调用，地址是不会销毁
> 2，使用return，在销毁之前，就返回了动态空间的地址。

free只会销毁堆中的空间，但地址都还在栈中，不会受影响。

## 柔性数组
可以人为设置数组大小的数组。
要在结构体中设置。

```c
struct s
{
	int n;
	int arr[0];
};
sizeof(struct s)
```
当计算大小时，是不会计算柔性数组的大小。
除非，后面，使用malloc。

```c
struct s* p = malloc(sizeof(struct s) + 4 * sizeof(int));
```
可以这样动态开辟一个空间。同时为数组开辟一个空间。
![在这里插入图片描述](https://img-blog.csdnimg.cn/20210217142106862.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjE5OTEwOQ==,size_16,color_FFFFFF,t_70)
可以p->arr[i]访问到数组。
** 柔性数组的特点**

> 1，结构体中柔性数组成员前至少有一个其他类型的成员。
> 2，sizeof返回结构体大小不包括柔性数组的内存大小

还有指针类型的

```c
struct s
{
	int n;
	int* arr;
};
int main(void)
{
	struct s* p = (struct s*)malloc(sizeof(struct s));
	p->arr = (int*)malloc(10 * sizeof(int));
}
```
![在这里插入图片描述](https://img-blog.csdnimg.cn/20210217142926475.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjE5OTEwOQ==,size_16,color_FFFFFF,t_70)
arr得到这个开辟的空间的首地址，同时还强转成了int * 指针，这种也创建了一个数组。![在这里插入图片描述](https ://img-blog.csdnimg.cn/20210217143058886.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjE5OTEwOQ==,size_16,color_FFFFFF,t_70)
	同时还可以多次修改这个数组的大小。
	每次释放内存时先
	free（p->arr）, 要先找到这个数组空间，
	再free（P）。
	注意，当内存是连续的，可以提高访问效率，也有利于减少内存碎片，提高访问速度。
	同时，多次malloc会增加内存碎片，降低空间使用效率。
	目前就这些，谢谢观看。

