#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int q;
		int x=0;
		cin>>q;
		int a[q],b[q];
		int c[q],d[q];
		for(int i=0;i<q;i++)
		{
			cin>>a[i];
			cin>>b[i];
			c[i]=a[i];
			d[i]=b[i];
		}
		sort(c,c+q);
		sort(d,d+q);
		for(int i=0;i<q;i++)
		{
			if(a[i]!=c[i] || b[i]!=d[i] || a[i]<b[i])
			{
				x=1;
				break;
			}
		}
		if(x==1)
		cout<<"NO\n";
		else
		cout<<"YES\n";
		
	}
	
}
