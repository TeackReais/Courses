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

void StringCount(char s[]) //网络答案看后修改产生的答案
{
    int a, b, c, d;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    for (int i = 0; i < MAXS; i++)
    {
        char input = s[i];
        if (input == ' ' || input == '\n')
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
        else if (input == '\0')
        {
            break;
        }
        else
        {
            d++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d", a, b, c, d);
}

/*void StringCount(char s[])  //网络答案
{
    int letter = 0, blank = 0, digit = 0, other = 0, i;
    int n = strlen(s);
    for (i = 0; i < n; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            letter++;
        else if (s[i] == ' ' || s[i] == '\n')
            blank++;
        else if (s[i] >= '0' && s[i] <= '9')
            digit++;
        else
            other++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
}*/
