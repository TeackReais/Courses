#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    int count = 0;
    for (int fen5shiyan = 20; fen5shiyan >= 0; fen5shiyan--)
    {
        for (int fen2shiyan = 100; fen2shiyan >= 0; fen2shiyan--)
        {
            int fen5 = 1;
            int fen2 = 1;
            int fen1 = 1;
            int other = input - 8;
            int fen1shiyan;
            fen1shiyan = other - 5 * fen5shiyan - 2 * fen2shiyan;
            if (fen1shiyan < 0)
            {
                continue;
            }
            fen5 = fen5 + fen5shiyan;
            fen2 = fen2shiyan + fen2;
            fen1 = fen1shiyan + fen1;
            printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", fen5, fen2, fen1, fen1 + fen2 + fen5);
            count++;
        }
    }
    printf("count = %d", count);
    return 0;
}