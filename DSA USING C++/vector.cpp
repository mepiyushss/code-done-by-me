#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    if (n == 0)
        return;
    else
    {
        pattern(n - 1);
        for (int i = 1; i <= n; i++)
        {
            cout << "*\t";
        }
        cout << endl;
    }
    if (n == 5
    
    )
        return;

    else
    {
        pattern(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cout << "*\t";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern(n);
}