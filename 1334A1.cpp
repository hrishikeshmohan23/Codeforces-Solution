#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		int n;
		cin>>n;
		int p[n],q[n],r[n],s[n];
		for(int j=0;j<n;j++)
		{
			cin>>p[j];
			cin>>r[j];
			q[j]=p[j];
			s[j]=r[j];
		}
		sort(q,q+n);
		sort(s,s+n);
		int flag=0;
		for(int j=0;j<n;j++)
		{
			if(j<n-1)
			{
				if(p[j]>p[j+1] || r[j]>r[j+1])
				{
					flag=1;
					break;
				}
			}
			if(p[j]<r[j])
			{
				flag=1;
				break;
			}
		}
		if(flag)
		cout<<"NO\n";
		else
		cout<<"YES\n";
		
	}
	
}
