#include <stdio.h>
#define MAXS 15

void StringCount(char s[]);
void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];
    ReadString(s);
    StringCount(s);
    return 0;
}

void StringCount(char s[])
{
    int a, b, c, d;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    for (int i = 0; i < MAXS; i++)
    {
        char input = s[i];
        if (input == ' ')
        {
            b++;
        }
        else if ('0' <= input && input <= '9')
        {
            c++;
        }
        else if (('a' <= input && input <= 'z') || ('A' <= input && input <= 'Z'))
        {
            a++;
        }
        else if (input == '\0' || input == '\n')
        {
        }
        else
        {
            d++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d", a, b, c, d);
}