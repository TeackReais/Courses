#include <stdio.h>

int fn(int a, int n);
int SumA(int a, int n);

int main()
{
    int a, n;
    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a, n));
    printf("s = %d\n", SumA(a, n));
    return 0;
}

int fn(int a, int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int temp = 1; //float精度要降低点，不然可能突然增加
        for (int d = 1; d <= i; d++)
        {
            if (d == 1)
            {
                continue;
            }
            temp = temp * 10;
        }
        sum = sum + temp * a;
    }
    return sum;
}

int SumA(int a, int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + fn(a, i);
    }
    return sum;
}