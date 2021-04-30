//#include <stdio.h>
//int main(void)
//{
//    int n, max, min;
//    int mina, maxa;
//    int arr[10];
//    scanf_s("%d", &n);
//    for (int i = 0; i < n; ++i)
//    {
//        scanf_s("%d", &arr[i]);
//    }
//    min = arr[0];
//    mina = 0;
//    for (int i = 0; i < n; ++i)
//    {
//        if (min > arr[i])
//        {
//            min = arr[i];
//            mina = i;
//        }
//    }
//    int tmp = arr[0];
//    arr[0] = arr[mina];
//    arr[mina] = tmp;//最小的跟第一个交换
//    
//max = arr[0];
//    maxa = 0;
//
//    for (int i = 0; i < n; ++i)
//    {
//        if (max < arr[i])
//        {
//            max = arr[i];
//            maxa = i;
//        }
//    }
//    tmp = arr[n - 1];//最大的跟最后一个交换
//    arr[n - 1] = arr[maxa];
//    arr[maxa] = tmp;
//
//    for (int i = 0; i < n; ++i)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
/*#include <stdio.h>
int main(void)
{
    long int arr[10], sum = 0;
    int n;
    scanf_s("%d", &n);
    if (n < 1|| n>10)
    {
        printf("Invalid");
        return 0;
    }
    for (int i = 0; i < n; ++i)
    {
        scanf_s("%ld", &arr[i]);
        sum += arr[i];
    }
    double ave = (1.0 * sum) / n;
    printf("%.2lf\n", ave);
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > ave)
        {
            printf("%ld ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}*///#include <stdio.h>
//#include <math.h>
//int prime(int num)
//{
//    for (int i = 2; i < sqrt(num); ++i)
//    {
//        if (num % i == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//int main(void)
//{
//    int n;
//    scanf_s("%d", &n);
//    if (n <= 0 || n == 1)
//        return 0;
//    for (int i = n+1;; ++i)
//    {
//        if (prime(i) && prime(i + 2))
//        {
//            printf("%d %d", i, i + 2);
//            break;
//        }
//        else
//            continue;
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main(void)
//{
//    int n;
//    scanf_s("%d", &n);
//    int row = sqrt((n + 1) / 2);
//    for (int y = 1; y <= row; ++y)
//    {
//        for (int j = 1; j < y;++j)
//        {
//            printf(" ");
//        }
//        for (int x = 1; x <= 2 * (row - y) + 1; ++x)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    for (int y = 1; y <= row - 1; ++y)
//    {
//        for (int j = 1; j < row - y;++j)
//        {
//            printf(" ");
//        }
//        for (int x = 1; x <= 2 * y+1 ; ++x)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    printf("%d", n - (2 * row * row - 1));
//    return 0;
//
//}
//#include <stdio.h>
//#include <math.h>
//int narcissus(int i, int n)
//{
//    int num = i;
//    int sum = 0;
//    while (num)
//    {
//        sum += (int)pow(num % 10, n);
//        num /= 10;
//    }
//    if (sum == i)
//        return 1;
//    return 0;
//}
//int main(void)
//{
//    int n;
//    scanf_s("%d", &n);
//    int num = (int)pow(10, n-1);
//    for (int i = num; i < num * 10; ++i)
//    {
//        int flag = narcissus(i, n);
//        if (flag == 1)
//        {
//            printf("%d\n", i);
//        }
//    }
//    return 0;
