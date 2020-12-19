#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int cmpfunc(const void *a, const void *b);
void timeCal(struct Competitor *time);

struct Competitor
{
    int id;
    int hour1;
    int min1;
    int second1;
    int hour2;
    int min2;
    int second2;
    int hour3;
    int min3;
    int second3;
};

int main()
{
    int index = 0;
    struct Competitor Competitors[2000];
    while (true)
    {
        if (scanf("%d:%d:%d %d:%d:%d", &Competitors[index].hour1, &Competitors[index].min1, &Competitors[index].second1, &Competitors[index].hour2, &Competitors[index].min2, &Competitors[index].second2) == EOF)
        {
            break;
        }
        Competitors[index].id = index + 1;
        index++;
    }
    qsort(Competitors, index, sizeof(Competitor), cmpfunc);
    for (int i = 0; i < index; i++)
    {
        printf("%d %d:%d:%d\n", Competitors[i].id, Competitors[i].hour3, Competitors[i].min3, Competitors[i].second3);
    }
    return 0;
}

int cmpfunc(const void *a, const void *b)
{
    timeCal((Competitor *)a);
    timeCal((Competitor *)b);
    struct Competitor compareA = (*(Competitor *)a);
    struct Competitor compareB = (*(Competitor *)b);
    if (compareA.hour3 != compareB.hour3)
    {
        return compareA.hour3 - compareB.hour3;
    }
    if (compareA.min3 != compareB.min3)
    {
        return compareA.min3 - compareB.min3;
    }
    return compareA.second3 - compareB.second3;
}

void timeCal(struct Competitor *time)
{
    int second;
    int min;
    int hour;
    second = time->second2 - time->second1;
    bool judge = false;
    if (second < 0)
    {
        second += 60;
        judge = true;
    }
    min = time->min2 - time->min1;
    if (judge)
    {
        min--;
        judge = false;
    }
    if (min < 0)
    {
        min += 60;
        judge = true;
    }
    hour = time->hour2 - time->hour1;
    if (judge)
    {
        hour--;
    }
    time->hour3 = hour;
    time->min3 = min;
    time->second3 = second;
}