#include <stdio.h>

int main()
{
    int n,m,c=0;
    printf("ENTER THE NUMBER TO BE SEARCHED USING BINARY SEARCH \n");
    scanf("%d", &n);

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int l = 0;
    int u = sizeof(a)-1;

    while (l <= u)
    {
        m = (l + u) / 2;

        if (a[m] > n)
        {

            u = m - 1;
        }

        else if (a[m] < n)
        {
            l = m + 1;
        }
        else
        {
            c++;
            break;
        }
    }
    if (c==1)
    {
        printf("SEARCH SUCCESSFUL \n");
        printf("AT INDEX %d \n",m);
    }
    else
    printf("SEARCH FAILED \n");
    
    printf("<-----------PROGRAM ENDS HERE---------->");
}