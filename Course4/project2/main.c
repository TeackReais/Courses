#include <stdio.h>

double fact(int n);
int main()
{
    int input;
    scanf("%d", &input);
    double result = 1;
    for (int i = 1; i <= input; i++)
    {
        result = result + 1.0 / fact(i);
    }
    printf("%.8lf", result);
    return 0;
}

double fact(int n)
{
    double result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = i * result;
    }
    return result;
}