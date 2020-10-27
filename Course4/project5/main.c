#include <stdio.h>

int main()
{
    int sum = 0;
    while (1)
    {
        int input;
        scanf("%d", &input);
        if (input <= 0)
        {
            break;
        }
        if (input % 2 == 1)
        {
            sum = sum + input;
        }
    }
    printf("%d", sum);
    return 0;
}