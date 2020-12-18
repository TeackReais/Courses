#include <iostream>
#include <string.h>
using namespace std;

void move(char str[], int length);
void initStr(char str[], int n);
int main()
{
    char input;
    char str[1000];
    initStr(str, 1000);
    char strtemp[100];
    initStr(strtemp, 100);
    bool judge = false;
    int index = 0;
    int index2 = 0;
    while (true)
    {
        if (scanf("%c", &input) == EOF)
        {
            break;
        }
        index = strlen(str);
        if (input == '\n')
        {
            printf("%s\n", str);
            initStr(str, 1000);
            index = 0;
            continue;
        }
        if (input == '[')
        {
            judge = true;
            index2 = 0;
            initStr(strtemp, 100);
            continue;
        }
        else if (input == ']')
        {
            judge = false;
            move(str, strlen(strtemp));
            for (int i = 0; i < strlen(strtemp); i++)
            {
                str[i] = strtemp[i];
            }
            initStr(strtemp, 100);
            index2 = 0;
            continue;
        }
        if (judge)
        {
            index2 = strlen(strtemp);
            strtemp[index2] = input;
        }
        else
        {
            str[index] = input;
        }
    }
}

void move(char str[], int length)
{
    int len = strlen(str);
    str[len + length] = '\0';
    for (int i = len - 1; i >= 0; i--)
    {
        str[i + length] = str[i];
    }
}

void initStr(char str[], int n)
{
    for (int i = 0; i < n; i++)
    {
        str[i] = '\0';
    }
}