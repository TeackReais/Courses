#include <iostream>
#include <stdio.h>
#include <math.h>

void solve(int num);
bool checkYinzi(int numA, int numB);
int main()
{
    int input;
    while (scanf("%d", &input) != EOF)
    {
        solve(input);
        printf("\n");
    }
}

void solve(int num)
{
    int maxlist = -1;
    int maxstart;
    for (int i = 2; i < sqrt(num); i++)
    {
        int d = i;
        int ji = 1;
        int listlong = 0;
        while (true)
        {
            ji = ji * d;
            if (!checkYinzi(ji, num))
            {
                if (listlong > maxlist)
                {
                    maxlist = listlong;
                    maxstart = i;
                }
                break;
            }
            d++;
            listlong++;
        }
    }
    printf("%d\n", maxlist);
    for (int i = 0; i < maxlist; i++)
    {
        if (i != 0)
        {
            printf("*");
        }
        printf("%d", maxstart + i);
    }
}

bool checkYinzi(int numA, int numB)
{
    return numB % numA == 0;
}