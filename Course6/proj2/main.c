#include <stdio.h>

int main()
{
    int i = 0;
    while (1)
    {
        char input;
        scanf("%c", &input);
        if (input == ' ')
        {
            i++;
        }
        else if (input == '\n')
        {
            break;
        }
    }
    printf("%d",i+1);
    return 0;
}