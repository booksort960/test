#include "contact_file.h"
#include <stdio.h>
static void inputdate(sta* infor);
static int ask(void);
//void init_linklist(sta* head,sta* end)
//{
//	head = (sta*)malloc(sizeof(sta));
//	if (head == NULL)
//	{
//		printf("malloc defect\n");
//	}
//	else
//	{
//		head->num = 0;
//		head->next = NULL;
//		end = head;
//	}                                                                                                                                                
//}

void Conadd(struct date* date)
{
	
	sta* node;
	do
	{
		node = (sta*)malloc(sizeof(sta));
		printf("PLease input the information\n");
		inputdate(node);
		node->num = end->num + 1;
		end->next = node;
		end = node;
		
		
	} while (ask());
	end->next = NULL;  
}

void inputdate(sta*infor)
{
	printf("Name:>>");
	scanf("%s", (infor->po.name));
	printf("Sex:>>");
	scanf("%s", (infor->po.sex));
	printf("Age:>>");
	scanf("%d", &(infor->po.age));
	printf("Tele:>>");
	scanf("%s", (infor->po.tele));
	printf("Adress:>>");
	scanf("%s", (infor->po.adress));
}
static int ask(void)
{
	int n;
	printf("IF you want to operate again<1\\0>:");
	scanf("%d", &n);
	return n;
}
sta* Conlookup(void)
{
	char name[NAME];
	printf("Please input the name that you want:>");
	scanf("%s", name);
	sta* p = head;
	p = p->next;
	while ((p != NULL))
	{
		if (strcmp(p->po.name, name))//²éÕÒÃû×ÖÊÇ·ñÆ¥Åä
		{
			printf("*****************************************\n");
			printf("**%d      %s      %d      %s        %s                %s*****\n", p->num, p->po.name, p->po.age, p->po.sex, p->po.tele, p->po.adress);
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
void Condelete(void)
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
void Conmodify(void)
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
void Conshow(void)
{
	sta* p = (head);
	if ((head)->next == NULL)
	{
		printf("Sorry,don't have any information");
		exit(1);
	}
	p = p->next;
	printf("**Serial******Name******Age******Sex********Tele****************Adress**********************\n");
	while (p != NULL)
	{
		printf("*****************************************\n");
		printf("**%d      %s      %d      %s        %s                %s*****\n",p->num, p->po.name,p->po.age,p->po.sex,p->po.tele,p->po.adress);
		p = p->next;
	}
}
