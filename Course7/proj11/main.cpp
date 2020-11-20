#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char word[1000];
    int index = 0;
    cin.getline(word, 1000);
    for (int i = 0; i < 1000; i++)
    {
        char a = word[i];
        if (word[i] == '\0')
        {
            break;
        }
        if ('A' <= a && a <= 'Z')
        {

            a = 155 - a;
            word[i] = a;
        }
    }
    for (int i = 0; i <= index; i++)
    {
        printf("%s", word);
    }
    return 0;
}