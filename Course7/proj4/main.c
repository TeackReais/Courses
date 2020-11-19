#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    int numbers[input][input];
    for (int i = 0; i < input; i++)
    {
        for (int d = 0; d < input; d++)
        {
            scanf("%d", &numbers[i][d]);
        }
    }
    int sum = 0;
    for (int i = 0; i < input; i++)
    {
        for (int d = 0; d < input; d++)
        {
            if (d + i == input - 1)
            {
                continue;
            }
            if (i == input - 1)
            {
                continue;
            }
            if (d == input - 1)
            {
                continue;
            }
            sum = sum + numbers[i][d];
        }
    }
    printf("%d", sum);
    return 0;
}