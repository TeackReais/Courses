#include <stdio.h>
#include <math.h>
#include <stdbool.h>

double changdu(double x1, double y1, double x2, double y2);
bool judgesanjiaoxing(double x1, double y1, double x2, double y2, double x3, double y3);
double mianji(double x1, double y1, double x2, double y2, double x3, double y3);
bool fanwei(double n);
int main()
{
    double x1, y1, x2, y2, x3, y3;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    bool sanjiaoxing = judgesanjiaoxing(x1, y1, x2, y2, x3, y3);
    if (fanwei(x1) || fanwei(y1) || fanwei(x2) || fanwei(y2) || fanwei(x3) || fanwei(y3))
    {
        return 0;
    }
    if (sanjiaoxing)
    {
        double changdu1 = changdu(x1, y1, x2, y2);
        double changdu2 = changdu(x2, y2, x3, y3);
        double changdu3 = changdu(x1, y1, x3, y3);
        double sum = changdu1 + changdu2 + changdu3;
        double mj = mianji(x1, y1, x2, y2, x3, y3);
        printf("L = %.2lf, A = %.2lf", sum, mj);
    }
    else
    {
        printf("Impossible");
    }
    return 0;
}

double changdu(double x1, double y1, double x2, double y2)
{
    double result;
    result = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return result;
}

double mianji(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double changdu1 = changdu(x1, y1, x2, y2);
    double changdu2 = changdu(x2, y2, x3, y3);
    double changdu3 = changdu(x1, y1, x3, y3);
    double p = 0.5 * (changdu1 + changdu2 + changdu3);
    double result;
    result = sqrt(p * (p - changdu1) * (p - changdu2) * (p - changdu3));
    return result;
}
bool judgesanjiaoxing(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double changdu1 = changdu(x1, y1, x2, y2);
    double changdu2 = changdu(x2, y2, x3, y3);
    double changdu3 = changdu(x1, y1, x3, y3);
    if (changdu1 + changdu2 > changdu3 && changdu1 + changdu3 > changdu2 && changdu2 + changdu3 > changdu1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool fanwei(double n)
{
    if (n < -100 || n > 100)
    {
        return true;
    }
    else
    {
        return false;
    }
}