#include <stdio.h>

void func(int input[]);
int main()
{
    int array[10];
    array[2] = 3;
    printf("%d", array[2]);
    func(array);
    printf("%d", array[2]);
    return 0;
}

void func(int input[])
{
    input[2] = 4;
}