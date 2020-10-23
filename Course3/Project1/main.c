#include <stdio.h>

int weishu(int number);
int main()
{
    char _0[] = "ling";
    char _1[] = "yi";
    char _2[] = "er";
    char _3[] = "san";
    char _4[] = "si";
    char _5[] = "wu";
    char _6[] = "liu";
    char _7[] = "qi";
    char _8[] = "ba";
    char _9[] = "jiu";
    int number;
    int zhengfu = 1;
    scanf("%d", &number);
    if (number < 0)
    {
        zhengfu = -1;
        number = -1 * number;
    }
    else if (number == 0)
    {
        printf("ling");
        return 0;
    }
    int wei = weishu(number);
    int shuzi[wei];
    if (zhengfu == -1)
    {
        printf("fu ");
    }
    int shuzi1 = number;
    for (int i = 0; i < wei; i++)
    {
        shuzi[i] = shuzi1 % 10;
        shuzi1 = shuzi1 / 10;
    }
    int wei1 = wei;
    while (wei1 > 0)
    {
        if (wei1 != wei)
        {
            printf(" ");
        }
        switch (shuzi[wei1 - 1])
        {
        case 0:
        {
            printf("%s", _0);
            break;
        }
        case 1:
        {
            printf("%s", _1);
            break;
        }
        case 2:
        {
            printf("%s", _2);
            break;
        }
        case 3:
        {
            printf("%s", _3);
            break;
        }
        case 4:
        {
            printf("%s", _4);
            break;
        }
        case 5:
        {
            printf("%s", _5);
            break;
        }
        case 6:
        {
            printf("%s", _6);
            break;
        }
        case 7:
        {
            printf("%s", _7);
            break;
        }
        case 8:
        {
            printf("%s", _8);
            break;
        }
        case 9:
        {
            printf("%s", _9);
            break;
        }
        }
        wei1--;
    }
    return 0;
}

int weishu(int number)
{
    int i = 1;
    int weishu = 0;
    while (1)
    {
        if (number == 0)
        {
            break;
        }
        number = number / 10;
        weishu++;
    }
    return weishu;
}