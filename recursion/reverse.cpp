#include<bits/stdc++.h>
using namespace std;

int sod(int n,int sum)
{
    if(n==0)
    return sum;

    return sod(n/10,sum*10+(n%10));
}
int main()
{
    int n;
    cout<<"ENTER THE NUMBER FOR WHICH SUM OF DIGIT IS REQUIRED\n";
    cin>>n;

    cout<<sod(n,0);

    return 0;
}