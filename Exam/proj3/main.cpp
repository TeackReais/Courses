//accepted
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char **argv)
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        int n[a];
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &n[i]);
        }
        bool judge = false;
        for (int i = 0; i < a; i++)
        {
            if (n[i] > b)
            {
                judge = true;
            }
        }
        if (judge)
        {
            printf("OMG!\n");
        }
        else
        {
            printf("It's all right!\n");
        }
    }
    return 0;
}