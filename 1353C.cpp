#include<bits/stdc++.h>
using namespace std;
void solve()
{
	long long x,y;
	cin>>x;
    x/=2;
    y=8*(x*(x+1)*(x*2+1)/6);    
    cout<<y<<"\n";
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
