//accepted
#include <iostream>
#include <stdio.h>

struct planet
{
    int id;
    int masterid;
};

int main()
{
    int planets, problems;
    while (scanf("%d %d", &planets, &problems) != EOF)
    {
        int problem[problems];
        struct planet planets1[planets];
        for (int i = 0; i < problems; i++)
        {
            scanf("%d", &planets1[i].masterid);
            planets1[i].id = i + 1;
        }
        for (int i = 0; i < problems; i++)
        {
            scanf("%d", &problem[i]);
        }
        for (int i = 0; i < problems; i++)
        {
            int pro = problem[i];
            struct planet planetnow;
            planetnow = planets1[pro - 1];
            while (planetnow.masterid != -1)
            {
                planetnow = planets1[planetnow.masterid - 1];
            }
            printf("%d\n", planetnow.id);
        }
    }
    return 0;
}