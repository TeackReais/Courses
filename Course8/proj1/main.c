/*
 * @Author: your name
 * @Date: 2020-11-26 10:11:40
 * @LastEditTime: 2020-11-26 10:29:25
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Courses/Course8/proj1/main.c
 */
#include <stdio.h>
int main()
{
    char c[2] = {'A', 'B'}, *cp = c;
    int i[2] = {65, 66}, *ip = i;
    printf("char1:%c at %p\n", c[0], cp);
    printf("char2:%c at %p\n", c[1], cp + 1);
    printf("int1:%d at %p\n", i[0], ip);
    printf("int2:%d at %p\n", i[1], ip + 1);
    printf("int1 to char1:%c at %p\n", ((char *)ip)[0], ip);
}