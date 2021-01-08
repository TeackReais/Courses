//accepted
#include <iostream>
#include <stdio.h>

int main()
{
    int choice;
    while (scanf("%d", &choice) != EOF)
    {
        if (choice == 10)
        {
            break;
        }
        else if (choice == 1)
        {
            double num;
            scanf("%lf", &num);
            double res = 1609.334 * num;
            printf("%.6lf\n", res);
        }
        else if (choice == 2)
        {
            double num;
            scanf("%lf", &num);
            double res = 30.48 * num;
            printf("%.6lf\n", res);
        }
        else if (choice == 3)
        {
            double num;
            scanf("%lf", &num);
            double res = 2.54 * num;
            printf("%.6lf\n", res);
        }
        else if (choice == 4)
        {
            double num;
            scanf("%lf", &num);
            double res = num / 1609.334;
            printf("%.6lf\n", res);
        }
        else if (choice == 5)
        {
            double num;
            scanf("%lf", &num);
            double res = num / 30.48;
            printf("%.6lf\n", res);
        }
        else if (choice == 6)
        {
            double num;
            scanf("%lf", &num);
            double res = num / 2.54;
            printf("%.6lf\n", res);
        }
        else if (choice == 7)
        {
            double num;
            scanf("%lf", &num);
            double res = 1.852 * num;
            printf("%.6lf\n", res);
        }
        else if (choice == 8)
        {
            double num;
            scanf("%lf", &num);
            double res = num / 1.852;
            printf("%.6lf\n", res);
        }
        else if (choice == 9)
        {
            double num;
            scanf("%lf", &num);
            double res = 9460730472581 * num;
            printf("%.6lf\n", res);
        }
        else
        {
            printf("Input your choice again\n");
        }
    }
    return 0;
}
