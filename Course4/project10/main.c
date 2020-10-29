#include <stdio.h>
#include <math.h>
int main()
{
    int input;
    scanf("%d", &input);
    if (input < 3 || input > 7)
    {
        return 0;
    }
    long max = pow(10, input) - 1;
    long min = pow(10, input - 1);
    for (long i = min; i <= max; i++)
    {
        int m[7] = {0, 0, 0, 0, 0, 0, 0};
        long number = i;
        for (int j = 6; j >= 0; j--)
        {
            long a = number;
            number = number / 10;
            m[j] = a - number * 10;
        }
        long sum = 0;
        for (int j = 0; j < 7; j++)
        {
            sum = sum + pow(m[j], input);
        }
        if (sum == i)
        {
            printf("%ld\n", sum);
        }
    }
    return 0;
}