#include <stdio.h>

int main()
{
    int input1;
    scanf("%d", &input1);
    int array[input1];
    for (int i = 0; i < input1; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = input1 - 1; i >= 0; i--)
    {
        if (i != input1 - 1)
        {
            printf(" ");
        }
        printf("%d", array[i]);
    }
    return 0;
}