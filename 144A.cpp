#include<bits/stdc++.h>
using namespace std;
void swap()
{
	
}
int main()
{
	int a[101],n,count=0,temp=0,min,max,j,k;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	min=a[0];
	max=a[0];
	j=0;
	k=0;
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			j=i;
		}
		if(min>=a[i])
		{
			min=a[i];
			k=i;
		}
	}
	if(j>k)
		j=j+n-k-2;
	else
		j=j+n-k-1;
	cout<<j;
	}
