

> ��������
> 1���ֲ�����--ջ��
> 2��ȫ�ֱ���--��̬��
> ��������
> 1���ֲ�����--ջ��
> 2��ȫ������--��̬��

![���������ͼƬ����](https://img-blog.csdnimg.cn/20210216213229100.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjE5OTEwOQ==,size_16,color_FFFFFF,t_70)

## ���ܶ�̬�ڴ���亯��

```c
malloc
free
calloc
realloc
```
���еĶ�̬�ڴ���䣬������** ��** �н��з���
** �ֱ���ܶ�̬�ڴ溯��**
** 1, malloc**

```c
void* malloc(size_t size)
```
���ڴ��������size���ֽڣ������ظÿռ���׵�ַ��ͬʱ����һ��ָ�������ܺ������صĵ�ַ��
�磺

```c
int* p = (int*)malloc(10 * sizeof(int));
```
������40���ֽڵĶ�̬�ռ䣬����������ת�������񿪱���10��int���͵Ŀռ䡣
�������ʧ�ܣ��ͻ᷵��һ����ָ��NULL��
���ԣ�ʹ��ָ��ʱҪ��顣��������ָ����ɷǷ����ʡ�
����̬�ռ䲻��ʹ��ʱ����Ҫ���ռ䷵�ظ��ڴ棬��ֹ�����ˡ�
** 2��free * *
�ͷſռ�

```c
void free��void * memblock(Ҫ�ͷŵĿռ���׵�ַ)��
```
freeֻ���ͷŵ����еĿռ䣬�������ָ������ջ�У������ᱻ���٣�Ҳ����˵��ָ�봢��ĵ�ַ��Ȼ���ڣ��������ָ����Ȼ����ָ���Ǹ��ռ䣬���ռ��Ѿ������٣����߱�����Ȩ�ޣ�����ɷǷ����ʡ�

```c
free(p);
p = NULL;
```
�����ͷſռ䣬��Ҫ����ָ����Ϊ��ָ�룬���޷������ˡ�

> ÿ�ζ�̬�����ڴ涼Ҫ�ж��Ƿ�ɹ���

** 3��calloc * *
����һ������ռ䣬����ÿ��Ԫ�ض���Ϊ0
```c
void* calloc(size_t num, size_t size)
```
num������Ԫ�ظ�����size����ÿ��Ԫ�ص��ֽ�����calloc���ڶ��п���һ�����飬����ÿ��Ԫ�ض���Ϊ0.���ؿ��ٿռ���׵�ַ��ͬʱҪ������һ����Ӧָ�������ܡ�
* *4��realloc * *
������̬���ٿռ�Ĵ�С

```c
void* realloc(void* memblock, size_t size);
```
�ٸ�����

```c
int* p = (int*)malloc(5 * sizeof(int))
int* pp = (int*)realloc(p, 10 * sizeof(int))
if (p != NULL && pp != NULL)
{
	p = pp;
}
```
����ʹ�ú�ͻὫpָ��Ŀռ����Ϊ10��int�ռ�Ķ�̬�ռ䡣
** reallocʹ��ϸ��**

> 1���ڶ����У�malloc������һ��ռ䣬��ʹ��realloc���ӿռ䣬ŵ��������ֱ����ԭ�ռ�ֱ�����ӿռ䣬�ͻ�ֱ��׷�ӣ�������ԭ����ַ��
> 2��ŵ�޷����������������޷�׷���㹻�Ŀռ䣬�ͻ��ڶ������´���һ������׷�Ӻ�Ĵ�С�Ŀռ䣬����ԭ�ռ���ֽ�һһ���Ƶ�����¿ռ䣬���Զ�free��ԭ�ռ䣬�����½��ռ���׵�ַ�����reallocʧ�ܣ��ͻ᷵��NULL

* *����˵�����reallocҪ�Ŀռ�ϴ󣬿��ܻῪ��һ���µĿռ䣬�ı䷵�صĵ�ַ������Ҫ�����µ�ָ��������realloc�ķ��ص�ַ�� * *

## �����Ķ�̬�ڴ濪�ٵĴ���
* *1��malloc����ʧ��δ�ж� * *

```c
if (p == NULL)
{
	printf("%S", strerror(error));
}
else
{
	���ٳɹ�
}
```
2���Զ�̬���ٿռ��Խ�����
3���ԷǶ�̬���ٿռ���ͷ�

```c
int num[10]; ��ջ�����ٵĲ���free
free(num);
num = NULL;
```
4����ͬһ�鶯̬�ڴ���ж���ͷţ�����Ҫp = NULL, �����ٴ��ͷž�û���塣
5���Զ�̬�ռ�δ�ͷţ��ᵼ�¶������ˣ�����ڴ�й©��
6��free��һ���ֶ�̬�ռ䣬��Ϊp��ָ��λ�÷����˸ı䣬p���ܸı䡣

## �ٸ�����

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
����ʽ�����������ջ����
һ�������������ͻᱻ���٣��޷�ʹ�á�
pֻ��str���βΣ�����p���ٿռ䣬������Ӱ��str������str����NULL, strcpy����ɷǷ����ʡ�
����У���ֵ����������ͨ����ַ���������Ըı�ʵ�Ρ�����ʹ��

> 1������ָ�룬��ַ���ã���ַ�ǲ�������
> 2��ʹ��return��������֮ǰ���ͷ����˶�̬�ռ�ĵ�ַ��

freeֻ�����ٶ��еĿռ䣬����ַ������ջ�У�������Ӱ�졣

## ��������
������Ϊ���������С�����顣
Ҫ�ڽṹ�������á�

```c
struct s
{
	int n;
	int arr[0];
};
sizeof(struct s)
```
�������Сʱ���ǲ��������������Ĵ�С��
���ǣ����棬ʹ��malloc��

```c
struct s* p = malloc(sizeof(struct s) + 4 * sizeof(int));
```
����������̬����һ���ռ䡣ͬʱΪ���鿪��һ���ռ䡣
![���������ͼƬ����](https://img-blog.csdnimg.cn/20210217142106862.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjE5OTEwOQ==,size_16,color_FFFFFF,t_70)
����p->arr[i]���ʵ����顣
** ����������ص�**

> 1���ṹ�������������Աǰ������һ���������͵ĳ�Ա��
> 2��sizeof���ؽṹ���С����������������ڴ��С

����ָ�����͵�

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
![���������ͼƬ����](https://img-blog.csdnimg.cn/20210217142926475.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjE5OTEwOQ==,size_16,color_FFFFFF,t_70)
arr�õ�������ٵĿռ���׵�ַ��ͬʱ��ǿת����int * ָ�룬����Ҳ������һ�����顣![���������ͼƬ����](https ://img-blog.csdnimg.cn/20210217143058886.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjE5OTEwOQ==,size_16,color_FFFFFF,t_70)
	ͬʱ�����Զ���޸��������Ĵ�С��
	ÿ���ͷ��ڴ�ʱ��
	free��p->arr��, Ҫ���ҵ��������ռ䣬
	��free��P����
	ע�⣬���ڴ��������ģ�������߷���Ч�ʣ�Ҳ�����ڼ����ڴ���Ƭ����߷����ٶȡ�
	ͬʱ�����malloc�������ڴ���Ƭ�����Ϳռ�ʹ��Ч�ʡ�
	Ŀǰ����Щ��лл�ۿ���

