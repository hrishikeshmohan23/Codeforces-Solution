#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,ma;
	cin>>n;
	map <int,int> m;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		m[x]+=1;
	}
	for(auto it:m)
	{
		ma=max(max,m.second);
	}
	cout<<max;
}
