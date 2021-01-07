#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

bool check(bool input[], int n, bool judge);
int lianxu(bool input[], int len);
int main()
{
    char str[100000];
    while (scanf("%s", str) != EOF)
    {
        int len = strlen(str);
        bool input[len];
        for (int i = 0; i < len; i++)
        {
            if (str[i] == '1')
            {
                input[i] = true;
            }
            else if (str[i] == '0')
            {
                input[i] = false;
            }
        }
        int index = 0;
        int n = 0;
        while (true)
        {
            if (check(input, len, true))
            {
                break;
            }
            n = lianxu(input, len);
            for (int i = 0; i < n; i++)
            {
                if (input[i] == false)
                {
                    input[i] = true;
                }
                else
                {
                    input[i] = false;
                }
            }
            index++;
        }
        printf("%d\n", index);
    }
    return 0;
}

bool check(bool input[], int n, bool judge)
{
    for (int i = 0; i < n; i++)
    {
        if (input[i] != judge)
        {
            return false;
        }
    }
    return true;
}

int lianxu(bool input[], int len)
{
    int max = -1;
    for (int i = 0; i <= len; i++)
    {
        if (check(input, i, true))
        {
            if (i > max)
            {
                max = i;
            }
        }
    }
    for (int i = 0; i <= len; i++)
    {
        if (check(input, i, false))
        {
            if (i > max)
            {
                max = i;
            }
        }
    }
    return max;
}