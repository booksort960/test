�����ӽڵ��ͬʱ�������ӵĽڵ����β�ڵ㡣
������ͷ�ڵ㣬β�ڵ㣬���ǽڵ㣬���ǽṹ�����͡�ͼ�У��ṹ�����ͣ�head�е�date��Ա��һ�������ֵ����Ҳ������Ϊ�ڵ�ļ�������

![���������ͼƬ����](https://img-blog.csdnimg.cn/20210306153147418.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjE5OTEwOQ==,size_16,color_FFFFFF,t_70)

��Ӧ����β�巨
```c
#include <stdio.h>
#include <stdlib.h>
//ÿ���ڵ���������ָ����
typedef struct Node
{
	int date;
	struct Node* next;
}linklist;
linklist* creat(int n)
{
	linklist* head, * node, * end;
	head = (linklist*)malloc(sizeof(linklist));
	end = head;//�ڿ�ʼʱ��β�ڵ���ͷ�ڵ���һ������ʾΪ������
	for (int i = 0; i < n; i++)
	{
		node = (linklist*)malloc(sizeof(linklist));
		scanf("%d", &(node->date));
		end->next = node;//���������ͷ�������һ���ڵ����ӣ�������ͷ�ڵ��nextָ��ָ���½ڵ㣬���½ڵ��������
		end = node;//ͬʱ�µĽ�����β�ڵ�
	}
	end->next = NULL;//������Ϳ����ÿա�
	return head;
}
void show(linklist* str)
{
	linklist* p = str;
	p = p->next;//�����ȡͷ������
	while (p != NULL)
	{
		printf("%d\n", p->date);
		p = p->next;
	}
}
int main(void)
{
	//ʹ�������������
	int n;
	scanf("%d", &n);
	linklist* str = creat(n);
	show(str);
	return 0;
}
```
ͷ�巨
![���������ͼƬ����](https://img-blog.csdnimg.cn/20210306161626217.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjE5OTEwOQ==,size_16,color_FFFFFF,t_70)


```c
#include <stdio.h>
#include <stdlib.h>
//ÿ���ڵ���������ָ����
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
		node->next = head->next;//����ǵ�һ�β��룬node->next�ͻ���NULL��������ǣ��ͻ�������һ���Ľڵ�
		head->next = node;//ͷ�ڵ�����ӵ��¼ӵĽڵ�ĵ�ַ
	}
	return head;
}
void show(linklist* str)
{
	linklist* p = str;
	p = p->next;//�����ȡͷ������
	while (p != NULL)
	{
		printf("%d\n", p->date);
		p = p->next;
	}
}
int main(void)
{
	//ʹ�������������
	int n;
	scanf("%d", &n);
	linklist* str = creat(n);
	show(str);
	return 0;
}
```
��Ȼ��Ҫ����ĳ���ط�����ڵ㣬Ҳ��������ͷ�巨��

```c
node->next = head->next;
head->next = node;
```
��Ȼ��ͷ�巨������ǵ���ġ����ҵ���⣩