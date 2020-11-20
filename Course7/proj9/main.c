#include <stdio.h>

void solve();
int main()
{
    int input;
    scanf("%d", &input);
    for (int i = 0; i < input; i++)
    {
        solve();
    }
    return 0;
}

void solve()
{
    int num;
    scanf("%d", &num);
    int numbers[num][num];
    for (int i = 0; i < num; i++)
    {
        for (int d = 0; d < num; d++)
        {
            scanf("%d", &numbers[i][d]);
        }
    }
    int judge = 0;
    for (int i = 0; i < num; i++)
    {
        for (int d = 0; d < num; d++)
        {
            if (i > d)
            {
                if (numbers[i][d] != 0)
                {
                    judge = 1;
                }
            }
        }
    }
    if (judge == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}