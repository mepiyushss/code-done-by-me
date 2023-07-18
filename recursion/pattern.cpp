#include <bits/stdc++.h>
using namespace std;

// it will print like

/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

void get(int n)
{
    if (n == 0)
        return;

    get(n - 1);
    for (int i = 1; i <= n; i++)
    {
        cout << i << ' ';
    }
    cout << endl;
}

// it will print like
/*1 2 3 4 5
1 2 3 4
1 2 3
1 2
1  */
void get2(int n)
{
    if (n == 0)
        return;

    for (int i = 1; i <= n; i++)
    {
        cout << i << ' ';
    }
    cout << endl;
    get2(n - 1);
}
int main()
{
    int n;
    cout << "enter number of lines to be printed" << endl;
    cin >> n;

    get(n);
    get2(n);
    return 0;
}
