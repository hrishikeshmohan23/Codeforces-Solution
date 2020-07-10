#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k,a[100000],b[100000],n,t,c[100002],count=0,flag=0,x=0;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		x=1;
		c[0]=0;
		c[n+1]=0;
	cin>>n;
	count=0;
	flag=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		c[x]=b[i]-a[i];
		if(c[x]<0)
		{
			flag=1;
			break;
		}
		x++;
	}
	for(int i=0;i<n+2;i++)
	{
		if(c[i]!=c[i+1])
		{
			count++;
		}
		if(count>2)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	}
	return 0;
}
