#include <stdio.h>
#include <math.h>

double func(double a, int b);
double fact(int n);
int main()
{
    double input;
    scanf("%lf", &input);
    if (input > 5 || input < 0)
    {
        return 0;
    }
    double result = 1;
    int i = 1;
    while (1)
    {
        result = result + func(input, i);
        if (func(input, i) < 0.00001)
        {
            break;
        }
        i++;
    }
    printf("%.4lf", result);
    return 0;
}

double func(double a, int b) //a为double类型
{
    double result = 0;
    result = pow(a, b) / fact(b);
    return result;
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