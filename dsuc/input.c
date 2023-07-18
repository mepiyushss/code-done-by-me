#include<stdio.h>


    void main()
{
    int a[100], n, i;
    printf("ENTER THE SIZE OF ARRAY \n ");
    scanf("%d", &n);
    printf("THE ARRAY IS \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("THE ARRAY TO BE SORTED IS\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}