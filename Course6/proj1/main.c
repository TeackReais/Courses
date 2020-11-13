#include <stdio.h>

void array0();
void array1(int n);
int calmain(int num1, int num2, char cal);
int sumarray();
void arrayspecial();

int numstorage[10]; //保存每个数字
char cal[10];       //保存运算符
int numbers[10];    //保存合成的数字
char judge = '%';   //判断除数是否为0

int main()
{
    int sum = 0;    //求和
    array0();       //numstorage初始化
    arrayspecial(); //cal初始化
    int index = 0;
    for (int i = 0; i < 10; i++)
    {
        char inputchar;
        int num;
        scanf("%c", &inputchar);
        if ('0' <= inputchar && inputchar <= '9')
        {
            num = inputchar - '0';
            numstorage[i] = num;
            array1(i);
        }
        else if (inputchar == '+' || inputchar == '-' || inputchar == '*' || inputchar == '/')
        {
            numbers[index] = sumarray();
            array0();
            cal[index] = inputchar;
            index++;
            i = -1;
        }
        else if (inputchar == '=')
        {
            numbers[index] = sumarray();
            break;
        }
        else
        {
            printf("ERROR");
            return 0;
        }
    }
    getchar();
    sum = numbers[0];
    for (int i = 0; i <= index; i++)
    {
        sum = calmain(sum, numbers[i + 1], cal[i]);
        if (judge == '$')
        {
            printf("ERROR");
            return 0;
        }
    }
    printf("%d", sum);
    return 0;
}

int calmain(int num1, int num2, char cal)
{
    if (cal == '+')
    {
        return num1 + num2;
    }
    else if (cal == '-')
    {
        return num1 - num2;
    }
    else if (cal == '*')
    {
        return num1 * num2;
    }
    else if (cal == '/')
    {
        if (num2 == 0)
        {
            judge = '$';
            return 0;
        }
        return num1 / num2;
    }
    else if (cal == '&')
    {
        return num1;
    }
    else
    {
        judge = '$';
        return 0;
    }
}

void array0()
{
    for (int i = 0; i < 10; i++)
    {
        numstorage[i] = 0;
    }
}

void arrayspecial()
{
    for (int i = 0; i < 10; i++)
    {
        cal[i] = '&';
    }
}

void array1(int n)
{
    for (int i = 0; i < n; i++)
    {
        numstorage[i] = numstorage[i] * 10;
    }
}

int sumarray()
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum = sum + numstorage[i];
    }
    return sum;
}