//accepted
#include <iostream>
#include <stdio.h>
#include <math.h>

int fact(int n);
int main()
{
    double PI = 3.141592;
    double input, input2, input3;
    while (scanf("%lf %lf", &input, &input2) != EOF)
    {
        input3 = input * PI / 180;
        double res = 0;
        int index = 0;
        while (true)
        {
            double add = pow(input3, index * 2) / fact(2 * index) * pow(-1, index);
            res = res + add;
            index++;
            if (fabs(add) <= input2)
            {
                break;
            }
        }
        printf("%.3lf\n", res);
    }
    return 0;
}

int fact(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res = res * i;
    }
    return res;
}