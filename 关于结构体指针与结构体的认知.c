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
//经过监视，发现每声明一个变量，不仅会声明变量的类型，还会在栈中开辟一个空间
//如果初始化,就会放入初始化的值，否则就会放入一个随机值
//初始化指针，像num,p都是结构体指针，而num,p这都代表该指针指向的地址，与int n=10;n就代表10一样。而&num,&p才是这个指针的地址。