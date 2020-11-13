#include <stdio.h>

int factorsum(int number);
void PrintPN(int m, int n);

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    if (factorsum(m) == m)
        printf("%d is a perfect number\n", m);
    if (factorsum(n) == n)
        printf("%d is a perfect number\n", n);
    PrintPN(m, n);
    return 0;
}

int factorsum(int number)
{
    int elements[12000];
    for (int d = 0; d < 12000; d++)
    {
        elements[d] = 0;
    }
    int i = 0;
    int a = 1;
    while (a < number)
    {
        if (number % a == 0)
        {
            elements[i] = a;
            i++;
        }
        a++;
    }
    int sum = 0;
    for (int d = 0; d < i; d++)
    {
        sum = elements[d] + sum;
    }
    return sum;
}

void PrintPN(int m, int n)
{
    int count = 0;
    for (int i = m; i <= n; i++)
    {
        if (factorsum(i) == i)
        {
            printf("%d =", i);
            for (int d = 1; d < i; d++)
            {
                if (i % d == 0 && d == 1)
                {
                    printf(" %d", d);
                }
                else if (i % d == 0)
                {
                    printf(" + %d", d);
                }
            }
            printf("\n");
            count++;
        }
    }
    if (count == 0)
    {
        printf("No perfect number");
    }
}