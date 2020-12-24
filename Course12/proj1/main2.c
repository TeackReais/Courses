#include <stdio.h>

struct point
{
    int judge;
};

int main()
{
    int input;
    char change;
    scanf("%c %d", &change, &input);
    struct point points[input][input];
    struct point outpoints[input][input];
    for (int i = 0; i < input; i++) //输入
    {
        for (int d = 0; d < input; d++)
        {
            char inputchar;
            char inputchar2;
            scanf("%c", &inputchar);
            if (inputchar == '\n')
            {
                scanf("%c", &inputchar2);
                inputchar = inputchar2;
            }
            if (inputchar == '@')
            {
                points[i][d].judge = 1;
            }
            else
            {
                points[i][d].judge = 0;
            }
        }
    }
    for (int i = 0; i < input; i++) //一次转换
    {
        for (int d = 0; d < input; d++)
        {
            if (points[i][d].judge == 1)
            {
                outpoints[input - 1 - i][input - 1 - d].judge = 1;
            }
        }
    }
    int judge = 0; //判断
    for (int i = 0; i < input; i++)
    {
        for (int d = 0; d < input; d++)
        {
            if (points[i][d].judge != outpoints[i][d].judge)
            {
                judge = 1;
            }
        }
    }
    if (judge == 0)
    {
        printf("bu yao zhao le\n");
    }
    for (int i = 0; i < input; i++) //输出
    {
        for (int d = 0; d < input; d++)
        {
            if (outpoints[i][d].judge == 1)
            {
                printf("%c", change);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}