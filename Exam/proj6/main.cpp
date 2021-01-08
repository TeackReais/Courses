//accpeted
#include <iostream>
#include <stdio.h>

int main()
{
    int input;
    while (scanf("%d", &input) != EOF)
    {
        bool judge = false;
        for (int i = 2; i < input; i++)
        {
            if (input % i == 0)
            {
                judge = true;
            }
        }
        if (judge)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}