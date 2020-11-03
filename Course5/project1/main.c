#include <stdio.h>

int main()
{
    int a = 1;
    int *p = &a;
    printf("%p\n", p);
    printf("%d\n", *p);
    *(p++);
    printf("%p\n", p);
    printf("%d\n", *p);
    printf("%d\n", a);
    return 0;
}