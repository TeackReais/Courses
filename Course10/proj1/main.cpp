#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *color[5] = {"abc", "def", "ghi", "jkl", "mno"};
    int i = 1, j = 1;
    printf("%s\n", *(color + i));
    printf("%c\n", *(*color + i));
    printf("%c\n", *((*color + i) + j));
    printf("%c\n", *(*(color + i) + j));
    // printf("%c", color[1][0]);
    //  printf("%s", color[0]);
    //  *color[0][0] = 'p';
    // printf("%s", color[0]);
    // int a[2][2] = {{1, 2}, {3, 4}};
    // printf("%p\n", a[0]);
    // printf("%p\n", a[1]);
    // printf("%p\n", a);
    return 0;
}