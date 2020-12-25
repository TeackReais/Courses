#include <iostream>
#include <stdio.h>
#include <math.h>

void solve(long num);
void cal(struct number numbers[], long num);
long cal2(long numbers[], long num);
long cal1(long numbers[], long num);
struct number add(struct number numA, struct number numB);

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
    struct number res;
    res = numbers[0];
    for (long i = 1; i < num; i++)
    {
        res = add(res, numbers[i]);
    }
    long fenmu = res.fenmu;
    long fenzi = res.fenzi;
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
    return;
}

struct number add(struct number numA, struct number numB)
{
    long fenmu1 = numA.fenmu;
    long fenmu2 = numB.fenmu;
    long fenzi1 = numA.fenzi;
    long fenzi2 = numB.fenzi;
    bool A1 = false;
    bool A2 = false;
    if (fenzi1 < 0)
    {
        A1 = true;
        fenzi1 = -fenzi1;
    }
    if (fenzi2 < 0)
    {
        A2 = true;
        fenzi2 = -fenzi2;
    }
    long numberarray1[2] = {fenmu1, fenmu2};
    long gongbeishu = cal2(numberarray1, 2);
    fenzi1 = fenzi1 * gongbeishu / fenmu1;
    fenzi2 = fenzi2 * gongbeishu / fenmu2;
    long fenzisum;
    if (A1 && !A2)
    {
        fenzisum = -fenzi1 + fenzi2;
    }
    else if (A2 && !A1)
    {
        fenzisum = fenzi1 - fenzi2;
    }
    else
    {
        fenzisum = fenzi1 + fenzi2;
    }
    if (fenzisum < 0)
    {
        fenzisum = -fenzisum;
        A1 = true;
        A2 = true;
    }
    long numberarray2[2] = {gongbeishu, fenzisum};
    long gongyueshu = cal1(numberarray2, 2);
    struct number res;
    res.fenzi = fenzisum / gongyueshu;
    res.fenmu = gongbeishu / gongyueshu;
    if (A1 && A2)
    {
        res.fenzi = -res.fenzi;
    }
    return res;
}

long cal1(long numbers[], long num) //公约数
{
    bool judge = true;
    long num1;
    for (long i = numbers[0];; i--)
    {
        for (long d = 0; d < num; d++)
        {
            if (numbers[d] % i != 0)
            {
                judge = false;
            }
        }
        if (!judge)
        {
            judge = true;
            continue;
        }
        num1 = i;
        break;
    }
    return num1;
}

long cal2(long numbers[], long num) //公倍数
{
    bool judge = true;
    long num1;
    for (long i = 1;; i++)
    {
        for (long d = 0; d < num; d++)
        {
            if (i % numbers[d] != 0)
            {
                judge = false;
            }
        }
        if (!judge)
        {
            judge = true;
            continue;
        }
        num1 = i;
        break;
    }
    return num1;
}