#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

struct str
{
    char str[100];
};

void Reverse(char s[]);
int main()
{
    int index = 0;
    // char input[100][100];
    struct str input[40000];
    while (index<40000)
    {
        scanf("%s", input[index].str);
        if (strcmp(input[index].str, "-1") == 0)
        {
            break;
        }
        index++;
    }
    // char mirror[100];
    // int len;
    for (int i = 0; i < index; i++)
    {
        // strcpy(mirror, "");
        // len = strlen(input[i]);
        // for (int d = 0; d < len; d++)
        // {
        //     mirror[d] = input[i][len - d - 1];
        // }
        // mirror[len] = '\0';
        // printf("%s\n", mirror);
        Reverse(input[i].str);
        printf("%s", input[i].str);
        printf("\n");
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