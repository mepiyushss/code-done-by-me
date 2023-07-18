#include <stdio.h>

void ms(int a[100], int l, int r);

void merge(int a[100], int l, int r, int mid);

void display(int a[], int n);

int b[100];

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
    int i = l, j = mid + 1, k = l;
    while (i <= mid && j <= r)
    {
        if (a[i] > a[j])
        {
            b[k] = a[j];
            j++;
            k++;
        }
        else
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }

    while (i <= mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }

    while (j <= r)
    {
        b[k] = a[j];
        k++;
        j++;
    }

    for (int i = l; i <= r; i++)
    {
        a[i] = b[i];
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
