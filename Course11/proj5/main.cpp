#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char input;
    char transfer;
    while (scanf("%c", &input) != EOF)
    {
        if (input == '\n')
        {
            printf("\n");
            continue;
        }
        else if (input == ' ')
        {
            printf(" ");
            continue;
        }
        else if (input == ',')
        {
            printf(",");
            continue;
        }
        transfer = input - 1;
        printf("%c", transfer);
    }
    return 0;
}