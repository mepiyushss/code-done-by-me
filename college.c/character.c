#include <stdio.h>

int main()
{
    char a[2][2];
    printf("ENTER THE ELEMENT OF ARRAY \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%c", &a[i][j]);
            getchar();
        }
    }

    a[1][1] = '*';
    a[1][0] = ' ';
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%c", a[i][j]);
        }
        printf("\n");
    }
}