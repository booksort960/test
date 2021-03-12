#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#define NAME 20
#define SEX 10
#define ADRESS 50
#define TELE 50
enum
{
	Exit,
	Add,
	Delete,
	Lookup,
	Modify,
	Show,
	Preserve
};
struct peo
{
	char name[NAME];
	char sex[SEX];
	int age;
	char tele[TELE];
	char adress[ADRESS];
};
typedef struct date
{
	int num;
	struct peo po;
	struct date* next;
}sta;
sta* list,* head,*end;
void Conadd(struct date* head);//增加信息
void init_linklist(void);//初始化链表
sta* Conlookup(void);//查找信息
void Condelete(void);//删除信息
void Conmodify(void);//修改信息
void Conshow(void);//打印通讯录
