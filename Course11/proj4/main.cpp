#include <iostream>
#include <string.h>
using namespace std;

void move(char str[], int length);
void solve(char str[]);
struct HomeEndKey
{
    int start;
    int end;
    char content[100];
};

int main()
{
    char input[100];
    while (cin.getline(input, 100)) //OJ EOF测试 cin.getline会清空变量原来的值
    {
        if (input[0] == '\0')
        {
            break;
        }
        solve(input);
    }
    return 0;
}

void move(char str[], int length)
{
    int len = strlen(str);
    str[len + length] = '\0';
    for (int i = len - 1; i >= 0; i--)
    {
        str[i + length] = str[i];
    }
}

void solve(char input[])
{
    char mirrorInput[100] = "";
    int len = strlen(input);
    int index = 0;
    int index2 = 0;
    int index3 = 0;
    bool judge = true;
    struct HomeEndKey HomeEndkeys[10];
    for (int i = 0; i < 10; i++)
    {
        for (int d = 0; d < 100; d++)
        {
            HomeEndkeys[i].content[d] = '\0';
        }
        HomeEndkeys[i].start = 0;
        HomeEndkeys[i].end = 0;
    }
    for (int i = 0; i < len; i++)
    {
        if (input[i] == '[')
        {
            HomeEndkeys[index2].start = i;
            judge = false;
            index3 = 0;
            continue;
        }
        if (input[i] == ']')
        {
            if (judge == true)
            {
                continue;
            }
            HomeEndkeys[index2].end = i;
            judge = true;
            index2++;
            continue;
        }
        if (judge == true)
        {
            mirrorInput[index] = input[i];
            index++;
        }
        if (judge == false)
        {
            HomeEndkeys[index2].content[index3] = input[i];
            index3++;
        }
    }
    for (int i = 0; i < index2; i++)
    {
        if (HomeEndkeys[i].end == HomeEndkeys[i].start + 1)
        {
            continue;
        }
        char movestr[100] = "";
        strcpy(movestr, HomeEndkeys[i].content);
        int len = strlen(movestr);
        move(mirrorInput, len);
        for (int j = 0; j < len; j++)
        {
            mirrorInput[j] = movestr[j];
        }
    }
    printf("%s\n", mirrorInput);
}