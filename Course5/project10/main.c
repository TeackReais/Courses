#include <stdio.h>
#include <math.h>

double funcos(double e, double x);
double fact(double n);
int main()
{
    double e, x;
    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
    return 0;
}

double funcos(double e, double x)
{
    double i = 0;
    double num;
    double sum2 = 0;
    while (1)
    {
        double sum = 1;
        for (double d = 1; d <= 2 * i; d++)
        {
            sum = sum * d;
        }
        double fact = sum;
        num = pow(x, 2 * i) / fact;
        sum2 = sum2 + num * pow(-1, i);
        if (num < e)
        {
            break;
        }
        i++;
    }
    return sum2;
}