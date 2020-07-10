#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		long long sum=0,m1,m2,a,b,c,d;
		cin>>a>>b>>c>>d;
		if(d<=2*c)
		{
			if(a==b)
			{
				sum+=(d*a);
			}
			else
			{
				sum+=(c*(max(a,b)-min(a,b)));
				sum+=(d*min(a,b));
			}
		}
		else
		{
			sum+=(max(a,b)*c)+(c*min(a,b))+d;
			sum-(2*c);
		}
		cout<<sum<<endl;
	}
}
