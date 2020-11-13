#include <stdio.h>

int main()
{
    int i = 0;
    int count = 0;
    char inputchar[100000];
    while (1)
    {
        scanf("%c", &inputchar[i]);
        if (inputchar[i] == ' ')
        {
            if (i == 0)
            {
                i++;
                continue;
            }
            if (inputchar[i - 1] != ' ')
            {
                count++;
            }
        }
        else if (inputchar[i] == '\n')
        {
            if (inputchar[i - 1] == ' ')
            {
                count--;
            }
            break;
        }
        i++;
    }
    printf("%d", count + 1);
    return 0;
}