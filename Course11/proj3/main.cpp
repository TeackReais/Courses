#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        char input[100];
        cin.getline(input, 100);
        if (strcmp(input, "-1") == 0)
        {
            break;
        }
        int len = strlen(input);
        for (int i = 0; i < len / 2; i++)
        {
            char temp = input[i];
            input[i] = input[len - i - 1];
            input[len - i - 1] = temp;
        }
        printf("%s", input);
    }
    return 0;
}