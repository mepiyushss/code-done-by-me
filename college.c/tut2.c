#include <stdio.h>

int main()
{

    //ENTER FIBBONACCI SERIES IN A MATRIX
    int m[15];
    int a = 0, b = 1, c;
    for (int i = 0; i < 15; i++)
    {
        c = a + b;
        m[i] = c;
        a = b;
        b = c;
    }

    //ALL INPUT ARE DONE HERE
    int n, t, k, sum = 0;
    printf("\n\n\n<<----------\t------------::PROGRAM STARTS HERE::-----------\t------------------>> \n\n\n");
    printf("::ENTER THE NUMBER OF TESTCASES:: \t");
    scanf("%d", &t);
    for (int k = 0; k < t; k++)
    {
        printf("\n------TEST CASE NUMBER-%d", k + 1);
        printf("\n::ENTER THE NUMBER OF ITEMS BOUGHT:: \t");
        scanf("%d", &n);
        int a[n];

        //TAKING INPUT PRICES ONE BT ONE
        printf("\n::ENTER THE PRICE OF %d ELEMENTS ONE BY ONE::\n", n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        //CHECKING PRICE EQUAL TO FIBONACCI SERIES OR NOT
        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < 15; j++)
            {
                if (a[i] == m[j])
                {
                    sum = sum + a[i];
                }
            }
        }
        getchar();
        //DISPLAYING FREE SUM
        printf(" \n::TOTAL COST THAT IS GIVEN FOR FREE FOR TEST CASE %d IS :: \t%d\n\n", k + 1, sum);
        sum = 0;
    }
    printf("\n\n\n<------\t--------\t---------PROGRAM ENDS----------\t--------\t------->\n\n\n");
}