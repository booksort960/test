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
void Conadd(struct date* head);//������Ϣ
void init_linklist(void);//��ʼ������
sta* Conlookup(void);//������Ϣ
void Condelete(void);//ɾ����Ϣ
void Conmodify(void);//�޸���Ϣ
void Conshow(void);//��ӡͨѶ¼
