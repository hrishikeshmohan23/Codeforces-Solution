#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long max,min,x,t,n,m;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int count=0;
		cin>>n>>m;
		max=n;
		min=m;
		if(m>max)
		{
			max=m;
			min=n;
		}
		x=__gcd(n,m);
			for(long long j=1;j<=max;j++)
			{
				if(__gcd(n,m)==__gcd((n+j),m))
				{
					count++;
				}
		}
		cout<<count<<endl;
	}

}

