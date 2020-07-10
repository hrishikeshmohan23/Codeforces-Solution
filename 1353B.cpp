#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,sum=0;
		cin>>n>>k;
		int a[n];
		int b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		reverse(a,a+n);
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		sort(b,b+n);
		for(int i=n-k;i<n;i++)
		{
			if(a[i]<b[i])
			a[i]=b[i];
		}
		for(int i=0;i<n;i++)
		sum+=a[i];
		cout<<sum<<endl;
		
		
	}
}
