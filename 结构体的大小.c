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
��A = 2�� B = 3ʱ��pointer���䣨 �����ֽڵĿռ䡣
```
�������ṹ���С�ļ������

> 1����һ����Ա������ṹ�����ƫ��Ϊ0�ĵ�ַ��
> 2��������Ա����Ҫ���뵽ĳ����������������������
> 3���ṹ��Ĵ�СΪ��������������������
> # * *������ * *= ������Ĭ�ϵ�һ������ó�Ա������С֮��Ľ�С����
> ���ṹ��Ƕ�׽ṹ��ʱǶ�׵Ľṹ����뵽�Լ��ṹ��������������������ƫ������

define �����MAXҪ�����滻�����Ϊ

```c
truct _Record_Struct * pointer = (struct _Record_Struct*)malloc
(sizeof(struct _Record_Struct) * 2 + 3);
```
��������ṹ��Ĵ�С
![���������ͼƬ����](https://img-blog.csdnimg.cn/20210323215326209.png)

������ܹ������ֽ�λ�ξ���Ϊ�˼��ٿռ����ģ�
Env_Alarm_IDռ4������λ
statePara1ռ2������λ
������ռ1���ֽ�
��state�Լ�ռ1���ֽ�
state������һ���ֽ���ռ1������λ
�ܹ�3���ֽ�
malloc������3 * 2 + 3��9���ֽ�
