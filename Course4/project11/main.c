#include <stdio.h>
#include <math.h>

int main()
{
    int input;
    scanf("%d", &input);
    int above = (input + 1) / 2;
    int below = input - above;
    for (int layer = 1; layer <= above; layer++)
    {
        for (int i1 = 1; i1 <= above - layer; i1++)
        {
            printf("  ");
        }
        for (int i2 = 1; i2 <= 2 * layer - 1; i2 = i2 + 1)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
    for (int layer = above - 1; layer > 0; layer--)
    {
        for (int i1 = 1; i1 <= above - layer; i1++)
        {
            printf("  ");
        }
        for (int i2 = 1; i2 <= 2 * layer - 1; i2 = i2 + 1)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}