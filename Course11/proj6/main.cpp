#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int cmpfunc(const void *a, const void *b);

struct Employee
{
    int id;
    int height;
    int age;
    char name[20];
};

int main()
{
    int input;
    scanf("%d", &input);
    struct Employee Employees[input];
    for (int i = 0; i < input; i++)
    {
        scanf("%d %d %d %s", &Employees[i].id, &Employees[i].age, &Employees[i].height, Employees[i].name);
    }
    qsort(Employees, input, sizeof(Employee), cmpfunc);
    for (int i = 0; i < input; i++)
    {
        printf("%d %d %d %s\n", Employees[i].id, Employees[i].age, Employees[i].height, Employees[i].name);
    }
}
int cmpfunc(const void *a, const void *b) //小于0则a在前
{
    struct Employee compareA = (*(Employee *)a);
    struct Employee compareB = (*(Employee *)b);
    if (compareA.id != compareB.id)
    {
        return compareA.id - compareB.id;
    }
    if (compareA.age != compareB.age)
    {
        return compareA.age - compareB.age;
    }
    return compareA.height - compareB.height;
}