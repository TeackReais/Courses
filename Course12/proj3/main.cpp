#include <iostream>
#include <stdio.h>
using namespace std;

void solve(int num, int num2);
void getNum(int *num0, int *num1, int *num2, int *num3, int year);
bool check(int *num, int bit);
bool have(int num[], int num1);
int main()
{
    int num1, num2;
    while (scanf("%d %d", &num1, &num2) != EOF)
    {
        solve(num1, num2);
    }
    return 0;
}

void solve(int num1, int num2)
{
    int index = 0;
    while (true)
    {
        int num[4];
        getNum(&num[0], &num[1], &num[2], &num[3], num1);
        if (check(num, num2))
        {
            printf("%d %d%d%d%d\n", index, num[0], num[1], num[2], num[3]);
            break;
        }
        num1++;
        index++;
    }
}

bool check(int num[], int bit)
{
    int index = 0;
    int numHave[4] = {-1, -1, -1, -1};
    for (int i = 0; i < 4; i++)
    {
        if (have(numHave, num[i]))
        {
            numHave[index] = num[i];
            index++;
        }
    }
    if (index == bit)
    {
        return true;
    }
    return false;
}

void getNum(int *num0, int *num1, int *num2, int *num3, int year)
{
    if (year < 1000)
    {
        *num0 = 0;
        *num1 = year / 100;
        *num2 = (year - 100 * *num1) / 10;
        *num3 = year % 10;
    }
    else if (year < 100)
    {
        *num0 = 0;
        *num1 = 0;
        *num2 = year / 10;
        *num3 = year % 10;
    }
    else if (year < 10)
    {
        *num0 = 0;
        *num1 = 0;
        *num2 = 0;
        *num3 = year;
    }
    else
    {
        *num0 = year / 1000;
        *num1 = (year - 1000 * *num0) / 100;
        *num2 = (year - 1000 * *num0 - 100 * *num1) / 10;
        *num3 = year % 10;
    }
}

bool have(int num[], int num1)
{
    for (int i = 0; i < 3; i++)
    {
        if (num[i] == num1)
        {
            return false;
        }
    }
    return true;
}