#include <iostream>
#include <stdio.h>
using namespace std;

void solve()
{
    int cnt = 0, flag = 0, i = 0;
    char dc[100]; //100太少
    cin.getline(dc, 100);
    for (i = 0;; i++)
    {
        if (dc[i] == '\0')
            break;
        else if (dc[i] != ' ')
            flag = 1;
        else if (dc[i] == ' ' && flag == 1)
        {
            cnt++;
            flag = 0;
        }
    }
    if (flag == 1)
        cnt++;
    printf("%d", cnt);
}

int main()
{
    solve();
    return 0;
}