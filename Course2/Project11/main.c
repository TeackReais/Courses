#include <stdio.h>

int main()
{
    printf("[1] apple\n");
    printf("[2] pear\n");
    printf("[3] orange\n");
    printf("[4] grape\n");
    printf("[0] exit\n");
    float price[4] = {3.00, 2.50, 4.10, 10.20};
    int number;
    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &number);
        if (number < 0 || number > 5)
        {
            printf("price = 0.00\n");
        }
        else if (number == 0)
        {
            return 0;
        }
        else
        {
            printf("price = %.2f\n", price[number - 1]);
        }
    }
    return 0;
}