#define _CRT_SECURE_NO_WARNINGS
//头插法
//#include <stdio.h>
//#include <stdlib.h>
////每个节点数据域与指针域
//typedef struct Node
//{
//	int date;
//	struct Node* next;
//}linklist;
//linklist* creat(int n) 
//{
//	linklist* head, * node, * end;
//	head = (linklist*)malloc(sizeof(linklist));
//	head->next = NULL;
//	end = head;
//	for (int i = 0; i < n; i++)
//	{
//		node = (linklist*)malloc(sizeof(linklist));
//		scanf("%d", &(node->date));
//		node->next = head->next;
//		head->next = node;
//	}
//	return head;
//}
//void show(linklist* str)
//{
//	linklist* p = str;
//	p = p->next;//避免读取头部数据
//	while (p != NULL)
//	{
//		printf("%d\n", p->date);
//		p = p->next;
//	}
//}
//int main(void)
//{
//	//使用链表进行输入
//	int n;
//	scanf("%d", &n);
//	linklist* str = creat(n);
//	show(str);
//	return 0;
//}
//尾插法链表
//#include <stdio.h>
//#include <stdlib.h>
////每个节点数据域与指针域
//typedef struct Node
//{
//	int date;
//	struct Node* next;
//}linklist;
//linklist* creat(int n)
//{
//	linklist* head, * node,* end;
//	head = (linklist*)malloc(sizeof(linklist));
//	end = head;
//	for (int i = 0; i < n; i++)
//	{
//		node = (linklist*)malloc(sizeof(linklist));
//		scanf("%d", &(node->date));
//		end->next = node;
//		end = node;
//	}
//	end->next = NULL;
//	return head;
//}
//void show(linklist* str)
//{
//	linklist* p = str;
//	p = p->next;//避免读取头部数据
//	while (p != NULL)
//	{
//		printf("%d\n", p->date);
//		p = p->next;
//	}
//}
//int main(void)
//{
//	//使用链表进行输入
//	int n;
//	scanf("%d", &n);
//	linklist* str = creat(n);
//	show(str);
//	return 0;
//}
