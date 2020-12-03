#include <stdio.h>
#include <math.h>

int search(int n);

int main()
{
    int number;
    scanf("%d", &number);
    printf("count=%d\n", search(number));
    return 0;
}

int search(int n)
{
    int count = 0;
    for (int i = 101; i <= n; i++)
    {
        int number = i;
        int sqrtnum;
        sqrtnum = sqrt(number);
        if (pow(sqrtnum, 2) != number)
        {
            continue;
        }
        int a, b, c;
        a = number % 10;
        number = number / 10;
        b = number % 10;
        number = number / 10;
        c = number;
        if (a == b && a != c)
        {
        }
        else if (a == c && a != b)
        {
        }
        else if (b == c && b != a)
        {
        }
        else
        {
            continue;
        }
        count++;
    }
    return count;
}