#include "sequence.h"
void Testsequence()//����˳���
{
	sl a;
	initsequence(&a);
	sequpushfront(&a,1);//ͷ�巨
	sequpushfront(&a, 1);//ͷ�巨
	sequpushfront(&a, 2);//ͷ�巨
	sequpushfront(&a, 3);//ͷ�巨
	sequpushfront(&a, 4);//ͷ�巨
	//sequpushback(&a,1);//β�巨
	//sequpushback(&a,2);//β�巨
	//sequpushback(&a,3);//β�巨
	//sequpushback(&a,4);//β�巨
	//sequpushback(&a,5);//β�巨
	sequpopfront(&a);//ͷɾ��
	//sequpopfront(&a);//ͷɾ��
	//sequpopfront(&a);//ͷɾ��
	//sequpopfront(&a);//ͷɾ��
	//sequpopfront(&a);//ͷɾ��
	sequpopback(&a);//βɾ��
	sequpopmid( &a, 2);//�м�ɾ��

	sequprint(&a);//��ӡ˳���


}
int main(void)
{
	Testsequence();
	return 0;
}