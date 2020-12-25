#include <iostream>
#include <stdio.h>
#include <math.h>

void solve(long num);
void cal(struct number numbers[], long num);
bool checkEqual(double center, long i, long *fenzi);

struct number
{
    long fenzi;
    long fenmu;
};

int main()
{
    long input;
    while (scanf("%ld", &input) != EOF)
    {
        solve(input);
    }
}

void solve(long num)
{
    struct number numbers[num];
    for (long i = 0; i < num; i++)
    {
        scanf("%ld/%ld", &numbers[i].fenzi, &numbers[i].fenmu);
    }
    cal(numbers, num);
    printf("\n");
}

void cal(struct number numbers[], long num)
{
    double doublenumbers[num];
    for (long i = 0; i < num; i++)
    {
        doublenumbers[i] = 1.0 * numbers[i].fenzi / numbers[i].fenmu;
    }
    double sum = 0;
    for (long i = 0; i < num; i++)
    {
        sum = doublenumbers[i] + sum;
    }
    long fenmu;
    long fenzi;
    for (long i = 1;; i++)
    {
        if (checkEqual(sum, i, &fenzi))
        {
            fenmu = i;
            break;
        }
    }
    long intnum = 0;
    while (fenzi >= fenmu)
    {
        fenzi = fenzi - fenmu;
        intnum++;
    }
    if (fenzi < 0) //重要，对负数的处理
    {
        while (fenzi <= 0)
        {
            fenzi = fenzi + fenmu;
            intnum--;
        }
        if (intnum < 0)
        {
            intnum++;
            fenzi = fenzi - fenmu;
        }
        if (intnum != 0)
        {
            fenzi = -fenzi;
            if (fenzi == 0)
            {
                printf("%ld", intnum);
            }
            else
            {
                printf("%ld %ld/%ld", intnum, fenzi, fenmu);
            }
        }
        else
        {
            printf("%ld/%ld", fenzi, fenmu);
        }
        return;
    } //重要，对负数的处理
    if (intnum == 0 && fenzi != 0)
    {
        printf("%ld/%ld", fenzi, fenmu);
    }
    else if (intnum == 0 && fenzi == 0)
    {
        printf("0");
    }
    else if (intnum != 0 && fenzi == 0)
    {
        printf("%ld", intnum);
    }
    else
    {
        printf("%ld %ld/%ld", intnum, fenzi, fenmu);
    }
}

bool checkEqual(double center, long i, long *fenzi)
{
    double num1 = i * center;
    long intnum1, intnum2;
    intnum1 = num1;
    intnum2 = num1 + 1;
    if (fabs(num1 - intnum1) < 0.000001)
    {
        *fenzi = intnum1;
        return true;
    }
    if (fabs(num1 - intnum2) < 0.000001)
    {
        *fenzi = intnum2;
        return true;
    }
    return false;
}