#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define N 8
//创建顺序表的结构体
typedef int sel;
typedef struct seq
{
	sel* arr;
	sel size;
	sel capacity;
}sl;
void Testsequence();//测试顺序表
void initsequence(sl* a);//初始化动态顺序表
void sequpushfront(sl* a,int n);//头插法
void sequpushback(sl* a, int n);//尾插法
void sequpopmid(sl* a, int m);//中间删除
void sequpopfront(sl* a);//头删法
void sequpopback(sl* a);//尾删法
void sequprint(sl* a);//打印顺序表
void checkcapacity(sl* a);//检查是否需要扩容


