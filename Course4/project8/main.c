#include <stdio.h>

int cal(int a);
int main()
{
    int n;
    scanf("%d", &n);
    int number = 1;
    for (int i = 1; i < n; i++)
    {
        number = cal(number);
    }
    printf("%d", number); 
    return 0;
}

int cal(int a)
{
    return (a + 1) * 2;
}