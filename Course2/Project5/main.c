#include <stdio.h>

int main()
{
    int number;
    int count = 0;
    float sum = 0.0;
    float average;
    int score;
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        scanf("%d", &score);
        sum = sum + score;
        if (score >= 60)
        {
            count++;
        }
    }
    average = sum / number;
    printf("average = %.1f\n", average);
    printf("count = %d\n", count);
    return 0;
}
/*
float average(int numbers[], int number);
int count(int numbers[], int number);

int main()
{
    int number;
    scanf("%d", &number);
    int score[number];
    for (int i = 1; i <= number; i++)
    {
        scanf("%d", &score[i - 1]);
    }
    printf("average = %.1f\n", average(&score[number], number));
    printf("count = %d\n", count(&score[number], number));
    return 0;
}

float average(int numbers[], int number)
{
    float result;
    float sum = 0.0;
    for (int i = 0; i < number; i++)
    {
        sum = sum + numbers[i];
    }
    result = sum / number;
    return result;
}

int count(int numbers[], int number)
{
    int result;
    for (int i = 0; i < number; i++)
    {
        if (numbers[i] >= 60)
        {
            result = result + 1;
        }
    }
    return result;
}*/