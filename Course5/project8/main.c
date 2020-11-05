#include <stdio.h>

int CountDigit(int number, int digit);

int main()
{
    int number, digit;
    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));
    return 0;
}

int CountDigit(int number, int digit)
{
    if (number < 0)
    {
        number = -number;
    }
    else if (number == 0)
    {
        return 1;
    }
    int numberbit[30];
    for (int i = 0; i < 30; i++)
    {
        numberbit[i] = 10;
    }
    int i = 0;
    int num = number;
    while (1)
    {
        if (num == 0)
        {
            break;
        }
        numberbit[i] = num % 10;
        num = num / 10;
        i++;
    }
    int count = 0;
    for (int i = 0; i < 30; i++)
    {
        if (numberbit[i] == digit)
        {
            count++;
        }
    }
    return count;
}