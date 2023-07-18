#include <stdio.h>

struct employee
{
    char name[20];
    long int phno;
    int salary;
    char depart[20];
} a[100];

int main()
{
    int n;
    printf("----------ENTER THE DETAILS OF AN EMPLOYEE-------------\n");
    printf("-------------ENTER THE NUMBER OF EMPLOYEE--------------\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("NAME IS:");
        scanf("%s", a[i].name);
        printf("PHONE NUMBER IS:");
        scanf("%ld", &a[i].phno);
        printf("SALARY IS:");
        scanf("%d", &a[i].salary);
        printf("DEPARTMENT IS:");
        scanf("%s", a[i].depart);

    }
    printf("\n");
    printf("\n");
    printf("NOW DISPLAYING THE DATA");
    printf("\n");
    printf("\n");
    for (int i = 0; i < n; i++)
    {

        if (a[i].salary > 40000)
        {
            printf("THIS EMPLOYEE HAS SALARY GREATER THAN 40000 AND ITS NAME IS %s\n AND ITS PHONE NUMBER IS %ld\n", a[i].name, a[i].phno);
        
        
        }

        
    }
}