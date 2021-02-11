#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "mail.h" 
struct mail infor[MAX];
void menu(void)
{
	printf("********************************\n");
	printf("********************************\n");
	printf("****1.ADD           2.DELET*****\n");
	printf("****3,LOOKUP        4.SHOW******\n");
	printf("****5.MODIFY        0.EXIT******\n");
	printf("********************************\n");
}
void option(int n)
{
	switch (n)
	{
		case ADD:
			ADDmail(& infor);
			break;
		case DEL:
			DELETmail(&infor);
			break;
		case LOOKUP:
			LOOKUPmail(infor); 
			break;
		case SHOW:
			SHOWmail(infor);
			break;
		case MODIFY:
			MODIFYmail(&infor);
			break;
		case EXIT:
			printf("EXIT THE MAIL\n");
			break;
		default :
			printf("input error,please enter again\n");
			break;
	}
}
int main(void)
{
	int input;
	
	//初始化通讯录
	contact(infor);
	do
	{
		menu();
		printf("please input your choice:>");
		scanf("%d", &input);
		option(input);
	} while (input);
	return 0;
}