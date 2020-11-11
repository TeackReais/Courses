#include <stdio.h>

int fib(int n);
void PrintFN(int m, int n);

int main()
{
    int m, n, t;
    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);
    return 0;
}

int fib(int n)
{
    int num[3000];
    num[0] = 1;
    num[1] = 1;
    for (int i = 2; i < 3000; i++)
    {
        num[i] = num[i - 1] + num[i - 2];
    }
    return num[n - 1];
}
void PrintFN(int m, int n)
{
    double num[3000];
    num[0] = 1;
    num[1] = 1;
    for (int i = 2; i < 3000; i++)
    {
        num[i] = num[i - 1] + num[i - 2];
    }
    int count = 0;
    for (int i = 0; i < 3000; i++)
    {
        if (num[i] <= n && num[i] >= m)
        {
            if (count != 0)
            {
                printf(" ");
            }
            printf("%.0lf", num[i]);
            count++;
        }
    }
    if (count == 0)
    {
        printf("No Fibonacci number");
    }
}