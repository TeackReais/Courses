#include <stdio.h>

int scorejudge(int score);
int main()
{
    int score;
    scanf("%d", &score);
    switch (scorejudge(score))
    {
    case 0:
    {
        printf("A");
        break;
    }
    case 1:
    {
        printf("B");
        break;
    }
    case 2:
    {
        printf("C");
        break;
    }
    case 3:
    {
        printf("D");
        break;
    }
    case 4:
    {
        printf("E");
        break;
    }
    }
    return 0;
}

int scorejudge(int score)
{
    if (score >= 90)
    {
        return 0;
    }
    else if (score >= 80)
    {
        return 1;
    }
    else if (score >= 70)
    {
        return 2;
    }
    else if (score >= 60)
    {
        return 3;
    }
    else
    {
        return 4;
    }
}