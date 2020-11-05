#include <stdio.h>
#include <math.h>

int prime(int p);
int PrimeSum(int m, int n);

int main()
{
    int m, n, p;
    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for (p = m; p <= n; p++)
    {
        if (prime(p) != 0)
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

int prime(int p)
{
    int a = 1;
    int b = p;
    int kechugeshu = 0;
    if (p <= 1)
    {
        return 0;
    }
    for (; a <= b; a++)
    {
        if (b % a == 0)
        {
            kechugeshu++;
        }
    }
    if (kechugeshu == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int PrimeSum(int m, int n)
{
    int result = 0;
    for (int i = m; i <= n; i++)
    {
        if (prime(i) == 1)
        {
            result = result + i;
        }
    }
    return result;
}