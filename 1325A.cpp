#include<bits/stdc++.h>
<boost/math/common_factor.hpp>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		cin>>n;
		long long a=1,b=n-1,x,y,z;
		while(true)
		{
			x=lcm(a,b);
			y=__gcd(a,b);
			z=x+y;
			if(z==n)
			{
				cout<<a<<" "<<y<<endl
				break;
			}
		}
	}
}
