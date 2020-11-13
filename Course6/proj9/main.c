#include <stdio.h>

int main()
{
    int i = 0;
    char str[100];
    while (i < 5)
    {
        str[i++] = getchar();
    }
    printf("%s", str);
    i = 0;
    while (i < 2)
    {
        str[i++] = getchar();
    }
    printf("%s", str);
}