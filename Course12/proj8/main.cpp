#include <iostream>
#include <stdio.h>
using namespace std;

struct score
{
    float credit;
    float point;
    int score;
    bool avilable;
};

void solve(int num);
int main()
{
    int lessons;
    while (scanf("%d", &lessons) != EOF)
    {
        solve(lessons);
        printf("\n");
    }
}

void solve(int num)
{
    struct score scores[num];
    float GPA;
    float SumCredits = 0;
    float SumPoints = 0;
    for (int i = 0; i < num; i++)
    {
        scanf("%f %d", &scores[i].credit, &scores[i].score);
        if (scores[i].score == -1)
        {
            scores[i].avilable = false;
        }
        else
        {
            scores[i].avilable = true;
        }
    }
    for (int i = 0; i < num; i++)
    {
        if (scores[i].score < 60)
        {
            scores[i].point = 0;
        }
        else
        {
            scores[i].point = (scores[i].score - 50) * 1.0 / 10;
        }
        if (scores[i].avilable)
        {
            SumCredits = scores[i].credit + SumCredits;
            SumPoints = scores[i].point * scores[i].credit + SumPoints;
        }
    }
    GPA = SumPoints / SumCredits;
    printf("%.2f", GPA);
}