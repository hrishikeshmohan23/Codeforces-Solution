#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,l,r,count=0;
	cin>>n>>m;
	int a[m],b[m];
	for(int i=1;i<=m;i++)
		a[i]=i;
	for(int i=0;i<n;i++)
	{
		cin>>l>>r;
		for(int j=l;j<=r;j++)
		{
			a[j]=0;
		}
	}
	int k=0;
	for(int i=1;i<=m;i++)
	{
		if(a[i]!=0)
		{
			count++;
			b[k]=a[i];
			k++;
		}
	}
	cout<<count<<endl;
	for(int i=0;i<k;i++)
	{
		cout<<b[i]<<" ";
	}
}
