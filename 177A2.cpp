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
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==j)
					sum+=a[i][j];
				if(i+j==(n-1))
					sum+=a[i][j];
				if(i==((n-1)/2))
					sum+=a[i][j];
				if(j==((n-1)/2))
					sum+=a[i][j];
			}
		}
		sum-=(3*a[((n-1)/2)][((n-1)/2)]);
		
		cout<<sum;
		}
}
