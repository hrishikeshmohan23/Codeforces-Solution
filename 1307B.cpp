#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,x,p;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		p=0;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		p=x/a[n-1];
		cout<<a[n-1]<<endl;
		if(x%a[n-1]!=0)
			p++;
		cout<<p<<endl;
	}
	
}
