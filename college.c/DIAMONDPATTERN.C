#include <stdio.h>

int main()
{
    int n;
    printf("ENTER THE SIZE OF SQUARE MATRIX::");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("NUMBER MUST BE ODD");
    }
    else
    {
        //----------------LOGIC NUMBER-1-----------------------

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if ((i - j) == n / 2 || (i + j) == (n / 2) + 2 || (j - i) == n / 2 || (i - (n + 1 - j)) == n / 2)
                    printf("*");
                else
                    printf("-");
            }
            printf("\n");
        }
    }
}
