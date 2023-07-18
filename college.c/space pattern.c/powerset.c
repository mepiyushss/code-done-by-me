#include <stdio.h>
#include <conio.h>
#include <math.h>

int binary(int b);
void main()
{
    int a[100], i, n, x;

    printf("ENTER THE NUMBER OF ELEMENTS IN SET \n\n");
    scanf("%d", &n);
    a[n];

    printf("ENTER THE ELEMENTS \n\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("THE ELEMENTS ARE \n A={\t");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("}\n\n");

    int k = pow(2, n);
    printf("THE POWER SET OF A IS \n P(n)={ phi\t");

    for (i = 1; i < k; i++)
    {
        x = binary(i);
        
            
         } 

}

int binary(int b)
{
    int rem, bin = 0, place = 1;

    while (b > 0)
    {
        rem = b % 2;
        bin += rem * place;
        place *= 10;
        b = b / 2;
    }

    return bin;
}