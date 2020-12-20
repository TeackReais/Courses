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
    // int index[input];
    // for (int i = 0; i < input; i++)
    // {
    //     index[i] = i;
    // }
    // while (true)
    // {
    //     int index2 = 0;
    //     for (int i = 0; i < input - 1; i++)
    //     {
    //         if (Points[index[i]].mod2 > Points[index[i + 1]].mod2)
    //         {
    //             int temp = index[i];
    //             index[i] = index[i + 1];
    //             index[i + 1] = temp;
    //             index2++;
    //         }
    //     }
    //     if (index2 == 0)
    //     {
    //         break;
    //     }
    // }
    for (int i = 0; i < input; i++)
    {
        printf("%.2lf %.2lf %.2lf\n", Points[i].x, Points[i].y, Points[i].mod);
    }
}
int cmpfunc(const void *a, const void *b) //小于0则a在前
{
    struct Point compareA = (*(Point *)a);
    struct Point compareB = (*(Point *)b);
    if (compareA.mod2 != compareB.mod2)
    {
        if (compareA.mod2 - compareB.mod2 < 0)
        {
            return -1; //从小到大，且返回int
        }
        if (compareA.mod2 - compareB.mod2 > 0)
        {
            return 1;
        }
    }
    return compareA.index - compareB.index;
}