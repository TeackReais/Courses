#include <stdio.h>

#define MAXS 10

char *match(char *s, char ch1, char ch2);

int main()
{
    char str[MAXS], ch_start, ch_end, *p;
    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);
    return 0;
}

char *match(char *s, char ch1, char ch2)
{
    int i = 0;
    char *p;
    int judge = 0;
    while (1)
    {
        if (s[i] == '\0')
        {
            if (p == NULL)
            {
                p = &s[i];
            }
            break;
        }
        if (ch1 == s[i] && judge == 0)
        {
            p = &s[i];
            judge = 1;
        }
        if (judge == 1)
        {
            printf("%c", s[i]);
        }
        if (ch2 == s[i] && judge == 1)
        {
            judge = 2;
        }
        i++;
    }
    printf("\n");
    return p;
}