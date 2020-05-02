#include<bits/stdc++.h>
using  namespace std;
int main()
{
	int n,S,counte=0,counto=0;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
			counte++;
		else
			counto++;
	}
	if(counte>counto)
	{
		for(int i=1;i<=n;i++)
		{
			if(a[i]%2!=0)
			{
				cout<<i;
				break;
			}
		}
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			if(a[i]%2==0)
			{
				cout<<i;
				break;
			}
		}
	}
}
