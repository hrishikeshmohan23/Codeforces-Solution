#include<bits/stdc++.h>
using namespace std;
void solve()
{
	long long x,y;
		cin>>x>>y;
		if(x==1)
		cout<<0<<endl;
		else if(x==2)
		cout<<y<<endl;
		else
		cout<<2*y<<endl;
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
