/*
 * @Author: your name
 * @Date: 2020-11-26 11:12:44
 * @LastEditTime: 2020-11-26 11:23:45
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Courses/Course8/proj7/main.cpp
 */
#include <stdio.h>
#include <string.h>

#define MAXS 10

char *str_cat(char *s, char *t);

int main()
{
    char *p;
    char str1[MAXS + MAXS] = {'\0'}, str2[MAXS] = {'\0'};

    scanf("%s%s", str1, str2);
    p = str_cat(str1, str2);
    printf("%s\n%s\n", p, str1);

    return 0;
}
char *str_cat(char *s, char *t)
{
    int len1, len2;
    len1 = 0;
    len2 = 0;
    for (int i = 0; i < MAXS; i++)
    {
        if (s[i] != '\0')
        {
            len1++;
        }
        else
        {
            len1 = len1 - 1;
            break;
        }
    }
    for (int i = 0; i < MAXS; i++)
    {
        if (t[i] != '\0')
        {
            len2++;
        }
        else
        {
            len2 = len2 - 1;
            break;
        }
    }
    for (int i = 0; i <= len2; i++)
    {
        s[i + len1 + 1] = t[i];
    }
    s[len1 + len2 + 2] = '\0';
    return s;
}