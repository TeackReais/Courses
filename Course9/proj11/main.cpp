#include <stdio.h>
#include "bubble_sort.h"

int main()
{
    int n, a[8];
    printf("Enter n (n<=8): ");
    scanf("%d", &n);
    printf("Enter a[%d] : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    bubble_sort(a, n);
    printf("After sorted，a[%d] = ", n);
    for (int i = 0; i < n; i++)
    {
        printf("%3d", a[i]);
    }
    return 0;
}