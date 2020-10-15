#include <stdio.h>

int main()
{
    char char1;
    int letter = 0;
    int blank = 0;
    int digit = 0;
    int other = 0;
    int i = 1;
    for (; i <= 10; i++)
    {
        char1 = getchar();
        if (char1 == ' ' || char1 == '\n')
        {
            blank++;
        }
        else if ('0' <= char1 && char1 <= '9')
        {
            digit++;
        }
        else if (('A' <= char1 && 'Z' >= char1) || ('a' <= char1 && 'z' >= char1))
        {
            letter++;
        }
        else
        {
            other++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
    return 0;
}