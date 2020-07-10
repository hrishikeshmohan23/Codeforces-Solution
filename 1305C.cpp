#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long x,n,m,prod=1;
	cin>>n>>m;
	long long a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int low=0,high=n-1;
	if(n>m)
	cout<<0;
	else
	{
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			prod*=abs(a[i]-a[j]);
			prod%=m;
		}
	}
	cout<<prod;
}
}
