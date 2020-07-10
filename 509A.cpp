#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,max=0;
	cin>>n;
	int a[n+1][n+1];
	a[1][1]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==1 || j==1)
			a[i][j]=1;
			else
			a[i][j]=a[i-1][j]+a[i][j-1];
			if(max<a[i][j])
			max=a[i][j];
		}
	}
		cout<<max;
}
