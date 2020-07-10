#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		long long l=0,o=0,a[2*n],x;
		for(int j=0;j<(2*n);j++)
		{
			cin>>a[j];
		}
		sort(a,a+(2*n));
		x=abs(a[n]-a[n-1]);
		cout<<x<<endl;
	}
}
