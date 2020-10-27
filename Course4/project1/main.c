#include <stdio.h>
#include <math.h>
double cal(int n);
int main()
{
    double input;
    scanf("%le", &input);
    if (input <= 0)
    {
        return 0;
    }
    double result = 0;
    int i = 1;
    while (1)
    {
        result = cal(i);
        if (1.0 / (3 * i - 2) <= input)
        {
            break;
        }
        i++;
    }
    printf("sum = %.6lf", result);
    return 0;
}

double cal(int n)
{
    double result = 0;
    for (int i = 1; i <= n; i++)
    {
        result = result + 1.0 / (3 * i - 2) * pow(-1, i + 1);
    }
    return result;
}