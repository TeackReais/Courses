#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
void change(int *a, int *b);
int main()
{
    char input[5][80];
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", input[i]);
    }
    int index2[5] = {0, 1, 2, 3, 4};
    while (1)
    {
        int index = 0;
        for (int i = 0; i < 4; i++)
        {
            if (strcmp(input[index2[i]], input[index2[i + 1]]) > 0)
            {
                change(&index2[i], &index2[i + 1]);
                index++;
            }
        }
        if (index == 0)
        {
            break;
        }
    }
    printf("After sorted:");
    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        printf("%s", input[index2[i]]);
    }
    return 0;
}

void change(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}