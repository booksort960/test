#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define N 8
//����˳���Ľṹ��
typedef int sel;
typedef struct seq
{
	sel* arr;
	sel size;
	sel capacity;
}sl;
void Testsequence();//����˳���
void initsequence(sl* a);//��ʼ����̬˳���
void sequpushfront(sl* a,int n);//ͷ�巨
void sequpushback(sl* a, int n);//β�巨
void sequpopmid(sl* a, int m);//�м�ɾ��
void sequpopfront(sl* a);//ͷɾ��
void sequpopback(sl* a);//βɾ��
void sequprint(sl* a);//��ӡ˳���
void checkcapacity(sl* a);//����Ƿ���Ҫ����


