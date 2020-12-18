#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

void Reverse(char s[]);
int main()
{
    int index = 0;
    char input[10000];
    while (index < 40000)
    {
        scanf("%s", input);
        if (strcmp(input, "-1") == 0)
        {
            break;
        }
        index++;
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