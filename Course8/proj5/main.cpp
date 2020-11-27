/*
 * @Author: your name
 * @Date: 2020-11-26 10:51:49
 * @LastEditTime: 2020-11-26 10:58:43
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Courses/Course8/proj5/main.cpp
 */
#include <stdio.h>
#define MAXN 20
void strmcpy(char *t, int m, char *s);
void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main()
{
    char t[MAXN], s[MAXN];
    int m;
    scanf("%d\n", &m);
    ReadString(t);
    strmcpy(t, m, s);
    printf("%s\n", s);
    return 0;
}

void strmcpy(char *t, int m, char *s)
{
    for (int i = 0; i < MAXN; i++)
    {
        if (m - 1 >= MAXN)
        {
            break;
        }
        s[i] = t[m - 1];
        m++;
    }
}