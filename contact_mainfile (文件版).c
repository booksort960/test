#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "contact_file.h"
void menu(void)
{
	printf("*******************************************\n");
	printf("*******************************************\n");
	printf("****1,Add                     2,Delete*****\n");
	printf("****3,Lookup                  4,Modify*****\n");
	printf("****5,Show                    6,Preserve***\n");
	printf("****7,Destory		      0,Exit*******\n");
	printf("*******************************************\n");
	printf("*******************************************\n");
	printf("*******************************************\n");
}
void option(int input)
{
	switch (input)
	{
		case Add:
			Conadd();
			break;
		case Delete:
			Condelete();
			break;
		case Lookup:
			Conlookup();
			break;
		case Modify:
			Conmodify();
			break;
		case Show:
			Conshow();
			break;
		case Preserve:
			Conpreserve();
			break;
		case Destory:
			Condestory();
			break;
		case Exit:
			Conpreserve();//保存通讯录信息到文件中
			printf("information preserved\n");
			printf("Program exit\n");
			break;
		default:
			printf("Program error\n");
			printf("Please input again\n");
			break;
	}
}
void init_linklist(void)
{
	
	(head) = (sta*)malloc(sizeof(sta));
	if (head == NULL)
	{
		printf("malloc defect\n");
	}
	else
	{
		(head)->num = 0;
		(head)->next = NULL;
		(end) = (head);
		end->num = head->num;
	}
	conload();//加载文件
}
int main(void)
{
	int input;
	init_linklist();
	do
	{
		menu();
		printf("Please input your choice:>>");
		scanf("%d", &input);
		option(input);
	} while (input);
	return 0;
}