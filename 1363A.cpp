#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,u=1;
	cin>>t;
	while(t--)
	{
		int sum=0,n,x,counte=0,counto=0;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]%2==0)
			counte++;
			if(i<x)
			{
				sum+=a[i];
				if(a[i]%2)
				counto++;
			}
		}
		if(counte==n)
		{
			cout<<"No"<<endl;
			continue;
		}
		if(sum%2)
		cout<<"Yes"<<endl;
		else
		{
			
			int f=0;
			for(int i=x;i<n;i++)
			{
				if(a[i]%2)
				{
					if(counto%2==0)
					{
						continue;
					}
					else{
					f=1;
					break;
				}
				}
				else
				{
					if(counto%2==0)
					{
						f=1;
						break;
					}
				}
				
				
			}
			if(f)cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
	}
}
