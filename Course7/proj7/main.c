#include <stdio.h>

int bigNumber(int number[], int N);
int main()
{
    int input;
    scanf("%d", &input);
    int numbers[input];
    for (int i = 0; i < input; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < input; i++)
    {
        if (i != 0)
        {
            printf(" ");
        }
        printf("%d", bigNumber(numbers, input));
    }
    return 0;
}

int bigNumber(int number[], int N)
{
    int big = number[0];
    int index = 0;
    for (int i = 0; i < N; i++)
    {
        if (number[i] > big)
        {
            big = number[i];
            index = i;
        }
    }
    number[index] = -10000;
    return big;
}