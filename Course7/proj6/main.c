#include <stdio.h>

int main()
{
    int year;
    int month;
    int day;
    scanf("%d/%d/%d", &year, &month, &day);
    int judge = 1;
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        judge = 0; //润年
    }
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (judge == 0)
    {
        days[1] = 29;
    }
    int sum = 0;
    for (int i = 0; i < month - 1; i++)
    {
        sum = sum + days[i];
    }
    sum = sum + day;
    printf("%d", sum);
    return 0;
}