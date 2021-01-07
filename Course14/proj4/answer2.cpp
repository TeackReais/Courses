#include <iostream>
using namespace std;

void solve(char zf[], int a[]);
int main()
{
    char zf[100];
    int a[9];
    //freopen("./test.txt", "r", stdin);
    while (true)
    {
        for (int i = 0; i < 100; i++)
        {
            zf[i] = '\0';
        }
        if (cin.getline(zf, 100))
        {
            solve(zf, a);
        }
        else
        {
            break;
        }
    }
    return 0;
}

void solve(char zf[], int a[])
{
    int sum = 0;
    int index = 0;
    for (int i = 0; i < 100; i++)
    {
        if ('0' <= zf[i] && zf[i] <= '9')
        {
            a[index] = zf[i] - '0';
            index++;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        sum = sum + a[i] * (10 - i);
    }
    for (int i = 0; i <= 10; i++)
    {
        if ((sum + i) % 11 == 0 && i != 10)
        {
            printf("%d\n", i);
            break;
        }
        else if ((sum + i) % 11 == 0 && i == 10)
        {
            printf("X\n");
            break;
        }
    }
}