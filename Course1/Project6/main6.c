#include <stdio.h>
double fact(int a);
int main()
{
    int m, n;
    double result;
    scanf("%d", &m);
    scanf("%d", &n);
    result = fact(n) / (fact(m) * fact(n - m));
    printf("result = %.0f",result);
    return 0;
}

double fact(int a)
{
    double result=1;
    for (int i = 1; i <= a; i++)
    {
        result = result * i;
    }
    return result;
}