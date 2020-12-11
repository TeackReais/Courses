#include <stdio.h>
#include <stdlib.h>

void test(int *p);
int main()
{
    char *color[5] = {"abc", "def", "ghi", "jkl", "mno"};
    int i = 1, j = 1;
    printf("%s\n", *(color + i));
    printf("%c\n", *(*color + i));
    printf("%c\n", *((*color + i) + j));
    printf("%c\n", *(*(color + i) + j));
    int var1 = 10;
    for (int var1 = 0; var1 < 200; var1++)
    {
    }
    // int *pstr;
    // int *p;
    // test(p);
    // int a = 10;
    // p = &a;
    // printf("%d", *p);
    pstr = (int *)malloc(var1);
    printf("%d", var1);
    pstr[0] = 1;
    pstr[1] = 2;
    pstr[3] = 3;
    pstr[4] = 4;
    pstr[5] = 5;
    pstr[6] = 6;
    pstr[7] = 7;
    pstr[8] = 8;
    pstr[9] = 9;
    pstr[10] = 10;
    pstr[110] = 10;
    free(pstr);
    // pstr[10] = 'b';
    // pstr[0] = 'a';
    // pstr[1] = 'b';
    // pstr[0] = 'a';
    // pstr[1] = 'b';
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

void test(int *p)
{
    int a = 10;
    p = &a;
}