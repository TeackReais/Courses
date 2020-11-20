#include <stdio.h>
#include <math.h>

int main()
{
    char vaildChars[100];
    int num[100];
    
    int zhengfu = 1;
    long sum = 0;
    int index = 0;
    scanf("%s", vaildChars);
    for (int i = 0; i < 100; i++)
    {
        if (vaildChars[i] == '-')
        {
            if (index == 0)
            {
                zhengfu = -1;
            }
            continue;
        }
        else if ('0' <= vaildChars[i] && vaildChars[i] <= '9')
        {
            num[index] = vaildChars[i] - '0';
            index++;
            continue;
        }
        else if ('A' <= vaildChars[i] && 'F' >= vaildChars[i])
        {
            num[index] = vaildChars[i] - 'A' + 10;
            index++;
            continue;
        }
        else if ('a' <= vaildChars[i] && 'f' >= vaildChars[i])
        {
            num[index] = vaildChars[i] - 'a' + 10;
            index++;
            continue;
        }
        else if (vaildChars[i] == '#')
        {
            index = index - 1;
            break;
        }
        else
        {
            continue;
        }
    }
    for (int i = index; i >= 0; i--)
    {
        sum = sum + pow(16, index - i) * num[i];
    }
    sum = sum * zhengfu;
    printf("%ld", sum);
}