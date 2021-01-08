//accepted
#include <stdio.h>
#include <iostream>

bool func(struct battle battle1);
struct battle
{
    int Aattack;
    int ABlood;
    int Battack;
    int BBlood;
};

int main()
{
    int num;
    while (scanf("%d", &num) != EOF)
    {
        struct battle battles[num];
        for (int i = 0; i < num; i++)
        {
            scanf("%d %d %d %d", &battles[i].Aattack, &battles[i].ABlood, &battles[i].Battack, &battles[i].BBlood);
        }
        for (int i = 0; i < num; i++)
        {
            bool judge = func(battles[i]);
            if (judge)
            {
                printf("Muv-Luv\n");
            }
            else
            {
                printf("Be-Eaten\n");
            }
        }
    }
    return 0;
}

bool func(struct battle battle1)
{
    while (true)
    {
        battle1.BBlood = battle1.BBlood - battle1.Aattack;
        if (battle1.BBlood <= 0)
        {
            return true;
        }
        battle1.ABlood = battle1.ABlood - battle1.Battack;
        if (battle1.ABlood <= 0)
        {
            return false;
        }
    }
    return true;
}