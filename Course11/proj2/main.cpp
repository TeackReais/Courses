#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

void queryfunc(int input1, int query, struct INFO INFOS[], int queryINFO[]);
struct INFO
{
    char id[20];
    int set1;
    int set2;
};

int main()
{
    while (true)
    {
        int input1;
        scanf("%d", &input1);
        if (input1 == 0)
        {
            return 0;
        }
        struct INFO INFOS[input1];
        for (int i = 0; i < input1; i++)
        {
            scanf("%s %d %d", INFOS[i].id, &INFOS[i].set1, &INFOS[i].set2);
        }
        int query;
        scanf("%d", &query);
        int queryINFO[query];
        for (int i = 0; i < query; i++)
        {
            scanf("%d", &queryINFO[i]);
        }
        queryfunc(input1, query, INFOS, queryINFO);
        // int index = 0;
        // int query[100];
        // int queryINFO[100][1000];
        // while (true)
        // {
        //     scanf("%d", &query[index]);
        //     if (query[index] == 0)
        //     {
        //         index--;
        //         break;
        //     }
        //     for (int i = 0; i < query[index]; i++)
        //     {
        //         scanf("%d", &queryINFO[index][i]);
        //     }
        //     index++;
        // }
        // for (int i = 0; i <= index; i++)
        // {
        //     queryfunc(input1, query[i], INFOS, queryINFO[i]);
        // }
    }
    return 0;
}

void queryfunc(int input1, int query, struct INFO INFOS[], int queryINFO[])
{
    for (int i = 0; i < query; i++)
    {
        struct INFO INFONOW;
        int judge = 0;
        for (int j = 0; j < input1; j++)
        {
            if (INFOS[j].set1 == queryINFO[i])
            {
                INFONOW = INFOS[j];
                judge = 1;
            }
        }
        if (judge == 0)
        {
            printf("not found\n");
            continue;
        }
        printf("%s %d\n", INFONOW.id, INFONOW.set2);
    }
}