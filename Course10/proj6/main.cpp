#include <stdio.h>
#define MAXS 30

char *search(char *s, char *t);
void ReadString(char s[]); /* 裁判提供，细节不表 */

int main()
{
    char s[MAXS], t[MAXS], *pos;
    ReadString(s);
    ReadString(t);
    pos = search(s, t);
    if (pos != NULL)
        printf("%d\n", pos - s);
    else
        printf("-1\n");
    return 0;
}

char *search(char *s, char *t)
{
    char *p = NULL;
    for (int i = 0; i < MAXS; i++)
    {
        int judge = 0;
        if (s[i] != t[0])
        {
            continue;
        }
        int d = 0;
        while (t[d] != '\0')
        {
            if (i + d >= MAXS)
            {
                return NULL;
            }
            if (s[i + d] != t[d])
            {
                judge = 1;
                break;
            }
            d++;
        }
        if (judge == 1)
        {
            continue;
        }
        p = &s[i];
        if (p != NULL)
        {
            return p;
        }
    }
    return p;
}