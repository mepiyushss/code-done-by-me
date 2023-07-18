#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t1,n;
	string s,t;
	int i,j;
	cin>>t1;
	while(t1--)
	{
	   cin>>n;
	   getline(cin,s);
	   i=0;
	   j=n-1;
	   while(i<=j)
	   {
	       if(s[i]=='0')
	       t=s[i]+t;
	       else
	       t=t+s[i];
	       i=i+1;
	       
	       if(s[j]=='1')
	       t=s[i]+t;
	       else
	       t=t+s[i];
	       j=j-1;
	   }
	   cout<<t<<endl;
	}
	return 0;
}
