#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long x=0,i=1,n,count=1;
		
		cin>>n;
		int a[n];
		i=(n/2)+1;
		for(int i=0;i<n;i++)
		{
			a[i]=0;
		}
		if(n%2)
		x=(n/2)+1;
		else
		x=(n/2)-1;
		while(count<=n)
		{
			cout<<count<<endl;
			a[i]=i;
			if(i+x>=n)
			{
				i=(i+x)%n;
				if(a[i]==0)
				{
					a[i]=count;
					count++;
					i+=x;
				}
				else
				i+=x;
			}
			else
			{
				if(a[i]==0)
				{
					a[i]=count;
					count++;
					i+=x;
				}
				else if(i+x>=n)
				i=(i+x)%n;
				else
				i+=x;
				
			}
		}
		for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
		cout<<endl;
	}
}
