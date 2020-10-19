#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int juzhenyunsuan(int shuzi[][], int jieshu)
{
    int sum;
    int pailiezongshu = fact(jieshu);
    int quanpailie[pailiezongshu][jieshu];

    return sum;
}

int yicipailieqiuhe(int shuzi[][], int quanpailie[][], int dijigepailie, int jieshu)
{
    int result = 1;
    for (int i = 1; i <= jieshu; i++)
    {
        result = result * shuzi[i - 1][quanpailie[dijigepailie - 1][i - 1]];
    }
    if (panduanzhengfu(quanpailie, jieshu, dijigepailie))
    {
        return result;
    }
    else
    {
        return (result * -1);
    }
}

bool panduanzhengfu(int quanpailie[][], int jieshu, int dijigepailie) //判断一组排列中逆序数的个数,ture为正
{
    int nixushu;
    for (int i = 1; i <= jieshu; i++)
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