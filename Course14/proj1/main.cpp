#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long input;
    while (scanf("%lld", &input) != EOF)
    {
        long long index = 0;
        while (true)
        {
            if (input % 2 == 0)
            {
                input = input / 2;
                index++;
            }
            if (input == 1)
            {
                break;
            }
            if (input % 2 == 1)
            {
                input = input - 1;
                index++;
            }
            if (input == 1)
            {
                break;
            }
        }
        printf("%lld\n", index);
    }
    return 0;
}