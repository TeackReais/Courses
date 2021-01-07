#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main()
{
    int a, b, c, d, e, f, g, h, i;
    while (scanf("%d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i) != EOF)
    {
        int checkNUM = 0;
        for (; checkNUM <= 10; checkNUM++)
        {
            int sum = 10 * a + 9 * b + 8 * c + 7 * d + 6 * e + 5 * f + 4 * g + 3 * h + 2 * i + checkNUM;
            if (sum % 11 == 0)
            {
                break;
            }
        }
        if (checkNUM == 10)
        {
            printf("X\n");
        }
        else
        {
            printf("%d\n", checkNUM);
        }
    }
    return 0;
}