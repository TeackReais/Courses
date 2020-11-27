/*
 * @Author: your name
 * @Date: 2020-11-26 10:45:10
 * @LastEditTime: 2020-11-26 10:48:28
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Courses/Course8/proj4/main.cpp
 */
#include <stdio.h>
#define MAXN 10

void sort(int a[], int n);

int main()
{
    int i, n;
    int a[MAXN];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, n);
    printf("After sorted the array is:");
    for (i = 0; i < n; i++)
        printf(" %d", a[i]);
    printf("\n");
    return 0;
}

void sort(int a[], int n)
{
    while (1)
    {
        int index = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                index++;
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        if (index == 0)
        {
            break;
        }
    }
}