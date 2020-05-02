#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[101],b[101];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==a[j])
				b[i]=j;
		 } 
	}
	for(int i=1;i<=n;i++)
		cout<<b[i]<<" ";
}
