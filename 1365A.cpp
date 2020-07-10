#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int f=1,n,m,x=1;
		cin>>n>>m;
		int a[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(a[i][j]==0)
				{
					x=0;
				}
				if(a[i][j]==1)
				{
					x=1;
					break;
				}
			}
			if(x==0)
			{
				f*=-1;
			}
		}
		if(f==1)
		{
			cout<<"Vivek"<<endl;
			
		}
		else
		cout<<"Ashish"<<endl;
		
	}
}
