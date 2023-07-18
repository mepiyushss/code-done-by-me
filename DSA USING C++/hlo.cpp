#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)	
	{
		int n,m;
		cin>>n;
		map<int,int>ma;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			ma[x]=i;
		}
		cin>>m;
		vector<int>u(m);
		for(auto &i:u) cin>>i;

		for(int i=0;i<m;i++)
		{
			while(ma.find(u[i])!=ma.end())
			{
				cout<<u[i]<<' ';
				

			}
			ma.erase(u[i]);
		}
		for(auto i:ma)
			cout<<i.first<<' ';
		cout<<endl;






	}
}