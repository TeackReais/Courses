#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int cmpfunc(const void *a, const void *b);

struct Score
{
    int sum;
    int math;
    int language;
    int computer;
    char name[20];
};

int main()
{
    int input;
    scanf("%d", &input);
    struct Score Scores[input];
    for (int i = 0; i < input; i++)
    {
        scanf("%d %d %d %s", &Scores[i].math, &Scores[i].language, &Scores[i].computer, Scores[i].name);
        Scores[i].sum = Scores[i].math + Scores[i].language + Scores[i].computer;
    }
    qsort(Scores, input, sizeof(Score), cmpfunc);
    for (int i = 0; i < input; i++)
    {
        printf("%d %d %d %d %s\n", Scores[i].sum, Scores[i].math, Scores[i].language, Scores[i].computer, Scores[i].name);
    }
}
int cmpfunc(const void *a, const void *b) //小于0则a在前
{
    struct Score compareA = (*(Score *)a);
    struct Score compareB = (*(Score *)b);
    if (compareA.sum != compareB.sum)
    {
        return compareB.sum - compareA.sum;
    }
    if (compareA.math != compareB.math)
    {
        return compareB.math - compareA.math;
    }
    if (compareA.language != compareB.language)
    {
        return compareB.language - compareA.language;
    }
    return compareB.computer - compareA.computer;
}