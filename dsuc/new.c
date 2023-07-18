

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int n, k;
void Sort(int array[], int size);
void calculate_the_maximum(int n, int k);
void calculate_the_maximum(int n, int k)
{
    int max, o, p, q;
    int ar[10000], br[10000], cr[10000], f = 0;
    if (n > k)
        max = n;
    else
        max = k;

    for (int i = 1; i < max; i++)
    {
        for (int j = i + 1; j <= max; j++)
        {
            ar[f] = i & j;
            br[f] = i | j;
            cr[f] = (i & (~j)) | ((~i) & j);
            f = f + 1;
        }
    }

    Sort(ar, f);
    for (int i = 0; i < f; i++)

    {
        if (ar[i] < k)
        {
            q = ar[i];
            break;
        }
    }
    if (q > k)
        printf("0\n");
    else
        printf("%d\n", q);

    Sort(br, f);
    for (int i = 0; i < f; i++)

    {
        if (br[i] < k)
        {
            o = br[i];
            break;
        }
    }
    if (o > k)
        printf("0\n");
    else
        printf("%d\n", o);

    Sort(cr, f);
    for (int i = 0; i < f; i++)

    {
        if (cr[i] < k)
        {
            p = cr[i];
            break;
        }
    }
    if (p > k)
        printf("0\n");
    else
        printf("%d\n", p);
}

void Sort(int array[], int n)
{
    int c, d, swap, o;
    for (c = 0; c < n - 1; c++)
    {
        for (d = 0; d < n - c - 1; d++)
        {
            if (array[d] <= array[d + 1])
            {
                swap = array[d];
                array[d] = array[d + 1];
                array[d + 1] = swap;
            }
        }
    }
}

int main()
{

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
