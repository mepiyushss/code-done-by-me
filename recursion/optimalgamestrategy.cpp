#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &v, int i, int j)
{
    vector<int> dp(v.size(), -1);
    if (i > j || j < 0 || i > v.size())
        return 0;
    if (dp[i] != -1)
        return dp[i];
    else
    {
        int left = v[i] + min(solve(v, i + 2, j), solve(v, i + 1, j - 1));
        int right = v[j] + min(solve(v, i + 1, j - 1), solve(v, i, j - 2));
        int res = max(left, right);
        dp[i] = res;
    }
    return dp[i];
}

int main()
{
    vector<int> v = {10, 2, 20, 11};
    cout << solve(v, 0, v.size() - 1) << endl;
    return 0;
}