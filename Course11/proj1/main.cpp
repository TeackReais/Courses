#include <stdio.h>
#include <iostream>
using namespace std;

struct student
{
    int ID;
    char Name[20];
    int age;
};

int main()
{
    struct student students[6] = {{2016001, "Zhang", 19}, {2016002, "Li", 20}, {2016003, "wang", 21}, {2016004, "Liu", 22}, {2016005, "Zhao", 22}, {2016006, "Zhang", 22}};
    int ID;
    while (scanf("%d", &ID) != EOF)
    {
        struct student studentNow;
        for (int i = 0; i < 6; i++)
        {
            if (students[i].ID == ID)
            {
                studentNow = students[i];
            }
        }
        printf("%d %s %d\n", studentNow.ID, studentNow.Name, studentNow.age);
    }
    return 0;
}