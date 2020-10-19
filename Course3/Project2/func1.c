#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int fact(int a) //阶乘
{
    int result = 1;
    for (int i = 1; i <= a; i++)
    {
        result = result * i;
    }
    return result;
}