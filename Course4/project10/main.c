#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    long max = pow(10, n) - 1;
    long min = pow(10, n - 1);
    for (long i = min; i <= max; i++)
    {
        int m[7];
        int i2 = 0;
        long a = i;
        while (1)
        {
            m[i2] = a / pow(10, n - i2 - 1);
            a = a - pow(10, n - i2 - 1) * m[i2];
            i2++;
            if (a == 0)
            {
                break;
            }
        }
        long sum = 0;
        for (int i3 = 0; i3 < n; i3++)
        {
            sum = sum + pow(m[i], n);
        }
        if (sum == i)
        {
            printf("%ld\n", sum);
        }
    }
    return 0;
}