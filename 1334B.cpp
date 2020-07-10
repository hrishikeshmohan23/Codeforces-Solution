#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long n,e,s=0;
		cin>>n>>e;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			s+=a[i];
		}
		sort(a,a+n);
		if(a[n-1]<e)
		cout<<0<<endl;
		else if(a[n-1]==e)
		cout<<1<<endl;
		else
		{
			s/=e;
			cout<<s<<endl;
		}
		
	}
}
