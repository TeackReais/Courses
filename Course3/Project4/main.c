#include <stdio.h>
int a = 1;
void ceshi();
int main()
{
    printf("%d", a);
    ceshi();
    printf("%d", a);
    return 0;
}

void ceshi()
{
    printf("%d", a);
    a = 2;
    printf("%d", a);
}