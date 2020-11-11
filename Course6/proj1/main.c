#include <stdio.h>

int main()
{
    struct Context
    {
        char inputchar;
    };
    struct Context input[10000];
    struct Number
    {
        char numbers[10];
        char yunsuanfuhao;
    };
    int i = 0;
    while (1)
    {
        char inputchar;
        scanf("%c", &inputchar);
        if (inputchar == '=')
        {
            break;
        }
        else
        {
            input[i].inputchar = inputchar;
        }
        i++;
    }
    struct Number numbers[i];
    int sum = 0;
    for (int d = 0; d <= i; d++)
    {
        for (int k = 0;; k++)
        {
            if (input[d].inputchar = '+')
            {
                numbers[k].yunsuanfuhao = input[d].inputchar;
                continue;
            }
            else if (input[d].inputchar = '-')

            {
                numbers[k].yunsuanfuhao = input[d].inputchar;
                continue;
            }
            else if (input[d].inputchar = '*')
            {
                numbers[k].yunsuanfuhao = input[d].inputchar;
                continue;
            }
            else if (input[d].inputchar = '/')
            {
                numbers[k].yunsuanfuhao = input[d].inputchar;
                continue;
            }
            else if (input[d].inputchar = '1')
            {
                /* code */
            }
            else if (input[d].inputchar = '2')
            {
                /* code */
            }
            else if (input[d].inputchar = '3')
            {
                /* code */
            }
            else if (input[d].inputchar = '4')
            {
                /* code */
            }
            else if (input[d].inputchar = '5')
            {
                /* code */
            }
            else if (input[d].inputchar = '6')
            {
                /* code */
            }
            else if (input[d].inputchar = '7')
            {
                /* code */
            }
            else if (input[d].inputchar = '8')
            {
                /* code */
            }
            else if (input[d].inputchar = '9')
            {
                /* code */
            }
            else if (input[d].inputchar = '0')
            {
                /* code */
            }
            else
            {
                printf("ERROR");
                return 0;
            }
        }
    }
    return 0;
}