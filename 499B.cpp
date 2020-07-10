#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	map<string,string> m;
	string s,a,b;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		m[a]=b;
	}
	for(int i=0;I<m;i++)
	{
		cin>>s;
		if(m[s].size()<s)
		cout<<m[s]<<" ";
		else
		cout<<s<<" ";
	}
}
