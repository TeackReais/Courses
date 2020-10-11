#include <stdio.h>
#include <math.h>
float x;
float result;
int main()
{
    scanf("%f", &x);
    if (x >= 0)
    {
        result = sqrt(x);
    }
    else
    {
        result = pow((x + 1), 2) + 2 * x + 1 / x;
    }
    printf("f(%.2f) = %.2f", x, result);
}