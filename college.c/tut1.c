// #include <stdio.h>
// int main()
// {
//     int n;

//     printf("::enter the size of matrix::\n");
//     scanf("%d", &n);

//     int a[n][2 * n];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             a[i][j] = (j + 1)+'0';
//             a[i][(2 * n) - 1 - j] = (j + 1)+'0';
//         }
//         for (int k = i+1; k <= (2*n)-2-i; k++)
//         {
//             a[i][k]=' ';
//         }
        
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 2 * n; j++)
//         {
//             printf("%c", a[i][j]);
//         }
//         printf("\n");
//     }
// }


#include<stdio.h>

int main(void)
{
    char a[] = "stringValueX";
    int i;
    for (i= 0; i< 10; i++)
    {
        a[11] = i+ '0';
        puts(a);
    }
    return 0;
}