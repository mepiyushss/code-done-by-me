// sumation of first n natural number
#include<bits/stdc++.h>
using namespace std;

// parameterized recursion
int sod(int n,int sum)
{
    if(n==0)
    return sum;

    return sod(n-1,sum+n);
}

// functional recursion
// int sod(int n)
// {
//     if(n==0)
//     return 0;

//     return n+sod(n-1);
// }
int main()
{
    int n;
    cout<<"ENTER THE NUMBER n \n";
    cin>>n;

    cout<<sod(n,0);
    // cout<<sod(n);

    return 0;
}