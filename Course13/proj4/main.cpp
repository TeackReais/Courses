#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int A, B;
    A = 0;
    B = 0;
    int turns;
    while (scanf("%d %d", &A, &B) != EOF)
    {
        scanf("%d", &turns);
        int index = 0;
        int indexA = 0;
        int indexB = 0;
        int Anow = 0;
        int Bnow = 0;
        while (index < turns)
        {
            bool Abool, Bbool, avilable;
            if (index == 0)
            {
                avilable = true;
            }
            index++; //位置重要
            Abool = false;
            Bbool = false;
            int A1, A2, B1, B2;
            scanf("%d %d %d %d", &A1, &A2, &B1, &B2);
            if (avilable)
            {
                if (A1 + B1 == A2)
                {
                    Abool = true;
                }
                if (A1 + B1 == B2)
                {
                    Bbool = true;
                }
                if (Abool && Bbool)
                {
                    continue;
                }
                if (Abool)
                {
                    Anow++;
                    indexA++;
                }
                if (Bbool)
                {
                    Bnow++;
                    indexB++;
                }
                if (Anow > A)
                {
                    printf("A\n");
                    printf("%d\n", indexB);
                    avilable = false;
                }
                if (Bnow > B)
                {
                    printf("B\n");
                    printf("%d\n", indexA);
                    avilable = false;
                }
            }
        }
    }
    return 0;
}