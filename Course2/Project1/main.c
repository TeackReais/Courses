#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int result1, result2, result3, result4;
    result1 = a + b;
    result2 = a - b;
    result3 = a * b;
    result4 = a / b;
    printf("%d + %d = %d\n", a, b, result1);
    printf("%d - %d = %d\n", a, b, result2);
    printf("%d * %d = %d\n", a, b, result3);
    printf("%d / %d = %d\n", a, b, result4);
    return 0;
}