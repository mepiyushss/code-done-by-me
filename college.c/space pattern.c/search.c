#include <stdio.h>
void Binary(int a[], int item, int n);
void main()
{
    int n, a[10], item, i;
    printf("enter the size of array \n");
    scanf("%d", &n);
    a[n];
    printf("enter the item\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the item to be searched \n");
    scanf("%d", &item);
    Binary(a, item, n);
}
void Binary(int a[], int item, int n)
{
    int beg = 0, end = n, flag = 0,mid;
    while (beg <= end)
    {
       mid = (beg + end) / 2;
        if (item > a[mid])
            beg = mid + 1;
        else if (item < a[mid])
            end = mid - 1;
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {

        printf("search succesful\n");
        printf("AT POSITION = %d", mid);
    }
    else
        printf("SEARCH UNSUCCESSFUL");
}