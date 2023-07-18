#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &a, int n)
{
    int head = 0, tail = 0, count = 0, len = 0;
    for (head = 0; head < n; head++)
    {
        if (a[head] == 0)
            count++;
        while (count > 1)
        {
            if (a[tail] == 0)
                count--;
            tail++;
        }
        len = max(len, head - tail);
    }
    return len;
}
int main()
{
    int n;

    cout << "enter the size of array\n";
    cin >> n;

    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    solve(v, n);
    return 0;
}