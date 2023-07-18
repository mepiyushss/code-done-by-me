#include <stdio.h>
int main()
{
    int n, p, i, temp;
    printf("ENTER AT WHICH POSITION NUMBER SHOULD BE PLACED AND WHAT IS THE NUMBER\n");
    scanf("%d", &p);
    printf("ENTER AT WHICH POSITION NUMBER SHOULD BE PLACED AND WHAT IS THE NUMBER\n");
    scanf("%d", &n);
    int a[] = {5, 23, 6, 9, 65, 6, 99, 9, 4649, 79, 79};
    int size = sizeof(a);

    a[size / 4] = a[p];
    a[p] = n;

    for (i = p + 1; i <= (size / 4)-1; i++)
    {
        temp = a[i];
        a[i] = a[size / 4];
        a[size / 4] = temp;
    }
    for (i = 0; i <= size / 4; i++)
        printf("%d\n", a[i]);
}