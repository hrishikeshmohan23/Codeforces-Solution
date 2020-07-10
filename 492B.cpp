#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long m=0,n,l,ans=0;
	cin>>n>>l;
	long long a[n+2];
	a[0]=0;
	a[n+1]=l;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	sort(a,a+n+2);
	for(int i=1;i<=n+1;i++)
	{
		ans=a[i]-a[i-1];
		m=max(m,ans);
	}
	float b=m;
	b/=2;
	cout<<b;
}
