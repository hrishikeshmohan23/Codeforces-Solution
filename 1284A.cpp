#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,z;
	string s;
	vector<string> v1;
	vector<string> v2;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		v1.push_back(s);
	}
	for(int i=0;i<m;i++)
	{
		cin>>s;
		v2.push_back(s);
	}
	long long t;
	cin>>t;
	int x=0,y=0;
	while(t--)
	{
		cin>>z;
		x=z%n;
		y=z%m;
		if(x==0)
			cout<<v1[n-1];
		else
			cout<<v1[x-1];
		if(y==0)
			cout<<v2[m-1];
		else
			cout<<v2[y-1];
		cout<<endl;
	}
}
	
