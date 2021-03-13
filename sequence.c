#include "sequence.h"
void initsequence(sl* a)//��ʼ����̬˳���
{
	a->size = 0;
	a->capacity = N;
	a->arr = (sel*)malloc(sizeof(int) * N);
}
void sequpushfront(sl* a,int n)//ͷ�巨
{
	checkcapacity(&a);//����Ƿ���Ҫ����
	*(a->arr + a->size) = n;
	++(a->size);

}
void checkcapacity(sl* a)//����Ƿ���Ҫ����
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
void sequprint(sl* a)//��ӡ˳���
{
	for (int i = 0; i < a->size; i++)
		printf("%d ", *(a->arr + i));
}
void sequpushback(sl* a, int n)//β�巨
{
	checkcapacity(&a);//����Ƿ���Ҫ����
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
void sequpopfront(sl* a)//ͷɾ��
{
	for(int i=0;i<a->size-1;i++)
	{
		*(a->arr + i) = *(a->arr + i + 1);
	}
	--(a->size);
}
void sequpopback(sl* a)//βɾ��
{
	--(a->size);
}
void sequpopmid(sl* a, int n)//�м�ɾ��
{
	for (int i = n - 1; i < a->size-1; i++)
	{
		*(a->arr + i) = *(a->arr + i + 1);
	}
	--(a->size);
}