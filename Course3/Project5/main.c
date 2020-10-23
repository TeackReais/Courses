#include <stdio.h>

void func1();
char ch;
int main()
{
    ch = 59.0;
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    printf("%c", ch);
    for (int i = 0; i < 10; i++)
    {
        printf(&a[i]);
    }
    func1();
    func1();
    func1();
    return 0;
}

void func1()
{
    static int a = 1;
    a = 1;
    printf("%d", a);
    a++;
}