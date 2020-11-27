/*
 * @Author: your name
 * @Date: 2020-11-26 10:58:52
 * @LastEditTime: 2020-11-26 11:11:49
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Courses/Course8/proj6/main.cpp
 */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAXN 20
bool palindrome(char *s);

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if (palindrome(s) == true)
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

bool palindrome(char *s)
{
    char result[MAXN];
    int length = 0;
    for (int i = 0; i < MAXN; i++)
    {
        if (s[i] == '\0')
        {
            length--;
            break;
        }
        result[i] = s[i];
        length++;
    }
    for (int i = 0; i <= length / 2; i++)
    {
        int temp = result[i];
        result[i] = result[length - i];
        result[length - i] = temp;
    }
    for (int i = 0; i < length; i++)
    {
        if (result[i] != s[i])
        {
            return false;
        }
    }
    return true;
}