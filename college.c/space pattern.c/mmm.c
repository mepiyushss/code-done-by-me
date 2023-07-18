#include <stdio.h>

void Union(int a[10], int b[10], int c[20], int n, int m);

void main()
{
    printf("Enter the size of set A \n");
    int n, m, a[10], b[10], c[20], i;
    scanf("%d", &n);
    a[n];
    printf("Enter the size of set B \n");
    scanf("%d", &m);
    b[m];
    c[n + m];
    printf("Enter the elements of set A \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the elements of set B \n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("The set A is  \n ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nThe set B is  \n ");
    for (i = 0; i < m; i++)
    {
        printf("%d\t", b[i]);
    }
    Union(a, b, c, n, m);
}

void Union(int a[10], int b[10], int c[20], int n, int m)
{
    a[n];
    b[m];
    c[n + m];
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    k = n;
    for (i = 0; i < m; i++)
    {
        c[k] = b[i];
        k = k + 1;
    }
    for (i = 0; i < n + m; i++)
    {
        for (j = i + 1; j < n + m; j++)
        {
            if (c[i] == c[j])
            {
                c[j] = -1;
            }
        }
    }
    printf("\nUnion of Set A and B is \n");
    for (i = 0; i < n + m; i++)
    {
        if (c[i] > -1)
        {
            printf("%d\t", c[i]);
        }
    }
}