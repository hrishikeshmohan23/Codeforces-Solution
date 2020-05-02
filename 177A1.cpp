#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	int a[n][n];
	if(n==1)
	{
		cin>>a[0][0];
		cout<<a[0][0];
	}
	else if(n==3)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
				sum+=a[i][j];
			}
		}
		cout<<sum;
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		for(int i=1;i<n-1;i++)
		{
			for(int j=1;j<n-1;j++)
			{
				sum+=a[i][j];
			}
		}
		sum+=a[0][0]+a[0][2]+a[0][4]+a[2][0]+a[2][4]+a[4][0]+a[4][2]+a[4][4];
		cout<<sum;
		}
}
