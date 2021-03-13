#include "sequence.h"
void initsequence(sl* a)//初始化动态顺序表
{
	a->size = 0;
	a->capacity = N;
	a->arr = (sel*)malloc(sizeof(int) * N);
}
void sequpushfront(sl* a,int n)//头插法
{
	checkcapacity(&a);//检查是否需要扩容
	*(a->arr + a->size) = n;
	++(a->size);

}
void checkcapacity(sl* a)//检查是否需要扩容
{
	if (a->size >= a->capacity)
	{
		a->capacity *= 2; 
		a->arr =(sel*) realloc( a->arr,sizeof(int) * (a->capacity));
		if (a->arr == NULL)
		{
			printf("realloc defect");
			exit(-1);
		}
	}
}
void sequprint(sl* a)//打印顺序表
{
	for (int i = 0; i < a->size; i++)
		printf("%d ", *(a->arr + i));
}
void sequpushback(sl* a, int n)//尾插法
{
	checkcapacity(&a);//检查是否需要扩容
	int head = 0;
	int end = a->size;
	while (end>=head)
	{
		*(a->arr + end + 1) = *(a->arr + end);
		
		--end;
	}
	++(a->size);
	*(a->arr + head) = n;
}
void sequpopfront(sl* a)//头删法
{
	for(int i=0;i<a->size-1;i++)
	{
		*(a->arr + i) = *(a->arr + i + 1);
	}
	--(a->size);
}
void sequpopback(sl* a)//尾删法
{
	--(a->size);
}
void sequpopmid(sl* a, int n)//中间删除
{
	for (int i = n - 1; i < a->size-1; i++)
	{
		*(a->arr + i) = *(a->arr + i + 1);
	}
	--(a->size);
}