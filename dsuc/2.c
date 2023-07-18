#include <stdio.h>

void multi(int a[10][10], int b[10][10], int r, int c, int m, int n);

void main()
{
    int r, c, m, n, a[10][10], b[10][10], i, j;
    printf("ENTER THE ROWS AND COLUMNS OF MATRIX FIRST\n");
    scanf("%d \t %d", &r, &c);
    a[r][c];
    printf("ENTER THE ROWS AND COLUMNS OF MATRIX SECOND\n");
    scanf("%d \t %d", &m, &n);
    b[m][n];
    if (c == m)
    {

        printf("ENTER THE ELEMENT OF MATRIX FIRST\n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("ENTER THE ELEMENT OF MATRIX SECOND\n");

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("MATRIX A IS\n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
        printf("MATRIX B IS\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d\t", b[i][j]);
            }
            printf("\n");
        }
        multi(a, b, r, c, m, n);
    }
    else
    {
        printf("--------------------\tMULTIPLICATION NOT POSSIBLE\t----------------------");
    }
}
void multi(int a[10][10], int b[10][10], int r, int c, int m, int n)
{
    int i, j, k, d[r][n], l[r][n];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < n; j++)
        {
            d[i][j] = 0;
            for (k = 0; k < c; k++)
            {
                d[i][j] = d[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < n; j++)
        {

            l[i][j] = (a[i][j] + b[i][j]);
        }
    }
    printf("MULTIPLICATION OF FIRST AND SECOND MATRIX IS\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", d[i][j]);
        }
        printf("\n");
    }
    printf("ADDITION OF FIRST AND SECOND MATRIX IS\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", l[i][j]);
        }
        printf("\n");
    }
}