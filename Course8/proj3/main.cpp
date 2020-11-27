/*
 * @Author: your name
 * @Date: 2020-11-26 10:32:55
 * @LastEditTime: 2020-11-26 10:41:27
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Courses/Course8/proj3/main.cpp
 */
#include <stdio.h>
void splitfloat(float x, int *intpart, float *fracpart);

int main()
{
    float x, fracpart;
    int intpart;
    scanf("%f", &x);
    splitfloat(x, &intpart, &fracpart);
    printf("The integer part is %d\n", intpart);
    printf("The fractional part is %g\n", fracpart);
    return 0;
}

void splitfloat(float x, int *intpart, float *fracpart)
{
    for (*intpart = 0; *intpart <= 10000; (*intpart)++)
    {
        if (*intpart > x)
        {
            (*intpart)--;
            break;
        }
    }
    *fracpart = x - *intpart;
}