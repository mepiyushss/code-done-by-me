#include <stdio.h>

int main()
{
    int n;
    printf("ENTER THE SIZE OF SQUARE MATRIX::");
    scanf("%d", &n);
    char a[n][n];
    int m = n;

    if (n % 2 == 0) // CHECK IF NUMBER IS ODD OR NOT... IF NUMBER IS NOT ODD THEN PATTERN GETS TWISTED...OR IT MAY BE WRONG
    {
        printf("NUMBER MUST BE ODD");
    }

    else
    {
        // LOGIC JUST CREATED IN TWO LOOPS
        for (int i = 0; i <= (n / 2); i++)
        {
            int k = (n / 2) - i;
            int l = (n / 2) + i;
            m = m - 1;
            for (int j = 0; j < n; j++)
            {
                if (j == k || j == l)
                {
                    a[i][j] = '*';
                    if (m > n / 2)
                    {

                        a[m][j] = '*';
                    }
                }
                else
                {
                    a[i][j] = '-';
                    a[m][j] = '-';
                }
            }
        }

        // NOW DISPLYING THE ARRAY AS USUAL IT IS DONE
        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < n; j++)
            {
                printf("%c", a[i][j]);
            }
            printf("\n");
        }
    }
}
