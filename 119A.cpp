#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,count=1;
	cin>>a>>b>>n;
	while(n)
	{
		if(count%2)
		{
			n-=__gcd(a,n);
			count++;
		}
		else
		{
			n-=__gcd(b,n);
			count++;
		}
	}
	cout<<((count%2));
}
