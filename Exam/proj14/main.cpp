//accepted
#include <iostream>
#include <stdio.h>

void solve(int n);
int dengchashulie(int n);
int main()
{
    int input;
    while (scanf("%d", &input) != EOF)
    {
        solve(input);
    }
    return 0;
}

void solve(int n)
{
    int da, xiao;
    for (int i = 1;; i++)
    {
        if (n <= dengchashulie(i))
        {
            da = i;
            break;
        }
    }
    xiao = da - 1;
    int he = da + 1;
    int cha = n - dengchashulie(xiao);
    if (he % 2 == 0)
    {
        printf("%d/%d\n", he - cha, cha);
    }
    else
    {
        printf("%d/%d\n", cha, he - cha);
    }
}

int dengchashulie(int n)
{
    int res = 0;
    for (int i = 0; i <= n; i++)
    {
        res = res + i;
    }
    return res;
}