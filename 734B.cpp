#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long m1,m2,a,b,c,d,sum=0;
	cin>>a>>b>>c>>d;
	m1=min(a,b);
	m2=min(c,d);
	m1=min(m1,m2);
	if(m1==a)
	sum+=a*256;
	else if(m1==b)
	{
		m1=min(a,c);
		m2=min(c,d);
		m1=min(m1,m2);
		sum+=(m1*256);
		a-=m1;
		m1=min(a,b);
		sum+=(m1*32);
	}
	else
	{
		sum+=(m1*256);
		a-=m1;
		m1=min(a,b);
		sum+=(m1*32);
	}
	cout<<sum;
}
