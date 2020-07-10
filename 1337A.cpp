#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b,c,d;
		cin>>a>>b>>c>>d;
		long p1,p2;
		p1=d;
		p2=a;
		if((d-c)!=0 || (c-b)!=0)
		cout<<b<<" "<<c<<" "<<c<<"\n";
		else
		cout<<b<<" "<<c<<" "<<d<<"\n";	
	}
}
