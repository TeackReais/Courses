#include <stdio.h>

struct rabbit
{
    int time;
    int exist;
};
int main()
{
    int n;
    scanf("%d", &n);
    struct rabbit rab[10000];
    rab[0].time = 0;
    rab[0].exist = 1;
    for (int i = 1; i < 10000; i++)
    {
        rab[i].time = 0;
        rab[i].exist = 0;
    }
    int time = 0;
    while (1)
    {
        time++;
        for (int i = 0; i < 10000; i++) //所有存在的rabbit时间+1
        {
            if (rab[i].exist == 1)
            {
                rab[i].time++;
            }
        }
        int new = 0;
        for (int i = 0; i < 10000; i++) //判断存在的rabbit的数量
        {
            if (rab[i].exist == 1 && rab[i].time >= 3)
            {
                new ++;
            }
        }
        int i2 = 0;
        while (1) //将新增的rabbit分配
        {
            if (new == 0)
            {
                break;
            }
            if (rab[i2].exist == 0)
            {
                rab[i2].exist = 1;
                rab[i2].time = 1;
                new --;
            }
            i2++;
        }
        int i3 = 0;
        for (int i = 0; i < 10000; i++) //判断目前存在的rabbit的数量
        {
            if (rab[i].exist == 1)
            {
                i3++;
            }
        }
        if (i3 >= n)
        {
            printf("%d", time);
            break;
        }
    }
    return 0;
}