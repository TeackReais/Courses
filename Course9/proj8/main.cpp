#include <stdio.h>

int main()
{
    float x1, y1, x2, y2;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    printf("(%f, %f)", x1 + x2, y1 + y2);
    return 0;
}