#include <stdio.h>

int reverse(int number);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", reverse(n));
    return 0;
}

int reverse(int number)
{
    int index = 0;
    int num = number;
    int judge = 1;
    if (num < 0)
    {
        num = -num;
        judge = -1;
    }
    while (1)
    {
        if (number == 0)
        {
            break;
        }
        number = number / 10;
        index++;
    }
    int nums[index];
    for (int i = 0; i < index; i++)
    {
        nums[i] = num % 10;
        num = num / 10;
    }
    int result = 0;
    for (int i = 0; i < index; i++)
    {
        int temp = 1;
        for (int d = 0; d < index - 1 - i; d++)
        {
            temp = temp * 10;
        }
        result = result + nums[i] * temp;
    }
    if (judge == -1)
    {
        result = -result;
    }
    return result;
}