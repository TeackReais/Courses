#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{
    int num = 1;
    int *p = NULL;
    int **p2 = &p;
    printf("%p", p2);
}