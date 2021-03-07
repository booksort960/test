//#pragma pack(4)/*编译选项，表示4字节对齐 平台：VS2013。语言：C语言*/
#include <stdio.h>
#include <stddef.h>
int main(int argc, char* argv[])
{
   /* struct tagTest1
    {
        short a;
        char d;
        long b;
        long c;
    };
    struct tagTest2
    {
        long b;
        short c;
        char d;
        long a;
    };
    struct tagTest3
    {
        short c;
        long b;
        char d;
        long a;
    };
    struct tagTest1 stT1;
    struct tagTest2 stT2;
    struct tagTest3 stT3;

    printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
    printf(" %u %d",offsetof(struct tagTest1, c),sizeof(long));*/
   /* struct a
    {
        int b;
        char c;
    };
    printf("%u %d", offsetof(struct a, c),sizeof(struct a));*/
    return 0;
}
//#pragma pack()