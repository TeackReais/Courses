#include <stdio.h>

int main()
{
    int lower, upper;
    double celsius;
    scanf("%d %d", &lower, &upper);
    if (lower > upper || upper > 100 || lower <= 0)
    {
        printf("Invalid.\n");
        return 0;
    }
    else
    {
        printf("fahr celsius\n");
        for (; lower <= upper; lower = lower + 2)
        {
            celsius = 5 * (lower - 32.0) / 9.0;
            printf("%d%6.1lf\n", lower, celsius);
        }
    }
    return 0;
}