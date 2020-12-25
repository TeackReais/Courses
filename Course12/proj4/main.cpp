#include <iostream>
#include <stdio.h>

void solve(int num);
void cal1(int numbers[], int num);
void cal2(int numbers[], int num);
int main()
{
    int input;
    while (scanf("%d", &input) != EOF)
    {
        solve(input);
    }
}

void solve(int num)
{
    int numbers[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &numbers[i]);
    }
    cal1(numbers, num);
    printf(" ");
    cal2(numbers, num);
    printf("\n");
}

void cal1(int numbers[], int num)
{
    bool judge = true;
    int num1;
    for (int i = numbers[0];; i--)
    {
        for (int d = 0; d < num; d++)
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
    printf("%d", num1);
}

void cal2(int numbers[], int num)
{
    bool judge = true;
    int num1;
    for (int i = 1;; i++)
    {
        for (int d = 0; d < num; d++)
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
    printf("%d", num1);
}