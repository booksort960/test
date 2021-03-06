再增加节点的同时，新增加的节点就是尾节点。
无论是头节点，尾节点，还是节点，都是结构体类型。图中，结构体类型，head中的date成员，一般是随机值，但也可以作为节点的计数器。

![在这里插入图片描述](https://img-blog.csdnimg.cn/20210306153147418.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjE5OTEwOQ==,size_16,color_FFFFFF,t_70)

这应该是尾插法
```c
#include <stdio.h>
#include <stdlib.h>
//每个节点数据域与指针域
typedef struct Node
{
	int date;
	struct Node* next;
}linklist;
linklist* creat(int n)
{
	linklist* head, * node, * end;
	head = (linklist*)malloc(sizeof(linklist));
	end = head;//在开始时，尾节点与头节点是一个，表示为空链表
	for (int i = 0; i < n; i++)
	{
		node = (linklist*)malloc(sizeof(linklist));
		scanf("%d", &(node->date));
		end->next = node;//这个可以让头结点与下一个节点链接，就是让头节点的next指针指向新节点，让新节点插入链表
		end = node;//同时新的结点就是尾节点
	}
	end->next = NULL;//结束后就可以置空。
	return head;
}
void show(linklist* str)
{
	linklist* p = str;
	p = p->next;//避免读取头部数据
	while (p != NULL)
	{
		printf("%d\n", p->date);
		p = p->next;
	}
}
int main(void)
{
	//使用链表进行输入
	int n;
	scanf("%d", &n);
	linklist* str = creat(n);
	show(str);
	return 0;
}
```
头插法
![在这里插入图片描述](https://img-blog.csdnimg.cn/20210306161626217.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjE5OTEwOQ==,size_16,color_FFFFFF,t_70)


```c
#include <stdio.h>
#include <stdlib.h>
//每个节点数据域与指针域
typedef struct Node
{
	int date;
	struct Node* next;
}linklist;
linklist* creat(int n)
{
	linklist* head, * node, * end;
	head = (linklist*)malloc(sizeof(linklist));
	head->next = NULL;
	end = head;
	for (int i = 0; i < n; i++)
	{
		node = (linklist*)malloc(sizeof(linklist));
		scanf("%d", &(node->date));
		node->next = head->next;//如果是第一次插入，node->next就会是NULL，如果不是，就会链接下一个的节点
		head->next = node;//头节点会链接到新加的节点的地址
	}
	return head;
}
void show(linklist* str)
{
	linklist* p = str;
	p = p->next;//避免读取头部数据
	while (p != NULL)
	{
		printf("%d\n", p->date);
		p = p->next;
	}
}
int main(void)
{
	//使用链表进行输入
	int n;
	scanf("%d", &n);
	linklist* str = creat(n);
	show(str);
	return 0;
}
```
当然，要是再某个地方插入节点，也是类似于头插法的

```c
node->next = head->next;
head->next = node;
```
当然，头插法输入就是倒叙的。（我的理解）