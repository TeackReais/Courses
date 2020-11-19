#include <stdio.h>

int main()
{
    int input1;
    scanf("%d", &input1);
    int array[input1];
    for (int i = 0; i < input1; i++)
    {
        scanf("%d", &array[i]);
    }
    int max = array[0];
    int index = 0;
    for (int i = 0; i < input1; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            index = i;
        }
    }
    printf("%d %d", max, index);
    return 0;
}