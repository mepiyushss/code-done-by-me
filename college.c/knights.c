#include <stdio.h>

int main()
{
    int n;
    printf("\n\n\n --------------------PROGRAM STARTS HERE-----------------\n\n\n");
    printf("\n\nENTER THE NUMBER OF KNIGHTS::\t");
    scanf("%d", &n);
    int a[n];

    printf("\nENTER THE COSTS OF %d KIGHTS INCLUDING KING ONE BY ONE::\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int b[n][2];
    for (int i = 0; i < n; i++)
    {

        b[i][0] = a[i];
        b[i][1] = a[(n / 2) - i];
    }
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            printf("%d", b[i][j]);
        }
        printf("\n");
    }
}