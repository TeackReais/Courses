#include <stdio.h>
int n;
int vis[50];
int fac(int n)
{
    if (n == 1)
        return 1;
    return n * fac(n - 1);
}
void dfs(int x, int num)
{
    if (x == n + 1) //考虑完了n位数,再进一次时打印
    {
        printf("%d\n", num);
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
int main()
{
    scanf("%d", &n);
    printf("全排列的个数是：%d\n", fac(n));
    dfs(1, 0); //第一个参数代表当前正在考虑第几个数,第二个参数代表 当前的数字
    return 0;
}


// 链接：https : //www.zhihu.com/question/391704951/answer/1194644359