```c
#define MAX_SIZE A+B
struct _Record_Struct
{
	unsigned char Env_Alarm_ID : 4;
	unsigned char Para1 : 2;
	unsigned char state;
	unsigned char avail : 1;
}*Env_Alarm_Record;
struct _Record_Struct* pointer = (struct _Record_Struct*)malloc
(sizeof(struct _Record_Struct) * MAX_SIZE);
当A = 2， B = 3时，pointer分配（ ）个字节的空间。
```
来看看结构体大小的计算规则

> 1，第一个成员变量与结构体变量偏移为0的地址处
> 2，其他成员变量要对齐到某个数（对齐数）的整数倍
> 3，结构体的大小为其中最大对齐数的整数倍
> # * *对齐数 * *= 编译器默认的一个数与该成员变量大小之间的较小的数
> 当结构体嵌套结构体时嵌套的结构体对齐到自己结构体内最大对齐数的整数倍偏移量处

define 定义的MAX要进行替换，结果为

```c
truct _Record_Struct * pointer = (struct _Record_Struct*)malloc
(sizeof(struct _Record_Struct) * 2 + 3);
```
再来计算结构体的大小
![在这里插入图片描述](https://img-blog.csdnimg.cn/20210323215326209.png)

这就是总共三个字节位段就是为了减少空间消耗，
Env_Alarm_ID占4个比特位
statePara1占2个比特位
两个共占1个字节
而state自己占1个字节
state从新在一个字节中占1个比特位
总共3个字节
malloc开辟了3 * 2 + 3共9个字节
