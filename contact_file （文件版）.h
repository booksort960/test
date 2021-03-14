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
	Preserve,
	Destory
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
void Conadd(void);//增加信息
void init_linklist(void);//初始化链表
sta* Conlookup(void);//查找信息
void Condelete(void);//删除信息
void Conmodify(void);//修改信息
void Conshow(void);//打印通讯录
void Conpreserve(void);//保存通讯录信息到文件中
void conload(void);//加载文件
void Condestory(void);//销毁文件

