#include <stdio.h>
long gongyinshu(long A, long B);
long gongbeishu(long A, long B);
int main()
{
    long A;
    long B;
    scanf("%ld", &A);
    scanf("%ld", &B);
    long gys = gongyinshu(A, B);
    long gbs = gongbeishu(A, B);
    printf("%ld %ld", gys, gbs);
    return 0;
}

long gongyinshu(long A, long B)
{
    long result;
    long min;
    if (A >= B)
    {
        min = B;
    }
    else
    {
        min = A;
    }
    for (long i = 1; i <= min; i++)
    {
        if (A % i == 0 && B % i == 0)
        {
            result = i;
        }
    }
    return result;
}

long gongbeishu(long A, long B)
{
    long result;
    long max;
    if (A <= B)
    {
        max = B;
    }
    else
    {
        max = A;
    }
    long i = max;
    while (1)
    {
        if (i % A == 0 && i % B == 0)
        {
            result = i;
            break;
        }
        i++;
    }
    return result;
}
