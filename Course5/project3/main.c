#include <stdio.h>

void pyramid(int n);

int main()
{
    int n;
    scanf("%d", &n);
    pyramid(n);
    return 0;
}

void pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int b = 1;
        while (b <= i)
        {
            if (b == 1)
            {
                for (int c = 1; c <= n - i; c++)
                {
                    printf(" ");
                }
            }
            printf("%d ", i);
            b++;
        }
        printf("\n");
    }
}