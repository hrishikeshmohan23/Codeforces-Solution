#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b,c,d,p,q;
		cin>>n>>a>>b>>c>>d;
		p=(a-b)*n;
		q=n*(a+b);
		if(q<(c-d) || (c+d)<p)
		cout<<"No\n";
		else
		cout<<"Yes\n";
	}
}
