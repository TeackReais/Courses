#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    int numbers[input][input];
    for (int i = 0; i < input; i++)
    {
        for (int d = 0; d < input; d++)
        {
            scanf("%d", &numbers[i][d]);
        }
    }
    for (int i = 0; i < input; i++)
    {
        for (int d = 0; d < input; d++)
        {
            int judge = 1; //注意位置，每个数字恢复
            int num = numbers[i][d];
            for (int k = 0; k < input; k++)
            {
                if (i != k && num > numbers[k][d]) //可以相等，同样最大/最小
                {
                    judge = 0;
                }
            }
            for (int k = 0; k < input; k++)
            {
                if (d != k && num < numbers[i][k])
                {
                    judge = 0;
                }
            }
            if (judge == 1)
            {
                printf("%d %d", i, d);
                return 0;
            }
        }
    }
    printf("NONE");
    return 0;
}