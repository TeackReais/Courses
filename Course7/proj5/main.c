#include <stdio.h>

int main()
{
    int input1, input2;
    scanf("%d %d", &input1, &input2);
    int numbers[input2][input2];
    for (int i = 0; i < input2; i++)
    {
        for (int d = 0; d < input2; d++)
        {
            scanf("%d", &numbers[i][d]);
        }
    }
    input1 = input1 % input2;
    int resultnumbers[input2][input2];
    for (int i = 0; i < input2; i++)
    {
        for (int d = 0; d < input2; d++)
        {
            int change = (d + input1) % input2;
            resultnumbers[i][change] = numbers[i][d];
        }
    }
    for (int i = 0; i < input2; i++)
    {
        for (int d = 0; d < input2; d++)
        {
            printf("%d ", resultnumbers[i][d]);
        }
        printf("\n");
    }
}