#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of a vector\n";
    cin>>n;
    vector<int>v;
    int a[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x; 
        v.push_back(x);

    }
    cout<<"----------------\n";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"after sorting throug vector\n";
    sort(v.begin(),v.end());
    v.pop_back();
    for(auto i:v)
    cout<<i<<"\t";
    cout<<"after sorting throug array\n";
    sort(a,a+n);
    for(int i=0;i<n;i++)
        
    {
    cout<<a[i]<<"\t";
   
    }
}