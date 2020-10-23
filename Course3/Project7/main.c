#include <stdio.h>

int geshu(int A, int B);
float sum(int A, int B);
int main()
{
    int A;
    int B;
    scanf("%d", &A);
    scanf("%d", &B);
    float a = A;
    float b = B;
    int shuzi = 1;
    for (; a <= b; a++)
    {
        printf("%5.0f", a);
        shuzi++;
        if (shuzi == 6)
        {
            printf("\n");
            shuzi = 1;
        }
    }
    if (shuzi != 1)
    {
        printf("\n");
    }
    printf("Sum = %.0f", sum(A, B));
    return 0;
}

int geshu(int A, int B)
{
    int result;
    result = B - A + 1;
    return result;
}

float sum(int A, int B)
{
    float result;
    result = (A + B) * geshu(A, B) / 2;
    return result;
}