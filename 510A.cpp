#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,flag=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			if(flag==0)
			{
				
				for(int j=1;j<m;j++)
				{
					cout<<".";
					flag=1;
				}
				cout<<"#"<<endl;
			}
			else
			{
				cout<<"#";
				for(int j=1;j<m;j++)
				{
					cout<<".";
					flag=0;
				}
				cout<<endl;
			}
		}
		else
		{
			for(int j=1;j<=m;j++)
			{
				cout<<"#";
			}
			cout<<endl;
		}
	}
}
