#include <stdio.h>

void printdigits(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printdigits(n);
    return 0;
}

void printdigits(int n)
{
    if (n == 0)
    {
        printf("0");
        return;
    }
    int index = 0;
    int number = n;
    for (int i = 0;; i++)
    {
        if (number != 0)
        {
            index++;
            number = number / 10;
        }
        else
        {
            break;
        }
    }
    int numberbit[index];
    for (int i = 0; i < index; i++)
    {
        if (n != 0)
        {
            numberbit[i] = n % 10;
            n = n / 10;
        }
        else
        {
            break;
        }
    }
    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d\n", numberbit[i]);
    }
}