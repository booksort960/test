#define _CRT_SECURE_NO_WARNINGS

#include "mail.h"
void contact(struct mail* infor)
{
	memset(infor->con, 0, sizeof(infor->con));
	infor->num = 0;
}
void ADDmail(struct mail* infor)
{
	if (infor->num == MAX)
	{
		printf("THe mail id full\n");
	}
	else
	{
		while (1)
		{
			
			printf("please input  the name:");
			scanf("%s", (infor->con)->name);
			printf("please input  the age:");
			scanf("%d", &((infor->con)->age));
			printf("please input  the sex:");
			scanf("%s", (infor->con)->sex);
			printf("please input  the tele:");
			scanf("%s", (infor->con)->tele);
			printf("please input  the adress:");
			scanf("%s", (infor->con)->adress);
			++infor->num;
			printf("ADD SUCCESS\n");
			if (infor->num != MAX)
			{
				int ans;
				printf("Do you want to input again?(1/0)\n");
				scanf("%d", &ans);
				if (ans==1)
					continue;
				else 
					break;
			
			}
			
		}
	}
}
void SHOWmail(struct mail infor[])
{
	for (int i = 0; i < infor->num; i++)
	{
		printf("___________________________________________________________________________________________________\n");
		printf("NUM\t\tNAME\t\tAGE\t\tSEX\t\tTELE\t\tADRESS\n");
		printf("%-15d\t%-15s\t%-15d\t%-15s\t%-15s\t%-15s\n", infor->num ,
			(infor->con[i]).name,
			(infor->con[i]).age,
			(infor->con[i]).sex,
			(infor->con[i]).tele,
			(infor->con[i]).adress);
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	}
}
void DELETmail(struct mail* infor)
{
	char name[30];
	while (1)
	{
		printf("please input the name that you want:\n");
		scanf("%s", name);
		for (int i = 0; i < infor->num; i++)
		{
			if (strcmp(name, (infor->con[i]).name))
			{
				for (int j = i; j < infor->num - 1; j++)
				{
					infor->con[j] = infor->con[j + 1];
				}
			}
			else
			{
				printf("sorry,don't find\n");
			}
			break;
		}
		int ans;
		printf("Do you want to input again?(1/0)\n");
		scanf("%d", &ans);
		if (ans == 1)
			continue;
		else
			break;
	}
}
void LOOKUPmail(const struct mail* infor)
{
	char name[NAME_MAX];
	printf("please input the name that you want\n");
	gets(name);
	for (int i = 0; i < infor->num; i++)
	{
		if (strcmp(name, infor->con[i].name))
		{
			printf("___________________________________________________________________________________________________\n");
			printf("NUM\t\tNAME\t\tAGE\t\tSEX\t\tTELE\t\tADRESS\n");
			printf("%-15d\t%-15s\t%-15d\t%-15s\t%-15s\t%-15s\n", infor->num,
				(infor->con[i]).name,
				(infor->con[i]).age,
				(infor->con[i]).sex,
				(infor->con[i]).tele,
				(infor->con[i]).adress);
			printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		}
		else if (i == infor->num)
		{
			printf("Dont't have\n");
		}
	}
}
void MODIFYmail(struct mail* infor)
{
	char name[NAME_MAX];
	printf("please input the name that you want\n");
	gets(name);
	for (int i = 0; i < infor->num; i++)
	{
		if (strcmp(name, infor->con[i].name))
		{
			printf("please input  the name:");
			scanf("%s", (infor->con)->name);
			printf("please input  the age:");
			scanf("%d", &((infor->con)->age));
			printf("please input  the sex:");
			scanf("%s", (infor->con)->sex);
			printf("please input  the tele:");
			scanf("%s", (infor->con)->tele);
			printf("please input  the adress:");
			scanf("%s", (infor->con)->adress);
			break;
		}
	}
	
}