#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
using namespace std;

int cmpfunc(const void *a, const void *b);

struct Point
{
    int index;
    double x;
    double y;
    double mod;
    double mod2;
};

int main()
{
    int input;
    scanf("%d", &input);
    struct Point Points[input];
    for (int i = 0; i < input; i++)
    {
        scanf("%lf %lf", &Points[i].x, &Points[i].y);
        Points[i].mod2 = pow(Points[i].x, 2) + pow(Points[i].y, 2);
        Points[i].mod = sqrt(Points[i].mod2);
        Points[i].index = i;
    }
    qsort(Points, input, sizeof(Point), cmpfunc);
    for (int i = 0; i < input; i++)
    {
        printf("%.2lf %.2lf %.2lf\n", Points[i].x, Points[i].y, Points[i].mod);
    }
    return 0;
}

int cmpfunc(const void *a, const void *b) //小于0则a在前
{
    struct Point compareA = (*(Point *)a);
    struct Point compareB = (*(Point *)b);
    if (fabs(compareA.mod2 - compareB.mod2) > 0.0000000001)
    {
        if (compareA.mod2 < compareB.mod2)
        {
            return -1; //从小到大，且返回int
        }
        if (compareA.mod2 > compareB.mod2)
        {
            return 1;
        }
    }
    return compareA.index - compareB.index;
}