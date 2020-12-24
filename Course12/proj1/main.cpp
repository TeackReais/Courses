#include <iostream>
#include <stdio.h>
using namespace std;

void solve(char input, int num);
int main()
{
    char input;
    int num;
    scanf("%c %d", &input, &num);
    solve(input, num);
    return 0;
}

void solve(char input, int num)
{
    char enter = getchar();
    int location[num][num];
    int change[num][num];
    for (int i = 0; i < num; i++)
    {
        for (int d = 0; d < num; d++)
        {
            location[i][d] = 0;
            change[i][d] = 0;
        }
    }
    for (int i = 0; i < num; i++)
    {
        for (int d = 0; d < num; d++)
        {
            char inputchar;
            scanf("%c", &inputchar);
            if (inputchar == '@')
            {
                location[i][d] = 1;
            }
            else
            {
                location[i][d] = 0;
            }
        }
        getchar();
    }
    for (int i = 0; i < num; i++)
    {
        for (int d = 0; d < num; d++)
        {
            change[i][d] = location[num - 1 - i][num - 1 - d];
        }
    }
    int index = 0;
    for (int i = 0; i < num; i++)
    {
        for (int d = 0; d < num; d++)
        {
            if (location[i][d] != change[i][d])
            {
                index++;
            }
        }
    }
    bool checkres = false;
    if (index == 0)
    {
        checkres = true;
    }
    else
    {
        checkres = false;
    }
    if (checkres)
    {
        printf("bu yao zhao le\n");
    }
    for (int i = 0; i < num; i++)
    {
        for (int d = 0; d < num; d++)
        {
            if (change[i][d] == 1)
            {
                printf("%c", input);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}