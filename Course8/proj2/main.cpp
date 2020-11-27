/*
 * @Author: your name
 * @Date: 2020-11-26 10:30:45
 * @LastEditTime: 2020-11-26 10:32:46
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Courses/Course8/proj2/main.c
 */
#include <stdio.h>

void findmax(int *px, int *py, int *pmax);

int main()
{
    int max, x, y;
    scanf("%d %d", &x, &y);
    findmax(&x, &y, &max);
    printf("%d\n", max);
    return 0;
}

void findmax(int *px, int *py, int *pmax)
{
    if (*px > *py)
    {
        *pmax = *px;
    }
    else
    {
        *pmax = *py;
    }
}