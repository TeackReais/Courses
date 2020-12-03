#include <stdio.h>
#include <iostream>
using namespace std;

struct user
{
    char name[20];
    int birth;
    char phone[20];
};

int main()
{
    int input;
    scanf("%d", &input);
    struct user users[input];
    int index[input];
    for (int i = 0; i < input; i++)
    {
        scanf("%s %d %s", users[i].name, &users[i].birth, users[i].phone);
        index[i] = i;
    }
    while (true)
    {
        int count = 0;
        for (int i = 0; i < input - 1; i++)
        {
            if (users[index[i]].birth > users[index[i + 1]].birth)
            {
                int temp = index[i + 1];
                index[i + 1] = index[i];
                index[i] = temp;
                count++;
            }
        }
        if (count == 0)
        {
            break;
        }
    }
    for (int i = 0; i < input; i++)
    {
        printf("%s %d %s\n", users[index[i]].name, users[index[i]].birth, users[index[i]].phone);
    }
}