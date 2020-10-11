#include <stdio.h>
#include <math.h>

double money, year, rate;
int main()
{
    scanf("%lf %lf %lf", &money, &year, &rate);
    double interest;
    interest = money * pow((1 + rate), year) - money;
    printf("interest = %.2f", interest);
    return 0;
}