#include <stdio.h>

int minspot(int a[], int b, int c);
int n;
int main()
{
    printf("Enter n:");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d integers:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d\n", minspot(a, 0, n - 1));
    for (int i = 0; i < n; i++)
    {
        int minspot1 = minspot(a, i, n - 1);
        int temp = a[i];
        a[i] = a[minspot1];
        a[minspot1] = temp;
    }
    printf("After sorted:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
//函数正确
int minspot(int a[], int b, int c)
{
    int min;
    int spot;
    spot = b;
    min = a[b];
    for (int i = b; i - 1 <= c; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            spot = i;
        }
    }
    return spot;
}
