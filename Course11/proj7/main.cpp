#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int cmpfunc(const void *a, const void *b);

struct Point
{
    int x;
    int y;
};

int main()
{
    int input;
    scanf("%d", &input);
    struct Point Points[input];
    for (int i = 0; i < input; i++)
    {
        scanf("%d %d", &Points[i].x, &Points[i].y);
    }
    qsort(Points, input, sizeof(Point), cmpfunc);
    for (int i = 0; i < input; i++)
    {
        printf("%d %d\n", Points[i].x, Points[i].y);
    }
}
int cmpfunc(const void *a, const void *b) //小于0则a在前
{
    struct Point compareA = (*(Point *)a);
    struct Point compareB = (*(Point *)b);
    if (compareA.x != compareB.x)
    {
        return compareB.x - compareA.x;
    }
    return compareB.y - compareA.y;
}