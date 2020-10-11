#include <stdio.h>
#include <math.h>
int x;
float result=0;

float cal1(int i);
int main()
{
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
    
        if (i % 2 == 0)
        {
            result = result - cal1(i);
        }
        else
        {
            result = result + cal1(i);
        }
    }
    printf("sum = %.3f",result);
    return 0;
}

float cal1(int i)
{
    float result;
    result=1.00/(3 * i - 2);
    return result;
}
/*
int sumform1ton(int n)
{
    int result;
    for (int i = 1; i <= n; i++)
    {
        result = result + i
    }
    return result;
}
*/