#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    int fen5 = 1;
    int fen2 = 1;
    int fen1 = 1;
    int other = input - 8;
    int i1 = 0;
    int i2 = 0;
    int i3 = 0;
    while (other - 5 >= 0)
    {
        other = other - 5;
        i1++;
    }
    while (other - 2 >= 0)
    {
        other = other - 2;
        i2++;
    }
    while (other - 1 >= 0)
    {
        other = other - 1;
        i3++;
    }
    return 0;
}