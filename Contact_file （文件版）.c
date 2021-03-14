#include "contact_file.h"
#include <stdio.h>
static void inputdate(sta* infor);
static int ask(void);
void Conadd(void)
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
		if (strcmp(p->po.name, name))//查找名字是否匹配
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
	sta*pt=Conlookup();
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
	sta* pt = Conlookup();
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
	sta* p = head;
	
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
void Conpreserve(void)//保存通讯录信息到文件中
{
	sta* p = head;
	p = p->next;
	FILE* ptr=fopen("contact1.dat", "wb");
	if (ptr == NULL)
	{
		printf("open file defect\n");
		return;
	}
	else
	{
		while (p != NULL)
		{
			fwrite(p, sizeof(sta), 1, ptr);
			p = p->next;
		}
	}
	fclose(ptr);
	ptr = NULL;
	printf("Information preserved");
}
void conload(void)//加载文件
{
	sta* p = head;
	p = p->next;
	int ret;
	FILE* ptr = fopen("contact1.dat", "rb");
	if (ptr == NULL)
	{
		printf("File loading failed\n");
		return;
	}
	else
	{
		printf("File loading successfully\n");
		do
		{
			p = (sta*)malloc(sizeof(sta));
			ret = fread(p, sizeof(sta), 1, ptr);
			if (ret == 0)
			{
				free(p);
				break;
			}
			end->next = p;
			end = p;
		}while (ret) ;
		end->next = NULL;
	}
	fclose(ptr);
	ptr = NULL;
}
void Condestory(void)//销毁文件
{
	FILE* ptr = fopen("contact.dat", "wb");
	printf("File destoryed\n");
}