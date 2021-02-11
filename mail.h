#define _CRT_SECURE_NO_WARNINGS
#define NAME_MAX 30
#define SEX_MAX 10
#define TELE_MAX 13
#define ADR_MAX 60
#define MAX 100
#include <string.h>
#include <stdio.h>
struct peo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	int tele[TELE_MAX];
	char adress[ADR_MAX];
};
struct mail
{
	struct peo con[MAX];
	int num;
};
enum MyEnum
{
	EXIT=0,
	ADD,
	DEL,
	LOOKUP,
	SHOW,
	MODIFY
};
void contact(struct mail* infor);
void ADDmail(struct mail* infor);
void SHOWmail(struct mail infor[]);
void DELETmail(struct mail* infor);
void LOOKUPmail(const struct mail* infor);
void MODIFYmail(struct mail* infor);
