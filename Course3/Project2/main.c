#include <stdio.h>
#include <stdbool.h>

int fact(int a);
bool panduanzhengfu(int quanpailie[][], int zongshu, int dijigepailie);
int juzhenyunsuan(int shuzi[][], int jieshu);
int main()
{
    while (1)
    {
        int jieshu;
        printf("请输入行列式的阶数:");
        scanf("%d", &jieshu);
        if (jieshu == 1)
        {
            printf("不存在一阶行列式。\n");
            continue;
        }
        int shuzi[jieshu][jieshu];
        for (int hangshu = 1; hangshu <= jieshu; hangshu++)
        {
            printf("请输入第%d行的%d个元素。\n", hangshu, jieshu);
            for (int geshu = 1; geshu <= jieshu; geshu++)
            {
                printf("请输入第%d行的第%d个元素。\n", hangshu, geshu);
                scanf("%d", &shuzi[hangshu - 1][geshu - 1]);
            }
        }
    }
    return 0;
}

int juzhenyunsuan(int shuzi[][], int jieshu)
{
    int sum;
    int pailiezongshu = fact(jieshu);
    int quanbupailie[pailiezongshu][jieshu];

    return sum;
}

bool panduanzhengfu(int quanpailie[][], int zongshu, int dijigepailie) //ture为正
{
    int nixushu;
    for (int i = 1; i <= zongshu; i++)
    {
        if (quanpailie[dijigepailie - 1][i - 1] > i)
        {
            nixushu++;
        }
    }
    if (nixushu % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int fact(int a)
{
    int result = 1;
    for (int i = 1; i <= a; i++)
    {
        result = result * i;
    }
    return result;
}