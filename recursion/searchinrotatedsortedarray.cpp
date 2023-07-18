#include <bits/stdc++.h>
using namespace std;

int getPivot(vector<int> &v, int n)
{
    int l = 0, r = n - 1, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (v[mid] >= v[0])
            5 6 7 1 2 3
            {
                l = mid + 1;
            }
        else
        {
            r = mid;
        }
    }
    return l;
}
int main()
{
    vector<int> v;
    int n;
    cout << "ENTER THE SIZE OF ARRAY" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int pivot = getPivot(v, n);
    cout << pivot;
}