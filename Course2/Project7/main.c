#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);
    if (year > 2100 || year <= 2000)
    {
        printf("Invalid year!");
        return 0;
    }
    int i = 2001;
    int time = 0;
    for (; i <= year; i++)
    {
        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
        {
            printf("%d\n", i);
            time++;
        }
    }
    if (time == 0)
    {
        printf("None\n");
    }
    return 0;
}