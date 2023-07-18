#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void get(string s, string ans)
    {
        if (s.length() == 0)
        {

            cout << ans << endl;
        }
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            string left_substr = s.substr(0, i);
            string right_substr = s.substr(i + 1);
            string rest = left_substr + right_substr;
            get(rest, ans + ch);
        }
    }

    void getPermutation(int n, int k)
    {
        string s = "";
        string str = "";

        for (int i = 1; i <= n; i++)
        {
            str = str + to_string(i);
        }
        get(str, s);
    }
};
int main()
{
    int n, k;
    cin >> n >> k;
    Solution S;

    S.getPermutation(n, k);
    return 0;
}