#include <stdio.h>

void main()
{
    int a[10], i, j, n, flag;
    printf("enter the size of array\n");
    scanf("%d", &n);
    printf("enter the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("THE ARRAY IS \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        flag = 0;

        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                a[j] = -1;
                flag = flag + 1;
            }
        }
        if (flag > 0)
            a[i] = -1;
    }
    printf("\nTHE UNIQUE ELEMENT IS \n");
    for (i = 0; i < n; i++)
    {
        if (a[i] > -1)
            printf("%d\t", a[i]);
    }
}