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
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            elements[i] = i;
        }
        else
        {
            elements[i] = 0;
        }
    }
    int sum = 0;
    for (int i = 1; i < number; i++)
    {
        sum = elements[i] + sum;
    }
    return sum;
}

void PrintPN(int m, int n)
{
    for (int i = m; i <= n; i++)
    {
        int elements[12000];
        for (int d = 1; d < i; d++)
        {
            if (i % d == 0)
            {
                elements[d] = d;
            }
            else
            {
                elements[d] = 0;
            }
        }
        if (factorsum(i) == i)
        {
            printf("%d = ", i);
            for (int d = 1; d < i; d++)
            {
                if (elements[d] != 0)
                {
                    if (d != 1)
                    {
                        printf(" + ");
                    }
                    printf("%d", d);
                }
            }
            printf("\n");
        }
    }
}