#include <stdio.h>
#include <stdbool.h>
bool judgeprimenumber(int number);
int main()
{
    int number;
    printf("请输入一个大于1的正整数，系统将输出从1到这个数字之间所有质数的个数。\n");
    scanf("%d", &number);
    if (number <= 1)
    {
        printf("错误\n");
        return 0;
    }
    int geshu = 0;
    for (int i = 1; i <= number; i++)
    {
        if (judgeprimenumber(i))
        {
            geshu++;
        }
    }
    printf("1到数字%d之间质数的个数为%d个。\n", number, geshu);
    return 0;
}

bool judgeprimenumber(int number)
{
    int a = 1;
    int b = number;
    int kechugeshu = 0;
    if (number == 1)
    {
        return false;
    }
    for (; a <= b; a++)
    {
        if (b % a == 0)
        {
            kechugeshu++;
        }
    }
    if (kechugeshu == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}