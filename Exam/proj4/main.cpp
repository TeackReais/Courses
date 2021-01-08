//accepted
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b);
int main()
{
    int num;
    while (scanf("%d", &num) != EOF)
    {
        int size[num];
        for (int i = 0; i < num; i++)
        {
            scanf("%d", &size[i]);
        }
        int index[num];
        for (int i = 0; i < num; i++)
        {
            index[i] = i;
        }
        while (true)
        {
            int judge = 0;
            for (int i = 0; i < num - 1; i++)
            {
                if (size[index[i]] < size[index[i + 1]])
                {
                    int temp = index[i + 1];
                    index[i + 1] = index[i];
                    index[i] = temp;
                    judge++;
                }
            }
            if (judge == 0)
            {
                break;
            }
        }
        for (int i = 0; i < num; i++)
        {
            if (i != 0)
            {
                printf(" ");
            }
            printf("%d", size[index[i]]);
        }
        printf("\n");
    }
    return 0;
}