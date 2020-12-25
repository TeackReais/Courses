#include <iostream>
#include <stdio.h>

void cal2(int numbers[], int num);
int main()
{
    int numbers[2];
    while (scanf("%d %d", &numbers[0], &numbers[1]) != EOF)
    {
        cal2(numbers, 2);
        printf("\n");
    }
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