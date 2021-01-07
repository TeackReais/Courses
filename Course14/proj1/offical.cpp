#include <iostream>
#include <stdio.h>

int main()
{
    long long n;
    while (scanf("%lld", &n) != EOF)
    {
        long long ans = 0;
        long long a = 2, b = 1, c;
        while (true)
        {
            if (a > n)
            {
                break;
            }
            ans++;
            c = a;
            a = a + b;
            b = c;
        }
        printf("%lld\n", ans);
    }
    return 0;
}