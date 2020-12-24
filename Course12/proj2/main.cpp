#include <iostream>
#include <stdio.h>
using namespace std;

void solve(int num);
int main()
{
    int num;
    scanf("%d", &num);
    solve(num);
    printf("End\n");
    return 0;
}

void solve(int num)
{
    int num1 = num;
    while (num1 != 1)
    {
        if (num1 % 2 == 1)
        {
            printf("%d*3+1=%d\n", num1, num1 * 3 + 1);
            num1 = num1 * 3 + 1;
        }
        else
        {
            printf("%d/2=%d\n", num1, num1 / 2);
            num1 = num1 / 2;
        }
    }
    return;
}