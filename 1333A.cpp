#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		char a[n][m];
		if((n*m)%2==0)
		{
			for(int i=0;i<n;i++)
			{
				if(i%2==0)
				{
					for(int j=0;j<m;j++)
					{
						if(j%2==0)
						a[i][j]='B';
						else
						a[i][j]='W';
					}
				}
				else
				{
					for(int j=0;j<m;j++)
					{
						if(j%2==0)
						a[i][j]='W';
						else
						a[i][j]='B';
					}
					
				}
			}
			a[n-2][m-1]='B';
			a[n-1][m-1]='B';
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				if(i%2==0)
				{
					for(int j=0;j<m;j++)
					{
						if(j%2==0)
						a[i][j]='B';
						else
						a[i][j]='W';
					}
				}
				else
				{
					for(int j=0;j<m;j++)
					{
						if(j%2==0)
						a[i][j]='W';
						else
						a[i][j]='B';
					}
					
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<a[i][j];
			}
			cout<<endl;
		}
	}
}
