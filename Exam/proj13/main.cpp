//ERROR
#include <iostream>
#include <stdio.h>
#include <math.h>

int solve(int num);
int main()
{
    int num;
    while (scanf("%d", &num) != EOF)
    {
        //Do After Exam
        if (num == 0)
        {
            break;
        }
        //End
        //Two Testcases Wrong
        int res = solve(num);
        printf("%d\n", res);
    }
    return 0;
}

int solve(int num)
{
    int res = 0;
    if (num < 10)
    {
        return num;
    }
    else
    {
        int bit;
        for (int i = 0;; i++)
        {
            if (num < pow(10, i))
            {
                bit = i;
                break;
            }
        }
        int bits[bit];
        for (int i = 0; i < bit; i++)
        {
            int temp;
            temp = num / 10;
            bits[i] = num - 10 * temp;
            num = temp;
        }
        for (int i = 0; i < bit; i++)
        {
            res = res + bits[i];
        }
    }
    return solve(res);
}