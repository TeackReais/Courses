#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int hour, minute;
    while (scanf("%d:%d", &hour, &minute) != EOF)
    {
        if (hour < 12 && hour >= 0 || (hour == 12 && minute == 0))
        {
            printf("Only ");
            if (hour < 10)
            {
                printf("0");
            }
            printf("%d:", hour);
            if (minute < 10)
            {
                printf("0");
            }
            printf("%d.  Too early to Dang.\n", minute);
        }
        else
        {
            if (minute != 0)
            {
                hour = hour + 1;
            }
            int number;
            number = hour - 12;
            for (int i = 0; i < number; i++)
            {
                printf("Dang");
            }
            printf("\n");
        }
    }
    return 0;
}