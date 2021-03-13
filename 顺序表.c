#include "sequence.h"
void Testsequence()//测试顺序表
{
	sl a;
	initsequence(&a);
	sequpushfront(&a,1);//头插法
	sequpushfront(&a, 1);//头插法
	sequpushfront(&a, 2);//头插法
	sequpushfront(&a, 3);//头插法
	sequpushfront(&a, 4);//头插法
	//sequpushback(&a,1);//尾插法
	//sequpushback(&a,2);//尾插法
	//sequpushback(&a,3);//尾插法
	//sequpushback(&a,4);//尾插法
	//sequpushback(&a,5);//尾插法
	sequpopfront(&a);//头删法
	//sequpopfront(&a);//头删法
	//sequpopfront(&a);//头删法
	//sequpopfront(&a);//头删法
	//sequpopfront(&a);//头删法
	sequpopback(&a);//尾删法
	sequpopmid( &a, 2);//中间删除

	sequprint(&a);//打印顺序表


}
int main(void)
{
	Testsequence();
	return 0;
}