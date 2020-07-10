#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c=0,p=0,ans=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==-1)
		{
			if(c>0)
			c-=1;
			else
			ans++;
		}
		else
		c+=a[i];
		
	}
	cout<<ans;
}
