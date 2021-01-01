#include <stdio.h>
#include <string.h>

struct Position Run(char cmd[], int num, struct Position p);

struct Position
{
    int x;
    int y;
};
int main()
{
    char cmd[1000];
    for (int i = 0; i < 1000; i++)
    {
        cmd[i] = '\0';
    }
    scanf("%s", cmd);
    int num;
    scanf("%d", &num);
    int len = strlen(cmd);
    struct Position p1;
    p1.x = 0;
    p1.y = 0;
    while (num > 0)
    {
        p1 = Run(cmd, num, p1);
        num = num - len;
    }
    printf("%d %d\n", p1.x, p1.y);
    return 0;
}

struct Position Run(char cmd[], int num, struct Position p)
{
    for (int i = 0; i < num; i++)
    {
        if (cmd[i] == 'E')
        {
            p.x = p.x + 1;
            continue;
        }
        if (cmd[i] == 'S')
        {
            p.y = p.y - 1;
            continue;
        }
        if (cmd[i] == 'W')
        {
            p.x = p.x - 1;
            continue;
        }
        if (cmd[i] == 'N')
        {
            p.y = p.y + 1;
            continue;
        }
    }
    return p;
}