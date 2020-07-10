#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,x;
	cin>>t;
	while(t--)
	{
		cin>>x;
		int c[x],d[x];
		for(int i=0;i<x;i++)
		{
			cin>>c[i];
		}
		for(int i=0;i<x;i++)
		{
			cin>>d[i];
		}
		sort(d,d+x);
		sort(c,c+x);
		for(int i=0;i<x;i++)
		{
			cout<<c[i]<<" ";
		}
		cout<<"\n";
		for(int i=0;i<x;i++)
		{
			cout<<d[i]<<" ";
		}
		cout<<"\n";
	}
}
