#include <stdio.h> //第一天上交

int main()
{
    struct string
    {
        char word[1000];
    };
    struct string strings[1000];
    int index = 0;
    for (int i = 0; i < 30; i++)
    {
        scanf("%s", strings[i].word);
        char input = getchar();
        index = i;
        if (input == ' ')
        {
            continue;
        }
        else if (input == '\n')
        {
            break;
        }
    }
    for (int i = 0; i <= index; i++)
    {
        int index2 = 0;
        while (1)
        {
            if (strings[i].word[index2] == '\0')
            {
                break;
            }
            char a = strings[i].word[index2];
            if ('A' <= a && a <= 'Z')
            {
                a = 155 - a;
                strings[i].word[index2] = a;
            }
            index2++;
        }
    }
    for (int i = 0; i <= index; i++)
    {
        if (i != 0)
        {
           printf(" ");
        }
        printf("%s", strings[i].word);
    }
    return 0;
}