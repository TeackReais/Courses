#include <stdio.h>
#include <math.h>

int cal(int a, int b);
int main()
{
    int input1;
    int input2;
    scanf("%d", &input1);
    scanf("%d", &input2);
    int sum = 0; //必须初始化
    for (int i = 1; i <= input2; i++)
    {
        sum = sum + cal(input1, i);
    }
    printf("s = %d", sum);
    return 0;
}

int cal(int a, int b)
{
    int result = 0; //必须初始化
    for (int i = 1; i <= b; i++)
    {
        result = a * pow(10, i - 1) + result;
    }
    return result;
}