#include <iostream>
#include <stdio.h>

struct floor
{
    int people;
    bool used;
};
int main()
{
    int users;
    while (scanf("%d", &users) != EOF)
    {
        if (users == 0)
        {
            printf("0\n");
            continue;
        }
        struct floor AllFloors[101];
        for (int i = 0; i < 101; i++)
        {
            AllFloors[i].used = false;
            AllFloors[i].people = 0;
        }
        for (int i = 0; i < users; i++)
        {
            int input;
            scanf("%d", &input);
            AllFloors[input].used = true;
            AllFloors[input].people++;
        }
        int heightestfloor = -1;
        for (int i = 0; i < 101; i++)
        {
            if (AllFloors[i].used && i > heightestfloor)
            {
                heightestfloor = i;
            }
        }
        int sumtime = 0;
        AllFloors[1].used = false;
        for (int i = 0; i < 101; i++)
        {
            if (AllFloors[i].used)
            {
                sumtime = sumtime + 5 + AllFloors[i].people;
            }
        }
        sumtime = sumtime + 9 * (heightestfloor - 1) + 5;
        if (sumtime == 5)
        {
            printf("0\n");
            continue;
        }
        printf("%d\n", sumtime);
    }
    return 0;
}