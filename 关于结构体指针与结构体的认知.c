#include <stdio.h>
struct poe
{
	int n;
};
int main(void)
{
	struct poe* num = (struct poe*)malloc(sizeof(struct poe));
	struct poe* p = num;
	struct poe sum;
}
//�������ӣ�����ÿ����һ���������������������������ͣ�������ջ�п���һ���ռ�
//�����ʼ��,�ͻ�����ʼ����ֵ������ͻ����һ�����ֵ
//��ʼ��ָ�룬��num,p���ǽṹ��ָ�룬��num,p�ⶼ�����ָ��ָ��ĵ�ַ����int n=10;n�ʹ���10һ������&num,&p�������ָ��ĵ�ַ��