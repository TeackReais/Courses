#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int fact(int a);
bool panduanzhengfu(int quanpailie[][], int zongshu, int dijigepailie);
int juzhenyunsuan(int shuzi[][], int jieshu);
int yicipailieqiuhe(int shuzi[][], int quanpailie[][], int dijigepailie, int jieshu);
int main()
{
    while (true)
    {
        int jieshu;
        printf("请输入行列式的阶数(或者输入0退出程序)\n");
        scanf("%d", &jieshu);
        if (jieshu == 1)
        {
            printf("不存在一阶行列式。\n");
            continue;
        }
        else if (jieshu == 0)
        {
            break;
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
        int result;
        result = juzhenyunsuan(shuzi, jieshu);
        printf("矩阵运算结果为:%d\n", result);
        printf("按任意键继续。\n");
        system("pause");
    }
    return 0;
}

int n;
int vis[50];
int pailiedijigeshuzi = 0;

void dfs(int x, int num, int dijigepailie, int quanpailie[][])
{
    if (x == n + 1) //考虑完了n位数,再进一次时打印
    {
        num = quanpailie[dijigepailie - 1][pailiedijigeshuzi];
        pailiedijigeshuzi++;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            vis[i] = 1;
            dfs(x + 1, num * 10 + i);
            vis[i] = 0;
        }
    }
}
// 链接：https : //www.zhihu.com/question/391704951/answer/1194644359