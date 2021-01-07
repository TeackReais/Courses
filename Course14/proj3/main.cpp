#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

bool check(struct Scanner Scanners[], int m, int r, int x, int y);
struct Scanner
{
    int x;
    int y;
};

int main()
{
    int n, m, r;
    while (scanf("%d %d %d", &n, &m, &r) != EOF)
    {
        struct Scanner Scanners[m];
        for (int i = 0; i < m; i++)
        {
            scanf("%d %d", &Scanners[i].x, &Scanners[i].y);
        }
        int index = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (check(Scanners, m, r, i, j))
                {
                    index++;
                }
            }
        }
        printf("%d\n", index);
    }
    return 0;
}

bool check(struct Scanner Scanners[], int m, int r, int x, int y)
{
    for (int i = 0; i < m; i++)
    {
        if (sqrt(pow(Scanners[i].x - x, 2) + pow(Scanners[i].y - y, 2)) < r || pow(Scanners[i].x - x, 2) + pow(Scanners[i].y - y, 2) == pow(r, 2))
        {
            return true;
        }
    }
    return false;
}