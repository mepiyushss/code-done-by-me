#include <stdio.h>

struct employee
{
    char name[20];
    long long phno;
    double salary;
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
        getchar();
        printf("\nNAME IS:");
        gets(a[i].name);
        printf("PHONE NUMBER IS:");
        scanf("%lld", &a[i].phno);
        printf("SALARY IS:");
        scanf("%lf", &a[i].salary);
        printf("DEPARTMENT IS:");
        scanf("%s", &a[i].depart);
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("NOW DISPLAYING THE DATA");
    printf("\n");
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("NAME IS:%s\n", a[i].name);
        printf("PHONE NUMBER IS:%lld\n", a[i].phno);
        printf("SALARY IS:%lf\n", a[i].salary);
        printf("DEPARTMENT IS:%s\n", a[i].depart);
        printf("\n");

        if (a[i].salary > 40000)
        {
            printf("salary greater than 40000 and his name is %s\n", a[i].name);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i].salary > 40000)
        {
            printf("salary greater than 40000 and his name is %s\n", a[i].name);
        }
    }
}