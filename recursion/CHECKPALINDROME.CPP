// CHECK WHETHER THE STRING IS PALINDROMEOR NOT

#include <bits/stdc++.h>
using namespace std;
string a;

bool reverse(int i, string a)
{
    if (i >= (a.length()) / 2)
        return true;
    if (a[i] != a[(a.length()) - i - 1])

        return false;
    return reverse(i + 1, a);
}

int main()
{

    cout << "ENTER THE string\n";
    cin >> a;

    if (reverse(0, a))
        cout << "yes\n";
    else
        cout << "no\n";

    return 0;
}