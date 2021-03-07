#include "contact_file.h"
#include <stdio.h>
static void inputdate(sta* infor);
static int ask(void);
void initiaCon(struct date* start)//初始化
{
	start->num = 0;
	init_linklist(head, end);
}
void Conadd(struct date* date)
{
	
	sta* node;
	do
	{
		node = (sta*)malloc(sizeof(sta));
		printf("PLease input the information\n");
		inputdate(node);
		end->next = node;
		end = node;
		(node->num)++;
		
	} while (ask());
	end->next = NULL;  
}
sta* init_linklist(sta* head,sta* end)
{
	head = (sta*)malloc(sizeof(sta));
	head->next = NULL;
	end = head;                                                                                                                                                         
	return end;  
}
void inputdate(sta*infor)
{
	printf("Name:>>");
	scanf("%s", (infor->po->name));
	printf("Sex:>>");
	scanf("%s", (infor->po->sex));
	printf("Age:>>");
	scanf("%d", &(infor->po->age));
	printf("Tele:>>");
	scanf("%s", (infor->po->tele));
	printf("Adress:>>");
	scanf("%s", (infor->po->adress));
}
static int ask(void)
{
	int n;
	printf("IF you want to operate again<1\\0>:");
	scanf("%d", &n);
	return n;
}
sta* Conlookup(sta* head)
{
	char name[NAME];
	printf("Please input the name that you want:>");
	scanf("%s", name);
	sta* p = head;
	p = p->next;
	while ((p != NULL))
	{
		if (strcmp(p->po->name, name))//查找名字是否匹配
		{
			inputdate(p->po);
			break;
		}
		else
		{
			p = p->next;
			continue;
		}
	}
	if (p == NULL)
	{
		printf("Sorry,don't find it.\n");
	}
	return p;
}
void Condelete(sta* head)
{
	sta*pt=Conlookup(head);
	if (pt == NULL)
	{
		printf("Deletion failed\n");
	}
	else
	{
		sta* st = pt;
		pt = pt->next;
		st->next = NULL;
		free(st);
		while (pt != NULL)
		{
			(pt->num)--;
			pt = pt->next;
		}
		if (pt == NULL)
			printf("Deletion success\n");
	}

}
void Conmodify(sta* head)
{
	sta* pt = Conlookup(head);
	if (pt == NULL)
		printf("Modification failed\n");
	else
	{
		printf("Please modify the information\n");
		inputdate(pt);
		printf("Modification success\n");
	}
}
void Conshow(sta* head)
{
	sta* p = head;
	p = p->next;
	printf("**Serial******Name******Age******Sex********Tele****************Adress**********************\n");
	while (p != NULL)
	{
		printf("*****************************************\n");
		printf("**%d      %s      %d      %s        %s                %s*****\n", p->po->name);
		p = p->next;
	}
}
