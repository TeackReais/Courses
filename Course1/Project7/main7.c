#include <stdio.h>
#include <math.h>

int math = 87;
int eng = 72;
int comp = 93;

int main()
{
    int average = (math + eng + comp) / 3 ;
    printf("math = %d, eng = %d, comp = %d, average = %d", math, eng, comp, average);
    return 0;
}