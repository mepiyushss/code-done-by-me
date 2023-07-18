#include <stdio.h>

void ms(int a[100], int l, int r);

void merge(int a[100], int l, int r, int mid);

void display(int a[], int n);

void main()
{
    int a[100], n, i, l, r;
    printf("ENTER THE SIZE OF ARRAY \n ");
    scanf("%d", &n);
    printf("THE ARRAY IS \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("THE ARRAY TO BE SORTED IS\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    l = 0;
    r = n - 1;
    ms(a, l, r);
    display(a, n);
}

void ms(int a[100], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;

        ms(a, l, mid);
        ms(a, mid + 1, r);
        merge(a, l, r, mid);
    }
}

void merge(int a[100], int l, int r, int mid)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int b[n1 + 1];
    int c[n2 + 1];

    for (int i = 0; i < n1; i++)
        b[i] = a[l + i];
    for (int j = 0; j < n2; j++)
        c[j] = a[mid + 1 + j];
    b[n1] = 1000000;
    c[n2] = 1000000;
    int p = 0;
    int q = 0;
    for (int k = l; k <= r; k++)
    {
        if (b[p] <= c[q])
        {
            a[k] = b[p];
            p++;
        }
        else
        {
            a[k] = c[q];
            q++;
        }
    }
}

void display(int a[], int n)
{
    printf("\nARRAY AFETR SORTING IS\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
