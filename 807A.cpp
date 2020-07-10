#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],b[n],c[n],d[n],flag=0,flag1=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		c[i]=a[i];
		d[i]=b[i];
	}
	sort(c,c+n);
	sort(d,d+n);
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<b[i] || a[i]>b[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"rated";
	}
	for(int i=n-1,j=0;i>=0,j<n;i--,j++)
	{
		if((c[j]!=a[i]) || (d[j]!=b[i]))
		{
			flag1=1;
			break;
		}
	}
	if(flag1==1 && flag!=1)
	cout<<"unrated";
	else if(flag!=1)
	cout<<"maybe";
}
