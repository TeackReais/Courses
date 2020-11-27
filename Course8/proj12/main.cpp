#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int input;
    scanf("%d", &input);
    char string[input][80];
    for (int i = 0; i < input; i++)
    {
        scanf("%s", string[i]);
    }
    int num = 0;
    for (int i = 0; i < input - 1; i++)
    {
        if (strcmp(string[i], string[num]) < 0)
        {
            num = i;
        }
    }
    printf("Min is: %s", string[num]);
    return 0;
}