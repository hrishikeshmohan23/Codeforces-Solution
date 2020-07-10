#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long x,n,sum1=0,sum2=0;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		
		if(i<=((n/2)-1))
			sum1+=a[i];
		else
			sum2+=a[i];
	}
	x=((sum2)*(sum2))+((sum1)*(sum1));
	cout<<x;
}
