#include <stdio.h>
int zhengfu(int n);
int main()
{
    double input;
    scanf("%le", &input);
    if (input <= 0)
    {
        return 0;
    }
    double result = 0;
    for (int i = 1;; i++)
    {
        result = result + 1.0 / (3 * i - 2) * zhengfu(i + 1);
        if (1.0 / (3 * i - 2) <= input)
        {
            break;
        }
    }
    printf("sum = %.6lf", result);
    return 0;
}

int zhengfu(int n)
{
    if (n % 2 == 1)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}