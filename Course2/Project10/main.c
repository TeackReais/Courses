#include <stdio.h>
#include <math.h>
#include <stdbool.h>

double changdu(int x1, int y1, int x2, int y2);
bool judgesanjiaoxing(int x1, int y1, int x2, int y2, int x3, int y3);
double mianji(int x1, int y1, int x2, int y2, int x3, int y3);
bool fanwei(int n);
int main()
{
    int x1, y1, x2, y2, x3, y3;
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
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

double changdu(int x1, int y1, int x2, int y2)
{
    double result;
    result = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return result;
}

double mianji(int x1, int y1, int x2, int y2, int x3, int y3)
{
    double changdu1 = changdu(x1, y1, x2, y2);
    double changdu2 = changdu(x2, y2, x3, y3);
    double changdu3 = changdu(x1, y1, x3, y3);
    double p = 0.5 * (changdu1 + changdu2 + changdu3);
    double result;
    result = sqrt(p * (p - changdu1) * (p - changdu2) * (p - changdu3));
    return result;
}
bool judgesanjiaoxing(int x1, int y1, int x2, int y2, int x3, int y3)
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
bool fanwei(int n)
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