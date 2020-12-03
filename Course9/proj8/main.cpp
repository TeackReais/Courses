#include <stdio.h>

int main()
{
    double x1, y1, x2, y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    double res1, res2;
    res1 = x1 + x2;
    res2 = y1 + y2;
    if (res1 < 0 && res1 > -0.05)
    {
        res1 = 0.0;
    }
    if (res2 < 0 && res2 > -0.05)
    {
        res2 = 0.0;
    }
    printf("(%.1lf, %.1lf)", res1, res2);
    return 0;
}