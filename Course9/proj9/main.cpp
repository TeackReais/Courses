#include <stdio.h>
#include <iostream>
using namespace std;

struct book
{
    char name[80];
    float price;
};

int main()
{
    int numbers;
    scanf("%d", &numbers);
    struct book books[numbers];
    int max, min;
    max = 0;
    min = 0;
    for (int i = 0; i < numbers; i++)
    {
        getchar();
        cin.getline(books[i].name, 80);
        scanf("%f", &books[i].price);
    }
    for (int i = 0; i < numbers; i++)
    {
        if (books[i].price > books[max].price)
        {
            max = i;
        }
        if (books[i].price < books[min].price)
        {
            min = i;
        }
    }
    printf("%.2f, %s\n", books[max].price, books[max].name);
    printf("%.2f, %s\n", books[min].price, books[min].name);
}