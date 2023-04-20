#include <stdio.h>

struct employee
{
    char name[10];
    int id;
    int salary;
};

int main()
{
    struct employee e[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter name, id and salary of employee %d: ", i + 1);
        scanf("%s %d %d", e[i].name, &e[i].id, &e[i].salary);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Name, id and salary of employee %d: ", i + 1);
        printf("%s , %d , %d \n", e[i].name, e[i].id, e[i].salary);
    }

    printf("Employees with salary greater than 10000: \n");
    for (int i = 0; i < 3; i++)
    {
        if (e[i].salary >= 10000)
        {
            printf("Name, id and salary of employee %d: ", i + 1);
            printf("%s , %d , %d \n", e[i].name, e[i].id, e[i].salary);
        }
    }

    return 0;
}
