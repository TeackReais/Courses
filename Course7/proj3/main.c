#include <stdio.h>

int check(int array[], int N, int check);
int main()
{
    int input1;
    int input2;
    scanf("%d", &input1);
    int array1[input1];
    for (int i = 0; i < input1; i++)
    {
        scanf("%d", &array1[i]);
    }
    scanf("%d", &input2);
    int array2[input2];
    for (int i = 0; i < input2; i++)
    {
        scanf("%d", &array2[i]);
    }
    int result[input1 + input2];
    for (int i = 0; i < input1 + input2; i++)
    {
        result[i] = -1000000;
    }
    int number = 0;
    for (int i = 0; i < input1; i++)
    {
        if (check(array2, input2, array1[i]) == 1)
        {
            if (check(result, input1 + input2, array1[i]) == 1)
            {
                if (number != 0)
                {
                    printf(" ");
                }
                printf("%d", array1[i]);
                result[number] = array1[i];
                number++;
            }
            else
            {
                continue;
            }
        }
    }
    for (int i = 0; i < input2; i++)
    {
        if (check(array1, input1, array2[i]) == 1)
        {
            if (check(result, input1 + input2, array2[i]) == 1)
            {
                if (number != 0)
                {
                    printf(" ");
                }
                printf("%d", array2[i]);
                result[number] = array2[i];
                number++;
            }
            else
            {
                continue;
            }
        }
    }
    return 0;
}

int check(int array[], int N, int check)
{
    for (int i = 0; i < N; i++)
    {
        if (array[i] == check)
        {
            return 0;
        }
    }
    return 1;
}