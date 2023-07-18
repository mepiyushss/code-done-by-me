// reverse an entire araryusing two pointer
// #include <bits/stdc++.h>
// using namespace std;
// int a[1000];

// int reverse(int l, int r, int a[])
// {
//     if (l >= r)
//         return 0;
//     swap(a[l], a[r]);
//     return reverse(l + 1, r - 1, a);
// }
// void print(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//         cout << a[i] << ' ';
// }
// int main()
// {
//     int n;
//     cout << "ENTER THE size of array\n";
//     cin >> n;
//     a[n];
//     cout << "ENTER THE ARRAY\n";
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     reverse(0, n - 1, a);
//     print(a, n);
//     return 0;
// }

// reverse an entire array using single pointer

#include <bits/stdc++.h>
using namespace std;
int a[1000];

int reverse(int i, int n, int a[])
{
    if (i >= n / 2)
        return 0;
    swap(a[i], a[n - i - 1]);
    return reverse(i + 1, n, a);
}
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
}
int main()
{
    int n;
    cout << "ENTER THE size of array\n";
    cin >> n;
    a[n];
    cout << "ENTER THE ARRAY\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    reverse(0, n, a);
    print(a, n);
    return 0;
}