#include <stdio.h>
int main()
{
    char str[80];
    int i;
    gets(str); //gets，遇到回车结束，自动添加'\0'
    puts(str); //puts,输出字符串
    puts("Hello");
    scanf("%s", str); //遇到回车/空格结束，并自动添加'\0'
    getchar();
    printf("%s\n", str);
    i = 0;
    while ((str[i] = getchar()) != '#')
    {
        i++;
    }
    str[i] = '\0';
    for (i = 0; str[i] != '\0'; i++)
    {
        putchar(str[i]);
    }
}