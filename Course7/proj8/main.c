#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    int numbers[input];
    for (int i = 0; i < input; i++)
    {
        scanf("%d", &numbers[i]);
    }
    int times[10];
    for (int i = 0; i < 9; i++)
    {
        times[i] = 0;
    }
    for (int i = 0; i < input; i++)
    {
        int number = numbers[i];
        while (1)
        {
            int numberbit;
            numberbit = number - (number / 10) * 10;
            times[numberbit]++;
            number = number / 10;
            if (number == 0)
            {
                break;
            }
        }
    }
    int big = times[0];
    int index[10];
    int index1 = 0;
    for (int i = 0; i < 9; i++)
    {
        index[i] = 0;
    }
    for (int i = 0; i < 10; i++)
    {
        if (times[i] > big)
        {
            big = times[i];
            index1 = i;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (times[i] == big)
        {
            index[i] = 1;
        }
    }
    printf("%d:", times[index1]);
    for (int i = 0; i < 10; i++)
    {
        if (index[i] == 1)
        {
            printf(" %d", i);
        }
    }
    return 0;
}