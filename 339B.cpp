#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long x1,i,n,m,x,count=0;
	cin>>n>>m;
	int a[m];
	i=m;
	for(int j=0;j<m;j++)
	{
		cin>>a[j];
	}
	int j=0;
	x=1;
	while(i>0)
	{
		x1=a[j];
		if(x1<x)
		{
			count+=n-x+x1;
		}
		else if(x1>x)
			count+=x1-x;	
	i--;
	j++;
	x=x1;
	}
	cout<<count;
}

