//One Testcase Wrong BigNumber
#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double num1, num2;
    while (scanf("%lf %lf", &num1, &num2) != EOF)
    {
        double res = num1 * num2;
        //		printf("%lf",res);
        bool biggerthan0 = true;
        if (res < 0)
        {
            res = -res;
            biggerthan0 = false;
        }
        int bit;
        for (int i = 0;; i++)
        {
            if (res < pow(10, i))
            {
                bit = i;
                break;
            }
        }
        int bits[bit];
        double num = res;
        for (int i = 0; i < bit; i++)
        {
            double temp;
            temp = (long long)num / 10;
            bits[i] = num - 10 * temp;
            num = temp;
        }
        double finres = 0;
        for (int i = 0; i < bit; i++)
        {
            finres = finres + pow(10, bit - 1 - i) * bits[i];
        }
        if (!biggerthan0)
        {
            finres = -finres;
        }
        printf("%.0lf\n", finres);
    }
    return 0;
}