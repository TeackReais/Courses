#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int input;
    scanf("%d", &input);
    int numbers[input];
    for (int i = 0; i < input; i++)
    {
        scanf("%d", &numbers[i]);
    }
    int max = -10000;
    int min = 10000;
    int sum = 0;
    for (int i = 0; i < input; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
        sum = numbers[i] + sum;
    }
    float ave = 1.0 * sum / input;
    float maxf = max;
    float minf = min;
    printf("average = %.2f\n", ave);
    printf("max = %.2f\n", maxf);
    printf("min = %.2f\n", minf);
}