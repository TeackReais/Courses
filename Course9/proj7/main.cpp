#include <stdio.h>

struct time
{
    int hour;
    int minute;
    int second;
};
void solve(struct time input, int input2);

int main()
{
    struct time time1;
    int input;
    scanf("%d:%d:%d", &time1.hour, &time1.minute, &time1.second);
    scanf("%d", &input);
    solve(time1, input);
}

void solve(struct time input, int input2)
{
    input.second += input2;
    for (; input.second >= 60; input.second -= 60)
    {
        input.minute++;
    }
    for (; input.minute >= 60; input.minute -= 60)
    {
        input.hour++;
    }
    for (; input.hour >= 24; input.hour -= 24)
    {
    }
    if (input.hour < 10)
    {
        printf("0");
    }
    printf("%d:", input.hour);
    if (input.minute < 10)
    {
        printf("0");
    }
    printf("%d:", input.minute);
    if (input.second < 10)
    {
        printf("0");
    }
    printf("%d", input.second);
}