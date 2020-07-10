#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,n,m;
		cin>>a>>b>>n>>m;
		int x,y;
		x=max(max(n,a-1-n)*b,a*max(m,b-1-m));
		cout<<x<<endl;
	}
}
	

