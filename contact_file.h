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
	struct peo* po;
	struct date* next;
}sta;
sta* list,* head,*end;
void initiaCon(struct date* start);//��ʼ������
void Conadd(struct date* head);//������Ϣ
sta* init_linklist(sta* head,sta* end);//��ʼ������
sta* Conlookup(sta* head);//������Ϣ
void Condelete(sta* head);//ɾ����Ϣ
void Conmodify(sta* head);//�޸���Ϣ
void Conshow(sta* head);//��ӡͨѶ¼
