#include <stdio.h>

int narcissistic(int number);
void PrintN(int m, int n);

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    if (narcissistic(m))
        printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if (narcissistic(n))
        printf("%d is a narcissistic number\n", n);
    return 0;
}

int narcissistic(int number)
{
    int numberbit[30];
    for (int i = 0; i < 30; i++)
    {
        numberbit[i] = 0;
    }
    int i = 0;
    int num = number;
    while (1)
    {
        if (num == 0)
        {
            break;
        }
        numberbit[i] = num % 10;
        num = num / 10;
        i++;
    }
    long sum = 0;
    long persum;
    for (int d = 0; d < 30; d++)
    {
        persum = 1;
        for (int k = 0; k < i; k++)
        {
            persum = persum * numberbit[d];
        }
        sum = sum + persum;
    }
    if (sum == number)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void PrintN(int m, int n)
{
    for (int i = m + 1; i < n; i++)
    {
        if (narcissistic(i))
        {
            printf("%d\n", i);
        }
    }
}
