#include <stdio.h>
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int solve(int num[8]);
int main()
{
    int input[4][8];
    for (int i = 0; i < 4; i++)
    {
        for (int d = 0; d < 8; d++)
        {
            char input1 = getchar();
            input[i][d] = input1 - '0';
        }
    }
    getchar();
    printf("%d.%d.%d.%d", solve(input[0]), solve(input[1]), solve(input[2]), solve(input[3]));
}

int solve(int num[8])
{
    int sum = 0;
    for (int i = 0; i < 8; i++)
    {
        sum = pow(2, 7 - i) * num[i] + sum;
    }
    return sum;
}