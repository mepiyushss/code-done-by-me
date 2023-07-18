#include <stdio.h>

int main()
{
    int a[2][2], b[2][2];
    static int c[2][2];
    int a1=0;
    printf("enter the matrix");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d%d", &a[i][j], &b[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }
    // printf("MULTIPLICATION OF BOTH MATRIX");
    for (int i = 0; i < 2; i++)
    {
        printf("|\t");
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("|");



        printf("|\t");
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("|");



        printf("\t=\t");
       
       
        printf("|\t");
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("|\n");
    }

}
