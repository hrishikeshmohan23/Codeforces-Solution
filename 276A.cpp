#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long x,n,k,f,t,max=INT_MIN;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>f>>t;
		if(t>=k)
		{
			x=f-(t-k);
		}
		else
		x=f;
		if(x>max)
			max=x;
	}
	cout<<max;
}
