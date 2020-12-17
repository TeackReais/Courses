#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Reverse(char s[]);

int main()
{
    while (1)
    {
        char input[100];
        int inputnum;
        strcpy(input, "");
        if (scanf("%d", &inputnum) == EOF)
        {
            break;
        }
        if (inputnum == -1)
        {
            break;
        }
        sprintf(input, "%d", inputnum);
        Reverse(input);
        printf("%s\n", input);
    }
    return 0;
}

void Reverse(char s[])
{
    int n = strlen(s);
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        char c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}