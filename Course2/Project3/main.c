#include <stdio.h>

double sum(int n);
int main()
{
    int N;
    scanf("%d", &N);
    printf("sum = %.6lf", sum(N));
    return 0;
}

double sum(int n)
{
    double result = 0;
    for (int i = 1; i <= n; i++)
    {
        result = result + 1.0 / (2 * i - 1);
    }
    return result;
}